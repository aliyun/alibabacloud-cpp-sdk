// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/live_interaction_20201214.hpp>
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

using namespace Alibabacloud_Live-interaction20201214;

Alibabacloud_Live-interaction20201214::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("live-interaction"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Live-interaction20201214::Client::getEndpoint(shared_ptr<string> productId,
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

ListAppInfosResponse Alibabacloud_Live-interaction20201214::Client::listAppInfosWithOptions(shared_ptr<ListAppInfosRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListAppInfosShrinkRequest> request = make_shared<ListAppInfosShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListAppInfosRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAppInfosResponse(doRPCRequest(make_shared<string>("ListAppInfos"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAppInfosResponse Alibabacloud_Live-interaction20201214::Client::listAppInfos(shared_ptr<ListAppInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInfosWithOptions(request, runtime);
}

RemoveSingleChatExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeSingleChatExtensionByKeysWithOptions(shared_ptr<RemoveSingleChatExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveSingleChatExtensionByKeysShrinkRequest> request = make_shared<RemoveSingleChatExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveSingleChatExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveSingleChatExtensionByKeysResponse(doRPCRequest(make_shared<string>("RemoveSingleChatExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveSingleChatExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeSingleChatExtensionByKeys(shared_ptr<RemoveSingleChatExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeSingleChatExtensionByKeysWithOptions(request, runtime);
}

ImportMessageResponse Alibabacloud_Live-interaction20201214::Client::importMessageWithOptions(shared_ptr<ImportMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportMessageShrinkRequest> request = make_shared<ImportMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ImportMessageRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportMessageResponse(doRPCRequest(make_shared<string>("ImportMessage"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportMessageResponse Alibabacloud_Live-interaction20201214::Client::importMessage(shared_ptr<ImportMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importMessageWithOptions(request, runtime);
}

UnbindInterconnectionUidResponse Alibabacloud_Live-interaction20201214::Client::unbindInterconnectionUidWithOptions(shared_ptr<UnbindInterconnectionUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UnbindInterconnectionUidShrinkRequest> request = make_shared<UnbindInterconnectionUidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UnbindInterconnectionUidRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindInterconnectionUidResponse(doRPCRequest(make_shared<string>("UnbindInterconnectionUid"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindInterconnectionUidResponse Alibabacloud_Live-interaction20201214::Client::unbindInterconnectionUid(shared_ptr<UnbindInterconnectionUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindInterconnectionUidWithOptions(request, runtime);
}

SilenceAllGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::silenceAllGroupMembersWithOptions(shared_ptr<SilenceAllGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SilenceAllGroupMembersShrinkRequest> request = make_shared<SilenceAllGroupMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SilenceAllGroupMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SilenceAllGroupMembersResponse(doRPCRequest(make_shared<string>("SilenceAllGroupMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SilenceAllGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::silenceAllGroupMembers(shared_ptr<SilenceAllGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return silenceAllGroupMembersWithOptions(request, runtime);
}

ListRoomMessagesResponse Alibabacloud_Live-interaction20201214::Client::listRoomMessagesWithOptions(shared_ptr<ListRoomMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRoomMessagesResponse(doRPCRequest(make_shared<string>("ListRoomMessages"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRoomMessagesResponse Alibabacloud_Live-interaction20201214::Client::listRoomMessages(shared_ptr<ListRoomMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoomMessagesWithOptions(request, runtime);
}

SetGroupExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setGroupExtensionByKeysWithOptions(shared_ptr<SetGroupExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetGroupExtensionByKeysShrinkRequest> request = make_shared<SetGroupExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetGroupExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGroupExtensionByKeysResponse(doRPCRequest(make_shared<string>("SetGroupExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGroupExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setGroupExtensionByKeys(shared_ptr<SetGroupExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupExtensionByKeysWithOptions(request, runtime);
}

RemoveGroupMemberExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeGroupMemberExtensionByKeysWithOptions(shared_ptr<RemoveGroupMemberExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveGroupMemberExtensionByKeysShrinkRequest> request = make_shared<RemoveGroupMemberExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveGroupMemberExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveGroupMemberExtensionByKeysResponse(doRPCRequest(make_shared<string>("RemoveGroupMemberExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveGroupMemberExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeGroupMemberExtensionByKeys(shared_ptr<RemoveGroupMemberExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGroupMemberExtensionByKeysWithOptions(request, runtime);
}

AddGroupSilenceBlacklistResponse Alibabacloud_Live-interaction20201214::Client::addGroupSilenceBlacklistWithOptions(shared_ptr<AddGroupSilenceBlacklistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGroupSilenceBlacklistShrinkRequest> request = make_shared<AddGroupSilenceBlacklistShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddGroupSilenceBlacklistRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddGroupSilenceBlacklistResponse(doRPCRequest(make_shared<string>("AddGroupSilenceBlacklist"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddGroupSilenceBlacklistResponse Alibabacloud_Live-interaction20201214::Client::addGroupSilenceBlacklist(shared_ptr<AddGroupSilenceBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGroupSilenceBlacklistWithOptions(request, runtime);
}

RemoveGroupSilenceWhitelistResponse Alibabacloud_Live-interaction20201214::Client::removeGroupSilenceWhitelistWithOptions(shared_ptr<RemoveGroupSilenceWhitelistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveGroupSilenceWhitelistShrinkRequest> request = make_shared<RemoveGroupSilenceWhitelistShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveGroupSilenceWhitelistRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveGroupSilenceWhitelistResponse(doRPCRequest(make_shared<string>("RemoveGroupSilenceWhitelist"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveGroupSilenceWhitelistResponse Alibabacloud_Live-interaction20201214::Client::removeGroupSilenceWhitelist(shared_ptr<RemoveGroupSilenceWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGroupSilenceWhitelistWithOptions(request, runtime);
}

ListDetailReportStatisticsResponse Alibabacloud_Live-interaction20201214::Client::listDetailReportStatisticsWithOptions(shared_ptr<ListDetailReportStatisticsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDetailReportStatisticsShrinkRequest> request = make_shared<ListDetailReportStatisticsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListDetailReportStatisticsRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDetailReportStatisticsResponse(doRPCRequest(make_shared<string>("ListDetailReportStatistics"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDetailReportStatisticsResponse Alibabacloud_Live-interaction20201214::Client::listDetailReportStatistics(shared_ptr<ListDetailReportStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDetailReportStatisticsWithOptions(request, runtime);
}

SetUserConversationExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setUserConversationExtensionByKeysWithOptions(shared_ptr<SetUserConversationExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetUserConversationExtensionByKeysShrinkRequest> request = make_shared<SetUserConversationExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetUserConversationExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetUserConversationExtensionByKeysResponse(doRPCRequest(make_shared<string>("SetUserConversationExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetUserConversationExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setUserConversationExtensionByKeys(shared_ptr<SetUserConversationExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setUserConversationExtensionByKeysWithOptions(request, runtime);
}

GetGroupByIdResponse Alibabacloud_Live-interaction20201214::Client::getGroupByIdWithOptions(shared_ptr<GetGroupByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetGroupByIdShrinkRequest> request = make_shared<GetGroupByIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetGroupByIdRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetGroupByIdResponse(doRPCRequest(make_shared<string>("GetGroupById"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGroupByIdResponse Alibabacloud_Live-interaction20201214::Client::getGroupById(shared_ptr<GetGroupByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupByIdWithOptions(request, runtime);
}

UpdateTenantStatusResponse Alibabacloud_Live-interaction20201214::Client::updateTenantStatusWithOptions(shared_ptr<UpdateTenantStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateTenantStatusResponse(doRPCRequest(make_shared<string>("UpdateTenantStatus"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateTenantStatusResponse Alibabacloud_Live-interaction20201214::Client::updateTenantStatus(shared_ptr<UpdateTenantStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTenantStatusWithOptions(request, runtime);
}

GetCommonConfigResponse Alibabacloud_Live-interaction20201214::Client::getCommonConfigWithOptions(shared_ptr<GetCommonConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCommonConfigResponse(doRPCRequest(make_shared<string>("GetCommonConfig"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCommonConfigResponse Alibabacloud_Live-interaction20201214::Client::getCommonConfig(shared_ptr<GetCommonConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommonConfigWithOptions(request, runtime);
}

SendMessageResponse Alibabacloud_Live-interaction20201214::Client::sendMessageWithOptions(shared_ptr<SendMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageShrinkRequest> request = make_shared<SendMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SendMessageRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendMessageResponse(doRPCRequest(make_shared<string>("SendMessage"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendMessageResponse Alibabacloud_Live-interaction20201214::Client::sendMessage(shared_ptr<SendMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageWithOptions(request, runtime);
}

UpdateGroupMembersRoleResponse Alibabacloud_Live-interaction20201214::Client::updateGroupMembersRoleWithOptions(shared_ptr<UpdateGroupMembersRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGroupMembersRoleShrinkRequest> request = make_shared<UpdateGroupMembersRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGroupMembersRoleRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateGroupMembersRoleResponse(doRPCRequest(make_shared<string>("UpdateGroupMembersRole"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateGroupMembersRoleResponse Alibabacloud_Live-interaction20201214::Client::updateGroupMembersRole(shared_ptr<UpdateGroupMembersRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupMembersRoleWithOptions(request, runtime);
}

CancelSilenceAllGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::cancelSilenceAllGroupMembersWithOptions(shared_ptr<CancelSilenceAllGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CancelSilenceAllGroupMembersShrinkRequest> request = make_shared<CancelSilenceAllGroupMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CancelSilenceAllGroupMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelSilenceAllGroupMembersResponse(doRPCRequest(make_shared<string>("CancelSilenceAllGroupMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelSilenceAllGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::cancelSilenceAllGroupMembers(shared_ptr<CancelSilenceAllGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelSilenceAllGroupMembersWithOptions(request, runtime);
}

UpdateGroupIconResponse Alibabacloud_Live-interaction20201214::Client::updateGroupIconWithOptions(shared_ptr<UpdateGroupIconRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGroupIconShrinkRequest> request = make_shared<UpdateGroupIconShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGroupIconRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateGroupIconResponse(doRPCRequest(make_shared<string>("UpdateGroupIcon"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateGroupIconResponse Alibabacloud_Live-interaction20201214::Client::updateGroupIcon(shared_ptr<UpdateGroupIconRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupIconWithOptions(request, runtime);
}

RemoveGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::removeGroupMembersWithOptions(shared_ptr<RemoveGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveGroupMembersShrinkRequest> request = make_shared<RemoveGroupMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveGroupMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveGroupMembersResponse(doRPCRequest(make_shared<string>("RemoveGroupMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::removeGroupMembers(shared_ptr<RemoveGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGroupMembersWithOptions(request, runtime);
}

ListGroupAllMembersResponse Alibabacloud_Live-interaction20201214::Client::listGroupAllMembersWithOptions(shared_ptr<ListGroupAllMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGroupAllMembersShrinkRequest> request = make_shared<ListGroupAllMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListGroupAllMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListGroupAllMembersResponse(doRPCRequest(make_shared<string>("ListGroupAllMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListGroupAllMembersResponse Alibabacloud_Live-interaction20201214::Client::listGroupAllMembers(shared_ptr<ListGroupAllMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupAllMembersWithOptions(request, runtime);
}

GetUserMuteSettingResponse Alibabacloud_Live-interaction20201214::Client::getUserMuteSettingWithOptions(shared_ptr<GetUserMuteSettingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserMuteSettingShrinkRequest> request = make_shared<GetUserMuteSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetUserMuteSettingRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserMuteSettingResponse(doRPCRequest(make_shared<string>("GetUserMuteSetting"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserMuteSettingResponse Alibabacloud_Live-interaction20201214::Client::getUserMuteSetting(shared_ptr<GetUserMuteSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserMuteSettingWithOptions(request, runtime);
}

GetRoomStatisticsResponse Alibabacloud_Live-interaction20201214::Client::getRoomStatisticsWithOptions(shared_ptr<GetRoomStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRoomStatisticsResponse(doRPCRequest(make_shared<string>("GetRoomStatistics"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRoomStatisticsResponse Alibabacloud_Live-interaction20201214::Client::getRoomStatistics(shared_ptr<GetRoomStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoomStatisticsWithOptions(request, runtime);
}

AddGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::addGroupMembersWithOptions(shared_ptr<AddGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGroupMembersShrinkRequest> request = make_shared<AddGroupMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddGroupMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddGroupMembersResponse(doRPCRequest(make_shared<string>("AddGroupMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddGroupMembersResponse Alibabacloud_Live-interaction20201214::Client::addGroupMembers(shared_ptr<AddGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGroupMembersWithOptions(request, runtime);
}

GetGroupMemberByIdsResponse Alibabacloud_Live-interaction20201214::Client::getGroupMemberByIdsWithOptions(shared_ptr<GetGroupMemberByIdsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetGroupMemberByIdsShrinkRequest> request = make_shared<GetGroupMemberByIdsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetGroupMemberByIdsRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetGroupMemberByIdsResponse(doRPCRequest(make_shared<string>("GetGroupMemberByIds"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGroupMemberByIdsResponse Alibabacloud_Live-interaction20201214::Client::getGroupMemberByIds(shared_ptr<GetGroupMemberByIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupMemberByIdsWithOptions(request, runtime);
}

SendCustomMessageResponse Alibabacloud_Live-interaction20201214::Client::sendCustomMessageWithOptions(shared_ptr<SendCustomMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCustomMessageResponse(doRPCRequest(make_shared<string>("SendCustomMessage"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCustomMessageResponse Alibabacloud_Live-interaction20201214::Client::sendCustomMessage(shared_ptr<SendCustomMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCustomMessageWithOptions(request, runtime);
}

UpdateAppNameResponse Alibabacloud_Live-interaction20201214::Client::updateAppNameWithOptions(shared_ptr<UpdateAppNameRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAppNameShrinkRequest> request = make_shared<UpdateAppNameShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAppNameRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppNameResponse(doRPCRequest(make_shared<string>("UpdateAppName"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppNameResponse Alibabacloud_Live-interaction20201214::Client::updateAppName(shared_ptr<UpdateAppNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppNameWithOptions(request, runtime);
}

GetIMConfigResponse Alibabacloud_Live-interaction20201214::Client::getIMConfigWithOptions(shared_ptr<GetIMConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetIMConfigResponse(doRPCRequest(make_shared<string>("GetIMConfig"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetIMConfigResponse Alibabacloud_Live-interaction20201214::Client::getIMConfig(shared_ptr<GetIMConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIMConfigWithOptions(request, runtime);
}

SetSingleChatExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setSingleChatExtensionByKeysWithOptions(shared_ptr<SetSingleChatExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetSingleChatExtensionByKeysShrinkRequest> request = make_shared<SetSingleChatExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetSingleChatExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetSingleChatExtensionByKeysResponse(doRPCRequest(make_shared<string>("SetSingleChatExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetSingleChatExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setSingleChatExtensionByKeys(shared_ptr<SetSingleChatExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSingleChatExtensionByKeysWithOptions(request, runtime);
}

UpdateAppStatusResponse Alibabacloud_Live-interaction20201214::Client::updateAppStatusWithOptions(shared_ptr<UpdateAppStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAppStatusShrinkRequest> request = make_shared<UpdateAppStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateAppStatusRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppStatusResponse(doRPCRequest(make_shared<string>("UpdateAppStatus"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppStatusResponse Alibabacloud_Live-interaction20201214::Client::updateAppStatus(shared_ptr<UpdateAppStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppStatusWithOptions(request, runtime);
}

MuteUsersResponse Alibabacloud_Live-interaction20201214::Client::muteUsersWithOptions(shared_ptr<MuteUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<MuteUsersShrinkRequest> request = make_shared<MuteUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<MuteUsersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return MuteUsersResponse(doRPCRequest(make_shared<string>("MuteUsers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

MuteUsersResponse Alibabacloud_Live-interaction20201214::Client::muteUsers(shared_ptr<MuteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return muteUsersWithOptions(request, runtime);
}

RecallMessageResponse Alibabacloud_Live-interaction20201214::Client::recallMessageWithOptions(shared_ptr<RecallMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecallMessageShrinkRequest> request = make_shared<RecallMessageShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RecallMessageRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecallMessageResponse(doRPCRequest(make_shared<string>("RecallMessage"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecallMessageResponse Alibabacloud_Live-interaction20201214::Client::recallMessage(shared_ptr<RecallMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recallMessageWithOptions(request, runtime);
}

AddGroupSilenceWhitelistResponse Alibabacloud_Live-interaction20201214::Client::addGroupSilenceWhitelistWithOptions(shared_ptr<AddGroupSilenceWhitelistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddGroupSilenceWhitelistShrinkRequest> request = make_shared<AddGroupSilenceWhitelistShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AddGroupSilenceWhitelistRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddGroupSilenceWhitelistResponse(doRPCRequest(make_shared<string>("AddGroupSilenceWhitelist"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddGroupSilenceWhitelistResponse Alibabacloud_Live-interaction20201214::Client::addGroupSilenceWhitelist(shared_ptr<AddGroupSilenceWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addGroupSilenceWhitelistWithOptions(request, runtime);
}

SetGroupOwnerResponse Alibabacloud_Live-interaction20201214::Client::setGroupOwnerWithOptions(shared_ptr<SetGroupOwnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetGroupOwnerShrinkRequest> request = make_shared<SetGroupOwnerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetGroupOwnerRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGroupOwnerResponse(doRPCRequest(make_shared<string>("SetGroupOwner"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGroupOwnerResponse Alibabacloud_Live-interaction20201214::Client::setGroupOwner(shared_ptr<SetGroupOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupOwnerWithOptions(request, runtime);
}

ListRoomUsersResponse Alibabacloud_Live-interaction20201214::Client::listRoomUsersWithOptions(shared_ptr<ListRoomUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRoomUsersResponse(doRPCRequest(make_shared<string>("ListRoomUsers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRoomUsersResponse Alibabacloud_Live-interaction20201214::Client::listRoomUsers(shared_ptr<ListRoomUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoomUsersWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_Live-interaction20201214::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAppResponse(doRPCRequest(make_shared<string>("DeleteApp"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAppResponse Alibabacloud_Live-interaction20201214::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

RemoveGroupSilenceBlacklistResponse Alibabacloud_Live-interaction20201214::Client::removeGroupSilenceBlacklistWithOptions(shared_ptr<RemoveGroupSilenceBlacklistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveGroupSilenceBlacklistShrinkRequest> request = make_shared<RemoveGroupSilenceBlacklistShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveGroupSilenceBlacklistRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveGroupSilenceBlacklistResponse(doRPCRequest(make_shared<string>("RemoveGroupSilenceBlacklist"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveGroupSilenceBlacklistResponse Alibabacloud_Live-interaction20201214::Client::removeGroupSilenceBlacklist(shared_ptr<RemoveGroupSilenceBlacklistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGroupSilenceBlacklistWithOptions(request, runtime);
}

RemoveMessageExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeMessageExtensionByKeysWithOptions(shared_ptr<RemoveMessageExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveMessageExtensionByKeysShrinkRequest> request = make_shared<RemoveMessageExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveMessageExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveMessageExtensionByKeysResponse(doRPCRequest(make_shared<string>("RemoveMessageExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveMessageExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeMessageExtensionByKeys(shared_ptr<RemoveMessageExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeMessageExtensionByKeysWithOptions(request, runtime);
}

GetMediaUploadUrlResponse Alibabacloud_Live-interaction20201214::Client::getMediaUploadUrlWithOptions(shared_ptr<GetMediaUploadUrlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMediaUploadUrlShrinkRequest> request = make_shared<GetMediaUploadUrlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetMediaUploadUrlRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaUploadUrlResponse(doRPCRequest(make_shared<string>("GetMediaUploadUrl"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaUploadUrlResponse Alibabacloud_Live-interaction20201214::Client::getMediaUploadUrl(shared_ptr<GetMediaUploadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaUploadUrlWithOptions(request, runtime);
}

BindInterconnectionUidResponse Alibabacloud_Live-interaction20201214::Client::bindInterconnectionUidWithOptions(shared_ptr<BindInterconnectionUidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BindInterconnectionUidShrinkRequest> request = make_shared<BindInterconnectionUidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<BindInterconnectionUidRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindInterconnectionUidResponse(doRPCRequest(make_shared<string>("BindInterconnectionUid"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindInterconnectionUidResponse Alibabacloud_Live-interaction20201214::Client::bindInterconnectionUid(shared_ptr<BindInterconnectionUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindInterconnectionUidWithOptions(request, runtime);
}

GetMediaUrlResponse Alibabacloud_Live-interaction20201214::Client::getMediaUrlWithOptions(shared_ptr<GetMediaUrlRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMediaUrlShrinkRequest> request = make_shared<GetMediaUrlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetMediaUrlRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMediaUrlResponse(doRPCRequest(make_shared<string>("GetMediaUrl"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMediaUrlResponse Alibabacloud_Live-interaction20201214::Client::getMediaUrl(shared_ptr<GetMediaUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaUrlWithOptions(request, runtime);
}

ImportSingleConversationResponse Alibabacloud_Live-interaction20201214::Client::importSingleConversationWithOptions(shared_ptr<ImportSingleConversationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportSingleConversationShrinkRequest> request = make_shared<ImportSingleConversationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ImportSingleConversationRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportSingleConversationResponse(doRPCRequest(make_shared<string>("ImportSingleConversation"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportSingleConversationResponse Alibabacloud_Live-interaction20201214::Client::importSingleConversation(shared_ptr<ImportSingleConversationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importSingleConversationWithOptions(request, runtime);
}

UpdateCallbackConfigResponse Alibabacloud_Live-interaction20201214::Client::updateCallbackConfigWithOptions(shared_ptr<UpdateCallbackConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateCallbackConfigShrinkRequest> request = make_shared<UpdateCallbackConfigShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateCallbackConfigRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateCallbackConfigResponse(doRPCRequest(make_shared<string>("UpdateCallbackConfig"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateCallbackConfigResponse Alibabacloud_Live-interaction20201214::Client::updateCallbackConfig(shared_ptr<UpdateCallbackConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCallbackConfigWithOptions(request, runtime);
}

BindInterconnectionCidResponse Alibabacloud_Live-interaction20201214::Client::bindInterconnectionCidWithOptions(shared_ptr<BindInterconnectionCidRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BindInterconnectionCidShrinkRequest> request = make_shared<BindInterconnectionCidShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<BindInterconnectionCidRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindInterconnectionCidResponse(doRPCRequest(make_shared<string>("BindInterconnectionCid"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindInterconnectionCidResponse Alibabacloud_Live-interaction20201214::Client::bindInterconnectionCid(shared_ptr<BindInterconnectionCidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindInterconnectionCidWithOptions(request, runtime);
}

InitTenantResponse Alibabacloud_Live-interaction20201214::Client::initTenantWithOptions(shared_ptr<InitTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitTenantResponse(doRPCRequest(make_shared<string>("InitTenant"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitTenantResponse Alibabacloud_Live-interaction20201214::Client::initTenant(shared_ptr<InitTenantRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initTenantWithOptions(request, runtime);
}

ImportGroupChatMemberResponse Alibabacloud_Live-interaction20201214::Client::importGroupChatMemberWithOptions(shared_ptr<ImportGroupChatMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportGroupChatMemberShrinkRequest> request = make_shared<ImportGroupChatMemberShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ImportGroupChatMemberRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportGroupChatMemberResponse(doRPCRequest(make_shared<string>("ImportGroupChatMember"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportGroupChatMemberResponse Alibabacloud_Live-interaction20201214::Client::importGroupChatMember(shared_ptr<ImportGroupChatMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importGroupChatMemberWithOptions(request, runtime);
}

ListGroupSilenceMembersResponse Alibabacloud_Live-interaction20201214::Client::listGroupSilenceMembersWithOptions(shared_ptr<ListGroupSilenceMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListGroupSilenceMembersShrinkRequest> request = make_shared<ListGroupSilenceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListGroupSilenceMembersRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListGroupSilenceMembersResponse(doRPCRequest(make_shared<string>("ListGroupSilenceMembers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListGroupSilenceMembersResponse Alibabacloud_Live-interaction20201214::Client::listGroupSilenceMembers(shared_ptr<ListGroupSilenceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listGroupSilenceMembersWithOptions(request, runtime);
}

RemoveGroupExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeGroupExtensionByKeysWithOptions(shared_ptr<RemoveGroupExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveGroupExtensionByKeysShrinkRequest> request = make_shared<RemoveGroupExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveGroupExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveGroupExtensionByKeysResponse(doRPCRequest(make_shared<string>("RemoveGroupExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveGroupExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeGroupExtensionByKeys(shared_ptr<RemoveGroupExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeGroupExtensionByKeysWithOptions(request, runtime);
}

SetGroupMemberExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setGroupMemberExtensionByKeysWithOptions(shared_ptr<SetGroupMemberExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetGroupMemberExtensionByKeysShrinkRequest> request = make_shared<SetGroupMemberExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetGroupMemberExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetGroupMemberExtensionByKeysResponse(doRPCRequest(make_shared<string>("SetGroupMemberExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetGroupMemberExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setGroupMemberExtensionByKeys(shared_ptr<SetGroupMemberExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setGroupMemberExtensionByKeysWithOptions(request, runtime);
}

CreateGroupResponse Alibabacloud_Live-interaction20201214::Client::createGroupWithOptions(shared_ptr<CreateGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateGroupShrinkRequest> request = make_shared<CreateGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateGroupRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateGroupResponse(doRPCRequest(make_shared<string>("CreateGroup"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateGroupResponse Alibabacloud_Live-interaction20201214::Client::createGroup(shared_ptr<CreateGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGroupWithOptions(request, runtime);
}

GetMessageByIdResponse Alibabacloud_Live-interaction20201214::Client::getMessageByIdWithOptions(shared_ptr<GetMessageByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMessageByIdShrinkRequest> request = make_shared<GetMessageByIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetMessageByIdRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetMessageByIdResponse(doRPCRequest(make_shared<string>("GetMessageById"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetMessageByIdResponse Alibabacloud_Live-interaction20201214::Client::getMessageById(shared_ptr<GetMessageByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageByIdWithOptions(request, runtime);
}

DestroyRoomResponse Alibabacloud_Live-interaction20201214::Client::destroyRoomWithOptions(shared_ptr<DestroyRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DestroyRoomResponse(doRPCRequest(make_shared<string>("DestroyRoom"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DestroyRoomResponse Alibabacloud_Live-interaction20201214::Client::destroyRoom(shared_ptr<DestroyRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return destroyRoomWithOptions(request, runtime);
}

KickOffResponse Alibabacloud_Live-interaction20201214::Client::kickOffWithOptions(shared_ptr<KickOffRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<KickOffShrinkRequest> request = make_shared<KickOffShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<KickOffRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return KickOffResponse(doRPCRequest(make_shared<string>("KickOff"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

KickOffResponse Alibabacloud_Live-interaction20201214::Client::kickOff(shared_ptr<KickOffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return kickOffWithOptions(request, runtime);
}

ListCallbackApiIdsResponse Alibabacloud_Live-interaction20201214::Client::listCallbackApiIdsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return ListCallbackApiIdsResponse(doRPCRequest(make_shared<string>("ListCallbackApiIds"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListCallbackApiIdsResponse Alibabacloud_Live-interaction20201214::Client::listCallbackApiIds() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCallbackApiIdsWithOptions(runtime);
}

SetMessageReadResponse Alibabacloud_Live-interaction20201214::Client::setMessageReadWithOptions(shared_ptr<SetMessageReadRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetMessageReadShrinkRequest> request = make_shared<SetMessageReadShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetMessageReadRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetMessageReadResponse(doRPCRequest(make_shared<string>("SetMessageRead"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetMessageReadResponse Alibabacloud_Live-interaction20201214::Client::setMessageRead(shared_ptr<SetMessageReadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMessageReadWithOptions(request, runtime);
}

UpdateMsgRecallIntervalResponse Alibabacloud_Live-interaction20201214::Client::updateMsgRecallIntervalWithOptions(shared_ptr<UpdateMsgRecallIntervalRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMsgRecallIntervalShrinkRequest> request = make_shared<UpdateMsgRecallIntervalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateMsgRecallIntervalRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateMsgRecallIntervalResponse(doRPCRequest(make_shared<string>("UpdateMsgRecallInterval"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateMsgRecallIntervalResponse Alibabacloud_Live-interaction20201214::Client::updateMsgRecallInterval(shared_ptr<UpdateMsgRecallIntervalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMsgRecallIntervalWithOptions(request, runtime);
}

SendCustomMessageToRoomUsersResponse Alibabacloud_Live-interaction20201214::Client::sendCustomMessageToRoomUsersWithOptions(shared_ptr<SendCustomMessageToRoomUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SendCustomMessageToRoomUsersResponse(doRPCRequest(make_shared<string>("SendCustomMessageToRoomUsers"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SendCustomMessageToRoomUsersResponse Alibabacloud_Live-interaction20201214::Client::sendCustomMessageToRoomUsers(shared_ptr<SendCustomMessageToRoomUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendCustomMessageToRoomUsersWithOptions(request, runtime);
}

UpdateGroupTitleResponse Alibabacloud_Live-interaction20201214::Client::updateGroupTitleWithOptions(shared_ptr<UpdateGroupTitleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateGroupTitleShrinkRequest> request = make_shared<UpdateGroupTitleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateGroupTitleRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateGroupTitleResponse(doRPCRequest(make_shared<string>("UpdateGroupTitle"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateGroupTitleResponse Alibabacloud_Live-interaction20201214::Client::updateGroupTitle(shared_ptr<UpdateGroupTitleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateGroupTitleWithOptions(request, runtime);
}

GetLoginTokenResponse Alibabacloud_Live-interaction20201214::Client::getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetLoginTokenShrinkRequest> request = make_shared<GetLoginTokenShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GetLoginTokenRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoginTokenResponse(doRPCRequest(make_shared<string>("GetLoginToken"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoginTokenResponse Alibabacloud_Live-interaction20201214::Client::getLoginToken(shared_ptr<GetLoginTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginTokenWithOptions(request, runtime);
}

QueryInterconnectionCidMappingResponse Alibabacloud_Live-interaction20201214::Client::queryInterconnectionCidMappingWithOptions(shared_ptr<QueryInterconnectionCidMappingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryInterconnectionCidMappingShrinkRequest> request = make_shared<QueryInterconnectionCidMappingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<QueryInterconnectionCidMappingRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInterconnectionCidMappingResponse(doRPCRequest(make_shared<string>("QueryInterconnectionCidMapping"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInterconnectionCidMappingResponse Alibabacloud_Live-interaction20201214::Client::queryInterconnectionCidMapping(shared_ptr<QueryInterconnectionCidMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInterconnectionCidMappingWithOptions(request, runtime);
}

DismissGroupResponse Alibabacloud_Live-interaction20201214::Client::dismissGroupWithOptions(shared_ptr<DismissGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DismissGroupShrinkRequest> request = make_shared<DismissGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DismissGroupRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DismissGroupResponse(doRPCRequest(make_shared<string>("DismissGroup"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DismissGroupResponse Alibabacloud_Live-interaction20201214::Client::dismissGroup(shared_ptr<DismissGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dismissGroupWithOptions(request, runtime);
}

ImportGroupChatConversationResponse Alibabacloud_Live-interaction20201214::Client::importGroupChatConversationWithOptions(shared_ptr<ImportGroupChatConversationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ImportGroupChatConversationShrinkRequest> request = make_shared<ImportGroupChatConversationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ImportGroupChatConversationRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportGroupChatConversationResponse(doRPCRequest(make_shared<string>("ImportGroupChatConversation"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportGroupChatConversationResponse Alibabacloud_Live-interaction20201214::Client::importGroupChatConversation(shared_ptr<ImportGroupChatConversationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importGroupChatConversationWithOptions(request, runtime);
}

CreateRoomResponse Alibabacloud_Live-interaction20201214::Client::createRoomWithOptions(shared_ptr<CreateRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRoomResponse(doRPCRequest(make_shared<string>("CreateRoom"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRoomResponse Alibabacloud_Live-interaction20201214::Client::createRoom(shared_ptr<CreateRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoomWithOptions(request, runtime);
}

RemoveUserConversationExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeUserConversationExtensionByKeysWithOptions(shared_ptr<RemoveUserConversationExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveUserConversationExtensionByKeysShrinkRequest> request = make_shared<RemoveUserConversationExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RemoveUserConversationExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveUserConversationExtensionByKeysResponse(doRPCRequest(make_shared<string>("RemoveUserConversationExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveUserConversationExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::removeUserConversationExtensionByKeys(shared_ptr<RemoveUserConversationExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUserConversationExtensionByKeysWithOptions(request, runtime);
}

SetMessageExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setMessageExtensionByKeysWithOptions(shared_ptr<SetMessageExtensionByKeysRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetMessageExtensionByKeysShrinkRequest> request = make_shared<SetMessageExtensionByKeysShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SetMessageExtensionByKeysRequestRequestParams>(tmpReq->requestParams)) {
    request->requestParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->requestParams->toMap()), make_shared<string>("RequestParams"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetMessageExtensionByKeysResponse(doRPCRequest(make_shared<string>("SetMessageExtensionByKeys"), make_shared<string>("2020-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetMessageExtensionByKeysResponse Alibabacloud_Live-interaction20201214::Client::setMessageExtensionByKeys(shared_ptr<SetMessageExtensionByKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMessageExtensionByKeysWithOptions(request, runtime);
}

