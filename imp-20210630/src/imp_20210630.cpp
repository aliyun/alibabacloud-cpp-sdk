// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imp_20210630.hpp>
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

using namespace Alibabacloud_Imp20210630;

Alibabacloud_Imp20210630::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imp20210630::Client::getEndpoint(shared_ptr<string> productId,
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

RemoveMemberResponse Alibabacloud_Imp20210630::Client::removeMemberWithOptions(shared_ptr<RemoveMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveMemberResponse(doRPCRequest(make_shared<string>("RemoveMember"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveMemberResponse Alibabacloud_Imp20210630::Client::removeMember(shared_ptr<RemoveMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeMemberWithOptions(request, runtime);
}

DeleteCommentResponse Alibabacloud_Imp20210630::Client::deleteCommentWithOptions(shared_ptr<DeleteCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCommentResponse(doRPCRequest(make_shared<string>("DeleteComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCommentResponse Alibabacloud_Imp20210630::Client::deleteComment(shared_ptr<DeleteCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCommentWithOptions(request, runtime);
}

ListApplyLinkMicUsersResponse Alibabacloud_Imp20210630::Client::listApplyLinkMicUsersWithOptions(shared_ptr<ListApplyLinkMicUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListApplyLinkMicUsersResponse(doRPCRequest(make_shared<string>("ListApplyLinkMicUsers"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListApplyLinkMicUsersResponse Alibabacloud_Imp20210630::Client::listApplyLinkMicUsers(shared_ptr<ListApplyLinkMicUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplyLinkMicUsersWithOptions(request, runtime);
}

GetClassDetailResponse Alibabacloud_Imp20210630::Client::getClassDetailWithOptions(shared_ptr<GetClassDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetClassDetailResponse(doRPCRequest(make_shared<string>("GetClassDetail"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetClassDetailResponse Alibabacloud_Imp20210630::Client::getClassDetail(shared_ptr<GetClassDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClassDetailWithOptions(request, runtime);
}

GetRoomResponse Alibabacloud_Imp20210630::Client::getRoomWithOptions(shared_ptr<GetRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRoomResponse(doRPCRequest(make_shared<string>("GetRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRoomResponse Alibabacloud_Imp20210630::Client::getRoom(shared_ptr<GetRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoomWithOptions(request, runtime);
}

GetLiveRoomUserStatisticsResponse Alibabacloud_Imp20210630::Client::getLiveRoomUserStatisticsWithOptions(shared_ptr<GetLiveRoomUserStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveRoomUserStatisticsResponse(doRPCRequest(make_shared<string>("GetLiveRoomUserStatistics"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveRoomUserStatisticsResponse Alibabacloud_Imp20210630::Client::getLiveRoomUserStatistics(shared_ptr<GetLiveRoomUserStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRoomUserStatisticsWithOptions(request, runtime);
}

BanCommentResponse Alibabacloud_Imp20210630::Client::banCommentWithOptions(shared_ptr<BanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BanCommentResponse(doRPCRequest(make_shared<string>("BanComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BanCommentResponse Alibabacloud_Imp20210630::Client::banComment(shared_ptr<BanCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return banCommentWithOptions(request, runtime);
}

GetStandardRoomHttpsCertificateResponse Alibabacloud_Imp20210630::Client::getStandardRoomHttpsCertificateWithOptions(shared_ptr<GetStandardRoomHttpsCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStandardRoomHttpsCertificateResponse(doRPCRequest(make_shared<string>("GetStandardRoomHttpsCertificate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStandardRoomHttpsCertificateResponse Alibabacloud_Imp20210630::Client::getStandardRoomHttpsCertificate(shared_ptr<GetStandardRoomHttpsCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStandardRoomHttpsCertificateWithOptions(request, runtime);
}

ListLiveRoomsByIdResponse Alibabacloud_Imp20210630::Client::listLiveRoomsByIdWithOptions(shared_ptr<ListLiveRoomsByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListLiveRoomsByIdShrinkRequest> request = make_shared<ListLiveRoomsByIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->liveIdList)) {
    request->liveIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->liveIdList, make_shared<string>("LiveIdList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLiveRoomsByIdResponse(doRPCRequest(make_shared<string>("ListLiveRoomsById"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLiveRoomsByIdResponse Alibabacloud_Imp20210630::Client::listLiveRoomsById(shared_ptr<ListLiveRoomsByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRoomsByIdWithOptions(request, runtime);
}

DeleteClassResponse Alibabacloud_Imp20210630::Client::deleteClassWithOptions(shared_ptr<DeleteClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteClassResponse(doRPCRequest(make_shared<string>("DeleteClass"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteClassResponse Alibabacloud_Imp20210630::Client::deleteClass(shared_ptr<DeleteClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClassWithOptions(request, runtime);
}

AddMemberResponse Alibabacloud_Imp20210630::Client::addMemberWithOptions(shared_ptr<AddMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddMemberResponse(doRPCRequest(make_shared<string>("AddMember"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddMemberResponse Alibabacloud_Imp20210630::Client::addMember(shared_ptr<AddMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMemberWithOptions(request, runtime);
}

ListRoomsResponse Alibabacloud_Imp20210630::Client::listRoomsWithOptions(shared_ptr<ListRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRoomsResponse(doRPCRequest(make_shared<string>("ListRooms"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRoomsResponse Alibabacloud_Imp20210630::Client::listRooms(shared_ptr<ListRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoomsWithOptions(request, runtime);
}

DeleteAppTemplateResponse Alibabacloud_Imp20210630::Client::deleteAppTemplateWithOptions(shared_ptr<DeleteAppTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppTemplateResponse(doRPCRequest(make_shared<string>("DeleteAppTemplate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppTemplateResponse Alibabacloud_Imp20210630::Client::deleteAppTemplate(shared_ptr<DeleteAppTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppTemplateWithOptions(request, runtime);
}

AttachStandardRoomHttpsCertificateResponse Alibabacloud_Imp20210630::Client::attachStandardRoomHttpsCertificateWithOptions(shared_ptr<AttachStandardRoomHttpsCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AttachStandardRoomHttpsCertificateResponse(doRPCRequest(make_shared<string>("AttachStandardRoomHttpsCertificate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AttachStandardRoomHttpsCertificateResponse Alibabacloud_Imp20210630::Client::attachStandardRoomHttpsCertificate(shared_ptr<AttachStandardRoomHttpsCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachStandardRoomHttpsCertificateWithOptions(request, runtime);
}

UpdateAppTemplateConfigResponse Alibabacloud_Imp20210630::Client::updateAppTemplateConfigWithOptions(shared_ptr<UpdateAppTemplateConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAppTemplateConfigShrinkRequest> request = make_shared<UpdateAppTemplateConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateAppTemplateConfigRequestConfigList>>(tmpReq->configList)) {
    request->configListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->configList, make_shared<string>("ConfigList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppTemplateConfigResponse(doRPCRequest(make_shared<string>("UpdateAppTemplateConfig"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppTemplateConfigResponse Alibabacloud_Imp20210630::Client::updateAppTemplateConfig(shared_ptr<UpdateAppTemplateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppTemplateConfigWithOptions(request, runtime);
}

StopLiveResponse Alibabacloud_Imp20210630::Client::stopLiveWithOptions(shared_ptr<StopLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopLiveResponse(doRPCRequest(make_shared<string>("StopLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopLiveResponse Alibabacloud_Imp20210630::Client::stopLive(shared_ptr<StopLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLiveWithOptions(request, runtime);
}

UpdateClassResponse Alibabacloud_Imp20210630::Client::updateClassWithOptions(shared_ptr<UpdateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateClassResponse(doRPCRequest(make_shared<string>("UpdateClass"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateClassResponse Alibabacloud_Imp20210630::Client::updateClass(shared_ptr<UpdateClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateClassWithOptions(request, runtime);
}

CreateConferenceResponse Alibabacloud_Imp20210630::Client::createConferenceWithOptions(shared_ptr<CreateConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConferenceResponse(doRPCRequest(make_shared<string>("CreateConference"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConferenceResponse Alibabacloud_Imp20210630::Client::createConference(shared_ptr<CreateConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConferenceWithOptions(request, runtime);
}

DeleteLiveResponse Alibabacloud_Imp20210630::Client::deleteLiveWithOptions(shared_ptr<DeleteLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteLiveResponse(doRPCRequest(make_shared<string>("DeleteLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteLiveResponse Alibabacloud_Imp20210630::Client::deleteLive(shared_ptr<DeleteLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveWithOptions(request, runtime);
}

GetLiveDomainStatusResponse Alibabacloud_Imp20210630::Client::getLiveDomainStatusWithOptions(shared_ptr<GetLiveDomainStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetLiveDomainStatusShrinkRequest> request = make_shared<GetLiveDomainStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->liveDomainList)) {
    request->liveDomainListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->liveDomainList, make_shared<string>("LiveDomainList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveDomainStatusResponse(doRPCRequest(make_shared<string>("GetLiveDomainStatus"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveDomainStatusResponse Alibabacloud_Imp20210630::Client::getLiveDomainStatus(shared_ptr<GetLiveDomainStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveDomainStatusWithOptions(request, runtime);
}

SendCustomMessageToAllResponse Alibabacloud_Imp20210630::Client::sendCustomMessageToAllWithOptions(shared_ptr<SendCustomMessageToAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCustomMessageToAllResponse(doRPCRequest(make_shared<string>("SendCustomMessageToAll"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCustomMessageToAllResponse Alibabacloud_Imp20210630::Client::sendCustomMessageToAll(shared_ptr<SendCustomMessageToAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCustomMessageToAllWithOptions(request, runtime);
}

AgreeLinkMicResponse Alibabacloud_Imp20210630::Client::agreeLinkMicWithOptions(shared_ptr<AgreeLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AgreeLinkMicResponse(doRPCRequest(make_shared<string>("AgreeLinkMic"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AgreeLinkMicResponse Alibabacloud_Imp20210630::Client::agreeLinkMic(shared_ptr<AgreeLinkMicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return agreeLinkMicWithOptions(request, runtime);
}

GetDomainOwnerVerifyContentResponse Alibabacloud_Imp20210630::Client::getDomainOwnerVerifyContentWithOptions(shared_ptr<GetDomainOwnerVerifyContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDomainOwnerVerifyContentResponse(doRPCRequest(make_shared<string>("GetDomainOwnerVerifyContent"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDomainOwnerVerifyContentResponse Alibabacloud_Imp20210630::Client::getDomainOwnerVerifyContent(shared_ptr<GetDomainOwnerVerifyContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDomainOwnerVerifyContentWithOptions(request, runtime);
}

GetAuthTokenResponse Alibabacloud_Imp20210630::Client::getAuthTokenWithOptions(shared_ptr<GetAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAuthTokenResponse(doRPCRequest(make_shared<string>("GetAuthToken"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAuthTokenResponse Alibabacloud_Imp20210630::Client::getAuthToken(shared_ptr<GetAuthTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthTokenWithOptions(request, runtime);
}

UpdateAppTemplateResponse Alibabacloud_Imp20210630::Client::updateAppTemplateWithOptions(shared_ptr<UpdateAppTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppTemplateResponse(doRPCRequest(make_shared<string>("UpdateAppTemplate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppTemplateResponse Alibabacloud_Imp20210630::Client::updateAppTemplate(shared_ptr<UpdateAppTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppTemplateWithOptions(request, runtime);
}

GetImpProductStatusResponse Alibabacloud_Imp20210630::Client::getImpProductStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetImpProductStatusResponse(doRPCRequest(make_shared<string>("GetImpProductStatus"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetImpProductStatusResponse Alibabacloud_Imp20210630::Client::getImpProductStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImpProductStatusWithOptions(runtime);
}

PublishLiveResponse Alibabacloud_Imp20210630::Client::publishLiveWithOptions(shared_ptr<PublishLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishLiveResponse(doRPCRequest(make_shared<string>("PublishLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishLiveResponse Alibabacloud_Imp20210630::Client::publishLive(shared_ptr<PublishLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishLiveWithOptions(request, runtime);
}

DeleteRoomResponse Alibabacloud_Imp20210630::Client::deleteRoomWithOptions(shared_ptr<DeleteRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRoomResponse(doRPCRequest(make_shared<string>("DeleteRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRoomResponse Alibabacloud_Imp20210630::Client::deleteRoom(shared_ptr<DeleteRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoomWithOptions(request, runtime);
}

DeleteConferenceResponse Alibabacloud_Imp20210630::Client::deleteConferenceWithOptions(shared_ptr<DeleteConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConferenceResponse(doRPCRequest(make_shared<string>("DeleteConference"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConferenceResponse Alibabacloud_Imp20210630::Client::deleteConference(shared_ptr<DeleteConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConferenceWithOptions(request, runtime);
}

UpdateAppResponse Alibabacloud_Imp20210630::Client::updateAppWithOptions(shared_ptr<UpdateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppResponse(doRPCRequest(make_shared<string>("UpdateApp"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppResponse Alibabacloud_Imp20210630::Client::updateApp(shared_ptr<UpdateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppWithOptions(request, runtime);
}

VerifyDomainOwnerResponse Alibabacloud_Imp20210630::Client::verifyDomainOwnerWithOptions(shared_ptr<VerifyDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyDomainOwnerResponse(doRPCRequest(make_shared<string>("VerifyDomainOwner"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyDomainOwnerResponse Alibabacloud_Imp20210630::Client::verifyDomainOwner(shared_ptr<VerifyDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyDomainOwnerWithOptions(request, runtime);
}

CreateLiveResponse Alibabacloud_Imp20210630::Client::createLiveWithOptions(shared_ptr<CreateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLiveResponse(doRPCRequest(make_shared<string>("CreateLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLiveResponse Alibabacloud_Imp20210630::Client::createLive(shared_ptr<CreateLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveWithOptions(request, runtime);
}

GetStandardRoomJumpUrlResponse Alibabacloud_Imp20210630::Client::getStandardRoomJumpUrlWithOptions(shared_ptr<GetStandardRoomJumpUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetStandardRoomJumpUrlResponse(doRPCRequest(make_shared<string>("GetStandardRoomJumpUrl"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetStandardRoomJumpUrlResponse Alibabacloud_Imp20210630::Client::getStandardRoomJumpUrl(shared_ptr<GetStandardRoomJumpUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStandardRoomJumpUrlWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_Imp20210630::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppResponse(doRPCRequest(make_shared<string>("DeleteApp"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppResponse Alibabacloud_Imp20210630::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

ListRoomLivesResponse Alibabacloud_Imp20210630::Client::listRoomLivesWithOptions(shared_ptr<ListRoomLivesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListRoomLivesShrinkRequest> request = make_shared<ListRoomLivesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roomIdList)) {
    request->roomIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomIdList, make_shared<string>("RoomIdList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRoomLivesResponse(doRPCRequest(make_shared<string>("ListRoomLives"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRoomLivesResponse Alibabacloud_Imp20210630::Client::listRoomLives(shared_ptr<ListRoomLivesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoomLivesWithOptions(request, runtime);
}

UpdateRoomResponse Alibabacloud_Imp20210630::Client::updateRoomWithOptions(shared_ptr<UpdateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRoomShrinkRequest> request = make_shared<UpdateRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRoomResponse(doRPCRequest(make_shared<string>("UpdateRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRoomResponse Alibabacloud_Imp20210630::Client::updateRoom(shared_ptr<UpdateRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRoomWithOptions(request, runtime);
}

GetAppTemplateResponse Alibabacloud_Imp20210630::Client::getAppTemplateWithOptions(shared_ptr<GetAppTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAppTemplateResponse(doRPCRequest(make_shared<string>("GetAppTemplate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAppTemplateResponse Alibabacloud_Imp20210630::Client::getAppTemplate(shared_ptr<GetAppTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppTemplateWithOptions(request, runtime);
}

SendCommentResponse Alibabacloud_Imp20210630::Client::sendCommentWithOptions(shared_ptr<SendCommentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendCommentShrinkRequest> request = make_shared<SendCommentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCommentResponse(doRPCRequest(make_shared<string>("SendComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCommentResponse Alibabacloud_Imp20210630::Client::sendComment(shared_ptr<SendCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCommentWithOptions(request, runtime);
}

CreateAppTemplateResponse Alibabacloud_Imp20210630::Client::createAppTemplateWithOptions(shared_ptr<CreateAppTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppTemplateShrinkRequest> request = make_shared<CreateAppTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->componentList)) {
    request->componentListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->componentList, make_shared<string>("ComponentList"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppTemplateResponse(doRPCRequest(make_shared<string>("CreateAppTemplate"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppTemplateResponse Alibabacloud_Imp20210630::Client::createAppTemplate(shared_ptr<CreateAppTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppTemplateWithOptions(request, runtime);
}

GetConferenceResponse Alibabacloud_Imp20210630::Client::getConferenceWithOptions(shared_ptr<GetConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetConferenceResponse(doRPCRequest(make_shared<string>("GetConference"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetConferenceResponse Alibabacloud_Imp20210630::Client::getConference(shared_ptr<GetConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConferenceWithOptions(request, runtime);
}

RejectLinkMicResponse Alibabacloud_Imp20210630::Client::rejectLinkMicWithOptions(shared_ptr<RejectLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RejectLinkMicResponse(doRPCRequest(make_shared<string>("RejectLinkMic"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RejectLinkMicResponse Alibabacloud_Imp20210630::Client::rejectLinkMic(shared_ptr<RejectLinkMicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rejectLinkMicWithOptions(request, runtime);
}

CreateClassResponse Alibabacloud_Imp20210630::Client::createClassWithOptions(shared_ptr<CreateClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateClassResponse(doRPCRequest(make_shared<string>("CreateClass"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateClassResponse Alibabacloud_Imp20210630::Client::createClass(shared_ptr<CreateClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClassWithOptions(request, runtime);
}

ListAppsResponse Alibabacloud_Imp20210630::Client::listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppsResponse(doRPCRequest(make_shared<string>("ListApps"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppsResponse Alibabacloud_Imp20210630::Client::listApps(shared_ptr<ListAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppsWithOptions(request, runtime);
}

CancelBanAllCommentResponse Alibabacloud_Imp20210630::Client::cancelBanAllCommentWithOptions(shared_ptr<CancelBanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelBanAllCommentResponse(doRPCRequest(make_shared<string>("CancelBanAllComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelBanAllCommentResponse Alibabacloud_Imp20210630::Client::cancelBanAllComment(shared_ptr<CancelBanAllCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelBanAllCommentWithOptions(request, runtime);
}

ListConferenceUsersResponse Alibabacloud_Imp20210630::Client::listConferenceUsersWithOptions(shared_ptr<ListConferenceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListConferenceUsersResponse(doRPCRequest(make_shared<string>("ListConferenceUsers"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListConferenceUsersResponse Alibabacloud_Imp20210630::Client::listConferenceUsers(shared_ptr<ListConferenceUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConferenceUsersWithOptions(request, runtime);
}

CancelBanCommentResponse Alibabacloud_Imp20210630::Client::cancelBanCommentWithOptions(shared_ptr<CancelBanCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelBanCommentResponse(doRPCRequest(make_shared<string>("CancelBanComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelBanCommentResponse Alibabacloud_Imp20210630::Client::cancelBanComment(shared_ptr<CancelBanCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelBanCommentWithOptions(request, runtime);
}

ListAppTemplatesResponse Alibabacloud_Imp20210630::Client::listAppTemplatesWithOptions(shared_ptr<ListAppTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppTemplatesResponse(doRPCRequest(make_shared<string>("ListAppTemplates"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppTemplatesResponse Alibabacloud_Imp20210630::Client::listAppTemplates(shared_ptr<ListAppTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppTemplatesWithOptions(request, runtime);
}

ListComponentsResponse Alibabacloud_Imp20210630::Client::listComponentsWithOptions(shared_ptr<ListComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListComponentsResponse(doRPCRequest(make_shared<string>("ListComponents"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListComponentsResponse Alibabacloud_Imp20210630::Client::listComponents(shared_ptr<ListComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listComponentsWithOptions(request, runtime);
}

UpdateLiveResponse Alibabacloud_Imp20210630::Client::updateLiveWithOptions(shared_ptr<UpdateLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateLiveResponse(doRPCRequest(make_shared<string>("UpdateLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateLiveResponse Alibabacloud_Imp20210630::Client::updateLive(shared_ptr<UpdateLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveWithOptions(request, runtime);
}

CreateLiveRoomResponse Alibabacloud_Imp20210630::Client::createLiveRoomWithOptions(shared_ptr<CreateLiveRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveRoomShrinkRequest> request = make_shared<CreateLiveRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLiveRoomResponse(doRPCRequest(make_shared<string>("CreateLiveRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLiveRoomResponse Alibabacloud_Imp20210630::Client::createLiveRoom(shared_ptr<CreateLiveRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveRoomWithOptions(request, runtime);
}

ApplyLinkMicResponse Alibabacloud_Imp20210630::Client::applyLinkMicWithOptions(shared_ptr<ApplyLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyLinkMicResponse(doRPCRequest(make_shared<string>("ApplyLinkMic"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyLinkMicResponse Alibabacloud_Imp20210630::Client::applyLinkMic(shared_ptr<ApplyLinkMicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyLinkMicWithOptions(request, runtime);
}

CancelApplyLinkMicResponse Alibabacloud_Imp20210630::Client::cancelApplyLinkMicWithOptions(shared_ptr<CancelApplyLinkMicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelApplyLinkMicResponse(doRPCRequest(make_shared<string>("CancelApplyLinkMic"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelApplyLinkMicResponse Alibabacloud_Imp20210630::Client::cancelApplyLinkMic(shared_ptr<CancelApplyLinkMicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelApplyLinkMicWithOptions(request, runtime);
}

GetAppResponse Alibabacloud_Imp20210630::Client::getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAppResponse(doRPCRequest(make_shared<string>("GetApp"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAppResponse Alibabacloud_Imp20210630::Client::getApp(shared_ptr<GetAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppWithOptions(request, runtime);
}

ListLiveRoomsResponse Alibabacloud_Imp20210630::Client::listLiveRoomsWithOptions(shared_ptr<ListLiveRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListLiveRoomsResponse(doRPCRequest(make_shared<string>("ListLiveRooms"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListLiveRoomsResponse Alibabacloud_Imp20210630::Client::listLiveRooms(shared_ptr<ListLiveRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRoomsWithOptions(request, runtime);
}

StopLiveRoomResponse Alibabacloud_Imp20210630::Client::stopLiveRoomWithOptions(shared_ptr<StopLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopLiveRoomResponse(doRPCRequest(make_shared<string>("StopLiveRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopLiveRoomResponse Alibabacloud_Imp20210630::Client::stopLiveRoom(shared_ptr<StopLiveRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLiveRoomWithOptions(request, runtime);
}

GetLiveRoomStatisticsResponse Alibabacloud_Imp20210630::Client::getLiveRoomStatisticsWithOptions(shared_ptr<GetLiveRoomStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveRoomStatisticsResponse(doRPCRequest(make_shared<string>("GetLiveRoomStatistics"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveRoomStatisticsResponse Alibabacloud_Imp20210630::Client::getLiveRoomStatistics(shared_ptr<GetLiveRoomStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRoomStatisticsWithOptions(request, runtime);
}

SendCustomMessageToUsersResponse Alibabacloud_Imp20210630::Client::sendCustomMessageToUsersWithOptions(shared_ptr<SendCustomMessageToUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCustomMessageToUsersResponse(doRPCRequest(make_shared<string>("SendCustomMessageToUsers"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCustomMessageToUsersResponse Alibabacloud_Imp20210630::Client::sendCustomMessageToUsers(shared_ptr<SendCustomMessageToUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCustomMessageToUsersWithOptions(request, runtime);
}

BanAllCommentResponse Alibabacloud_Imp20210630::Client::banAllCommentWithOptions(shared_ptr<BanAllCommentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BanAllCommentResponse(doRPCRequest(make_shared<string>("BanAllComment"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BanAllCommentResponse Alibabacloud_Imp20210630::Client::banAllComment(shared_ptr<BanAllCommentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return banAllCommentWithOptions(request, runtime);
}

GetLiveResponse Alibabacloud_Imp20210630::Client::getLiveWithOptions(shared_ptr<GetLiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveResponse(doRPCRequest(make_shared<string>("GetLive"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveResponse Alibabacloud_Imp20210630::Client::getLive(shared_ptr<GetLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_Imp20210630::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAppResponse(doRPCRequest(make_shared<string>("CreateApp"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAppResponse Alibabacloud_Imp20210630::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateRoomResponse Alibabacloud_Imp20210630::Client::createRoomWithOptions(shared_ptr<CreateRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRoomShrinkRequest> request = make_shared<CreateRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRoomResponse(doRPCRequest(make_shared<string>("CreateRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRoomResponse Alibabacloud_Imp20210630::Client::createRoom(shared_ptr<CreateRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoomWithOptions(request, runtime);
}

UpdateConferenceResponse Alibabacloud_Imp20210630::Client::updateConferenceWithOptions(shared_ptr<UpdateConferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConferenceResponse(doRPCRequest(make_shared<string>("UpdateConference"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConferenceResponse Alibabacloud_Imp20210630::Client::updateConference(shared_ptr<UpdateConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConferenceWithOptions(request, runtime);
}

StopClassResponse Alibabacloud_Imp20210630::Client::stopClassWithOptions(shared_ptr<StopClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopClassResponse(doRPCRequest(make_shared<string>("StopClass"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopClassResponse Alibabacloud_Imp20210630::Client::stopClass(shared_ptr<StopClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopClassWithOptions(request, runtime);
}

GetLiveRoomResponse Alibabacloud_Imp20210630::Client::getLiveRoomWithOptions(shared_ptr<GetLiveRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLiveRoomResponse(doRPCRequest(make_shared<string>("GetLiveRoom"), make_shared<string>("2021-06-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLiveRoomResponse Alibabacloud_Imp20210630::Client::getLiveRoom(shared_ptr<GetLiveRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRoomWithOptions(request, runtime);
}

