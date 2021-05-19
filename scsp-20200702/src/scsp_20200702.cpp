// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/scsp_20200702.hpp>
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

using namespace Alibabacloud_Scsp20200702;

Alibabacloud_Scsp20200702::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-shanghai", "scsp-vpc.cn-shanghai.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("scsp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Scsp20200702::Client::getEndpoint(shared_ptr<string> productId,
                                                      shared_ptr<string> regionId,
                                                      shared_ptr<string> endpointRule,
                                                      shared_ptr<string> network,
                                                      shared_ptr<string> suffix,
                                                      shared_ptr<map<string, string>> endpointMap,
                                                      shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

GetUserTokenResponse Alibabacloud_Scsp20200702::Client::getUserTokenWithOptions(shared_ptr<GetUserTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserTokenResponse(doRPCRequest(make_shared<string>("GetUserToken"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserTokenResponse Alibabacloud_Scsp20200702::Client::getUserToken(shared_ptr<GetUserTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserTokenWithOptions(request, runtime);
}

SearchTicketListResponse Alibabacloud_Scsp20200702::Client::searchTicketListWithOptions(shared_ptr<SearchTicketListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SearchTicketListResponse(doRPCRequest(make_shared<string>("SearchTicketList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchTicketListResponse Alibabacloud_Scsp20200702::Client::searchTicketList(shared_ptr<SearchTicketListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTicketListWithOptions(request, runtime);
}

SendHotlineHeartBeatResponse Alibabacloud_Scsp20200702::Client::sendHotlineHeartBeatWithOptions(shared_ptr<SendHotlineHeartBeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendHotlineHeartBeatResponse(doRPCRequest(make_shared<string>("SendHotlineHeartBeat"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendHotlineHeartBeatResponse Alibabacloud_Scsp20200702::Client::sendHotlineHeartBeat(shared_ptr<SendHotlineHeartBeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendHotlineHeartBeatWithOptions(request, runtime);
}

TransferCallToSkillGroupResponse Alibabacloud_Scsp20200702::Client::transferCallToSkillGroupWithOptions(shared_ptr<TransferCallToSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferCallToSkillGroupResponse(doRPCRequest(make_shared<string>("TransferCallToSkillGroup"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferCallToSkillGroupResponse Alibabacloud_Scsp20200702::Client::transferCallToSkillGroup(shared_ptr<TransferCallToSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCallToSkillGroupWithOptions(request, runtime);
}

EditEntityRouteResponse Alibabacloud_Scsp20200702::Client::editEntityRouteWithOptions(shared_ptr<EditEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EditEntityRouteResponse(doRPCRequest(make_shared<string>("EditEntityRoute"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EditEntityRouteResponse Alibabacloud_Scsp20200702::Client::editEntityRoute(shared_ptr<EditEntityRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editEntityRouteWithOptions(request, runtime);
}

GetTagListResponse Alibabacloud_Scsp20200702::Client::getTagListWithOptions(shared_ptr<GetTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetTagListResponse(doRPCRequest(make_shared<string>("GetTagList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTagListResponse Alibabacloud_Scsp20200702::Client::getTagList(shared_ptr<GetTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTagListWithOptions(request, runtime);
}

UpdateTicketResponse Alibabacloud_Scsp20200702::Client::updateTicketWithOptions(shared_ptr<UpdateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTicketResponse(doRPCRequest(make_shared<string>("UpdateTicket"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTicketResponse Alibabacloud_Scsp20200702::Client::updateTicket(shared_ptr<UpdateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTicketWithOptions(request, runtime);
}

ListOutboundPhoneNumberResponse Alibabacloud_Scsp20200702::Client::listOutboundPhoneNumberWithOptions(shared_ptr<ListOutboundPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListOutboundPhoneNumberResponse(doRPCRequest(make_shared<string>("ListOutboundPhoneNumber"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOutboundPhoneNumberResponse Alibabacloud_Scsp20200702::Client::listOutboundPhoneNumber(shared_ptr<ListOutboundPhoneNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOutboundPhoneNumberWithOptions(request, runtime);
}

RemoveSkillGroupResponse Alibabacloud_Scsp20200702::Client::removeSkillGroupWithOptions(shared_ptr<RemoveSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSkillGroupResponse(doRPCRequest(make_shared<string>("RemoveSkillGroup"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSkillGroupResponse Alibabacloud_Scsp20200702::Client::removeSkillGroup(shared_ptr<RemoveSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSkillGroupWithOptions(request, runtime);
}

ListAgentBySkillGroupIdResponse Alibabacloud_Scsp20200702::Client::listAgentBySkillGroupIdWithOptions(shared_ptr<ListAgentBySkillGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListAgentBySkillGroupIdResponse(doRPCRequest(make_shared<string>("ListAgentBySkillGroupId"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAgentBySkillGroupIdResponse Alibabacloud_Scsp20200702::Client::listAgentBySkillGroupId(shared_ptr<ListAgentBySkillGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAgentBySkillGroupIdWithOptions(request, runtime);
}

QueryHotlineSessionResponse Alibabacloud_Scsp20200702::Client::queryHotlineSessionWithOptions(shared_ptr<QueryHotlineSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryHotlineSessionResponse(doRPCRequest(make_shared<string>("QueryHotlineSession"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryHotlineSessionResponse Alibabacloud_Scsp20200702::Client::queryHotlineSession(shared_ptr<QueryHotlineSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotlineSessionWithOptions(request, runtime);
}

StartChatWorkResponse Alibabacloud_Scsp20200702::Client::startChatWorkWithOptions(shared_ptr<StartChatWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartChatWorkResponse(doRPCRequest(make_shared<string>("StartChatWork"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartChatWorkResponse Alibabacloud_Scsp20200702::Client::startChatWork(shared_ptr<StartChatWorkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startChatWorkWithOptions(request, runtime);
}

HangupThirdCallResponse Alibabacloud_Scsp20200702::Client::hangupThirdCallWithOptions(shared_ptr<HangupThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HangupThirdCallResponse(doRPCRequest(make_shared<string>("HangupThirdCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HangupThirdCallResponse Alibabacloud_Scsp20200702::Client::hangupThirdCall(shared_ptr<HangupThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupThirdCallWithOptions(request, runtime);
}

StartHotlineServiceResponse Alibabacloud_Scsp20200702::Client::startHotlineServiceWithOptions(shared_ptr<StartHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartHotlineServiceResponse(doRPCRequest(make_shared<string>("StartHotlineService"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartHotlineServiceResponse Alibabacloud_Scsp20200702::Client::startHotlineService(shared_ptr<StartHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startHotlineServiceWithOptions(request, runtime);
}

StartCallV2Response Alibabacloud_Scsp20200702::Client::startCallV2WithOptions(shared_ptr<StartCallV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartCallV2Response(doRPCRequest(make_shared<string>("StartCallV2"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartCallV2Response Alibabacloud_Scsp20200702::Client::startCallV2(shared_ptr<StartCallV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallV2WithOptions(request, runtime);
}

EnableRoleResponse Alibabacloud_Scsp20200702::Client::enableRoleWithOptions(shared_ptr<EnableRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableRoleResponse(doRPCRequest(make_shared<string>("EnableRole"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableRoleResponse Alibabacloud_Scsp20200702::Client::enableRole(shared_ptr<EnableRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableRoleWithOptions(request, runtime);
}

GetAgentResponse Alibabacloud_Scsp20200702::Client::getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAgentResponse(doRPCRequest(make_shared<string>("GetAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAgentResponse Alibabacloud_Scsp20200702::Client::getAgent(shared_ptr<GetAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAgentWithOptions(request, runtime);
}

GetCMSIdByForeignIdResponse Alibabacloud_Scsp20200702::Client::getCMSIdByForeignIdWithOptions(shared_ptr<GetCMSIdByForeignIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCMSIdByForeignIdResponse(doRPCRequest(make_shared<string>("GetCMSIdByForeignId"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCMSIdByForeignIdResponse Alibabacloud_Scsp20200702::Client::getCMSIdByForeignId(shared_ptr<GetCMSIdByForeignIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCMSIdByForeignIdWithOptions(request, runtime);
}

TransferToThirdCallResponse Alibabacloud_Scsp20200702::Client::transferToThirdCallWithOptions(shared_ptr<TransferToThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferToThirdCallResponse(doRPCRequest(make_shared<string>("TransferToThirdCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferToThirdCallResponse Alibabacloud_Scsp20200702::Client::transferToThirdCall(shared_ptr<TransferToThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferToThirdCallWithOptions(request, runtime);
}

UpdateAgentResponse Alibabacloud_Scsp20200702::Client::updateAgentWithOptions(shared_ptr<UpdateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAgentResponse(doRPCRequest(make_shared<string>("UpdateAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAgentResponse Alibabacloud_Scsp20200702::Client::updateAgent(shared_ptr<UpdateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAgentWithOptions(request, runtime);
}

ChangeChatAgentStatusResponse Alibabacloud_Scsp20200702::Client::changeChatAgentStatusWithOptions(shared_ptr<ChangeChatAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeChatAgentStatusResponse(doRPCRequest(make_shared<string>("ChangeChatAgentStatus"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeChatAgentStatusResponse Alibabacloud_Scsp20200702::Client::changeChatAgentStatus(shared_ptr<ChangeChatAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeChatAgentStatusWithOptions(request, runtime);
}

GenerateWebSocketSignResponse Alibabacloud_Scsp20200702::Client::generateWebSocketSignWithOptions(shared_ptr<GenerateWebSocketSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateWebSocketSignResponse(doRPCRequest(make_shared<string>("GenerateWebSocketSign"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateWebSocketSignResponse Alibabacloud_Scsp20200702::Client::generateWebSocketSign(shared_ptr<GenerateWebSocketSignRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateWebSocketSignWithOptions(request, runtime);
}

UpdateRingStatusResponse Alibabacloud_Scsp20200702::Client::updateRingStatusWithOptions(shared_ptr<UpdateRingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRingStatusResponse(doRPCRequest(make_shared<string>("UpdateRingStatus"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRingStatusResponse Alibabacloud_Scsp20200702::Client::updateRingStatus(shared_ptr<UpdateRingStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRingStatusWithOptions(request, runtime);
}

CreateAgentResponse Alibabacloud_Scsp20200702::Client::createAgentWithOptions(shared_ptr<CreateAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAgentResponse(doRPCRequest(make_shared<string>("CreateAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAgentResponse Alibabacloud_Scsp20200702::Client::createAgent(shared_ptr<CreateAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgentWithOptions(request, runtime);
}

DeleteEntityRouteResponse Alibabacloud_Scsp20200702::Client::deleteEntityRouteWithOptions(shared_ptr<DeleteEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEntityRouteResponse(doRPCRequest(make_shared<string>("DeleteEntityRoute"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEntityRouteResponse Alibabacloud_Scsp20200702::Client::deleteEntityRoute(shared_ptr<DeleteEntityRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEntityRouteWithOptions(request, runtime);
}

GetHotlineGroupDetailReportResponse Alibabacloud_Scsp20200702::Client::getHotlineGroupDetailReportWithOptions(shared_ptr<GetHotlineGroupDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineGroupDetailReportResponse(doRPCRequest(make_shared<string>("GetHotlineGroupDetailReport"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineGroupDetailReportResponse Alibabacloud_Scsp20200702::Client::getHotlineGroupDetailReport(shared_ptr<GetHotlineGroupDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineGroupDetailReportWithOptions(request, runtime);
}

CreateTicketResponse Alibabacloud_Scsp20200702::Client::createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTicketResponse(doRPCRequest(make_shared<string>("CreateTicket"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTicketResponse Alibabacloud_Scsp20200702::Client::createTicket(shared_ptr<CreateTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTicketWithOptions(request, runtime);
}

UpdateCustomerResponse Alibabacloud_Scsp20200702::Client::updateCustomerWithOptions(shared_ptr<UpdateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCustomerResponse(doRPCRequest(make_shared<string>("UpdateCustomer"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCustomerResponse Alibabacloud_Scsp20200702::Client::updateCustomer(shared_ptr<UpdateCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomerWithOptions(request, runtime);
}

AnswerCallResponse Alibabacloud_Scsp20200702::Client::answerCallWithOptions(shared_ptr<AnswerCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AnswerCallResponse(doRPCRequest(make_shared<string>("AnswerCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AnswerCallResponse Alibabacloud_Scsp20200702::Client::answerCall(shared_ptr<AnswerCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return answerCallWithOptions(request, runtime);
}

DeleteAgentResponse Alibabacloud_Scsp20200702::Client::deleteAgentWithOptions(shared_ptr<DeleteAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAgentResponse(doRPCRequest(make_shared<string>("DeleteAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("DELETE"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAgentResponse Alibabacloud_Scsp20200702::Client::deleteAgent(shared_ptr<DeleteAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAgentWithOptions(request, runtime);
}

GetEntityTagRelationResponse Alibabacloud_Scsp20200702::Client::getEntityTagRelationWithOptions(shared_ptr<GetEntityTagRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEntityTagRelationResponse(doRPCRequest(make_shared<string>("GetEntityTagRelation"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEntityTagRelationResponse Alibabacloud_Scsp20200702::Client::getEntityTagRelation(shared_ptr<GetEntityTagRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEntityTagRelationWithOptions(request, runtime);
}

GetHotlineAgentDetailResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentDetailWithOptions(shared_ptr<GetHotlineAgentDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineAgentDetailResponse(doRPCRequest(make_shared<string>("GetHotlineAgentDetail"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentDetailResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentDetail(shared_ptr<GetHotlineAgentDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailWithOptions(request, runtime);
}

SuspendHotlineServiceResponse Alibabacloud_Scsp20200702::Client::suspendHotlineServiceWithOptions(shared_ptr<SuspendHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SuspendHotlineServiceResponse(doRPCRequest(make_shared<string>("SuspendHotlineService"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SuspendHotlineServiceResponse Alibabacloud_Scsp20200702::Client::suspendHotlineService(shared_ptr<SuspendHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendHotlineServiceWithOptions(request, runtime);
}

GetCallsPerDayResponse Alibabacloud_Scsp20200702::Client::getCallsPerDayWithOptions(shared_ptr<GetCallsPerDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetCallsPerDayResponse(doRPCRequest(make_shared<string>("GetCallsPerDay"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCallsPerDayResponse Alibabacloud_Scsp20200702::Client::getCallsPerDay(shared_ptr<GetCallsPerDayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCallsPerDayWithOptions(request, runtime);
}

FetchCallResponse Alibabacloud_Scsp20200702::Client::fetchCallWithOptions(shared_ptr<FetchCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FetchCallResponse(doRPCRequest(make_shared<string>("FetchCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FetchCallResponse Alibabacloud_Scsp20200702::Client::fetchCall(shared_ptr<FetchCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fetchCallWithOptions(request, runtime);
}

GetHotlineAgentDetailReportResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentDetailReportWithOptions(shared_ptr<GetHotlineAgentDetailReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineAgentDetailReportResponse(doRPCRequest(make_shared<string>("GetHotlineAgentDetailReport"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentDetailReportResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentDetailReport(shared_ptr<GetHotlineAgentDetailReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentDetailReportWithOptions(request, runtime);
}

QueryTicketCountResponse Alibabacloud_Scsp20200702::Client::queryTicketCountWithOptions(shared_ptr<QueryTicketCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTicketCountResponse(doRPCRequest(make_shared<string>("QueryTicketCount"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTicketCountResponse Alibabacloud_Scsp20200702::Client::queryTicketCount(shared_ptr<QueryTicketCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketCountWithOptions(request, runtime);
}

AppMessagePushResponse Alibabacloud_Scsp20200702::Client::appMessagePushWithOptions(shared_ptr<AppMessagePushRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AppMessagePushResponse(doRPCRequest(make_shared<string>("AppMessagePush"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AppMessagePushResponse Alibabacloud_Scsp20200702::Client::appMessagePush(shared_ptr<AppMessagePushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return appMessagePushWithOptions(request, runtime);
}

GetHotlineAgentStatusResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentStatusWithOptions(shared_ptr<GetHotlineAgentStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetHotlineAgentStatusResponse(doRPCRequest(make_shared<string>("GetHotlineAgentStatus"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineAgentStatusResponse Alibabacloud_Scsp20200702::Client::getHotlineAgentStatus(shared_ptr<GetHotlineAgentStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineAgentStatusWithOptions(request, runtime);
}

GetHotlineWaitingNumberResponse Alibabacloud_Scsp20200702::Client::getHotlineWaitingNumberWithOptions(shared_ptr<GetHotlineWaitingNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetHotlineWaitingNumberResponse(doRPCRequest(make_shared<string>("GetHotlineWaitingNumber"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetHotlineWaitingNumberResponse Alibabacloud_Scsp20200702::Client::getHotlineWaitingNumber(shared_ptr<GetHotlineWaitingNumberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotlineWaitingNumberWithOptions(request, runtime);
}

StartCallResponse Alibabacloud_Scsp20200702::Client::startCallWithOptions(shared_ptr<StartCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartCallResponse(doRPCRequest(make_shared<string>("StartCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartCallResponse Alibabacloud_Scsp20200702::Client::startCall(shared_ptr<StartCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCallWithOptions(request, runtime);
}

AssignTicketResponse Alibabacloud_Scsp20200702::Client::assignTicketWithOptions(shared_ptr<AssignTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AssignTicketResponse(doRPCRequest(make_shared<string>("AssignTicket"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AssignTicketResponse Alibabacloud_Scsp20200702::Client::assignTicket(shared_ptr<AssignTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return assignTicketWithOptions(request, runtime);
}

HangupCallResponse Alibabacloud_Scsp20200702::Client::hangupCallWithOptions(shared_ptr<HangupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HangupCallResponse(doRPCRequest(make_shared<string>("HangupCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HangupCallResponse Alibabacloud_Scsp20200702::Client::hangupCall(shared_ptr<HangupCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hangupCallWithOptions(request, runtime);
}

GetOutbounNumListResponse Alibabacloud_Scsp20200702::Client::getOutbounNumListWithOptions(shared_ptr<GetOutbounNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOutbounNumListResponse(doRPCRequest(make_shared<string>("GetOutbounNumList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOutbounNumListResponse Alibabacloud_Scsp20200702::Client::getOutbounNumList(shared_ptr<GetOutbounNumListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOutbounNumListWithOptions(request, runtime);
}

CreateTicketWithBizDataResponse Alibabacloud_Scsp20200702::Client::createTicketWithBizDataWithOptions(shared_ptr<CreateTicketWithBizDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTicketWithBizDataResponse(doRPCRequest(make_shared<string>("createTicketWithBizData"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTicketWithBizDataResponse Alibabacloud_Scsp20200702::Client::createTicketWithBizData(shared_ptr<CreateTicketWithBizDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTicketWithBizDataWithOptions(request, runtime);
}

SearchTicketByPhoneResponse Alibabacloud_Scsp20200702::Client::searchTicketByPhoneWithOptions(shared_ptr<SearchTicketByPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SearchTicketByPhoneResponse(doRPCRequest(make_shared<string>("SearchTicketByPhone"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchTicketByPhoneResponse Alibabacloud_Scsp20200702::Client::searchTicketByPhone(shared_ptr<SearchTicketByPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTicketByPhoneWithOptions(request, runtime);
}

CreateThirdSsoAgentResponse Alibabacloud_Scsp20200702::Client::createThirdSsoAgentWithOptions(shared_ptr<CreateThirdSsoAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateThirdSsoAgentResponse(doRPCRequest(make_shared<string>("CreateThirdSsoAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateThirdSsoAgentResponse Alibabacloud_Scsp20200702::Client::createThirdSsoAgent(shared_ptr<CreateThirdSsoAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThirdSsoAgentWithOptions(request, runtime);
}

CreateEntityIvrRouteResponse Alibabacloud_Scsp20200702::Client::createEntityIvrRouteWithOptions(shared_ptr<CreateEntityIvrRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEntityIvrRouteResponse(doRPCRequest(make_shared<string>("CreateEntityIvrRoute"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEntityIvrRouteResponse Alibabacloud_Scsp20200702::Client::createEntityIvrRoute(shared_ptr<CreateEntityIvrRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEntityIvrRouteWithOptions(request, runtime);
}

CloseTicketResponse Alibabacloud_Scsp20200702::Client::closeTicketWithOptions(shared_ptr<CloseTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloseTicketResponse(doRPCRequest(make_shared<string>("CloseTicket"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloseTicketResponse Alibabacloud_Scsp20200702::Client::closeTicket(shared_ptr<CloseTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeTicketWithOptions(request, runtime);
}

HoldCallResponse Alibabacloud_Scsp20200702::Client::holdCallWithOptions(shared_ptr<HoldCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return HoldCallResponse(doRPCRequest(make_shared<string>("HoldCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

HoldCallResponse Alibabacloud_Scsp20200702::Client::holdCall(shared_ptr<HoldCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return holdCallWithOptions(request, runtime);
}

QueryRingDetailListResponse Alibabacloud_Scsp20200702::Client::queryRingDetailListWithOptions(shared_ptr<QueryRingDetailListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryRingDetailListShrinkRequest> request = make_shared<QueryRingDetailListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->fromPhoneNumList)) {
    request->fromPhoneNumListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fromPhoneNumList, make_shared<string>("FromPhoneNumList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->toPhoneNumList)) {
    request->toPhoneNumListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->toPhoneNumList, make_shared<string>("ToPhoneNumList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRingDetailListResponse(doRPCRequest(make_shared<string>("QueryRingDetailList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRingDetailListResponse Alibabacloud_Scsp20200702::Client::queryRingDetailList(shared_ptr<QueryRingDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRingDetailListWithOptions(request, runtime);
}

SearchTicketByIdResponse Alibabacloud_Scsp20200702::Client::searchTicketByIdWithOptions(shared_ptr<SearchTicketByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SearchTicketByIdResponse(doRPCRequest(make_shared<string>("SearchTicketById"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SearchTicketByIdResponse Alibabacloud_Scsp20200702::Client::searchTicketById(shared_ptr<SearchTicketByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchTicketByIdWithOptions(request, runtime);
}

UpdateSkillGroupResponse Alibabacloud_Scsp20200702::Client::updateSkillGroupWithOptions(shared_ptr<UpdateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSkillGroupResponse(doRPCRequest(make_shared<string>("UpdateSkillGroup"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSkillGroupResponse Alibabacloud_Scsp20200702::Client::updateSkillGroup(shared_ptr<UpdateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSkillGroupWithOptions(request, runtime);
}

QueryServiceConfigResponse Alibabacloud_Scsp20200702::Client::queryServiceConfigWithOptions(shared_ptr<QueryServiceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryServiceConfigResponse(doRPCRequest(make_shared<string>("QueryServiceConfig"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryServiceConfigResponse Alibabacloud_Scsp20200702::Client::queryServiceConfig(shared_ptr<QueryServiceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryServiceConfigWithOptions(request, runtime);
}

DisableRoleResponse Alibabacloud_Scsp20200702::Client::disableRoleWithOptions(shared_ptr<DisableRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableRoleResponse(doRPCRequest(make_shared<string>("DisableRole"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableRoleResponse Alibabacloud_Scsp20200702::Client::disableRole(shared_ptr<DisableRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableRoleWithOptions(request, runtime);
}

GetEntityRouteListResponse Alibabacloud_Scsp20200702::Client::getEntityRouteListWithOptions(shared_ptr<GetEntityRouteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEntityRouteListResponse(doRPCRequest(make_shared<string>("GetEntityRouteList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEntityRouteListResponse Alibabacloud_Scsp20200702::Client::getEntityRouteList(shared_ptr<GetEntityRouteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEntityRouteListWithOptions(request, runtime);
}

GetAuthInfoResponse Alibabacloud_Scsp20200702::Client::getAuthInfoWithOptions(shared_ptr<GetAuthInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuthInfoResponse(doRPCRequest(make_shared<string>("GetAuthInfo"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuthInfoResponse Alibabacloud_Scsp20200702::Client::getAuthInfo(shared_ptr<GetAuthInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthInfoWithOptions(request, runtime);
}

UpdateRoleResponse Alibabacloud_Scsp20200702::Client::updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRoleResponse(doRPCRequest(make_shared<string>("UpdateRole"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRoleResponse Alibabacloud_Scsp20200702::Client::updateRole(shared_ptr<UpdateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRoleWithOptions(request, runtime);
}

GetTicketTemplateSchemaResponse Alibabacloud_Scsp20200702::Client::getTicketTemplateSchemaWithOptions(shared_ptr<GetTicketTemplateSchemaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetTicketTemplateSchemaResponse(doRPCRequest(make_shared<string>("GetTicketTemplateSchema"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetTicketTemplateSchemaResponse Alibabacloud_Scsp20200702::Client::getTicketTemplateSchema(shared_ptr<GetTicketTemplateSchemaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTicketTemplateSchemaWithOptions(request, runtime);
}

TransferCallToPhoneResponse Alibabacloud_Scsp20200702::Client::transferCallToPhoneWithOptions(shared_ptr<TransferCallToPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferCallToPhoneResponse(doRPCRequest(make_shared<string>("TransferCallToPhone"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferCallToPhoneResponse Alibabacloud_Scsp20200702::Client::transferCallToPhone(shared_ptr<TransferCallToPhoneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCallToPhoneWithOptions(request, runtime);
}

QuerySkillGroupsResponse Alibabacloud_Scsp20200702::Client::querySkillGroupsWithOptions(shared_ptr<QuerySkillGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySkillGroupsResponse(doRPCRequest(make_shared<string>("QuerySkillGroups"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySkillGroupsResponse Alibabacloud_Scsp20200702::Client::querySkillGroups(shared_ptr<QuerySkillGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySkillGroupsWithOptions(request, runtime);
}

GetEntityRouteResponse Alibabacloud_Scsp20200702::Client::getEntityRouteWithOptions(shared_ptr<GetEntityRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEntityRouteResponse(doRPCRequest(make_shared<string>("GetEntityRoute"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEntityRouteResponse Alibabacloud_Scsp20200702::Client::getEntityRoute(shared_ptr<GetEntityRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEntityRouteWithOptions(request, runtime);
}

UpdateEntityTagRelationResponse Alibabacloud_Scsp20200702::Client::updateEntityTagRelationWithOptions(shared_ptr<UpdateEntityTagRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEntityTagRelationResponse(doRPCRequest(make_shared<string>("UpdateEntityTagRelation"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEntityTagRelationResponse Alibabacloud_Scsp20200702::Client::updateEntityTagRelation(shared_ptr<UpdateEntityTagRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEntityTagRelationWithOptions(request, runtime);
}

CreateOuterCallCenterDataResponse Alibabacloud_Scsp20200702::Client::createOuterCallCenterDataWithOptions(shared_ptr<CreateOuterCallCenterDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOuterCallCenterDataResponse(doRPCRequest(make_shared<string>("CreateOuterCallCenterData"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOuterCallCenterDataResponse Alibabacloud_Scsp20200702::Client::createOuterCallCenterData(shared_ptr<CreateOuterCallCenterDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOuterCallCenterDataWithOptions(request, runtime);
}

SendOutboundCommandResponse Alibabacloud_Scsp20200702::Client::sendOutboundCommandWithOptions(shared_ptr<SendOutboundCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendOutboundCommandResponse(doRPCRequest(make_shared<string>("SendOutboundCommand"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendOutboundCommandResponse Alibabacloud_Scsp20200702::Client::sendOutboundCommand(shared_ptr<SendOutboundCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendOutboundCommandWithOptions(request, runtime);
}

CreateRoleResponse Alibabacloud_Scsp20200702::Client::createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRoleResponse(doRPCRequest(make_shared<string>("CreateRole"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRoleResponse Alibabacloud_Scsp20200702::Client::createRole(shared_ptr<CreateRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoleWithOptions(request, runtime);
}

ListSkillGroupResponse Alibabacloud_Scsp20200702::Client::listSkillGroupWithOptions(shared_ptr<ListSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListSkillGroupResponse(doRPCRequest(make_shared<string>("ListSkillGroup"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListSkillGroupResponse Alibabacloud_Scsp20200702::Client::listSkillGroup(shared_ptr<ListSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSkillGroupWithOptions(request, runtime);
}

GrantRolesResponse Alibabacloud_Scsp20200702::Client::grantRolesWithOptions(shared_ptr<GrantRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GrantRolesResponse(doRPCRequest(make_shared<string>("GrantRoles"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GrantRolesResponse Alibabacloud_Scsp20200702::Client::grantRoles(shared_ptr<GrantRolesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return grantRolesWithOptions(request, runtime);
}

GetOuterCallCenterDataListResponse Alibabacloud_Scsp20200702::Client::getOuterCallCenterDataListWithOptions(shared_ptr<GetOuterCallCenterDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOuterCallCenterDataListResponse(doRPCRequest(make_shared<string>("GetOuterCallCenterDataList"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOuterCallCenterDataListResponse Alibabacloud_Scsp20200702::Client::getOuterCallCenterDataList(shared_ptr<GetOuterCallCenterDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOuterCallCenterDataListWithOptions(request, runtime);
}

QueryTicketsResponse Alibabacloud_Scsp20200702::Client::queryTicketsWithOptions(shared_ptr<QueryTicketsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryTicketsShrinkRequest> request = make_shared<QueryTicketsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("Extra"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTicketsResponse(doRPCRequest(make_shared<string>("QueryTickets"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTicketsResponse Alibabacloud_Scsp20200702::Client::queryTickets(shared_ptr<QueryTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketsWithOptions(request, runtime);
}

QueryTicketActionsResponse Alibabacloud_Scsp20200702::Client::queryTicketActionsWithOptions(shared_ptr<QueryTicketActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTicketActionsResponse(doRPCRequest(make_shared<string>("QueryTicketActions"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTicketActionsResponse Alibabacloud_Scsp20200702::Client::queryTicketActions(shared_ptr<QueryTicketActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTicketActionsWithOptions(request, runtime);
}

TransferCallToAgentResponse Alibabacloud_Scsp20200702::Client::transferCallToAgentWithOptions(shared_ptr<TransferCallToAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TransferCallToAgentResponse(doRPCRequest(make_shared<string>("TransferCallToAgent"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TransferCallToAgentResponse Alibabacloud_Scsp20200702::Client::transferCallToAgent(shared_ptr<TransferCallToAgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferCallToAgentWithOptions(request, runtime);
}

FinishHotlineServiceResponse Alibabacloud_Scsp20200702::Client::finishHotlineServiceWithOptions(shared_ptr<FinishHotlineServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FinishHotlineServiceResponse(doRPCRequest(make_shared<string>("FinishHotlineService"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FinishHotlineServiceResponse Alibabacloud_Scsp20200702::Client::finishHotlineService(shared_ptr<FinishHotlineServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return finishHotlineServiceWithOptions(request, runtime);
}

JoinThirdCallResponse Alibabacloud_Scsp20200702::Client::joinThirdCallWithOptions(shared_ptr<JoinThirdCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return JoinThirdCallResponse(doRPCRequest(make_shared<string>("JoinThirdCall"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

JoinThirdCallResponse Alibabacloud_Scsp20200702::Client::joinThirdCall(shared_ptr<JoinThirdCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinThirdCallWithOptions(request, runtime);
}

ExecuteActivityResponse Alibabacloud_Scsp20200702::Client::executeActivityWithOptions(shared_ptr<ExecuteActivityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteActivityResponse(doRPCRequest(make_shared<string>("ExecuteActivity"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteActivityResponse Alibabacloud_Scsp20200702::Client::executeActivity(shared_ptr<ExecuteActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeActivityWithOptions(request, runtime);
}

GetGrantedRoleIdsResponse Alibabacloud_Scsp20200702::Client::getGrantedRoleIdsWithOptions(shared_ptr<GetGrantedRoleIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetGrantedRoleIdsResponse(doRPCRequest(make_shared<string>("GetGrantedRoleIds"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGrantedRoleIdsResponse Alibabacloud_Scsp20200702::Client::getGrantedRoleIds(shared_ptr<GetGrantedRoleIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGrantedRoleIdsWithOptions(request, runtime);
}

ListHotlineRecordResponse Alibabacloud_Scsp20200702::Client::listHotlineRecordWithOptions(shared_ptr<ListHotlineRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListHotlineRecordResponse(doRPCRequest(make_shared<string>("ListHotlineRecord"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListHotlineRecordResponse Alibabacloud_Scsp20200702::Client::listHotlineRecord(shared_ptr<ListHotlineRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHotlineRecordWithOptions(request, runtime);
}

GetNumLocationResponse Alibabacloud_Scsp20200702::Client::getNumLocationWithOptions(shared_ptr<GetNumLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetNumLocationResponse(doRPCRequest(make_shared<string>("GetNumLocation"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNumLocationResponse Alibabacloud_Scsp20200702::Client::getNumLocation(shared_ptr<GetNumLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNumLocationWithOptions(request, runtime);
}

CreateSkillGroupResponse Alibabacloud_Scsp20200702::Client::createSkillGroupWithOptions(shared_ptr<CreateSkillGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSkillGroupResponse(doRPCRequest(make_shared<string>("CreateSkillGroup"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSkillGroupResponse Alibabacloud_Scsp20200702::Client::createSkillGroup(shared_ptr<CreateSkillGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSkillGroupWithOptions(request, runtime);
}

CreateCustomerResponse Alibabacloud_Scsp20200702::Client::createCustomerWithOptions(shared_ptr<CreateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCustomerResponse(doRPCRequest(make_shared<string>("CreateCustomer"), make_shared<string>("2020-07-02"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCustomerResponse Alibabacloud_Scsp20200702::Client::createCustomer(shared_ptr<CreateCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomerWithOptions(request, runtime);
}

