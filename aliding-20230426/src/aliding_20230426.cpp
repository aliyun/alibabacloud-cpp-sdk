// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aliding_20230426.hpp>
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

using namespace Alibabacloud_Aliding20230426;

Alibabacloud_Aliding20230426::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aliding"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aliding20230426::Client::getEndpoint(shared_ptr<string> productId,
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

AddAttendeeResponse Alibabacloud_Aliding20230426::Client::addAttendeeWithOptions(shared_ptr<AddAttendeeRequest> tmpReq, shared_ptr<AddAttendeeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddAttendeeShrinkRequest> request = make_shared<AddAttendeeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddAttendeeShrinkHeaders> headers = make_shared<AddAttendeeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddAttendeeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddAttendeeRequestAttendeesToAdd>>(tmpReq->attendeesToAdd)) {
    request->attendeesToAddShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attendeesToAdd, make_shared<string>("AttendeesToAdd"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attendeesToAddShrink)) {
    body->insert(pair<string, string>("AttendeesToAdd", *request->attendeesToAddShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->chatNotification)) {
    body->insert(pair<string, bool>("chatNotification", *request->chatNotification));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pushNotification)) {
    body->insert(pair<string, bool>("pushNotification", *request->pushNotification));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAttendee"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/addAttendee"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAttendeeResponse(callApi(params, req, runtime));
}

AddAttendeeResponse Alibabacloud_Aliding20230426::Client::addAttendee(shared_ptr<AddAttendeeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddAttendeeHeaders> headers = make_shared<AddAttendeeHeaders>();
  return addAttendeeWithOptions(request, headers, runtime);
}

AddDriveSpaceResponse Alibabacloud_Aliding20230426::Client::addDriveSpaceWithOptions(shared_ptr<AddDriveSpaceRequest> tmpReq, shared_ptr<AddDriveSpaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddDriveSpaceShrinkRequest> request = make_shared<AddDriveSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddDriveSpaceShrinkHeaders> headers = make_shared<AddDriveSpaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddDriveSpaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddDriveSpaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDriveSpace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/addDriveSpace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDriveSpaceResponse(callApi(params, req, runtime));
}

AddDriveSpaceResponse Alibabacloud_Aliding20230426::Client::addDriveSpace(shared_ptr<AddDriveSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddDriveSpaceHeaders> headers = make_shared<AddDriveSpaceHeaders>();
  return addDriveSpaceWithOptions(request, headers, runtime);
}

AddMeetingRoomsResponse Alibabacloud_Aliding20230426::Client::addMeetingRoomsWithOptions(shared_ptr<AddMeetingRoomsRequest> tmpReq, shared_ptr<AddMeetingRoomsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddMeetingRoomsShrinkRequest> request = make_shared<AddMeetingRoomsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddMeetingRoomsShrinkHeaders> headers = make_shared<AddMeetingRoomsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddMeetingRoomsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddMeetingRoomsRequestMeetingRoomsToAdd>>(tmpReq->meetingRoomsToAdd)) {
    request->meetingRoomsToAddShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->meetingRoomsToAdd, make_shared<string>("MeetingRoomsToAdd"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meetingRoomsToAddShrink)) {
    body->insert(pair<string, string>("MeetingRoomsToAdd", *request->meetingRoomsToAddShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMeetingRooms"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/addMeetingRooms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMeetingRoomsResponse(callApi(params, req, runtime));
}

AddMeetingRoomsResponse Alibabacloud_Aliding20230426::Client::addMeetingRooms(shared_ptr<AddMeetingRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddMeetingRoomsHeaders> headers = make_shared<AddMeetingRoomsHeaders>();
  return addMeetingRoomsWithOptions(request, headers, runtime);
}

AddScenegroupMemberResponse Alibabacloud_Aliding20230426::Client::addScenegroupMemberWithOptions(shared_ptr<AddScenegroupMemberRequest> request, shared_ptr<AddScenegroupMemberHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<AddScenegroupMemberShrinkHeaders> headers = make_shared<AddScenegroupMemberShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddScenegroupMemberHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    body->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddScenegroupMember"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/addScenegroupMember"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddScenegroupMemberResponse(callApi(params, req, runtime));
}

AddScenegroupMemberResponse Alibabacloud_Aliding20230426::Client::addScenegroupMember(shared_ptr<AddScenegroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddScenegroupMemberHeaders> headers = make_shared<AddScenegroupMemberHeaders>();
  return addScenegroupMemberWithOptions(request, headers, runtime);
}

AddWorkspaceResponse Alibabacloud_Aliding20230426::Client::addWorkspaceWithOptions(shared_ptr<AddWorkspaceRequest> tmpReq, shared_ptr<AddWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddWorkspaceShrinkRequest> request = make_shared<AddWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddWorkspaceShrinkHeaders> headers = make_shared<AddWorkspaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/addWorkspace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceResponse(callApi(params, req, runtime));
}

AddWorkspaceResponse Alibabacloud_Aliding20230426::Client::addWorkspace(shared_ptr<AddWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddWorkspaceHeaders> headers = make_shared<AddWorkspaceHeaders>();
  return addWorkspaceWithOptions(request, headers, runtime);
}

AddWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceDocMembersWithOptions(shared_ptr<AddWorkspaceDocMembersRequest> tmpReq, shared_ptr<AddWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddWorkspaceDocMembersShrinkRequest> request = make_shared<AddWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddWorkspaceDocMembersShrinkHeaders> headers = make_shared<AddWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/addWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

AddWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceDocMembers(shared_ptr<AddWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddWorkspaceDocMembersHeaders> headers = make_shared<AddWorkspaceDocMembersHeaders>();
  return addWorkspaceDocMembersWithOptions(request, headers, runtime);
}

AddWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceMembersWithOptions(shared_ptr<AddWorkspaceMembersRequest> tmpReq, shared_ptr<AddWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddWorkspaceMembersShrinkRequest> request = make_shared<AddWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<AddWorkspaceMembersShrinkHeaders> headers = make_shared<AddWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AddWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/addWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddWorkspaceMembersResponse(callApi(params, req, runtime));
}

AddWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::addWorkspaceMembers(shared_ptr<AddWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddWorkspaceMembersHeaders> headers = make_shared<AddWorkspaceMembersHeaders>();
  return addWorkspaceMembersWithOptions(request, headers, runtime);
}

BatchGetFormDataByIdListResponse Alibabacloud_Aliding20230426::Client::batchGetFormDataByIdListWithOptions(shared_ptr<BatchGetFormDataByIdListRequest> tmpReq, shared_ptr<BatchGetFormDataByIdListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetFormDataByIdListShrinkRequest> request = make_shared<BatchGetFormDataByIdListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<BatchGetFormDataByIdListShrinkHeaders> headers = make_shared<BatchGetFormDataByIdListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<BatchGetFormDataByIdListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->formInstanceIdList)) {
    request->formInstanceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->formInstanceIdList, make_shared<string>("FormInstanceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceIdListShrink)) {
    body->insert(pair<string, string>("FormInstanceIdList", *request->formInstanceIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needFormInstanceValue)) {
    body->insert(pair<string, bool>("NeedFormInstanceValue", *request->needFormInstanceValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetFormDataByIdList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/batchGetFormDataByIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetFormDataByIdListResponse(callApi(params, req, runtime));
}

BatchGetFormDataByIdListResponse Alibabacloud_Aliding20230426::Client::batchGetFormDataByIdList(shared_ptr<BatchGetFormDataByIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchGetFormDataByIdListHeaders> headers = make_shared<BatchGetFormDataByIdListHeaders>();
  return batchGetFormDataByIdListWithOptions(request, headers, runtime);
}

BatchRemovalByFormInstanceIdListResponse Alibabacloud_Aliding20230426::Client::batchRemovalByFormInstanceIdListWithOptions(shared_ptr<BatchRemovalByFormInstanceIdListRequest> tmpReq, shared_ptr<BatchRemovalByFormInstanceIdListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchRemovalByFormInstanceIdListShrinkRequest> request = make_shared<BatchRemovalByFormInstanceIdListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<BatchRemovalByFormInstanceIdListShrinkHeaders> headers = make_shared<BatchRemovalByFormInstanceIdListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<BatchRemovalByFormInstanceIdListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->formInstanceIdList)) {
    request->formInstanceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->formInstanceIdList, make_shared<string>("FormInstanceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asynchronousExecution)) {
    body->insert(pair<string, bool>("AsynchronousExecution", *request->asynchronousExecution));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->executeExpression)) {
    body->insert(pair<string, bool>("ExecuteExpression", *request->executeExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceIdListShrink)) {
    body->insert(pair<string, string>("FormInstanceIdList", *request->formInstanceIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchRemovalByFormInstanceIdList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/batchRemovalByFormInstanceIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchRemovalByFormInstanceIdListResponse(callApi(params, req, runtime));
}

BatchRemovalByFormInstanceIdListResponse Alibabacloud_Aliding20230426::Client::batchRemovalByFormInstanceIdList(shared_ptr<BatchRemovalByFormInstanceIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchRemovalByFormInstanceIdListHeaders> headers = make_shared<BatchRemovalByFormInstanceIdListHeaders>();
  return batchRemovalByFormInstanceIdListWithOptions(request, headers, runtime);
}

BatchSaveFormDataResponse Alibabacloud_Aliding20230426::Client::batchSaveFormDataWithOptions(shared_ptr<BatchSaveFormDataRequest> tmpReq, shared_ptr<BatchSaveFormDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchSaveFormDataShrinkRequest> request = make_shared<BatchSaveFormDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<BatchSaveFormDataShrinkHeaders> headers = make_shared<BatchSaveFormDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<BatchSaveFormDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->formDataJsonList)) {
    request->formDataJsonListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->formDataJsonList, make_shared<string>("FormDataJsonList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asynchronousExecution)) {
    body->insert(pair<string, bool>("AsynchronousExecution", *request->asynchronousExecution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJsonListShrink)) {
    body->insert(pair<string, string>("FormDataJsonList", *request->formDataJsonListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->keepRunningAfterException)) {
    body->insert(pair<string, bool>("KeepRunningAfterException", *request->keepRunningAfterException));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noExecuteExpression)) {
    body->insert(pair<string, bool>("NoExecuteExpression", *request->noExecuteExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSaveFormData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/batchSaveFormData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSaveFormDataResponse(callApi(params, req, runtime));
}

BatchSaveFormDataResponse Alibabacloud_Aliding20230426::Client::batchSaveFormData(shared_ptr<BatchSaveFormDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchSaveFormDataHeaders> headers = make_shared<BatchSaveFormDataHeaders>();
  return batchSaveFormDataWithOptions(request, headers, runtime);
}

BatchUpdateFormDataByInstanceIdResponse Alibabacloud_Aliding20230426::Client::batchUpdateFormDataByInstanceIdWithOptions(shared_ptr<BatchUpdateFormDataByInstanceIdRequest> tmpReq, shared_ptr<BatchUpdateFormDataByInstanceIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUpdateFormDataByInstanceIdShrinkRequest> request = make_shared<BatchUpdateFormDataByInstanceIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<BatchUpdateFormDataByInstanceIdShrinkHeaders> headers = make_shared<BatchUpdateFormDataByInstanceIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<BatchUpdateFormDataByInstanceIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->formInstanceIdList)) {
    request->formInstanceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->formInstanceIdList, make_shared<string>("FormInstanceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asynchronousExecution)) {
    body->insert(pair<string, bool>("AsynchronousExecution", *request->asynchronousExecution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceIdListShrink)) {
    body->insert(pair<string, string>("FormInstanceIdList", *request->formInstanceIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreEmpty)) {
    body->insert(pair<string, bool>("IgnoreEmpty", *request->ignoreEmpty));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noExecuteExpression)) {
    body->insert(pair<string, bool>("NoExecuteExpression", *request->noExecuteExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateFormDataJson)) {
    body->insert(pair<string, string>("UpdateFormDataJson", *request->updateFormDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useLatestFormSchemaVersion)) {
    body->insert(pair<string, bool>("UseLatestFormSchemaVersion", *request->useLatestFormSchemaVersion));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateFormDataByInstanceId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/batchUpdateFormDataByInstanceId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateFormDataByInstanceIdResponse(callApi(params, req, runtime));
}

BatchUpdateFormDataByInstanceIdResponse Alibabacloud_Aliding20230426::Client::batchUpdateFormDataByInstanceId(shared_ptr<BatchUpdateFormDataByInstanceIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchUpdateFormDataByInstanceIdHeaders> headers = make_shared<BatchUpdateFormDataByInstanceIdHeaders>();
  return batchUpdateFormDataByInstanceIdWithOptions(request, headers, runtime);
}

BatchUpdateFormDataByInstanceMapResponse Alibabacloud_Aliding20230426::Client::batchUpdateFormDataByInstanceMapWithOptions(shared_ptr<BatchUpdateFormDataByInstanceMapRequest> tmpReq, shared_ptr<BatchUpdateFormDataByInstanceMapHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchUpdateFormDataByInstanceMapShrinkRequest> request = make_shared<BatchUpdateFormDataByInstanceMapShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<BatchUpdateFormDataByInstanceMapShrinkHeaders> headers = make_shared<BatchUpdateFormDataByInstanceMapShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<BatchUpdateFormDataByInstanceMapHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->updateFormDataJsonMap)) {
    request->updateFormDataJsonMapShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->updateFormDataJsonMap, make_shared<string>("UpdateFormDataJsonMap"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asynchronousExecution)) {
    body->insert(pair<string, bool>("AsynchronousExecution", *request->asynchronousExecution));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreEmpty)) {
    body->insert(pair<string, bool>("IgnoreEmpty", *request->ignoreEmpty));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noExecuteExpression)) {
    body->insert(pair<string, bool>("NoExecuteExpression", *request->noExecuteExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateFormDataJsonMapShrink)) {
    body->insert(pair<string, string>("UpdateFormDataJsonMap", *request->updateFormDataJsonMapShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useLatestFormSchemaVersion)) {
    body->insert(pair<string, bool>("UseLatestFormSchemaVersion", *request->useLatestFormSchemaVersion));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateFormDataByInstanceMap"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/batchUpdateFormDataByInstanceMap"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateFormDataByInstanceMapResponse(callApi(params, req, runtime));
}

BatchUpdateFormDataByInstanceMapResponse Alibabacloud_Aliding20230426::Client::batchUpdateFormDataByInstanceMap(shared_ptr<BatchUpdateFormDataByInstanceMapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BatchUpdateFormDataByInstanceMapHeaders> headers = make_shared<BatchUpdateFormDataByInstanceMapHeaders>();
  return batchUpdateFormDataByInstanceMapWithOptions(request, headers, runtime);
}

CancelScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::cancelScheduleConferenceWithOptions(shared_ptr<CancelScheduleConferenceRequest> tmpReq, shared_ptr<CancelScheduleConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CancelScheduleConferenceShrinkRequest> request = make_shared<CancelScheduleConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CancelScheduleConferenceShrinkHeaders> headers = make_shared<CancelScheduleConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CancelScheduleConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CancelScheduleConferenceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConferenceId)) {
    body->insert(pair<string, string>("ScheduleConferenceId", *request->scheduleConferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelScheduleConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/cancelScheduleConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelScheduleConferenceResponse(callApi(params, req, runtime));
}

CancelScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::cancelScheduleConference(shared_ptr<CancelScheduleConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CancelScheduleConferenceHeaders> headers = make_shared<CancelScheduleConferenceHeaders>();
  return cancelScheduleConferenceWithOptions(request, headers, runtime);
}

CheckAlibabaStaffResponse Alibabacloud_Aliding20230426::Client::checkAlibabaStaffWithOptions(shared_ptr<CheckAlibabaStaffRequest> tmpReq, shared_ptr<CheckAlibabaStaffHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CheckAlibabaStaffShrinkRequest> request = make_shared<CheckAlibabaStaffShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CheckAlibabaStaffShrinkHeaders> headers = make_shared<CheckAlibabaStaffShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CheckAlibabaStaffHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CheckAlibabaStaffRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    body->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAlibabaStaff"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/checkAlibabaStaff"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAlibabaStaffResponse(callApi(params, req, runtime));
}

CheckAlibabaStaffResponse Alibabacloud_Aliding20230426::Client::checkAlibabaStaff(shared_ptr<CheckAlibabaStaffRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CheckAlibabaStaffHeaders> headers = make_shared<CheckAlibabaStaffHeaders>();
  return checkAlibabaStaffWithOptions(request, headers, runtime);
}

CheckUserIsGroupMemberResponse Alibabacloud_Aliding20230426::Client::checkUserIsGroupMemberWithOptions(shared_ptr<CheckUserIsGroupMemberRequest> request, shared_ptr<CheckUserIsGroupMemberHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<CheckUserIsGroupMemberShrinkHeaders> headers = make_shared<CheckUserIsGroupMemberShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CheckUserIsGroupMemberHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUserIsGroupMember"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/checkUserIsGroupMember"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUserIsGroupMemberResponse(callApi(params, req, runtime));
}

CheckUserIsGroupMemberResponse Alibabacloud_Aliding20230426::Client::checkUserIsGroupMember(shared_ptr<CheckUserIsGroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CheckUserIsGroupMemberHeaders> headers = make_shared<CheckUserIsGroupMemberHeaders>();
  return checkUserIsGroupMemberWithOptions(request, headers, runtime);
}

ClearResponse Alibabacloud_Aliding20230426::Client::clearWithOptions(shared_ptr<ClearRequest> tmpReq, shared_ptr<ClearHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ClearShrinkRequest> request = make_shared<ClearShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ClearShrinkHeaders> headers = make_shared<ClearShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ClearHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ClearRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rangeAddress)) {
    body->insert(pair<string, string>("RangeAddress", *request->rangeAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Clear"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/clear"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearResponse(callApi(params, req, runtime));
}

ClearResponse Alibabacloud_Aliding20230426::Client::clear(shared_ptr<ClearRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ClearHeaders> headers = make_shared<ClearHeaders>();
  return clearWithOptions(request, headers, runtime);
}

ClearDataResponse Alibabacloud_Aliding20230426::Client::clearDataWithOptions(shared_ptr<ClearDataRequest> tmpReq, shared_ptr<ClearDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ClearDataShrinkRequest> request = make_shared<ClearDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ClearDataShrinkHeaders> headers = make_shared<ClearDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ClearDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ClearDataRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rangeAddress)) {
    body->insert(pair<string, string>("RangeAddress", *request->rangeAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/clearData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearDataResponse(callApi(params, req, runtime));
}

ClearDataResponse Alibabacloud_Aliding20230426::Client::clearData(shared_ptr<ClearDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ClearDataHeaders> headers = make_shared<ClearDataHeaders>();
  return clearDataWithOptions(request, headers, runtime);
}

CloseVideoConferenceResponse Alibabacloud_Aliding20230426::Client::closeVideoConferenceWithOptions(shared_ptr<CloseVideoConferenceRequest> tmpReq, shared_ptr<CloseVideoConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CloseVideoConferenceShrinkRequest> request = make_shared<CloseVideoConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CloseVideoConferenceShrinkHeaders> headers = make_shared<CloseVideoConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CloseVideoConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CloseVideoConferenceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseVideoConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/closeVideoConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseVideoConferenceResponse(callApi(params, req, runtime));
}

CloseVideoConferenceResponse Alibabacloud_Aliding20230426::Client::closeVideoConference(shared_ptr<CloseVideoConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CloseVideoConferenceHeaders> headers = make_shared<CloseVideoConferenceHeaders>();
  return closeVideoConferenceWithOptions(request, headers, runtime);
}

CommentListReportResponse Alibabacloud_Aliding20230426::Client::commentListReportWithOptions(shared_ptr<CommentListReportRequest> tmpReq, shared_ptr<CommentListReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CommentListReportShrinkRequest> request = make_shared<CommentListReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CommentListReportShrinkHeaders> headers = make_shared<CommentListReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CommentListReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CommentListReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    body->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommentListReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/commentListReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommentListReportResponse(callApi(params, req, runtime));
}

CommentListReportResponse Alibabacloud_Aliding20230426::Client::commentListReport(shared_ptr<CommentListReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommentListReportHeaders> headers = make_shared<CommentListReportHeaders>();
  return commentListReportWithOptions(request, headers, runtime);
}

CommitFileResponse Alibabacloud_Aliding20230426::Client::commitFileWithOptions(shared_ptr<CommitFileRequest> tmpReq, shared_ptr<CommitFileHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CommitFileShrinkRequest> request = make_shared<CommitFileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CommitFileShrinkHeaders> headers = make_shared<CommitFileShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CommitFileHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CommitFileRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CommitFileRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDentryUuid)) {
    body->insert(pair<string, string>("ParentDentryUuid", *request->parentDentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadKey)) {
    body->insert(pair<string, string>("UploadKey", *request->uploadKey));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitFile"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/commitFile"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommitFileResponse(callApi(params, req, runtime));
}

CommitFileResponse Alibabacloud_Aliding20230426::Client::commitFile(shared_ptr<CommitFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommitFileHeaders> headers = make_shared<CommitFileHeaders>();
  return commitFileWithOptions(request, headers, runtime);
}

CreateDeliveryPlanResponse Alibabacloud_Aliding20230426::Client::createDeliveryPlanWithOptions(shared_ptr<CreateDeliveryPlanRequest> tmpReq, shared_ptr<CreateDeliveryPlanHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDeliveryPlanShrinkRequest> request = make_shared<CreateDeliveryPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateDeliveryPlanShrinkHeaders> headers = make_shared<CreateDeliveryPlanShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryPlanHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDeliveryPlanRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("UserIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    body->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resId)) {
    body->insert(pair<string, string>("ResId", *request->resId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("UserIdList", *request->userIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeliveryPlan"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/createDeliveryPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeliveryPlanResponse(callApi(params, req, runtime));
}

CreateDeliveryPlanResponse Alibabacloud_Aliding20230426::Client::createDeliveryPlan(shared_ptr<CreateDeliveryPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDeliveryPlanHeaders> headers = make_shared<CreateDeliveryPlanHeaders>();
  return createDeliveryPlanWithOptions(request, headers, runtime);
}

CreateDingtalkPersonalTodoTaskResponse Alibabacloud_Aliding20230426::Client::createDingtalkPersonalTodoTaskWithOptions(shared_ptr<CreateDingtalkPersonalTodoTaskRequest> tmpReq, shared_ptr<CreateDingtalkPersonalTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDingtalkPersonalTodoTaskShrinkRequest> request = make_shared<CreateDingtalkPersonalTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateDingtalkPersonalTodoTaskShrinkHeaders> headers = make_shared<CreateDingtalkPersonalTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateDingtalkPersonalTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("ExecutorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDingtalkPersonalTodoTaskRequestNotifyConfigs>(tmpReq->notifyConfigs)) {
    request->notifyConfigsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifyConfigs, make_shared<string>("NotifyConfigs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("ParticipantIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateDingtalkPersonalTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("DueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("ExecutorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyConfigsShrink)) {
    body->insert(pair<string, string>("NotifyConfigs", *request->notifyConfigsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("ParticipantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userToken)) {
    body->insert(pair<string, string>("UserToken", *request->userToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDingtalkPersonalTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/createDingtalkPersonalTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDingtalkPersonalTodoTaskResponse(callApi(params, req, runtime));
}

CreateDingtalkPersonalTodoTaskResponse Alibabacloud_Aliding20230426::Client::createDingtalkPersonalTodoTask(shared_ptr<CreateDingtalkPersonalTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateDingtalkPersonalTodoTaskHeaders> headers = make_shared<CreateDingtalkPersonalTodoTaskHeaders>();
  return createDingtalkPersonalTodoTaskWithOptions(request, headers, runtime);
}

CreateEventResponse Alibabacloud_Aliding20230426::Client::createEventWithOptions(shared_ptr<CreateEventRequest> tmpReq, shared_ptr<CreateEventHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEventShrinkRequest> request = make_shared<CreateEventShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateEventShrinkHeaders> headers = make_shared<CreateEventShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateEventHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventRequestAttendees>>(tmpReq->attendees)) {
    request->attendeesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attendees, make_shared<string>("Attendees"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventRequestCardInstances>>(tmpReq->cardInstances)) {
    request->cardInstancesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cardInstances, make_shared<string>("CardInstances"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestEnd>(tmpReq->end)) {
    request->endShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->end, make_shared<string>("End"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("Extra"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestLocation>(tmpReq->location)) {
    request->locationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->location, make_shared<string>("Location"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestOnlineMeetingInfo>(tmpReq->onlineMeetingInfo)) {
    request->onlineMeetingInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->onlineMeetingInfo, make_shared<string>("OnlineMeetingInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestRecurrence>(tmpReq->recurrence)) {
    request->recurrenceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recurrence, make_shared<string>("Recurrence"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventRequestReminders>>(tmpReq->reminders)) {
    request->remindersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reminders, make_shared<string>("Reminders"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestRichTextDescription>(tmpReq->richTextDescription)) {
    request->richTextDescriptionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->richTextDescription, make_shared<string>("RichTextDescription"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventRequestUiConfigs>>(tmpReq->uiConfigs)) {
    request->uiConfigsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->uiConfigs, make_shared<string>("UiConfigs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventRequestStart>(tmpReq->start)) {
    request->startShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->start, make_shared<string>("start"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attendeesShrink)) {
    body->insert(pair<string, string>("Attendees", *request->attendeesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardInstancesShrink)) {
    body->insert(pair<string, string>("CardInstances", *request->cardInstancesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endShrink)) {
    body->insert(pair<string, string>("End", *request->endShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("Extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAllDay)) {
    body->insert(pair<string, bool>("IsAllDay", *request->isAllDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationShrink)) {
    body->insert(pair<string, string>("Location", *request->locationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlineMeetingInfoShrink)) {
    body->insert(pair<string, string>("OnlineMeetingInfo", *request->onlineMeetingInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceShrink)) {
    body->insert(pair<string, string>("Recurrence", *request->recurrenceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindersShrink)) {
    body->insert(pair<string, string>("Reminders", *request->remindersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->richTextDescriptionShrink)) {
    body->insert(pair<string, string>("RichTextDescription", *request->richTextDescriptionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    body->insert(pair<string, string>("Summary", *request->summary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uiConfigsShrink)) {
    body->insert(pair<string, string>("UiConfigs", *request->uiConfigsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("calendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startShrink)) {
    body->insert(pair<string, string>("start", *request->startShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEvent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/createEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventResponse(callApi(params, req, runtime));
}

CreateEventResponse Alibabacloud_Aliding20230426::Client::createEvent(shared_ptr<CreateEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateEventHeaders> headers = make_shared<CreateEventHeaders>();
  return createEventWithOptions(request, headers, runtime);
}

CreateLiveResponse Alibabacloud_Aliding20230426::Client::createLiveWithOptions(shared_ptr<CreateLiveRequest> tmpReq, shared_ptr<CreateLiveHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveShrinkRequest> request = make_shared<CreateLiveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateLiveShrinkHeaders> headers = make_shared<CreateLiveShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateLiveHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLiveRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    body->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->introduction)) {
    body->insert(pair<string, string>("Introduction", *request->introduction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preEndTime)) {
    body->insert(pair<string, long>("PreEndTime", *request->preEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preStartTime)) {
    body->insert(pair<string, long>("PreStartTime", *request->preStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->publicType)) {
    body->insert(pair<string, long>("PublicType", *request->publicType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLive"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/createLive"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveResponse(callApi(params, req, runtime));
}

CreateLiveResponse Alibabacloud_Aliding20230426::Client::createLive(shared_ptr<CreateLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateLiveHeaders> headers = make_shared<CreateLiveHeaders>();
  return createLiveWithOptions(request, headers, runtime);
}

CreateMeetingRoomResponse Alibabacloud_Aliding20230426::Client::createMeetingRoomWithOptions(shared_ptr<CreateMeetingRoomRequest> tmpReq, shared_ptr<CreateMeetingRoomHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMeetingRoomShrinkRequest> request = make_shared<CreateMeetingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateMeetingRoomShrinkHeaders> headers = make_shared<CreateMeetingRoomShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomRequestReservationAuthority>(tmpReq->reservationAuthority)) {
    request->reservationAuthorityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reservationAuthority, make_shared<string>("ReservationAuthority"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->roomLabelIds)) {
    request->roomLabelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomLabelIds, make_shared<string>("RoomLabelIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomRequestRoomLocation>(tmpReq->roomLocation)) {
    request->roomLocationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomLocation, make_shared<string>("RoomLocation"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCycleReservation)) {
    body->insert(pair<string, bool>("EnableCycleReservation", *request->enableCycleReservation));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvRoomId)) {
    body->insert(pair<string, string>("IsvRoomId", *request->isvRoomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservationAuthorityShrink)) {
    body->insert(pair<string, string>("ReservationAuthority", *request->reservationAuthorityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomCapacity)) {
    body->insert(pair<string, long>("RoomCapacity", *request->roomCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomLabelIdsShrink)) {
    body->insert(pair<string, string>("RoomLabelIds", *request->roomLabelIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomLocationShrink)) {
    body->insert(pair<string, string>("RoomLocation", *request->roomLocationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomName)) {
    body->insert(pair<string, string>("RoomName", *request->roomName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomPicture)) {
    body->insert(pair<string, string>("RoomPicture", *request->roomPicture));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomStatus)) {
    body->insert(pair<string, long>("RoomStatus", *request->roomStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMeetingRoom"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/createMeetingRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMeetingRoomResponse(callApi(params, req, runtime));
}

CreateMeetingRoomResponse Alibabacloud_Aliding20230426::Client::createMeetingRoom(shared_ptr<CreateMeetingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateMeetingRoomHeaders> headers = make_shared<CreateMeetingRoomHeaders>();
  return createMeetingRoomWithOptions(request, headers, runtime);
}

CreateMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::createMeetingRoomGroupWithOptions(shared_ptr<CreateMeetingRoomGroupRequest> tmpReq, shared_ptr<CreateMeetingRoomGroupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMeetingRoomGroupShrinkRequest> request = make_shared<CreateMeetingRoomGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateMeetingRoomGroupShrinkHeaders> headers = make_shared<CreateMeetingRoomGroupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomGroupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateMeetingRoomGroupRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentGroupId)) {
    body->insert(pair<string, long>("ParentGroupId", *request->parentGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMeetingRoomGroup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/createMeetingRoomGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMeetingRoomGroupResponse(callApi(params, req, runtime));
}

CreateMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::createMeetingRoomGroup(shared_ptr<CreateMeetingRoomGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateMeetingRoomGroupHeaders> headers = make_shared<CreateMeetingRoomGroupHeaders>();
  return createMeetingRoomGroupWithOptions(request, headers, runtime);
}

CreateOrUpdateFormDataResponse Alibabacloud_Aliding20230426::Client::createOrUpdateFormDataWithOptions(shared_ptr<CreateOrUpdateFormDataRequest> request, shared_ptr<CreateOrUpdateFormDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<CreateOrUpdateFormDataShrinkHeaders> headers = make_shared<CreateOrUpdateFormDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateOrUpdateFormDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJson)) {
    body->insert(pair<string, string>("FormDataJson", *request->formDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noExecuteExpression)) {
    body->insert(pair<string, bool>("NoExecuteExpression", *request->noExecuteExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchCondition)) {
    body->insert(pair<string, string>("SearchCondition", *request->searchCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrUpdateFormData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/createOrUpdateFormData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrUpdateFormDataResponse(callApi(params, req, runtime));
}

CreateOrUpdateFormDataResponse Alibabacloud_Aliding20230426::Client::createOrUpdateFormData(shared_ptr<CreateOrUpdateFormDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateOrUpdateFormDataHeaders> headers = make_shared<CreateOrUpdateFormDataHeaders>();
  return createOrUpdateFormDataWithOptions(request, headers, runtime);
}

CreateOrgHonorTemplateResponse Alibabacloud_Aliding20230426::Client::createOrgHonorTemplateWithOptions(shared_ptr<CreateOrgHonorTemplateRequest> tmpReq, shared_ptr<CreateOrgHonorTemplateHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOrgHonorTemplateShrinkRequest> request = make_shared<CreateOrgHonorTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateOrgHonorTemplateShrinkHeaders> headers = make_shared<CreateOrgHonorTemplateShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateOrgHonorTemplateHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateOrgHonorTemplateRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarFrameMediaId)) {
    body->insert(pair<string, string>("avatarFrameMediaId", *request->avatarFrameMediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultBgColor)) {
    body->insert(pair<string, string>("defaultBgColor", *request->defaultBgColor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->medalDesc)) {
    body->insert(pair<string, string>("medalDesc", *request->medalDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->medalMediaId)) {
    body->insert(pair<string, string>("medalMediaId", *request->medalMediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->medalName)) {
    body->insert(pair<string, string>("medalName", *request->medalName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOrgHonorTemplate"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/createOrgHonorTemplate"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOrgHonorTemplateResponse(callApi(params, req, runtime));
}

CreateOrgHonorTemplateResponse Alibabacloud_Aliding20230426::Client::createOrgHonorTemplate(shared_ptr<CreateOrgHonorTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateOrgHonorTemplateHeaders> headers = make_shared<CreateOrgHonorTemplateHeaders>();
  return createOrgHonorTemplateWithOptions(request, headers, runtime);
}

CreatePersonalTodoTaskResponse Alibabacloud_Aliding20230426::Client::createPersonalTodoTaskWithOptions(shared_ptr<CreatePersonalTodoTaskRequest> tmpReq, shared_ptr<CreatePersonalTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreatePersonalTodoTaskShrinkRequest> request = make_shared<CreatePersonalTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreatePersonalTodoTaskShrinkHeaders> headers = make_shared<CreatePersonalTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreatePersonalTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("ExecutorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePersonalTodoTaskRequestNotifyConfigs>(tmpReq->notifyConfigs)) {
    request->notifyConfigsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifyConfigs, make_shared<string>("NotifyConfigs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("ParticipantIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreatePersonalTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("DueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("ExecutorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyConfigsShrink)) {
    body->insert(pair<string, string>("NotifyConfigs", *request->notifyConfigsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("ParticipantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("Subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePersonalTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/createPersonalTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePersonalTodoTaskResponse(callApi(params, req, runtime));
}

CreatePersonalTodoTaskResponse Alibabacloud_Aliding20230426::Client::createPersonalTodoTask(shared_ptr<CreatePersonalTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreatePersonalTodoTaskHeaders> headers = make_shared<CreatePersonalTodoTaskHeaders>();
  return createPersonalTodoTaskWithOptions(request, headers, runtime);
}

CreateReportResponse Alibabacloud_Aliding20230426::Client::createReportWithOptions(shared_ptr<CreateReportRequest> tmpReq, shared_ptr<CreateReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateReportShrinkRequest> request = make_shared<CreateReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateReportShrinkHeaders> headers = make_shared<CreateReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateReportRequestContents>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("Contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->toCids)) {
    request->toCidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->toCids, make_shared<string>("ToCids"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->toUserids)) {
    request->toUseridsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->toUserids, make_shared<string>("ToUserids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("Contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddFrom)) {
    body->insert(pair<string, string>("DdFrom", *request->ddFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->toChat)) {
    body->insert(pair<string, bool>("ToChat", *request->toChat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toCidsShrink)) {
    body->insert(pair<string, string>("ToCids", *request->toCidsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toUseridsShrink)) {
    body->insert(pair<string, string>("ToUserids", *request->toUseridsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/createReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReportResponse(callApi(params, req, runtime));
}

CreateReportResponse Alibabacloud_Aliding20230426::Client::createReport(shared_ptr<CreateReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateReportHeaders> headers = make_shared<CreateReportHeaders>();
  return createReportWithOptions(request, headers, runtime);
}

CreateScenegroupResponse Alibabacloud_Aliding20230426::Client::createScenegroupWithOptions(shared_ptr<CreateScenegroupRequest> request, shared_ptr<CreateScenegroupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<CreateScenegroupShrinkHeaders> headers = make_shared<CreateScenegroupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateScenegroupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->addFriendForbidden)) {
    body->insert(pair<string, long>("AddFriendForbidden", *request->addFriendForbidden));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allMembersCanCreateCalendar)) {
    body->insert(pair<string, long>("AllMembersCanCreateCalendar", *request->allMembersCanCreateCalendar));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->allMembersCanCreateMcsConf)) {
    body->insert(pair<string, long>("AllMembersCanCreateMcsConf", *request->allMembersCanCreateMcsConf));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chatBannedType)) {
    body->insert(pair<string, long>("ChatBannedType", *request->chatBannedType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupEmailDisabled)) {
    body->insert(pair<string, long>("GroupEmailDisabled", *request->groupEmailDisabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupLiveSwitch)) {
    body->insert(pair<string, long>("GroupLiveSwitch", *request->groupLiveSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->icon)) {
    body->insert(pair<string, string>("Icon", *request->icon));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->managementType)) {
    body->insert(pair<string, long>("ManagementType", *request->managementType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->membersToAdminChat)) {
    body->insert(pair<string, long>("MembersToAdminChat", *request->membersToAdminChat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mentionAllAuthority)) {
    body->insert(pair<string, long>("MentionAllAuthority", *request->mentionAllAuthority));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onlyAdminCanDing)) {
    body->insert(pair<string, long>("OnlyAdminCanDing", *request->onlyAdminCanDing));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onlyAdminCanSetMsgTop)) {
    body->insert(pair<string, long>("OnlyAdminCanSetMsgTop", *request->onlyAdminCanSetMsgTop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchable)) {
    body->insert(pair<string, long>("Searchable", *request->searchable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->showHistoryType)) {
    body->insert(pair<string, long>("ShowHistoryType", *request->showHistoryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subadminIds)) {
    body->insert(pair<string, string>("SubadminIds", *request->subadminIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    body->insert(pair<string, string>("UserIds", *request->userIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uuid)) {
    body->insert(pair<string, string>("Uuid", *request->uuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validationType)) {
    body->insert(pair<string, long>("ValidationType", *request->validationType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScenegroup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/createScenegroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScenegroupResponse(callApi(params, req, runtime));
}

CreateScenegroupResponse Alibabacloud_Aliding20230426::Client::createScenegroup(shared_ptr<CreateScenegroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateScenegroupHeaders> headers = make_shared<CreateScenegroupHeaders>();
  return createScenegroupWithOptions(request, headers, runtime);
}

CreateScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::createScheduleConferenceWithOptions(shared_ptr<CreateScheduleConferenceRequest> tmpReq, shared_ptr<CreateScheduleConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateScheduleConferenceShrinkRequest> request = make_shared<CreateScheduleConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateScheduleConferenceShrinkHeaders> headers = make_shared<CreateScheduleConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateScheduleConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateScheduleConferenceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduleConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/createScheduleConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateScheduleConferenceResponse(callApi(params, req, runtime));
}

CreateScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::createScheduleConference(shared_ptr<CreateScheduleConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateScheduleConferenceHeaders> headers = make_shared<CreateScheduleConferenceHeaders>();
  return createScheduleConferenceWithOptions(request, headers, runtime);
}

CreateSearchDomeResponse Alibabacloud_Aliding20230426::Client::createSearchDomeWithOptions(shared_ptr<CreateSearchDomeRequest> tmpReq, shared_ptr<CreateSearchDomeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSearchDomeShrinkRequest> request = make_shared<CreateSearchDomeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSearchDomeShrinkHeaders> headers = make_shared<CreateSearchDomeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSearchDomeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSearchDomeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("UserIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resId)) {
    body->insert(pair<string, string>("ResId", *request->resId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("UserIdList", *request->userIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchDome"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/createSearchDome"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchDomeResponse(callApi(params, req, runtime));
}

CreateSearchDomeResponse Alibabacloud_Aliding20230426::Client::createSearchDome(shared_ptr<CreateSearchDomeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSearchDomeHeaders> headers = make_shared<CreateSearchDomeHeaders>();
  return createSearchDomeWithOptions(request, headers, runtime);
}

CreateSearchKeywordResponse Alibabacloud_Aliding20230426::Client::createSearchKeywordWithOptions(shared_ptr<CreateSearchKeywordRequest> tmpReq, shared_ptr<CreateSearchKeywordHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSearchKeywordShrinkRequest> request = make_shared<CreateSearchKeywordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSearchKeywordShrinkHeaders> headers = make_shared<CreateSearchKeywordShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSearchKeywordHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSearchKeywordRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("UserIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resId)) {
    body->insert(pair<string, string>("ResId", *request->resId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("UserIdList", *request->userIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchKeyword"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/createSearchKeyword"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSearchKeywordResponse(callApi(params, req, runtime));
}

CreateSearchKeywordResponse Alibabacloud_Aliding20230426::Client::createSearchKeyword(shared_ptr<CreateSearchKeywordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSearchKeywordHeaders> headers = make_shared<CreateSearchKeywordHeaders>();
  return createSearchKeywordWithOptions(request, headers, runtime);
}

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheetWithOptions(shared_ptr<CreateSheetRequest> tmpReq, shared_ptr<CreateSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSheetShrinkRequest> request = make_shared<CreateSheetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSheetShrinkHeaders> headers = make_shared<CreateSheetShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSheetHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSheetRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSheet"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createSheet"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSheetResponse(callApi(params, req, runtime));
}

CreateSheetResponse Alibabacloud_Aliding20230426::Client::createSheet(shared_ptr<CreateSheetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSheetHeaders> headers = make_shared<CreateSheetHeaders>();
  return createSheetWithOptions(request, headers, runtime);
}

CreateSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::createSubscribedCalendarWithOptions(shared_ptr<CreateSubscribedCalendarRequest> tmpReq, shared_ptr<CreateSubscribedCalendarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSubscribedCalendarShrinkRequest> request = make_shared<CreateSubscribedCalendarShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateSubscribedCalendarShrinkHeaders> headers = make_shared<CreateSubscribedCalendarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateSubscribedCalendarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managers)) {
    request->managersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managers, make_shared<string>("Managers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSubscribedCalendarRequestSubscribeScope>(tmpReq->subscribeScope)) {
    request->subscribeScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subscribeScope, make_shared<string>("SubscribeScope"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managersShrink)) {
    body->insert(pair<string, string>("Managers", *request->managersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeScopeShrink)) {
    body->insert(pair<string, string>("SubscribeScope", *request->subscribeScopeShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscribedCalendar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/createSubscribedCalendar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscribedCalendarResponse(callApi(params, req, runtime));
}

CreateSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::createSubscribedCalendar(shared_ptr<CreateSubscribedCalendarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSubscribedCalendarHeaders> headers = make_shared<CreateSubscribedCalendarHeaders>();
  return createSubscribedCalendarWithOptions(request, headers, runtime);
}

CreateTodoTaskResponse Alibabacloud_Aliding20230426::Client::createTodoTaskWithOptions(shared_ptr<CreateTodoTaskRequest> tmpReq, shared_ptr<CreateTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateTodoTaskShrinkRequest> request = make_shared<CreateTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateTodoTaskShrinkHeaders> headers = make_shared<CreateTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTodoTaskRequestContentFieldList>>(tmpReq->contentFieldList)) {
    request->contentFieldListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contentFieldList, make_shared<string>("contentFieldList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestDetailUrl>(tmpReq->detailUrl)) {
    request->detailUrlShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->detailUrl, make_shared<string>("detailUrl"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("executorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateTodoTaskRequestNotifyConfigs>(tmpReq->notifyConfigs)) {
    request->notifyConfigsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->notifyConfigs, make_shared<string>("notifyConfigs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("participantIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    query->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentFieldListShrink)) {
    body->insert(pair<string, string>("contentFieldList", *request->contentFieldListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorId)) {
    body->insert(pair<string, string>("creatorId", *request->creatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->detailUrlShrink)) {
    body->insert(pair<string, string>("detailUrl", *request->detailUrlShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("executorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isOnlyShowExecutor)) {
    body->insert(pair<string, bool>("isOnlyShowExecutor", *request->isOnlyShowExecutor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyConfigsShrink)) {
    body->insert(pair<string, string>("notifyConfigs", *request->notifyConfigsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("participantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    body->insert(pair<string, long>("priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceId)) {
    body->insert(pair<string, string>("sourceId", *request->sourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/createTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTodoTaskResponse(callApi(params, req, runtime));
}

CreateTodoTaskResponse Alibabacloud_Aliding20230426::Client::createTodoTask(shared_ptr<CreateTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateTodoTaskHeaders> headers = make_shared<CreateTodoTaskHeaders>();
  return createTodoTaskWithOptions(request, headers, runtime);
}

CreateVideoConferenceResponse Alibabacloud_Aliding20230426::Client::createVideoConferenceWithOptions(shared_ptr<CreateVideoConferenceRequest> tmpReq, shared_ptr<CreateVideoConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVideoConferenceShrinkRequest> request = make_shared<CreateVideoConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateVideoConferenceShrinkHeaders> headers = make_shared<CreateVideoConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateVideoConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->inviteUserIds)) {
    request->inviteUserIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inviteUserIds, make_shared<string>("InviteUserIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->confTitle)) {
    body->insert(pair<string, string>("ConfTitle", *request->confTitle));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->inviteCaller)) {
    body->insert(pair<string, bool>("InviteCaller", *request->inviteCaller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inviteUserIdsShrink)) {
    body->insert(pair<string, string>("InviteUserIds", *request->inviteUserIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVideoConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/createVideoConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVideoConferenceResponse(callApi(params, req, runtime));
}

CreateVideoConferenceResponse Alibabacloud_Aliding20230426::Client::createVideoConference(shared_ptr<CreateVideoConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateVideoConferenceHeaders> headers = make_shared<CreateVideoConferenceHeaders>();
  return createVideoConferenceWithOptions(request, headers, runtime);
}

CreateWorkspaceResponse Alibabacloud_Aliding20230426::Client::createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> tmpReq, shared_ptr<CreateWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWorkspaceShrinkRequest> request = make_shared<CreateWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateWorkspaceShrinkHeaders> headers = make_shared<CreateWorkspaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createWorkspace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceResponse(callApi(params, req, runtime));
}

CreateWorkspaceResponse Alibabacloud_Aliding20230426::Client::createWorkspace(shared_ptr<CreateWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateWorkspaceHeaders> headers = make_shared<CreateWorkspaceHeaders>();
  return createWorkspaceWithOptions(request, headers, runtime);
}

CreateWorkspaceDocResponse Alibabacloud_Aliding20230426::Client::createWorkspaceDocWithOptions(shared_ptr<CreateWorkspaceDocRequest> tmpReq, shared_ptr<CreateWorkspaceDocHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWorkspaceDocShrinkRequest> request = make_shared<CreateWorkspaceDocShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<CreateWorkspaceDocShrinkHeaders> headers = make_shared<CreateWorkspaceDocShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceDocHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateWorkspaceDocRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->docType)) {
    body->insert(pair<string, string>("DocType", *request->docType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentNodeId)) {
    body->insert(pair<string, string>("ParentNodeId", *request->parentNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    body->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWorkspaceDoc"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/createWorkspaceDoc"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateWorkspaceDocResponse(callApi(params, req, runtime));
}

CreateWorkspaceDocResponse Alibabacloud_Aliding20230426::Client::createWorkspaceDoc(shared_ptr<CreateWorkspaceDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateWorkspaceDocHeaders> headers = make_shared<CreateWorkspaceDocHeaders>();
  return createWorkspaceDocWithOptions(request, headers, runtime);
}

DeleteColumnsResponse Alibabacloud_Aliding20230426::Client::deleteColumnsWithOptions(shared_ptr<DeleteColumnsRequest> tmpReq, shared_ptr<DeleteColumnsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteColumnsShrinkRequest> request = make_shared<DeleteColumnsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteColumnsShrinkHeaders> headers = make_shared<DeleteColumnsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteColumnsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteColumnsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->column)) {
    body->insert(pair<string, long>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->columnCount)) {
    body->insert(pair<string, long>("ColumnCount", *request->columnCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteColumns"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteColumns"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteColumnsResponse(callApi(params, req, runtime));
}

DeleteColumnsResponse Alibabacloud_Aliding20230426::Client::deleteColumns(shared_ptr<DeleteColumnsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteColumnsHeaders> headers = make_shared<DeleteColumnsHeaders>();
  return deleteColumnsWithOptions(request, headers, runtime);
}

DeleteDriveSpaceResponse Alibabacloud_Aliding20230426::Client::deleteDriveSpaceWithOptions(shared_ptr<DeleteDriveSpaceRequest> tmpReq, shared_ptr<DeleteDriveSpaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteDriveSpaceShrinkRequest> request = make_shared<DeleteDriveSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteDriveSpaceShrinkHeaders> headers = make_shared<DeleteDriveSpaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteDriveSpaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteDriveSpaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDriveSpace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteDriveSpace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDriveSpaceResponse(callApi(params, req, runtime));
}

DeleteDriveSpaceResponse Alibabacloud_Aliding20230426::Client::deleteDriveSpace(shared_ptr<DeleteDriveSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteDriveSpaceHeaders> headers = make_shared<DeleteDriveSpaceHeaders>();
  return deleteDriveSpaceWithOptions(request, headers, runtime);
}

DeleteEventResponse Alibabacloud_Aliding20230426::Client::deleteEventWithOptions(shared_ptr<DeleteEventRequest> request, shared_ptr<DeleteEventHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<DeleteEventShrinkHeaders> headers = make_shared<DeleteEventShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteEventHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->pushNotification)) {
    body->insert(pair<string, bool>("pushNotification", *request->pushNotification));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEvent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/deleteEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventResponse(callApi(params, req, runtime));
}

DeleteEventResponse Alibabacloud_Aliding20230426::Client::deleteEvent(shared_ptr<DeleteEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteEventHeaders> headers = make_shared<DeleteEventHeaders>();
  return deleteEventWithOptions(request, headers, runtime);
}

DeleteFormDataResponse Alibabacloud_Aliding20230426::Client::deleteFormDataWithOptions(shared_ptr<DeleteFormDataRequest> request, shared_ptr<DeleteFormDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<DeleteFormDataShrinkHeaders> headers = make_shared<DeleteFormDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteFormDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceId)) {
    body->insert(pair<string, string>("FormInstanceId", *request->formInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFormData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/deleteFormData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFormDataResponse(callApi(params, req, runtime));
}

DeleteFormDataResponse Alibabacloud_Aliding20230426::Client::deleteFormData(shared_ptr<DeleteFormDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteFormDataHeaders> headers = make_shared<DeleteFormDataHeaders>();
  return deleteFormDataWithOptions(request, headers, runtime);
}

DeleteInstanceResponse Alibabacloud_Aliding20230426::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<DeleteInstanceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<DeleteInstanceShrinkHeaders> headers = make_shared<DeleteInstanceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteInstanceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInstance"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/deleteInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInstanceResponse(callApi(params, req, runtime));
}

DeleteInstanceResponse Alibabacloud_Aliding20230426::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteInstanceHeaders> headers = make_shared<DeleteInstanceHeaders>();
  return deleteInstanceWithOptions(request, headers, runtime);
}

DeleteLiveResponse Alibabacloud_Aliding20230426::Client::deleteLiveWithOptions(shared_ptr<DeleteLiveRequest> tmpReq, shared_ptr<DeleteLiveHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteLiveShrinkRequest> request = make_shared<DeleteLiveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteLiveShrinkHeaders> headers = make_shared<DeleteLiveShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteLiveHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteLiveRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLive"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/deleteLive"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveResponse(callApi(params, req, runtime));
}

DeleteLiveResponse Alibabacloud_Aliding20230426::Client::deleteLive(shared_ptr<DeleteLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteLiveHeaders> headers = make_shared<DeleteLiveHeaders>();
  return deleteLiveWithOptions(request, headers, runtime);
}

DeleteMeetingRoomResponse Alibabacloud_Aliding20230426::Client::deleteMeetingRoomWithOptions(shared_ptr<DeleteMeetingRoomRequest> tmpReq, shared_ptr<DeleteMeetingRoomHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteMeetingRoomShrinkRequest> request = make_shared<DeleteMeetingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteMeetingRoomShrinkHeaders> headers = make_shared<DeleteMeetingRoomShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteMeetingRoomHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteMeetingRoomRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    body->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMeetingRoom"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/deleteMeetingRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMeetingRoomResponse(callApi(params, req, runtime));
}

DeleteMeetingRoomResponse Alibabacloud_Aliding20230426::Client::deleteMeetingRoom(shared_ptr<DeleteMeetingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteMeetingRoomHeaders> headers = make_shared<DeleteMeetingRoomHeaders>();
  return deleteMeetingRoomWithOptions(request, headers, runtime);
}

DeleteMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::deleteMeetingRoomGroupWithOptions(shared_ptr<DeleteMeetingRoomGroupRequest> tmpReq, shared_ptr<DeleteMeetingRoomGroupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteMeetingRoomGroupShrinkRequest> request = make_shared<DeleteMeetingRoomGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteMeetingRoomGroupShrinkHeaders> headers = make_shared<DeleteMeetingRoomGroupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteMeetingRoomGroupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteMeetingRoomGroupRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMeetingRoomGroup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/deleteMeetingRoomGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMeetingRoomGroupResponse(callApi(params, req, runtime));
}

DeleteMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::deleteMeetingRoomGroup(shared_ptr<DeleteMeetingRoomGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteMeetingRoomGroupHeaders> headers = make_shared<DeleteMeetingRoomGroupHeaders>();
  return deleteMeetingRoomGroupWithOptions(request, headers, runtime);
}

DeleteRowsResponse Alibabacloud_Aliding20230426::Client::deleteRowsWithOptions(shared_ptr<DeleteRowsRequest> tmpReq, shared_ptr<DeleteRowsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteRowsShrinkRequest> request = make_shared<DeleteRowsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteRowsShrinkHeaders> headers = make_shared<DeleteRowsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteRowsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteRowsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->row)) {
    body->insert(pair<string, long>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowCount)) {
    body->insert(pair<string, long>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRows"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteRows"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRowsResponse(callApi(params, req, runtime));
}

DeleteRowsResponse Alibabacloud_Aliding20230426::Client::deleteRows(shared_ptr<DeleteRowsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteRowsHeaders> headers = make_shared<DeleteRowsHeaders>();
  return deleteRowsWithOptions(request, headers, runtime);
}

DeleteScenegroupMemberResponse Alibabacloud_Aliding20230426::Client::deleteScenegroupMemberWithOptions(shared_ptr<DeleteScenegroupMemberRequest> request, shared_ptr<DeleteScenegroupMemberHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<DeleteScenegroupMemberShrinkHeaders> headers = make_shared<DeleteScenegroupMemberShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteScenegroupMemberHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIds)) {
    body->insert(pair<string, string>("UserIds", *request->userIds));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScenegroupMember"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/deleteScenegroupMember"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScenegroupMemberResponse(callApi(params, req, runtime));
}

DeleteScenegroupMemberResponse Alibabacloud_Aliding20230426::Client::deleteScenegroupMember(shared_ptr<DeleteScenegroupMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteScenegroupMemberHeaders> headers = make_shared<DeleteScenegroupMemberHeaders>();
  return deleteScenegroupMemberWithOptions(request, headers, runtime);
}

DeleteSheetResponse Alibabacloud_Aliding20230426::Client::deleteSheetWithOptions(shared_ptr<DeleteSheetRequest> tmpReq, shared_ptr<DeleteSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteSheetShrinkRequest> request = make_shared<DeleteSheetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteSheetShrinkHeaders> headers = make_shared<DeleteSheetShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteSheetHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteSheetRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSheet"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteSheet"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSheetResponse(callApi(params, req, runtime));
}

DeleteSheetResponse Alibabacloud_Aliding20230426::Client::deleteSheet(shared_ptr<DeleteSheetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteSheetHeaders> headers = make_shared<DeleteSheetHeaders>();
  return deleteSheetWithOptions(request, headers, runtime);
}

DeleteSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::deleteSubscribedCalendarWithOptions(shared_ptr<DeleteSubscribedCalendarRequest> request, shared_ptr<DeleteSubscribedCalendarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<DeleteSubscribedCalendarShrinkHeaders> headers = make_shared<DeleteSubscribedCalendarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteSubscribedCalendarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubscribedCalendar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/deleteSubscribedCalendar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubscribedCalendarResponse(callApi(params, req, runtime));
}

DeleteSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::deleteSubscribedCalendar(shared_ptr<DeleteSubscribedCalendarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteSubscribedCalendarHeaders> headers = make_shared<DeleteSubscribedCalendarHeaders>();
  return deleteSubscribedCalendarWithOptions(request, headers, runtime);
}

DeleteTodoTaskResponse Alibabacloud_Aliding20230426::Client::deleteTodoTaskWithOptions(shared_ptr<DeleteTodoTaskRequest> tmpReq, shared_ptr<DeleteTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteTodoTaskShrinkRequest> request = make_shared<DeleteTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteTodoTaskShrinkHeaders> headers = make_shared<DeleteTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    body->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/deleteTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTodoTaskResponse(callApi(params, req, runtime));
}

DeleteTodoTaskResponse Alibabacloud_Aliding20230426::Client::deleteTodoTask(shared_ptr<DeleteTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteTodoTaskHeaders> headers = make_shared<DeleteTodoTaskHeaders>();
  return deleteTodoTaskWithOptions(request, headers, runtime);
}

DeleteWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceDocMembersWithOptions(shared_ptr<DeleteWorkspaceDocMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteWorkspaceDocMembersShrinkRequest> request = make_shared<DeleteWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteWorkspaceDocMembersShrinkHeaders> headers = make_shared<DeleteWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeleteWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

DeleteWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceDocMembers(shared_ptr<DeleteWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteWorkspaceDocMembersHeaders> headers = make_shared<DeleteWorkspaceDocMembersHeaders>();
  return deleteWorkspaceDocMembersWithOptions(request, headers, runtime);
}

DeleteWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceMembersWithOptions(shared_ptr<DeleteWorkspaceMembersRequest> tmpReq, shared_ptr<DeleteWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteWorkspaceMembersShrinkRequest> request = make_shared<DeleteWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<DeleteWorkspaceMembersShrinkHeaders> headers = make_shared<DeleteWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DeleteWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<DeleteWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/deleteWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteWorkspaceMembersResponse(callApi(params, req, runtime));
}

DeleteWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::deleteWorkspaceMembers(shared_ptr<DeleteWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteWorkspaceMembersHeaders> headers = make_shared<DeleteWorkspaceMembersHeaders>();
  return deleteWorkspaceMembersWithOptions(request, headers, runtime);
}

ExecuteBatchTaskResponse Alibabacloud_Aliding20230426::Client::executeBatchTaskWithOptions(shared_ptr<ExecuteBatchTaskRequest> request, shared_ptr<ExecuteBatchTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ExecuteBatchTaskShrinkHeaders> headers = make_shared<ExecuteBatchTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ExecuteBatchTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outResult)) {
    body->insert(pair<string, string>("OutResult", *request->outResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskInformationList)) {
    body->insert(pair<string, string>("TaskInformationList", *request->taskInformationList));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteBatchTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/executeBatchTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteBatchTaskResponse(callApi(params, req, runtime));
}

ExecuteBatchTaskResponse Alibabacloud_Aliding20230426::Client::executeBatchTask(shared_ptr<ExecuteBatchTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExecuteBatchTaskHeaders> headers = make_shared<ExecuteBatchTaskHeaders>();
  return executeBatchTaskWithOptions(request, headers, runtime);
}

ExecutePlatformTaskResponse Alibabacloud_Aliding20230426::Client::executePlatformTaskWithOptions(shared_ptr<ExecutePlatformTaskRequest> request, shared_ptr<ExecutePlatformTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ExecutePlatformTaskShrinkHeaders> headers = make_shared<ExecutePlatformTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ExecutePlatformTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJson)) {
    body->insert(pair<string, string>("FormDataJson", *request->formDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noExecuteExpressions)) {
    body->insert(pair<string, string>("NoExecuteExpressions", *request->noExecuteExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outResult)) {
    body->insert(pair<string, string>("OutResult", *request->outResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecutePlatformTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/executePlatformTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecutePlatformTaskResponse(callApi(params, req, runtime));
}

ExecutePlatformTaskResponse Alibabacloud_Aliding20230426::Client::executePlatformTask(shared_ptr<ExecutePlatformTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExecutePlatformTaskHeaders> headers = make_shared<ExecutePlatformTaskHeaders>();
  return executePlatformTaskWithOptions(request, headers, runtime);
}

ExecuteTaskResponse Alibabacloud_Aliding20230426::Client::executeTaskWithOptions(shared_ptr<ExecuteTaskRequest> request, shared_ptr<ExecuteTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ExecuteTaskShrinkHeaders> headers = make_shared<ExecuteTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ExecuteTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->digitalSignUrl)) {
    body->insert(pair<string, string>("DigitalSignUrl", *request->digitalSignUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJson)) {
    body->insert(pair<string, string>("FormDataJson", *request->formDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noExecuteExpressions)) {
    body->insert(pair<string, string>("NoExecuteExpressions", *request->noExecuteExpressions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outResult)) {
    body->insert(pair<string, string>("OutResult", *request->outResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExecuteTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/executeTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExecuteTaskResponse(callApi(params, req, runtime));
}

ExecuteTaskResponse Alibabacloud_Aliding20230426::Client::executeTask(shared_ptr<ExecuteTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExecuteTaskHeaders> headers = make_shared<ExecuteTaskHeaders>();
  return executeTaskWithOptions(request, headers, runtime);
}

ExpandGroupCapacityResponse Alibabacloud_Aliding20230426::Client::expandGroupCapacityWithOptions(shared_ptr<ExpandGroupCapacityRequest> tmpReq, shared_ptr<ExpandGroupCapacityHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExpandGroupCapacityShrinkRequest> request = make_shared<ExpandGroupCapacityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ExpandGroupCapacityShrinkHeaders> headers = make_shared<ExpandGroupCapacityShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ExpandGroupCapacityHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ExpandGroupCapacityRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExpandGroupCapacity"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/im/expandGroupCapacity"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExpandGroupCapacityResponse(callApi(params, req, runtime));
}

ExpandGroupCapacityResponse Alibabacloud_Aliding20230426::Client::expandGroupCapacity(shared_ptr<ExpandGroupCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExpandGroupCapacityHeaders> headers = make_shared<ExpandGroupCapacityHeaders>();
  return expandGroupCapacityWithOptions(request, headers, runtime);
}

GetActivityListResponse Alibabacloud_Aliding20230426::Client::getActivityListWithOptions(shared_ptr<GetActivityListRequest> request, shared_ptr<GetActivityListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetActivityListShrinkHeaders> headers = make_shared<GetActivityListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetActivityListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCode)) {
    body->insert(pair<string, string>("ProcessCode", *request->processCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetActivityList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getActivityList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetActivityListResponse(callApi(params, req, runtime));
}

GetActivityListResponse Alibabacloud_Aliding20230426::Client::getActivityList(shared_ptr<GetActivityListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetActivityListHeaders> headers = make_shared<GetActivityListHeaders>();
  return getActivityListWithOptions(request, headers, runtime);
}

GetAllSheetsResponse Alibabacloud_Aliding20230426::Client::getAllSheetsWithOptions(shared_ptr<GetAllSheetsRequest> tmpReq, shared_ptr<GetAllSheetsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetAllSheetsShrinkRequest> request = make_shared<GetAllSheetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetAllSheetsShrinkHeaders> headers = make_shared<GetAllSheetsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetAllSheetsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetAllSheetsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAllSheets"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getAllSheets"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAllSheetsResponse(callApi(params, req, runtime));
}

GetAllSheetsResponse Alibabacloud_Aliding20230426::Client::getAllSheets(shared_ptr<GetAllSheetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetAllSheetsHeaders> headers = make_shared<GetAllSheetsHeaders>();
  return getAllSheetsWithOptions(request, headers, runtime);
}

GetConversaionSpaceResponse Alibabacloud_Aliding20230426::Client::getConversaionSpaceWithOptions(shared_ptr<GetConversaionSpaceRequest> tmpReq, shared_ptr<GetConversaionSpaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetConversaionSpaceShrinkRequest> request = make_shared<GetConversaionSpaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetConversaionSpaceShrinkHeaders> headers = make_shared<GetConversaionSpaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetConversaionSpaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetConversaionSpaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConversaionSpace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getConversaionSpace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConversaionSpaceResponse(callApi(params, req, runtime));
}

GetConversaionSpaceResponse Alibabacloud_Aliding20230426::Client::getConversaionSpace(shared_ptr<GetConversaionSpaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetConversaionSpaceHeaders> headers = make_shared<GetConversaionSpaceHeaders>();
  return getConversaionSpaceWithOptions(request, headers, runtime);
}

GetCorpAccomplishmentTasksResponse Alibabacloud_Aliding20230426::Client::getCorpAccomplishmentTasksWithOptions(shared_ptr<GetCorpAccomplishmentTasksRequest> request, shared_ptr<GetCorpAccomplishmentTasksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetCorpAccomplishmentTasksShrinkHeaders> headers = make_shared<GetCorpAccomplishmentTasksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetCorpAccomplishmentTasksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appTypes)) {
    body->insert(pair<string, string>("AppTypes", *request->appTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createFromTimeGMT)) {
    body->insert(pair<string, long>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createToTimeGMT)) {
    body->insert(pair<string, long>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCorpAccomplishmentTasks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getCorpAccomplishmentTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCorpAccomplishmentTasksResponse(callApi(params, req, runtime));
}

GetCorpAccomplishmentTasksResponse Alibabacloud_Aliding20230426::Client::getCorpAccomplishmentTasks(shared_ptr<GetCorpAccomplishmentTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCorpAccomplishmentTasksHeaders> headers = make_shared<GetCorpAccomplishmentTasksHeaders>();
  return getCorpAccomplishmentTasksWithOptions(request, headers, runtime);
}

GetCorpTasksResponse Alibabacloud_Aliding20230426::Client::getCorpTasksWithOptions(shared_ptr<GetCorpTasksRequest> request, shared_ptr<GetCorpTasksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetCorpTasksShrinkHeaders> headers = make_shared<GetCorpTasksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetCorpTasksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appTypes)) {
    body->insert(pair<string, string>("AppTypes", *request->appTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createFromTimeGMT)) {
    body->insert(pair<string, long>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createToTimeGMT)) {
    body->insert(pair<string, long>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCorpTasks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getCorpTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCorpTasksResponse(callApi(params, req, runtime));
}

GetCorpTasksResponse Alibabacloud_Aliding20230426::Client::getCorpTasks(shared_ptr<GetCorpTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetCorpTasksHeaders> headers = make_shared<GetCorpTasksHeaders>();
  return getCorpTasksWithOptions(request, headers, runtime);
}

GetDocContentResponse Alibabacloud_Aliding20230426::Client::getDocContentWithOptions(shared_ptr<GetDocContentRequest> tmpReq, shared_ptr<GetDocContentHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDocContentShrinkRequest> request = make_shared<GetDocContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetDocContentShrinkHeaders> headers = make_shared<GetDocContentShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetDocContentHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetDocContentRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryUuid)) {
    body->insert(pair<string, string>("DentryUuid", *request->dentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFormat)) {
    body->insert(pair<string, string>("TargetFormat", *request->targetFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userToken)) {
    body->insert(pair<string, string>("userToken", *request->userToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocContent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getDocContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocContentResponse(callApi(params, req, runtime));
}

GetDocContentResponse Alibabacloud_Aliding20230426::Client::getDocContent(shared_ptr<GetDocContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDocContentHeaders> headers = make_shared<GetDocContentHeaders>();
  return getDocContentWithOptions(request, headers, runtime);
}

GetDocContentTakIdResponse Alibabacloud_Aliding20230426::Client::getDocContentTakIdWithOptions(shared_ptr<GetDocContentTakIdRequest> tmpReq, shared_ptr<GetDocContentTakIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDocContentTakIdShrinkRequest> request = make_shared<GetDocContentTakIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetDocContentTakIdShrinkHeaders> headers = make_shared<GetDocContentTakIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetDocContentTakIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetDocContentTakIdRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryUuid)) {
    body->insert(pair<string, string>("DentryUuid", *request->dentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->generateCp)) {
    body->insert(pair<string, bool>("GenerateCp", *request->generateCp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFormat)) {
    body->insert(pair<string, string>("TargetFormat", *request->targetFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDocContentTakId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getDocContentTakId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDocContentTakIdResponse(callApi(params, req, runtime));
}

GetDocContentTakIdResponse Alibabacloud_Aliding20230426::Client::getDocContentTakId(shared_ptr<GetDocContentTakIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetDocContentTakIdHeaders> headers = make_shared<GetDocContentTakIdHeaders>();
  return getDocContentTakIdWithOptions(request, headers, runtime);
}

GetEventResponse Alibabacloud_Aliding20230426::Client::getEventWithOptions(shared_ptr<GetEventRequest> request, shared_ptr<GetEventHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetEventShrinkHeaders> headers = make_shared<GetEventShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetEventHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttendees)) {
    query->insert(pair<string, long>("MaxAttendees", *request->maxAttendees));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEvent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/getEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventResponse(callApi(params, req, runtime));
}

GetEventResponse Alibabacloud_Aliding20230426::Client::getEvent(shared_ptr<GetEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetEventHeaders> headers = make_shared<GetEventHeaders>();
  return getEventWithOptions(request, headers, runtime);
}

GetFieldDefByUuidResponse Alibabacloud_Aliding20230426::Client::getFieldDefByUuidWithOptions(shared_ptr<GetFieldDefByUuidRequest> request, shared_ptr<GetFieldDefByUuidHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetFieldDefByUuidShrinkHeaders> headers = make_shared<GetFieldDefByUuidShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFieldDefByUuidHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFieldDefByUuid"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getFieldDefByUuid"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFieldDefByUuidResponse(callApi(params, req, runtime));
}

GetFieldDefByUuidResponse Alibabacloud_Aliding20230426::Client::getFieldDefByUuid(shared_ptr<GetFieldDefByUuidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFieldDefByUuidHeaders> headers = make_shared<GetFieldDefByUuidHeaders>();
  return getFieldDefByUuidWithOptions(request, headers, runtime);
}

GetFileDownloadInfoResponse Alibabacloud_Aliding20230426::Client::getFileDownloadInfoWithOptions(shared_ptr<GetFileDownloadInfoRequest> tmpReq, shared_ptr<GetFileDownloadInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetFileDownloadInfoShrinkRequest> request = make_shared<GetFileDownloadInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetFileDownloadInfoShrinkHeaders> headers = make_shared<GetFileDownloadInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFileDownloadInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetFileDownloadInfoRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetFileDownloadInfoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryId)) {
    body->insert(pair<string, string>("DentryId", *request->dentryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileDownloadInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getFileDownloadInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileDownloadInfoResponse(callApi(params, req, runtime));
}

GetFileDownloadInfoResponse Alibabacloud_Aliding20230426::Client::getFileDownloadInfo(shared_ptr<GetFileDownloadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFileDownloadInfoHeaders> headers = make_shared<GetFileDownloadInfoHeaders>();
  return getFileDownloadInfoWithOptions(request, headers, runtime);
}

GetFileUploadInfoResponse Alibabacloud_Aliding20230426::Client::getFileUploadInfoWithOptions(shared_ptr<GetFileUploadInfoRequest> tmpReq, shared_ptr<GetFileUploadInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetFileUploadInfoShrinkRequest> request = make_shared<GetFileUploadInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetFileUploadInfoShrinkHeaders> headers = make_shared<GetFileUploadInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFileUploadInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetFileUploadInfoRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetFileUploadInfoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDentryUuid)) {
    body->insert(pair<string, string>("ParentDentryUuid", *request->parentDentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFileUploadInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getFileUploadInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFileUploadInfoResponse(callApi(params, req, runtime));
}

GetFileUploadInfoResponse Alibabacloud_Aliding20230426::Client::getFileUploadInfo(shared_ptr<GetFileUploadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFileUploadInfoHeaders> headers = make_shared<GetFileUploadInfoHeaders>();
  return getFileUploadInfoWithOptions(request, headers, runtime);
}

GetFormComponentDefinitionListResponse Alibabacloud_Aliding20230426::Client::getFormComponentDefinitionListWithOptions(shared_ptr<GetFormComponentDefinitionListRequest> request, shared_ptr<GetFormComponentDefinitionListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetFormComponentDefinitionListShrinkHeaders> headers = make_shared<GetFormComponentDefinitionListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFormComponentDefinitionListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFormComponentDefinitionList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getFormComponentDefinitionList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFormComponentDefinitionListResponse(callApi(params, req, runtime));
}

GetFormComponentDefinitionListResponse Alibabacloud_Aliding20230426::Client::getFormComponentDefinitionList(shared_ptr<GetFormComponentDefinitionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFormComponentDefinitionListHeaders> headers = make_shared<GetFormComponentDefinitionListHeaders>();
  return getFormComponentDefinitionListWithOptions(request, headers, runtime);
}

GetFormDataByIDResponse Alibabacloud_Aliding20230426::Client::getFormDataByIDWithOptions(shared_ptr<GetFormDataByIDRequest> request, shared_ptr<GetFormDataByIDHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetFormDataByIDShrinkHeaders> headers = make_shared<GetFormDataByIDShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFormDataByIDHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFormDataByID"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getFormDataByID"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFormDataByIDResponse(callApi(params, req, runtime));
}

GetFormDataByIDResponse Alibabacloud_Aliding20230426::Client::getFormDataByID(shared_ptr<GetFormDataByIDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFormDataByIDHeaders> headers = make_shared<GetFormDataByIDHeaders>();
  return getFormDataByIDWithOptions(request, headers, runtime);
}

GetFormListInAppResponse Alibabacloud_Aliding20230426::Client::getFormListInAppWithOptions(shared_ptr<GetFormListInAppRequest> request, shared_ptr<GetFormListInAppHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetFormListInAppShrinkHeaders> headers = make_shared<GetFormListInAppShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetFormListInAppHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formTypes)) {
    body->insert(pair<string, string>("FormTypes", *request->formTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFormListInApp"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getFormListInApp"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFormListInAppResponse(callApi(params, req, runtime));
}

GetFormListInAppResponse Alibabacloud_Aliding20230426::Client::getFormListInApp(shared_ptr<GetFormListInAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetFormListInAppHeaders> headers = make_shared<GetFormListInAppHeaders>();
  return getFormListInAppWithOptions(request, headers, runtime);
}

GetInnerGroupMembersResponse Alibabacloud_Aliding20230426::Client::getInnerGroupMembersWithOptions(shared_ptr<GetInnerGroupMembersRequest> request, shared_ptr<GetInnerGroupMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetInnerGroupMembersShrinkHeaders> headers = make_shared<GetInnerGroupMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetInnerGroupMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationId)) {
    body->insert(pair<string, string>("OpenConversationId", *request->openConversationId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInnerGroupMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/getInnerGroupMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInnerGroupMembersResponse(callApi(params, req, runtime));
}

GetInnerGroupMembersResponse Alibabacloud_Aliding20230426::Client::getInnerGroupMembers(shared_ptr<GetInnerGroupMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetInnerGroupMembersHeaders> headers = make_shared<GetInnerGroupMembersHeaders>();
  return getInnerGroupMembersWithOptions(request, headers, runtime);
}

GetInstanceByIdResponse Alibabacloud_Aliding20230426::Client::getInstanceByIdWithOptions(shared_ptr<GetInstanceByIdRequest> request, shared_ptr<GetInstanceByIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetInstanceByIdShrinkHeaders> headers = make_shared<GetInstanceByIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetInstanceByIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceById"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getInstanceById"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceByIdResponse(callApi(params, req, runtime));
}

GetInstanceByIdResponse Alibabacloud_Aliding20230426::Client::getInstanceById(shared_ptr<GetInstanceByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetInstanceByIdHeaders> headers = make_shared<GetInstanceByIdHeaders>();
  return getInstanceByIdWithOptions(request, headers, runtime);
}

GetInstanceIdListResponse Alibabacloud_Aliding20230426::Client::getInstanceIdListWithOptions(shared_ptr<GetInstanceIdListRequest> request, shared_ptr<GetInstanceIdListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetInstanceIdListShrinkHeaders> headers = make_shared<GetInstanceIdListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetInstanceIdListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvedResult)) {
    body->insert(pair<string, string>("ApprovedResult", *request->approvedResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    body->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFieldJson)) {
    body->insert(pair<string, string>("SearchFieldJson", *request->searchFieldJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstanceIdList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getInstanceIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstanceIdListResponse(callApi(params, req, runtime));
}

GetInstanceIdListResponse Alibabacloud_Aliding20230426::Client::getInstanceIdList(shared_ptr<GetInstanceIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetInstanceIdListHeaders> headers = make_shared<GetInstanceIdListHeaders>();
  return getInstanceIdListWithOptions(request, headers, runtime);
}

GetInstancesResponse Alibabacloud_Aliding20230426::Client::getInstancesWithOptions(shared_ptr<GetInstancesRequest> request, shared_ptr<GetInstancesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetInstancesShrinkHeaders> headers = make_shared<GetInstancesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetInstancesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->approvedResult)) {
    body->insert(pair<string, string>("ApprovedResult", *request->approvedResult));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceStatus)) {
    body->insert(pair<string, string>("InstanceStatus", *request->instanceStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderConfigJson)) {
    body->insert(pair<string, string>("OrderConfigJson", *request->orderConfigJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFieldJson)) {
    body->insert(pair<string, string>("SearchFieldJson", *request->searchFieldJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstances"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getInstances"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstancesResponse(callApi(params, req, runtime));
}

GetInstancesResponse Alibabacloud_Aliding20230426::Client::getInstances(shared_ptr<GetInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetInstancesHeaders> headers = make_shared<GetInstancesHeaders>();
  return getInstancesWithOptions(request, headers, runtime);
}

GetInstancesByIdListResponse Alibabacloud_Aliding20230426::Client::getInstancesByIdListWithOptions(shared_ptr<GetInstancesByIdListRequest> request, shared_ptr<GetInstancesByIdListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetInstancesByIdListShrinkHeaders> headers = make_shared<GetInstancesByIdListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetInstancesByIdListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceIds)) {
    body->insert(pair<string, string>("ProcessInstanceIds", *request->processInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstancesByIdList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getInstancesByIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstancesByIdListResponse(callApi(params, req, runtime));
}

GetInstancesByIdListResponse Alibabacloud_Aliding20230426::Client::getInstancesByIdList(shared_ptr<GetInstancesByIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetInstancesByIdListHeaders> headers = make_shared<GetInstancesByIdListHeaders>();
  return getInstancesByIdListWithOptions(request, headers, runtime);
}

GetLiveReplayUrlResponse Alibabacloud_Aliding20230426::Client::getLiveReplayUrlWithOptions(shared_ptr<GetLiveReplayUrlRequest> tmpReq, shared_ptr<GetLiveReplayUrlHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetLiveReplayUrlShrinkRequest> request = make_shared<GetLiveReplayUrlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetLiveReplayUrlShrinkHeaders> headers = make_shared<GetLiveReplayUrlShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetLiveReplayUrlHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetLiveReplayUrlRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveReplayUrl"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/getLiveReplayUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveReplayUrlResponse(callApi(params, req, runtime));
}

GetLiveReplayUrlResponse Alibabacloud_Aliding20230426::Client::getLiveReplayUrl(shared_ptr<GetLiveReplayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetLiveReplayUrlHeaders> headers = make_shared<GetLiveReplayUrlHeaders>();
  return getLiveReplayUrlWithOptions(request, headers, runtime);
}

GetMeCorpSubmissionResponse Alibabacloud_Aliding20230426::Client::getMeCorpSubmissionWithOptions(shared_ptr<GetMeCorpSubmissionRequest> request, shared_ptr<GetMeCorpSubmissionHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetMeCorpSubmissionShrinkHeaders> headers = make_shared<GetMeCorpSubmissionShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetMeCorpSubmissionHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appTypes)) {
    body->insert(pair<string, string>("AppTypes", *request->appTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createFromTimeGMT)) {
    body->insert(pair<string, long>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createToTimeGMT)) {
    body->insert(pair<string, long>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMeCorpSubmission"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getMeCorpSubmission"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMeCorpSubmissionResponse(callApi(params, req, runtime));
}

GetMeCorpSubmissionResponse Alibabacloud_Aliding20230426::Client::getMeCorpSubmission(shared_ptr<GetMeCorpSubmissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetMeCorpSubmissionHeaders> headers = make_shared<GetMeCorpSubmissionHeaders>();
  return getMeCorpSubmissionWithOptions(request, headers, runtime);
}

GetMeetingRoomsScheduleResponse Alibabacloud_Aliding20230426::Client::getMeetingRoomsScheduleWithOptions(shared_ptr<GetMeetingRoomsScheduleRequest> tmpReq, shared_ptr<GetMeetingRoomsScheduleHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMeetingRoomsScheduleShrinkRequest> request = make_shared<GetMeetingRoomsScheduleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetMeetingRoomsScheduleShrinkHeaders> headers = make_shared<GetMeetingRoomsScheduleShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetMeetingRoomsScheduleHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->roomIds)) {
    request->roomIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomIds, make_shared<string>("RoomIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomIdsShrink)) {
    body->insert(pair<string, string>("RoomIds", *request->roomIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMeetingRoomsSchedule"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/getMeetingRoomsSchedule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMeetingRoomsScheduleResponse(callApi(params, req, runtime));
}

GetMeetingRoomsScheduleResponse Alibabacloud_Aliding20230426::Client::getMeetingRoomsSchedule(shared_ptr<GetMeetingRoomsScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetMeetingRoomsScheduleHeaders> headers = make_shared<GetMeetingRoomsScheduleHeaders>();
  return getMeetingRoomsScheduleWithOptions(request, headers, runtime);
}

GetMineWorkspaceResponse Alibabacloud_Aliding20230426::Client::getMineWorkspaceWithOptions(shared_ptr<GetMineWorkspaceRequest> tmpReq, shared_ptr<GetMineWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMineWorkspaceShrinkRequest> request = make_shared<GetMineWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetMineWorkspaceShrinkHeaders> headers = make_shared<GetMineWorkspaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetMineWorkspaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->request, make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetMineWorkspaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMineWorkspace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getMineWorkspace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMineWorkspaceResponse(callApi(params, req, runtime));
}

GetMineWorkspaceResponse Alibabacloud_Aliding20230426::Client::getMineWorkspace(shared_ptr<GetMineWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetMineWorkspaceHeaders> headers = make_shared<GetMineWorkspaceHeaders>();
  return getMineWorkspaceWithOptions(request, headers, runtime);
}

GetMultipartFileUploadInfosResponse Alibabacloud_Aliding20230426::Client::getMultipartFileUploadInfosWithOptions(shared_ptr<GetMultipartFileUploadInfosRequest> tmpReq, shared_ptr<GetMultipartFileUploadInfosHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetMultipartFileUploadInfosShrinkRequest> request = make_shared<GetMultipartFileUploadInfosShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetMultipartFileUploadInfosShrinkHeaders> headers = make_shared<GetMultipartFileUploadInfosShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetMultipartFileUploadInfosHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetMultipartFileUploadInfosRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->partNumbers)) {
    request->partNumbersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->partNumbers, make_shared<string>("PartNumbers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetMultipartFileUploadInfosRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->partNumbersShrink)) {
    body->insert(pair<string, string>("PartNumbers", *request->partNumbersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadKey)) {
    body->insert(pair<string, string>("UploadKey", *request->uploadKey));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultipartFileUploadInfos"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/GetMultipartFileUploadInfos"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultipartFileUploadInfosResponse(callApi(params, req, runtime));
}

GetMultipartFileUploadInfosResponse Alibabacloud_Aliding20230426::Client::getMultipartFileUploadInfos(shared_ptr<GetMultipartFileUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetMultipartFileUploadInfosHeaders> headers = make_shared<GetMultipartFileUploadInfosHeaders>();
  return getMultipartFileUploadInfosWithOptions(request, headers, runtime);
}

GetNewestInnerGroupsResponse Alibabacloud_Aliding20230426::Client::getNewestInnerGroupsWithOptions(shared_ptr<GetNewestInnerGroupsRequest> tmpReq, shared_ptr<GetNewestInnerGroupsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetNewestInnerGroupsShrinkRequest> request = make_shared<GetNewestInnerGroupsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetNewestInnerGroupsShrinkHeaders> headers = make_shared<GetNewestInnerGroupsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetNewestInnerGroupsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->request, make_shared<string>("Request"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNewestInnerGroups"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/getNewestInnerGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNewestInnerGroupsResponse(callApi(params, req, runtime));
}

GetNewestInnerGroupsResponse Alibabacloud_Aliding20230426::Client::getNewestInnerGroups(shared_ptr<GetNewestInnerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetNewestInnerGroupsHeaders> headers = make_shared<GetNewestInnerGroupsHeaders>();
  return getNewestInnerGroupsWithOptions(request, headers, runtime);
}

GetNodeResponse Alibabacloud_Aliding20230426::Client::getNodeWithOptions(shared_ptr<GetNodeRequest> tmpReq, shared_ptr<GetNodeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetNodeShrinkRequest> request = make_shared<GetNodeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetNodeShrinkHeaders> headers = make_shared<GetNodeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetNodeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetNodeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withPermissionRole)) {
    body->insert(pair<string, bool>("WithPermissionRole", *request->withPermissionRole));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withStatisticalInfo)) {
    body->insert(pair<string, bool>("WithStatisticalInfo", *request->withStatisticalInfo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNode"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getNode"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeResponse(callApi(params, req, runtime));
}

GetNodeResponse Alibabacloud_Aliding20230426::Client::getNode(shared_ptr<GetNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetNodeHeaders> headers = make_shared<GetNodeHeaders>();
  return getNodeWithOptions(request, headers, runtime);
}

GetNodeByUrlResponse Alibabacloud_Aliding20230426::Client::getNodeByUrlWithOptions(shared_ptr<GetNodeByUrlRequest> tmpReq, shared_ptr<GetNodeByUrlHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetNodeByUrlShrinkRequest> request = make_shared<GetNodeByUrlShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetNodeByUrlShrinkHeaders> headers = make_shared<GetNodeByUrlShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetNodeByUrlHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetNodeByUrlRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetNodeByUrlRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodeByUrl"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getNodeByUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodeByUrlResponse(callApi(params, req, runtime));
}

GetNodeByUrlResponse Alibabacloud_Aliding20230426::Client::getNodeByUrl(shared_ptr<GetNodeByUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetNodeByUrlHeaders> headers = make_shared<GetNodeByUrlHeaders>();
  return getNodeByUrlWithOptions(request, headers, runtime);
}

GetNodesResponse Alibabacloud_Aliding20230426::Client::getNodesWithOptions(shared_ptr<GetNodesRequest> tmpReq, shared_ptr<GetNodesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetNodesShrinkRequest> request = make_shared<GetNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetNodesShrinkHeaders> headers = make_shared<GetNodesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetNodesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->nodeIds)) {
    request->nodeIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodeIds, make_shared<string>("NodeIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetNodesRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetNodesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeIdsShrink)) {
    body->insert(pair<string, string>("NodeIds", *request->nodeIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNodes"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getNodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNodesResponse(callApi(params, req, runtime));
}

GetNodesResponse Alibabacloud_Aliding20230426::Client::getNodes(shared_ptr<GetNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetNodesHeaders> headers = make_shared<GetNodesHeaders>();
  return getNodesWithOptions(request, headers, runtime);
}

GetNotifyMeResponse Alibabacloud_Aliding20230426::Client::getNotifyMeWithOptions(shared_ptr<GetNotifyMeRequest> request, shared_ptr<GetNotifyMeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetNotifyMeShrinkHeaders> headers = make_shared<GetNotifyMeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetNotifyMeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appTypes)) {
    body->insert(pair<string, string>("AppTypes", *request->appTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createFromTimeGMT)) {
    body->insert(pair<string, long>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createToTimeGMT)) {
    body->insert(pair<string, long>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceCreateFromTimeGMT)) {
    body->insert(pair<string, long>("InstanceCreateFromTimeGMT", *request->instanceCreateFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceCreateToTimeGMT)) {
    body->insert(pair<string, long>("InstanceCreateToTimeGMT", *request->instanceCreateToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNotifyMe"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getNotifyMe"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNotifyMeResponse(callApi(params, req, runtime));
}

GetNotifyMeResponse Alibabacloud_Aliding20230426::Client::getNotifyMe(shared_ptr<GetNotifyMeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetNotifyMeHeaders> headers = make_shared<GetNotifyMeHeaders>();
  return getNotifyMeWithOptions(request, headers, runtime);
}

GetOpenUrlResponse Alibabacloud_Aliding20230426::Client::getOpenUrlWithOptions(shared_ptr<GetOpenUrlRequest> request, shared_ptr<GetOpenUrlHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetOpenUrlShrinkHeaders> headers = make_shared<GetOpenUrlShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetOpenUrlHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUrl)) {
    body->insert(pair<string, string>("FileUrl", *request->fileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    body->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOpenUrl"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getOpenUrl"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOpenUrlResponse(callApi(params, req, runtime));
}

GetOpenUrlResponse Alibabacloud_Aliding20230426::Client::getOpenUrl(shared_ptr<GetOpenUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetOpenUrlHeaders> headers = make_shared<GetOpenUrlHeaders>();
  return getOpenUrlWithOptions(request, headers, runtime);
}

GetOperationRecordsResponse Alibabacloud_Aliding20230426::Client::getOperationRecordsWithOptions(shared_ptr<GetOperationRecordsRequest> request, shared_ptr<GetOperationRecordsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetOperationRecordsShrinkHeaders> headers = make_shared<GetOperationRecordsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetOperationRecordsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOperationRecords"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getOperationRecords"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOperationRecordsResponse(callApi(params, req, runtime));
}

GetOperationRecordsResponse Alibabacloud_Aliding20230426::Client::getOperationRecords(shared_ptr<GetOperationRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetOperationRecordsHeaders> headers = make_shared<GetOperationRecordsHeaders>();
  return getOperationRecordsWithOptions(request, headers, runtime);
}

GetProcessDefinitionResponse Alibabacloud_Aliding20230426::Client::getProcessDefinitionWithOptions(shared_ptr<GetProcessDefinitionRequest> request, shared_ptr<GetProcessDefinitionHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetProcessDefinitionShrinkHeaders> headers = make_shared<GetProcessDefinitionShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetProcessDefinitionHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nameSpace_)) {
    body->insert(pair<string, string>("NameSpace_", *request->nameSpace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderNumber)) {
    body->insert(pair<string, string>("OrderNumber", *request->orderNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemType)) {
    body->insert(pair<string, string>("SystemType", *request->systemType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProcessDefinition"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getProcessDefinition"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProcessDefinitionResponse(callApi(params, req, runtime));
}

GetProcessDefinitionResponse Alibabacloud_Aliding20230426::Client::getProcessDefinition(shared_ptr<GetProcessDefinitionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetProcessDefinitionHeaders> headers = make_shared<GetProcessDefinitionHeaders>();
  return getProcessDefinitionWithOptions(request, headers, runtime);
}

GetRangeResponse Alibabacloud_Aliding20230426::Client::getRangeWithOptions(shared_ptr<GetRangeRequest> tmpReq, shared_ptr<GetRangeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetRangeShrinkRequest> request = make_shared<GetRangeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetRangeShrinkHeaders> headers = make_shared<GetRangeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetRangeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetRangeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rangeAddress)) {
    body->insert(pair<string, string>("RangeAddress", *request->rangeAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->select)) {
    body->insert(pair<string, string>("Select", *request->select));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRange"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getRange"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRangeResponse(callApi(params, req, runtime));
}

GetRangeResponse Alibabacloud_Aliding20230426::Client::getRange(shared_ptr<GetRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetRangeHeaders> headers = make_shared<GetRangeHeaders>();
  return getRangeWithOptions(request, headers, runtime);
}

GetRelatedWorkspacesResponse Alibabacloud_Aliding20230426::Client::getRelatedWorkspacesWithOptions(shared_ptr<GetRelatedWorkspacesRequest> tmpReq, shared_ptr<GetRelatedWorkspacesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetRelatedWorkspacesShrinkRequest> request = make_shared<GetRelatedWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetRelatedWorkspacesShrinkHeaders> headers = make_shared<GetRelatedWorkspacesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetRelatedWorkspacesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetRelatedWorkspacesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeRecent)) {
    body->insert(pair<string, bool>("IncludeRecent", *request->includeRecent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRelatedWorkspaces"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getRelatedWorkspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRelatedWorkspacesResponse(callApi(params, req, runtime));
}

GetRelatedWorkspacesResponse Alibabacloud_Aliding20230426::Client::getRelatedWorkspaces(shared_ptr<GetRelatedWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetRelatedWorkspacesHeaders> headers = make_shared<GetRelatedWorkspacesHeaders>();
  return getRelatedWorkspacesWithOptions(request, headers, runtime);
}

GetReportTemplateByNameResponse Alibabacloud_Aliding20230426::Client::getReportTemplateByNameWithOptions(shared_ptr<GetReportTemplateByNameRequest> tmpReq, shared_ptr<GetReportTemplateByNameHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetReportTemplateByNameShrinkRequest> request = make_shared<GetReportTemplateByNameShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetReportTemplateByNameShrinkHeaders> headers = make_shared<GetReportTemplateByNameShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetReportTemplateByNameHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetReportTemplateByNameRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReportTemplateByName"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/getReportTemplateByName"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReportTemplateByNameResponse(callApi(params, req, runtime));
}

GetReportTemplateByNameResponse Alibabacloud_Aliding20230426::Client::getReportTemplateByName(shared_ptr<GetReportTemplateByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetReportTemplateByNameHeaders> headers = make_shared<GetReportTemplateByNameHeaders>();
  return getReportTemplateByNameWithOptions(request, headers, runtime);
}

GetReportUnReadCountResponse Alibabacloud_Aliding20230426::Client::getReportUnReadCountWithOptions(shared_ptr<GetReportUnReadCountRequest> tmpReq, shared_ptr<GetReportUnReadCountHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetReportUnReadCountShrinkRequest> request = make_shared<GetReportUnReadCountShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetReportUnReadCountShrinkHeaders> headers = make_shared<GetReportUnReadCountShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetReportUnReadCountHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->request, make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetReportUnReadCountRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetReportUnReadCount"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/getReportUnReadCount"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetReportUnReadCountResponse(callApi(params, req, runtime));
}

GetReportUnReadCountResponse Alibabacloud_Aliding20230426::Client::getReportUnReadCount(shared_ptr<GetReportUnReadCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetReportUnReadCountHeaders> headers = make_shared<GetReportUnReadCountHeaders>();
  return getReportUnReadCountWithOptions(request, headers, runtime);
}

GetRunningTasksResponse Alibabacloud_Aliding20230426::Client::getRunningTasksWithOptions(shared_ptr<GetRunningTasksRequest> request, shared_ptr<GetRunningTasksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetRunningTasksShrinkHeaders> headers = make_shared<GetRunningTasksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetRunningTasksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRunningTasks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getRunningTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRunningTasksResponse(callApi(params, req, runtime));
}

GetRunningTasksResponse Alibabacloud_Aliding20230426::Client::getRunningTasks(shared_ptr<GetRunningTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetRunningTasksHeaders> headers = make_shared<GetRunningTasksHeaders>();
  return getRunningTasksWithOptions(request, headers, runtime);
}

GetScheduleResponse Alibabacloud_Aliding20230426::Client::getScheduleWithOptions(shared_ptr<GetScheduleRequest> tmpReq, shared_ptr<GetScheduleHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetScheduleShrinkRequest> request = make_shared<GetScheduleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetScheduleShrinkHeaders> headers = make_shared<GetScheduleShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetScheduleHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetScheduleRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIds)) {
    request->userIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIds, make_shared<string>("UserIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdsShrink)) {
    body->insert(pair<string, string>("UserIds", *request->userIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSchedule"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/getSchedule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScheduleResponse(callApi(params, req, runtime));
}

GetScheduleResponse Alibabacloud_Aliding20230426::Client::getSchedule(shared_ptr<GetScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetScheduleHeaders> headers = make_shared<GetScheduleHeaders>();
  return getScheduleWithOptions(request, headers, runtime);
}

GetSheetResponse Alibabacloud_Aliding20230426::Client::getSheetWithOptions(shared_ptr<GetSheetRequest> tmpReq, shared_ptr<GetSheetHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSheetShrinkRequest> request = make_shared<GetSheetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetSheetShrinkHeaders> headers = make_shared<GetSheetShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetSheetHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetSheetRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSheet"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/getSheet"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSheetResponse(callApi(params, req, runtime));
}

GetSheetResponse Alibabacloud_Aliding20230426::Client::getSheet(shared_ptr<GetSheetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetSheetHeaders> headers = make_shared<GetSheetHeaders>();
  return getSheetWithOptions(request, headers, runtime);
}

GetSheetContentJobIdResponse Alibabacloud_Aliding20230426::Client::getSheetContentJobIdWithOptions(shared_ptr<GetSheetContentJobIdRequest> tmpReq, shared_ptr<GetSheetContentJobIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSheetContentJobIdShrinkRequest> request = make_shared<GetSheetContentJobIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetSheetContentJobIdShrinkHeaders> headers = make_shared<GetSheetContentJobIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetSheetContentJobIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetSheetContentJobIdRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryUuid)) {
    body->insert(pair<string, string>("DentryUuid", *request->dentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exportType)) {
    body->insert(pair<string, string>("ExportType", *request->exportType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSheetContentJobId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getSheetContentJobId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSheetContentJobIdResponse(callApi(params, req, runtime));
}

GetSheetContentJobIdResponse Alibabacloud_Aliding20230426::Client::getSheetContentJobId(shared_ptr<GetSheetContentJobIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetSheetContentJobIdHeaders> headers = make_shared<GetSheetContentJobIdHeaders>();
  return getSheetContentJobIdWithOptions(request, headers, runtime);
}

GetSpaceDirectoriesResponse Alibabacloud_Aliding20230426::Client::getSpaceDirectoriesWithOptions(shared_ptr<GetSpaceDirectoriesRequest> tmpReq, shared_ptr<GetSpaceDirectoriesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSpaceDirectoriesShrinkRequest> request = make_shared<GetSpaceDirectoriesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetSpaceDirectoriesShrinkHeaders> headers = make_shared<GetSpaceDirectoriesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetSpaceDirectoriesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetSpaceDirectoriesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryId)) {
    body->insert(pair<string, string>("DentryId", *request->dentryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpaceDirectories"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getSpaceDirectories"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpaceDirectoriesResponse(callApi(params, req, runtime));
}

GetSpaceDirectoriesResponse Alibabacloud_Aliding20230426::Client::getSpaceDirectories(shared_ptr<GetSpaceDirectoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetSpaceDirectoriesHeaders> headers = make_shared<GetSpaceDirectoriesHeaders>();
  return getSpaceDirectoriesWithOptions(request, headers, runtime);
}

GetSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::getSubscribedCalendarWithOptions(shared_ptr<GetSubscribedCalendarRequest> request, shared_ptr<GetSubscribedCalendarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetSubscribedCalendarShrinkHeaders> headers = make_shared<GetSubscribedCalendarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetSubscribedCalendarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubscribedCalendar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/getSubscribedCalendar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubscribedCalendarResponse(callApi(params, req, runtime));
}

GetSubscribedCalendarResponse Alibabacloud_Aliding20230426::Client::getSubscribedCalendar(shared_ptr<GetSubscribedCalendarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetSubscribedCalendarHeaders> headers = make_shared<GetSubscribedCalendarHeaders>();
  return getSubscribedCalendarWithOptions(request, headers, runtime);
}

GetTaskCopiesResponse Alibabacloud_Aliding20230426::Client::getTaskCopiesWithOptions(shared_ptr<GetTaskCopiesRequest> request, shared_ptr<GetTaskCopiesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<GetTaskCopiesShrinkHeaders> headers = make_shared<GetTaskCopiesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetTaskCopiesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createFromTimeGMT)) {
    body->insert(pair<string, long>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createToTimeGMT)) {
    body->insert(pair<string, long>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCodes)) {
    body->insert(pair<string, string>("ProcessCodes", *request->processCodes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskCopies"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/getTaskCopies"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskCopiesResponse(callApi(params, req, runtime));
}

GetTaskCopiesResponse Alibabacloud_Aliding20230426::Client::getTaskCopies(shared_ptr<GetTaskCopiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetTaskCopiesHeaders> headers = make_shared<GetTaskCopiesHeaders>();
  return getTaskCopiesWithOptions(request, headers, runtime);
}

GetTemplateListByUserIdResponse Alibabacloud_Aliding20230426::Client::getTemplateListByUserIdWithOptions(shared_ptr<GetTemplateListByUserIdRequest> tmpReq, shared_ptr<GetTemplateListByUserIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetTemplateListByUserIdShrinkRequest> request = make_shared<GetTemplateListByUserIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetTemplateListByUserIdShrinkHeaders> headers = make_shared<GetTemplateListByUserIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetTemplateListByUserIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetTemplateListByUserIdRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateListByUserId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/getTemplateListByUserId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateListByUserIdResponse(callApi(params, req, runtime));
}

GetTemplateListByUserIdResponse Alibabacloud_Aliding20230426::Client::getTemplateListByUserId(shared_ptr<GetTemplateListByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetTemplateListByUserIdHeaders> headers = make_shared<GetTemplateListByUserIdHeaders>();
  return getTemplateListByUserIdWithOptions(request, headers, runtime);
}

GetUserResponse Alibabacloud_Aliding20230426::Client::getUserWithOptions(shared_ptr<GetUserRequest> tmpReq, shared_ptr<GetUserHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserShrinkRequest> request = make_shared<GetUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetUserShrinkHeaders> headers = make_shared<GetUserShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetUserHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetUserRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUser"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/getUser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserResponse(callApi(params, req, runtime));
}

GetUserResponse Alibabacloud_Aliding20230426::Client::getUser(shared_ptr<GetUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserHeaders> headers = make_shared<GetUserHeaders>();
  return getUserWithOptions(request, headers, runtime);
}

GetUserIdResponse Alibabacloud_Aliding20230426::Client::getUserIdWithOptions(shared_ptr<GetUserIdRequest> tmpReq, shared_ptr<GetUserIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserIdShrinkRequest> request = make_shared<GetUserIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetUserIdShrinkHeaders> headers = make_shared<GetUserIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetUserIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetUserIdRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionId)) {
    body->insert(pair<string, string>("UnionId", *request->unionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/getUserId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserIdResponse(callApi(params, req, runtime));
}

GetUserIdResponse Alibabacloud_Aliding20230426::Client::getUserId(shared_ptr<GetUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserIdHeaders> headers = make_shared<GetUserIdHeaders>();
  return getUserIdWithOptions(request, headers, runtime);
}

GetUserLatestPlanResponse Alibabacloud_Aliding20230426::Client::getUserLatestPlanWithOptions(shared_ptr<GetUserLatestPlanRequest> tmpReq, shared_ptr<GetUserLatestPlanHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetUserLatestPlanShrinkRequest> request = make_shared<GetUserLatestPlanShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetUserLatestPlanShrinkHeaders> headers = make_shared<GetUserLatestPlanShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetUserLatestPlanHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetUserLatestPlanRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserLatestPlan"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/indepding/getUserLatestPlan"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserLatestPlanResponse(callApi(params, req, runtime));
}

GetUserLatestPlanResponse Alibabacloud_Aliding20230426::Client::getUserLatestPlan(shared_ptr<GetUserLatestPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetUserLatestPlanHeaders> headers = make_shared<GetUserLatestPlanHeaders>();
  return getUserLatestPlanWithOptions(request, headers, runtime);
}

GetWorkspaceResponse Alibabacloud_Aliding20230426::Client::getWorkspaceWithOptions(shared_ptr<GetWorkspaceRequest> tmpReq, shared_ptr<GetWorkspaceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWorkspaceShrinkRequest> request = make_shared<GetWorkspaceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetWorkspaceShrinkHeaders> headers = make_shared<GetWorkspaceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetWorkspaceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetWorkspaceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withPermissionRole)) {
    body->insert(pair<string, bool>("WithPermissionRole", *request->withPermissionRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspace"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getWorkspace"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspaceResponse(callApi(params, req, runtime));
}

GetWorkspaceResponse Alibabacloud_Aliding20230426::Client::getWorkspace(shared_ptr<GetWorkspaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetWorkspaceHeaders> headers = make_shared<GetWorkspaceHeaders>();
  return getWorkspaceWithOptions(request, headers, runtime);
}

GetWorkspacesResponse Alibabacloud_Aliding20230426::Client::getWorkspacesWithOptions(shared_ptr<GetWorkspacesRequest> tmpReq, shared_ptr<GetWorkspacesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetWorkspacesShrinkRequest> request = make_shared<GetWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GetWorkspacesShrinkHeaders> headers = make_shared<GetWorkspacesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GetWorkspacesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetWorkspacesRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GetWorkspacesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->workspaceIds)) {
    request->workspaceIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->workspaceIds, make_shared<string>("WorkspaceIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceIdsShrink)) {
    body->insert(pair<string, string>("WorkspaceIds", *request->workspaceIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkspaces"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/getWorkspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWorkspacesResponse(callApi(params, req, runtime));
}

GetWorkspacesResponse Alibabacloud_Aliding20230426::Client::getWorkspaces(shared_ptr<GetWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GetWorkspacesHeaders> headers = make_shared<GetWorkspacesHeaders>();
  return getWorkspacesWithOptions(request, headers, runtime);
}

GrantHonorResponse Alibabacloud_Aliding20230426::Client::grantHonorWithOptions(shared_ptr<GrantHonorRequest> tmpReq, shared_ptr<GrantHonorHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GrantHonorShrinkRequest> request = make_shared<GrantHonorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<GrantHonorShrinkHeaders> headers = make_shared<GrantHonorShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<GrantHonorHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<GrantHonorRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->openConversationIds)) {
    request->openConversationIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->openConversationIds, make_shared<string>("openConversationIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->receiverUserIds)) {
    request->receiverUserIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->receiverUserIds, make_shared<string>("receiverUserIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expirationTime)) {
    body->insert(pair<string, long>("expirationTime", *request->expirationTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grantReason)) {
    body->insert(pair<string, string>("grantReason", *request->grantReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granterName)) {
    body->insert(pair<string, string>("granterName", *request->granterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->honorId)) {
    body->insert(pair<string, string>("honorId", *request->honorId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noticeAnnouncer)) {
    body->insert(pair<string, bool>("noticeAnnouncer", *request->noticeAnnouncer));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noticeSingle)) {
    body->insert(pair<string, bool>("noticeSingle", *request->noticeSingle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openConversationIdsShrink)) {
    body->insert(pair<string, string>("openConversationIds", *request->openConversationIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverUserIdsShrink)) {
    body->insert(pair<string, string>("receiverUserIds", *request->receiverUserIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->senderUserId)) {
    body->insert(pair<string, string>("senderUserId", *request->senderUserId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GrantHonor"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/grantHonor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GrantHonorResponse(callApi(params, req, runtime));
}

GrantHonorResponse Alibabacloud_Aliding20230426::Client::grantHonor(shared_ptr<GrantHonorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GrantHonorHeaders> headers = make_shared<GrantHonorHeaders>();
  return grantHonorWithOptions(request, headers, runtime);
}

InitMultipartFileUploadResponse Alibabacloud_Aliding20230426::Client::initMultipartFileUploadWithOptions(shared_ptr<InitMultipartFileUploadRequest> tmpReq, shared_ptr<InitMultipartFileUploadHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InitMultipartFileUploadShrinkRequest> request = make_shared<InitMultipartFileUploadShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InitMultipartFileUploadShrinkHeaders> headers = make_shared<InitMultipartFileUploadShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InitMultipartFileUploadHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InitMultipartFileUploadRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("Option"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InitMultipartFileUploadRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("Option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentDentryUuid)) {
    body->insert(pair<string, string>("ParentDentryUuid", *request->parentDentryUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitMultipartFileUpload"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/initMultipartFileUpload"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitMultipartFileUploadResponse(callApi(params, req, runtime));
}

InitMultipartFileUploadResponse Alibabacloud_Aliding20230426::Client::initMultipartFileUpload(shared_ptr<InitMultipartFileUploadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InitMultipartFileUploadHeaders> headers = make_shared<InitMultipartFileUploadHeaders>();
  return initMultipartFileUploadWithOptions(request, headers, runtime);
}

InsertColumnsBeforeResponse Alibabacloud_Aliding20230426::Client::insertColumnsBeforeWithOptions(shared_ptr<InsertColumnsBeforeRequest> tmpReq, shared_ptr<InsertColumnsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertColumnsBeforeShrinkRequest> request = make_shared<InsertColumnsBeforeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InsertColumnsBeforeShrinkHeaders> headers = make_shared<InsertColumnsBeforeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InsertColumnsBeforeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InsertColumnsBeforeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->column)) {
    body->insert(pair<string, long>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->columnCount)) {
    body->insert(pair<string, long>("ColumnCount", *request->columnCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertColumnsBefore"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/insertColumnsBefore"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertColumnsBeforeResponse(callApi(params, req, runtime));
}

InsertColumnsBeforeResponse Alibabacloud_Aliding20230426::Client::insertColumnsBefore(shared_ptr<InsertColumnsBeforeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsertColumnsBeforeHeaders> headers = make_shared<InsertColumnsBeforeHeaders>();
  return insertColumnsBeforeWithOptions(request, headers, runtime);
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBeforeWithOptions(shared_ptr<InsertRowsBeforeRequest> tmpReq, shared_ptr<InsertRowsBeforeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsertRowsBeforeShrinkRequest> request = make_shared<InsertRowsBeforeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InsertRowsBeforeShrinkHeaders> headers = make_shared<InsertRowsBeforeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InsertRowsBeforeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->row)) {
    body->insert(pair<string, long>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowCount)) {
    body->insert(pair<string, long>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertRowsBefore"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/insertRowsBefore"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertRowsBeforeResponse(callApi(params, req, runtime));
}

InsertRowsBeforeResponse Alibabacloud_Aliding20230426::Client::insertRowsBefore(shared_ptr<InsertRowsBeforeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsertRowsBeforeHeaders> headers = make_shared<InsertRowsBeforeHeaders>();
  return insertRowsBeforeWithOptions(request, headers, runtime);
}

InviteUsersResponse Alibabacloud_Aliding20230426::Client::inviteUsersWithOptions(shared_ptr<InviteUsersRequest> tmpReq, shared_ptr<InviteUsersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InviteUsersShrinkRequest> request = make_shared<InviteUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<InviteUsersShrinkHeaders> headers = make_shared<InviteUsersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<InviteUsersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InviteUsersRequestInviteeList>>(tmpReq->inviteeList)) {
    request->inviteeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inviteeList, make_shared<string>("InviteeList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<InviteUsersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InviteUsersRequestPhoneInviteeList>>(tmpReq->phoneInviteeList)) {
    request->phoneInviteeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->phoneInviteeList, make_shared<string>("phoneInviteeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inviteeListShrink)) {
    body->insert(pair<string, string>("InviteeList", *request->inviteeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phoneInviteeListShrink)) {
    body->insert(pair<string, string>("phoneInviteeList", *request->phoneInviteeListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InviteUsers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/inviteUsers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InviteUsersResponse(callApi(params, req, runtime));
}

InviteUsersResponse Alibabacloud_Aliding20230426::Client::inviteUsers(shared_ptr<InviteUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InviteUsersHeaders> headers = make_shared<InviteUsersHeaders>();
  return inviteUsersWithOptions(request, headers, runtime);
}

ListApplicationResponse Alibabacloud_Aliding20230426::Client::listApplicationWithOptions(shared_ptr<ListApplicationRequest> request, shared_ptr<ListApplicationHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ListApplicationShrinkHeaders> headers = make_shared<ListApplicationShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListApplicationHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appFilter)) {
    body->insert(pair<string, string>("AppFilter", *request->appFilter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appNameSearchKeyword)) {
    body->insert(pair<string, string>("AppNameSearchKeyword", *request->appNameSearchKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    body->insert(pair<string, string>("CorpId", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplication"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/listApplication"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplicationResponse(callApi(params, req, runtime));
}

ListApplicationResponse Alibabacloud_Aliding20230426::Client::listApplication(shared_ptr<ListApplicationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListApplicationHeaders> headers = make_shared<ListApplicationHeaders>();
  return listApplicationWithOptions(request, headers, runtime);
}

ListCalendarsResponse Alibabacloud_Aliding20230426::Client::listCalendarsWithOptions(shared_ptr<ListCalendarsRequest> tmpReq, shared_ptr<ListCalendarsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCalendarsShrinkRequest> request = make_shared<ListCalendarsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListCalendarsShrinkHeaders> headers = make_shared<ListCalendarsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListCalendarsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->request, make_shared<string>("Request"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCalendars"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/listCalendars"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCalendarsResponse(callApi(params, req, runtime));
}

ListCalendarsResponse Alibabacloud_Aliding20230426::Client::listCalendars(shared_ptr<ListCalendarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListCalendarsHeaders> headers = make_shared<ListCalendarsHeaders>();
  return listCalendarsWithOptions(request, headers, runtime);
}

ListDentriesResponse Alibabacloud_Aliding20230426::Client::listDentriesWithOptions(shared_ptr<ListDentriesRequest> tmpReq, shared_ptr<ListDentriesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDentriesShrinkRequest> request = make_shared<ListDentriesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListDentriesShrinkHeaders> headers = make_shared<ListDentriesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListDentriesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListDentriesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    body->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentId)) {
    body->insert(pair<string, string>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withThumbnail)) {
    body->insert(pair<string, bool>("WithThumbnail", *request->withThumbnail));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDentries"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/listDentries"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDentriesResponse(callApi(params, req, runtime));
}

ListDentriesResponse Alibabacloud_Aliding20230426::Client::listDentries(shared_ptr<ListDentriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDentriesHeaders> headers = make_shared<ListDentriesHeaders>();
  return listDentriesWithOptions(request, headers, runtime);
}

ListDriveSpacesResponse Alibabacloud_Aliding20230426::Client::listDriveSpacesWithOptions(shared_ptr<ListDriveSpacesRequest> tmpReq, shared_ptr<ListDriveSpacesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListDriveSpacesShrinkRequest> request = make_shared<ListDriveSpacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListDriveSpacesShrinkHeaders> headers = make_shared<ListDriveSpacesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListDriveSpacesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListDriveSpacesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceType)) {
    body->insert(pair<string, string>("SpaceType", *request->spaceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDriveSpaces"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/listDriveSpaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDriveSpacesResponse(callApi(params, req, runtime));
}

ListDriveSpacesResponse Alibabacloud_Aliding20230426::Client::listDriveSpaces(shared_ptr<ListDriveSpacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListDriveSpacesHeaders> headers = make_shared<ListDriveSpacesHeaders>();
  return listDriveSpacesWithOptions(request, headers, runtime);
}

ListEventsResponse Alibabacloud_Aliding20230426::Client::listEventsWithOptions(shared_ptr<ListEventsRequest> request, shared_ptr<ListEventsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ListEventsShrinkHeaders> headers = make_shared<ListEventsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListEventsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttendees)) {
    body->insert(pair<string, long>("MaxAttendees", *request->maxAttendees));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->seriesMasterId)) {
    body->insert(pair<string, string>("SeriesMasterId", *request->seriesMasterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showDeleted)) {
    body->insert(pair<string, bool>("ShowDeleted", *request->showDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncToken)) {
    body->insert(pair<string, string>("SyncToken", *request->syncToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMax)) {
    body->insert(pair<string, string>("TimeMax", *request->timeMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMin)) {
    body->insert(pair<string, string>("TimeMin", *request->timeMin));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEvents"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/listEvents"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventsResponse(callApi(params, req, runtime));
}

ListEventsResponse Alibabacloud_Aliding20230426::Client::listEvents(shared_ptr<ListEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListEventsHeaders> headers = make_shared<ListEventsHeaders>();
  return listEventsWithOptions(request, headers, runtime);
}

ListEventsViewResponse Alibabacloud_Aliding20230426::Client::listEventsViewWithOptions(shared_ptr<ListEventsViewRequest> request, shared_ptr<ListEventsViewHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ListEventsViewShrinkHeaders> headers = make_shared<ListEventsViewShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListEventsViewHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAttendees)) {
    body->insert(pair<string, long>("MaxAttendees", *request->maxAttendees));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMax)) {
    body->insert(pair<string, string>("TimeMax", *request->timeMax));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeMin)) {
    body->insert(pair<string, string>("TimeMin", *request->timeMin));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventsView"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/listEventsView"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventsViewResponse(callApi(params, req, runtime));
}

ListEventsViewResponse Alibabacloud_Aliding20230426::Client::listEventsView(shared_ptr<ListEventsViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListEventsViewHeaders> headers = make_shared<ListEventsViewHeaders>();
  return listEventsViewWithOptions(request, headers, runtime);
}

ListFormRemarksResponse Alibabacloud_Aliding20230426::Client::listFormRemarksWithOptions(shared_ptr<ListFormRemarksRequest> tmpReq, shared_ptr<ListFormRemarksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListFormRemarksShrinkRequest> request = make_shared<ListFormRemarksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListFormRemarksShrinkHeaders> headers = make_shared<ListFormRemarksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListFormRemarksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->formInstanceIdList)) {
    request->formInstanceIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->formInstanceIdList, make_shared<string>("FormInstanceIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceIdListShrink)) {
    body->insert(pair<string, string>("FormInstanceIdList", *request->formInstanceIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFormRemarks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/listFormRemarks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFormRemarksResponse(callApi(params, req, runtime));
}

ListFormRemarksResponse Alibabacloud_Aliding20230426::Client::listFormRemarks(shared_ptr<ListFormRemarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListFormRemarksHeaders> headers = make_shared<ListFormRemarksHeaders>();
  return listFormRemarksWithOptions(request, headers, runtime);
}

ListNavigationByFormTypeResponse Alibabacloud_Aliding20230426::Client::listNavigationByFormTypeWithOptions(shared_ptr<ListNavigationByFormTypeRequest> request, shared_ptr<ListNavigationByFormTypeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ListNavigationByFormTypeShrinkHeaders> headers = make_shared<ListNavigationByFormTypeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListNavigationByFormTypeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formType)) {
    body->insert(pair<string, string>("FormType", *request->formType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNavigationByFormType"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/listNavigationByFormType"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNavigationByFormTypeResponse(callApi(params, req, runtime));
}

ListNavigationByFormTypeResponse Alibabacloud_Aliding20230426::Client::listNavigationByFormType(shared_ptr<ListNavigationByFormTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListNavigationByFormTypeHeaders> headers = make_shared<ListNavigationByFormTypeHeaders>();
  return listNavigationByFormTypeWithOptions(request, headers, runtime);
}

ListNodesResponse Alibabacloud_Aliding20230426::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> tmpReq, shared_ptr<ListNodesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListNodesShrinkRequest> request = make_shared<ListNodesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListNodesShrinkHeaders> headers = make_shared<ListNodesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListNodesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListNodesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentNodeId)) {
    body->insert(pair<string, string>("ParentNodeId", *request->parentNodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withPermissionRole)) {
    body->insert(pair<string, bool>("WithPermissionRole", *request->withPermissionRole));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/listNodes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNodesResponse(callApi(params, req, runtime));
}

ListNodesResponse Alibabacloud_Aliding20230426::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListNodesHeaders> headers = make_shared<ListNodesHeaders>();
  return listNodesWithOptions(request, headers, runtime);
}

ListReportResponse Alibabacloud_Aliding20230426::Client::listReportWithOptions(shared_ptr<ListReportRequest> tmpReq, shared_ptr<ListReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListReportShrinkRequest> request = make_shared<ListReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListReportShrinkHeaders> headers = make_shared<ListReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cursor)) {
    body->insert(pair<string, long>("Cursor", *request->cursor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modifiedEndTime)) {
    body->insert(pair<string, long>("ModifiedEndTime", *request->modifiedEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modifiedStartTime)) {
    body->insert(pair<string, long>("ModifiedStartTime", *request->modifiedStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/listReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListReportResponse(callApi(params, req, runtime));
}

ListReportResponse Alibabacloud_Aliding20230426::Client::listReport(shared_ptr<ListReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListReportHeaders> headers = make_shared<ListReportHeaders>();
  return listReportWithOptions(request, headers, runtime);
}

ListTableDataByFormInstanceIdTableIdResponse Alibabacloud_Aliding20230426::Client::listTableDataByFormInstanceIdTableIdWithOptions(shared_ptr<ListTableDataByFormInstanceIdTableIdRequest> request, shared_ptr<ListTableDataByFormInstanceIdTableIdHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<ListTableDataByFormInstanceIdTableIdShrinkHeaders> headers = make_shared<ListTableDataByFormInstanceIdTableIdShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListTableDataByFormInstanceIdTableIdHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceId)) {
    body->insert(pair<string, string>("FormInstanceId", *request->formInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableFieldId)) {
    body->insert(pair<string, string>("TableFieldId", *request->tableFieldId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTableDataByFormInstanceIdTableId"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/listTableDataByFormInstanceIdTableId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTableDataByFormInstanceIdTableIdResponse(callApi(params, req, runtime));
}

ListTableDataByFormInstanceIdTableIdResponse Alibabacloud_Aliding20230426::Client::listTableDataByFormInstanceIdTableId(shared_ptr<ListTableDataByFormInstanceIdTableIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListTableDataByFormInstanceIdTableIdHeaders> headers = make_shared<ListTableDataByFormInstanceIdTableIdHeaders>();
  return listTableDataByFormInstanceIdTableIdWithOptions(request, headers, runtime);
}

ListTeamsResponse Alibabacloud_Aliding20230426::Client::listTeamsWithOptions(shared_ptr<ListTeamsRequest> tmpReq, shared_ptr<ListTeamsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTeamsShrinkRequest> request = make_shared<ListTeamsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListTeamsShrinkHeaders> headers = make_shared<ListTeamsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListTeamsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListTeamsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTeams"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/listTeams"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTeamsResponse(callApi(params, req, runtime));
}

ListTeamsResponse Alibabacloud_Aliding20230426::Client::listTeams(shared_ptr<ListTeamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListTeamsHeaders> headers = make_shared<ListTeamsHeaders>();
  return listTeamsWithOptions(request, headers, runtime);
}

ListWorkspacesResponse Alibabacloud_Aliding20230426::Client::listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<ListWorkspacesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWorkspacesShrinkRequest> request = make_shared<ListWorkspacesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ListWorkspacesShrinkHeaders> headers = make_shared<ListWorkspacesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ListWorkspacesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ListWorkspacesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->teamId)) {
    body->insert(pair<string, string>("TeamId", *request->teamId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withPermissionRole)) {
    body->insert(pair<string, bool>("WithPermissionRole", *request->withPermissionRole));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWorkspaces"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/listWorkspaces"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListWorkspacesResponse(callApi(params, req, runtime));
}

ListWorkspacesResponse Alibabacloud_Aliding20230426::Client::listWorkspaces(shared_ptr<ListWorkspacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListWorkspacesHeaders> headers = make_shared<ListWorkspacesHeaders>();
  return listWorkspacesWithOptions(request, headers, runtime);
}

PatchEventResponse Alibabacloud_Aliding20230426::Client::patchEventWithOptions(shared_ptr<PatchEventRequest> tmpReq, shared_ptr<PatchEventHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PatchEventShrinkRequest> request = make_shared<PatchEventShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<PatchEventShrinkHeaders> headers = make_shared<PatchEventShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<PatchEventHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PatchEventRequestAttendees>>(tmpReq->attendees)) {
    request->attendeesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attendees, make_shared<string>("Attendees"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PatchEventRequestCardInstances>>(tmpReq->cardInstances)) {
    request->cardInstancesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cardInstances, make_shared<string>("CardInstances"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PatchEventRequestEnd>(tmpReq->end)) {
    request->endShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->end, make_shared<string>("End"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("Extra"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PatchEventRequestLocation>(tmpReq->location)) {
    request->locationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->location, make_shared<string>("Location"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PatchEventRequestRecurrence>(tmpReq->recurrence)) {
    request->recurrenceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recurrence, make_shared<string>("Recurrence"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PatchEventRequestReminders>>(tmpReq->reminders)) {
    request->remindersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reminders, make_shared<string>("Reminders"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<PatchEventRequestStart>(tmpReq->start)) {
    request->startShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->start, make_shared<string>("Start"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attendeesShrink)) {
    body->insert(pair<string, string>("Attendees", *request->attendeesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cardInstancesShrink)) {
    body->insert(pair<string, string>("CardInstances", *request->cardInstancesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endShrink)) {
    body->insert(pair<string, string>("End", *request->endShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("Extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAllDay)) {
    body->insert(pair<string, bool>("IsAllDay", *request->isAllDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationShrink)) {
    body->insert(pair<string, string>("Location", *request->locationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recurrenceShrink)) {
    body->insert(pair<string, string>("Recurrence", *request->recurrenceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remindersShrink)) {
    body->insert(pair<string, string>("Reminders", *request->remindersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startShrink)) {
    body->insert(pair<string, string>("Start", *request->startShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summary)) {
    body->insert(pair<string, string>("Summary", *request->summary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PatchEvent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/patchEvent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PatchEventResponse(callApi(params, req, runtime));
}

PatchEventResponse Alibabacloud_Aliding20230426::Client::patchEvent(shared_ptr<PatchEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PatchEventHeaders> headers = make_shared<PatchEventHeaders>();
  return patchEventWithOptions(request, headers, runtime);
}

QueryCloudRecordTextResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordTextWithOptions(shared_ptr<QueryCloudRecordTextRequest> tmpReq, shared_ptr<QueryCloudRecordTextHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryCloudRecordTextShrinkRequest> request = make_shared<QueryCloudRecordTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryCloudRecordTextShrinkHeaders> headers = make_shared<QueryCloudRecordTextShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordTextHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordTextRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    body->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nextToken)) {
    body->insert(pair<string, long>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCloudRecordText"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryCloudRecordText"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCloudRecordTextResponse(callApi(params, req, runtime));
}

QueryCloudRecordTextResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordText(shared_ptr<QueryCloudRecordTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryCloudRecordTextHeaders> headers = make_shared<QueryCloudRecordTextHeaders>();
  return queryCloudRecordTextWithOptions(request, headers, runtime);
}

QueryCloudRecordVideoResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordVideoWithOptions(shared_ptr<QueryCloudRecordVideoRequest> tmpReq, shared_ptr<QueryCloudRecordVideoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryCloudRecordVideoShrinkRequest> request = make_shared<QueryCloudRecordVideoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryCloudRecordVideoShrinkHeaders> headers = make_shared<QueryCloudRecordVideoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordVideoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordVideoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCloudRecordVideo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryCloudRecordVideo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCloudRecordVideoResponse(callApi(params, req, runtime));
}

QueryCloudRecordVideoResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordVideo(shared_ptr<QueryCloudRecordVideoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryCloudRecordVideoHeaders> headers = make_shared<QueryCloudRecordVideoHeaders>();
  return queryCloudRecordVideoWithOptions(request, headers, runtime);
}

QueryCloudRecordVideoPlayInfoResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordVideoPlayInfoWithOptions(shared_ptr<QueryCloudRecordVideoPlayInfoRequest> tmpReq, shared_ptr<QueryCloudRecordVideoPlayInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryCloudRecordVideoPlayInfoShrinkRequest> request = make_shared<QueryCloudRecordVideoPlayInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryCloudRecordVideoPlayInfoShrinkHeaders> headers = make_shared<QueryCloudRecordVideoPlayInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordVideoPlayInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryCloudRecordVideoPlayInfoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("ConferenceId", *request->conferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    body->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCloudRecordVideoPlayInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryCloudRecordVideoPlayInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCloudRecordVideoPlayInfoResponse(callApi(params, req, runtime));
}

QueryCloudRecordVideoPlayInfoResponse Alibabacloud_Aliding20230426::Client::queryCloudRecordVideoPlayInfo(shared_ptr<QueryCloudRecordVideoPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryCloudRecordVideoPlayInfoHeaders> headers = make_shared<QueryCloudRecordVideoPlayInfoHeaders>();
  return queryCloudRecordVideoPlayInfoWithOptions(request, headers, runtime);
}

QueryConferenceInfoResponse Alibabacloud_Aliding20230426::Client::queryConferenceInfoWithOptions(shared_ptr<QueryConferenceInfoRequest> request, shared_ptr<QueryConferenceInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<QueryConferenceInfoShrinkHeaders> headers = make_shared<QueryConferenceInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryConferenceInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConferenceInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryConferenceInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConferenceInfoResponse(callApi(params, req, runtime));
}

QueryConferenceInfoResponse Alibabacloud_Aliding20230426::Client::queryConferenceInfo(shared_ptr<QueryConferenceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryConferenceInfoHeaders> headers = make_shared<QueryConferenceInfoHeaders>();
  return queryConferenceInfoWithOptions(request, headers, runtime);
}

QueryConferenceMembersResponse Alibabacloud_Aliding20230426::Client::queryConferenceMembersWithOptions(shared_ptr<QueryConferenceMembersRequest> tmpReq, shared_ptr<QueryConferenceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryConferenceMembersShrinkRequest> request = make_shared<QueryConferenceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryConferenceMembersShrinkHeaders> headers = make_shared<QueryConferenceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryConferenceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryConferenceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConferenceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryConferenceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConferenceMembersResponse(callApi(params, req, runtime));
}

QueryConferenceMembersResponse Alibabacloud_Aliding20230426::Client::queryConferenceMembers(shared_ptr<QueryConferenceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryConferenceMembersHeaders> headers = make_shared<QueryConferenceMembersHeaders>();
  return queryConferenceMembersWithOptions(request, headers, runtime);
}

QueryDentryResponse Alibabacloud_Aliding20230426::Client::queryDentryWithOptions(shared_ptr<QueryDentryRequest> tmpReq, shared_ptr<QueryDentryHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryDentryShrinkRequest> request = make_shared<QueryDentryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryDentryShrinkHeaders> headers = make_shared<QueryDentryShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryDentryHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryDentryRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dentryId)) {
    body->insert(pair<string, string>("DentryId", *request->dentryId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeSpace)) {
    body->insert(pair<string, bool>("IncludeSpace", *request->includeSpace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spaceId)) {
    body->insert(pair<string, string>("SpaceId", *request->spaceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDentry"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v2/documents/queryDentry"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDentryResponse(callApi(params, req, runtime));
}

QueryDentryResponse Alibabacloud_Aliding20230426::Client::queryDentry(shared_ptr<QueryDentryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryDentryHeaders> headers = make_shared<QueryDentryHeaders>();
  return queryDentryWithOptions(request, headers, runtime);
}

QueryLiveInfoResponse Alibabacloud_Aliding20230426::Client::queryLiveInfoWithOptions(shared_ptr<QueryLiveInfoRequest> tmpReq, shared_ptr<QueryLiveInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryLiveInfoShrinkRequest> request = make_shared<QueryLiveInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryLiveInfoShrinkHeaders> headers = make_shared<QueryLiveInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryLiveInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryLiveInfoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLiveInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryLiveInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLiveInfoResponse(callApi(params, req, runtime));
}

QueryLiveInfoResponse Alibabacloud_Aliding20230426::Client::queryLiveInfo(shared_ptr<QueryLiveInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryLiveInfoHeaders> headers = make_shared<QueryLiveInfoHeaders>();
  return queryLiveInfoWithOptions(request, headers, runtime);
}

QueryLiveWatchDetailResponse Alibabacloud_Aliding20230426::Client::queryLiveWatchDetailWithOptions(shared_ptr<QueryLiveWatchDetailRequest> tmpReq, shared_ptr<QueryLiveWatchDetailHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryLiveWatchDetailShrinkRequest> request = make_shared<QueryLiveWatchDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryLiveWatchDetailShrinkHeaders> headers = make_shared<QueryLiveWatchDetailShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryLiveWatchDetailHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryLiveWatchDetailRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLiveWatchDetail"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryLiveWatchDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLiveWatchDetailResponse(callApi(params, req, runtime));
}

QueryLiveWatchDetailResponse Alibabacloud_Aliding20230426::Client::queryLiveWatchDetail(shared_ptr<QueryLiveWatchDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryLiveWatchDetailHeaders> headers = make_shared<QueryLiveWatchDetailHeaders>();
  return queryLiveWatchDetailWithOptions(request, headers, runtime);
}

QueryLiveWatchUserListResponse Alibabacloud_Aliding20230426::Client::queryLiveWatchUserListWithOptions(shared_ptr<QueryLiveWatchUserListRequest> tmpReq, shared_ptr<QueryLiveWatchUserListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryLiveWatchUserListShrinkRequest> request = make_shared<QueryLiveWatchUserListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryLiveWatchUserListShrinkHeaders> headers = make_shared<QueryLiveWatchUserListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryLiveWatchUserListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryLiveWatchUserListRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLiveWatchUserList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryLiveWatchUserList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLiveWatchUserListResponse(callApi(params, req, runtime));
}

QueryLiveWatchUserListResponse Alibabacloud_Aliding20230426::Client::queryLiveWatchUserList(shared_ptr<QueryLiveWatchUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryLiveWatchUserListHeaders> headers = make_shared<QueryLiveWatchUserListHeaders>();
  return queryLiveWatchUserListWithOptions(request, headers, runtime);
}

QueryMeetingRoomResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomWithOptions(shared_ptr<QueryMeetingRoomRequest> tmpReq, shared_ptr<QueryMeetingRoomHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMeetingRoomShrinkRequest> request = make_shared<QueryMeetingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMeetingRoomShrinkHeaders> headers = make_shared<QueryMeetingRoomShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    body->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMeetingRoom"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMeetingRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMeetingRoomResponse(callApi(params, req, runtime));
}

QueryMeetingRoomResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoom(shared_ptr<QueryMeetingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMeetingRoomHeaders> headers = make_shared<QueryMeetingRoomHeaders>();
  return queryMeetingRoomWithOptions(request, headers, runtime);
}

QueryMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomGroupWithOptions(shared_ptr<QueryMeetingRoomGroupRequest> tmpReq, shared_ptr<QueryMeetingRoomGroupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMeetingRoomGroupShrinkRequest> request = make_shared<QueryMeetingRoomGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMeetingRoomGroupShrinkHeaders> headers = make_shared<QueryMeetingRoomGroupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomGroupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomGroupRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMeetingRoomGroup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMeetingRoomGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMeetingRoomGroupResponse(callApi(params, req, runtime));
}

QueryMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomGroup(shared_ptr<QueryMeetingRoomGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMeetingRoomGroupHeaders> headers = make_shared<QueryMeetingRoomGroupHeaders>();
  return queryMeetingRoomGroupWithOptions(request, headers, runtime);
}

QueryMeetingRoomGroupListResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomGroupListWithOptions(shared_ptr<QueryMeetingRoomGroupListRequest> tmpReq, shared_ptr<QueryMeetingRoomGroupListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMeetingRoomGroupListShrinkRequest> request = make_shared<QueryMeetingRoomGroupListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMeetingRoomGroupListShrinkHeaders> headers = make_shared<QueryMeetingRoomGroupListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomGroupListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->request)) {
    request->requestShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->request, make_shared<string>("Request"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomGroupListRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestShrink)) {
    body->insert(pair<string, string>("Request", *request->requestShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMeetingRoomGroupList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMeetingRoomGroupList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMeetingRoomGroupListResponse(callApi(params, req, runtime));
}

QueryMeetingRoomGroupListResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomGroupList(shared_ptr<QueryMeetingRoomGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMeetingRoomGroupListHeaders> headers = make_shared<QueryMeetingRoomGroupListHeaders>();
  return queryMeetingRoomGroupListWithOptions(request, headers, runtime);
}

QueryMeetingRoomListResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomListWithOptions(shared_ptr<QueryMeetingRoomListRequest> tmpReq, shared_ptr<QueryMeetingRoomListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMeetingRoomListShrinkRequest> request = make_shared<QueryMeetingRoomListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMeetingRoomListShrinkHeaders> headers = make_shared<QueryMeetingRoomListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMeetingRoomListRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nextToken)) {
    body->insert(pair<string, long>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMeetingRoomList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMeetingRoomList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMeetingRoomListResponse(callApi(params, req, runtime));
}

QueryMeetingRoomListResponse Alibabacloud_Aliding20230426::Client::queryMeetingRoomList(shared_ptr<QueryMeetingRoomListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMeetingRoomListHeaders> headers = make_shared<QueryMeetingRoomListHeaders>();
  return queryMeetingRoomListWithOptions(request, headers, runtime);
}

QueryMinutesResponse Alibabacloud_Aliding20230426::Client::queryMinutesWithOptions(shared_ptr<QueryMinutesRequest> tmpReq, shared_ptr<QueryMinutesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMinutesShrinkRequest> request = make_shared<QueryMinutesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMinutesShrinkHeaders> headers = make_shared<QueryMinutesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMinutesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMinutesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMinutes"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMinutes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMinutesResponse(callApi(params, req, runtime));
}

QueryMinutesResponse Alibabacloud_Aliding20230426::Client::queryMinutes(shared_ptr<QueryMinutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMinutesHeaders> headers = make_shared<QueryMinutesHeaders>();
  return queryMinutesWithOptions(request, headers, runtime);
}

QueryMinutesSummaryResponse Alibabacloud_Aliding20230426::Client::queryMinutesSummaryWithOptions(shared_ptr<QueryMinutesSummaryRequest> tmpReq, shared_ptr<QueryMinutesSummaryHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMinutesSummaryShrinkRequest> request = make_shared<QueryMinutesSummaryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMinutesSummaryShrinkHeaders> headers = make_shared<QueryMinutesSummaryShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMinutesSummaryHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMinutesSummaryRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->summaryTypeList)) {
    request->summaryTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->summaryTypeList, make_shared<string>("summaryTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->summaryTypeListShrink)) {
    body->insert(pair<string, string>("summaryTypeList", *request->summaryTypeListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMinutesSummary"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMinutesSummary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMinutesSummaryResponse(callApi(params, req, runtime));
}

QueryMinutesSummaryResponse Alibabacloud_Aliding20230426::Client::queryMinutesSummary(shared_ptr<QueryMinutesSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMinutesSummaryHeaders> headers = make_shared<QueryMinutesSummaryHeaders>();
  return queryMinutesSummaryWithOptions(request, headers, runtime);
}

QueryMinutesTextResponse Alibabacloud_Aliding20230426::Client::queryMinutesTextWithOptions(shared_ptr<QueryMinutesTextRequest> tmpReq, shared_ptr<QueryMinutesTextHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryMinutesTextShrinkRequest> request = make_shared<QueryMinutesTextShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryMinutesTextShrinkHeaders> headers = make_shared<QueryMinutesTextShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryMinutesTextHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryMinutesTextRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    body->insert(pair<string, string>("direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMinutesText"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryMinutesText"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMinutesTextResponse(callApi(params, req, runtime));
}

QueryMinutesTextResponse Alibabacloud_Aliding20230426::Client::queryMinutesText(shared_ptr<QueryMinutesTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryMinutesTextHeaders> headers = make_shared<QueryMinutesTextHeaders>();
  return queryMinutesTextWithOptions(request, headers, runtime);
}

QueryOrgHonorsResponse Alibabacloud_Aliding20230426::Client::queryOrgHonorsWithOptions(shared_ptr<QueryOrgHonorsRequest> tmpReq, shared_ptr<QueryOrgHonorsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryOrgHonorsShrinkRequest> request = make_shared<QueryOrgHonorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryOrgHonorsShrinkHeaders> headers = make_shared<QueryOrgHonorsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryOrgHonorsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryOrgHonorsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrgHonors"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/queryOrgHonors"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrgHonorsResponse(callApi(params, req, runtime));
}

QueryOrgHonorsResponse Alibabacloud_Aliding20230426::Client::queryOrgHonors(shared_ptr<QueryOrgHonorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryOrgHonorsHeaders> headers = make_shared<QueryOrgHonorsHeaders>();
  return queryOrgHonorsWithOptions(request, headers, runtime);
}

QueryOrgTodoTasksResponse Alibabacloud_Aliding20230426::Client::queryOrgTodoTasksWithOptions(shared_ptr<QueryOrgTodoTasksRequest> tmpReq, shared_ptr<QueryOrgTodoTasksHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryOrgTodoTasksShrinkRequest> request = make_shared<QueryOrgTodoTasksShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryOrgTodoTasksShrinkHeaders> headers = make_shared<QueryOrgTodoTasksShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryOrgTodoTasksHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryOrgTodoTasksRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDone)) {
    body->insert(pair<string, bool>("isDone", *request->isDone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOrgTodoTasks"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/queryOrgTodoTasks"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOrgTodoTasksResponse(callApi(params, req, runtime));
}

QueryOrgTodoTasksResponse Alibabacloud_Aliding20230426::Client::queryOrgTodoTasks(shared_ptr<QueryOrgTodoTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryOrgTodoTasksHeaders> headers = make_shared<QueryOrgTodoTasksHeaders>();
  return queryOrgTodoTasksWithOptions(request, headers, runtime);
}

QueryReportDetailResponse Alibabacloud_Aliding20230426::Client::queryReportDetailWithOptions(shared_ptr<QueryReportDetailRequest> tmpReq, shared_ptr<QueryReportDetailHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryReportDetailShrinkRequest> request = make_shared<QueryReportDetailShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryReportDetailShrinkHeaders> headers = make_shared<QueryReportDetailShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryReportDetailHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryReportDetailRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    body->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReportDetail"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/queryReportDetail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReportDetailResponse(callApi(params, req, runtime));
}

QueryReportDetailResponse Alibabacloud_Aliding20230426::Client::queryReportDetail(shared_ptr<QueryReportDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryReportDetailHeaders> headers = make_shared<QueryReportDetailHeaders>();
  return queryReportDetailWithOptions(request, headers, runtime);
}

QueryScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::queryScheduleConferenceWithOptions(shared_ptr<QueryScheduleConferenceRequest> tmpReq, shared_ptr<QueryScheduleConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryScheduleConferenceShrinkRequest> request = make_shared<QueryScheduleConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryScheduleConferenceShrinkHeaders> headers = make_shared<QueryScheduleConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryScheduleConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryScheduleConferenceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConferenceId)) {
    body->insert(pair<string, string>("scheduleConferenceId", *request->scheduleConferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryScheduleConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryScheduleConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryScheduleConferenceResponse(callApi(params, req, runtime));
}

QueryScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::queryScheduleConference(shared_ptr<QueryScheduleConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryScheduleConferenceHeaders> headers = make_shared<QueryScheduleConferenceHeaders>();
  return queryScheduleConferenceWithOptions(request, headers, runtime);
}

QueryScheduleConferenceInfoResponse Alibabacloud_Aliding20230426::Client::queryScheduleConferenceInfoWithOptions(shared_ptr<QueryScheduleConferenceInfoRequest> tmpReq, shared_ptr<QueryScheduleConferenceInfoHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryScheduleConferenceInfoShrinkRequest> request = make_shared<QueryScheduleConferenceInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryScheduleConferenceInfoShrinkHeaders> headers = make_shared<QueryScheduleConferenceInfoShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryScheduleConferenceInfoHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryScheduleConferenceInfoRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConferenceId)) {
    body->insert(pair<string, string>("ScheduleConferenceId", *request->scheduleConferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryScheduleConferenceInfo"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/queryScheduleConferenceInfo"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryScheduleConferenceInfoResponse(callApi(params, req, runtime));
}

QueryScheduleConferenceInfoResponse Alibabacloud_Aliding20230426::Client::queryScheduleConferenceInfo(shared_ptr<QueryScheduleConferenceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryScheduleConferenceInfoHeaders> headers = make_shared<QueryScheduleConferenceInfoHeaders>();
  return queryScheduleConferenceInfoWithOptions(request, headers, runtime);
}

QueryUserHonorsResponse Alibabacloud_Aliding20230426::Client::queryUserHonorsWithOptions(shared_ptr<QueryUserHonorsRequest> tmpReq, shared_ptr<QueryUserHonorsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUserHonorsShrinkRequest> request = make_shared<QueryUserHonorsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<QueryUserHonorsShrinkHeaders> headers = make_shared<QueryUserHonorsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<QueryUserHonorsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<QueryUserHonorsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryUserHonors"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/queryUserHonors"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryUserHonorsResponse(callApi(params, req, runtime));
}

QueryUserHonorsResponse Alibabacloud_Aliding20230426::Client::queryUserHonors(shared_ptr<QueryUserHonorsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryUserHonorsHeaders> headers = make_shared<QueryUserHonorsHeaders>();
  return queryUserHonorsWithOptions(request, headers, runtime);
}

RecallHonorResponse Alibabacloud_Aliding20230426::Client::recallHonorWithOptions(shared_ptr<RecallHonorRequest> tmpReq, shared_ptr<RecallHonorHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RecallHonorShrinkRequest> request = make_shared<RecallHonorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<RecallHonorShrinkHeaders> headers = make_shared<RecallHonorShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<RecallHonorHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RecallHonorRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->honorId)) {
    body->insert(pair<string, string>("honorId", *request->honorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecallHonor"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/recallHonor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecallHonorResponse(callApi(params, req, runtime));
}

RecallHonorResponse Alibabacloud_Aliding20230426::Client::recallHonor(shared_ptr<RecallHonorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RecallHonorHeaders> headers = make_shared<RecallHonorHeaders>();
  return recallHonorWithOptions(request, headers, runtime);
}

ReceiverListReportResponse Alibabacloud_Aliding20230426::Client::receiverListReportWithOptions(shared_ptr<ReceiverListReportRequest> tmpReq, shared_ptr<ReceiverListReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ReceiverListReportShrinkRequest> request = make_shared<ReceiverListReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<ReceiverListReportShrinkHeaders> headers = make_shared<ReceiverListReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<ReceiverListReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ReceiverListReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    body->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReceiverListReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/receiverListReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReceiverListReportResponse(callApi(params, req, runtime));
}

ReceiverListReportResponse Alibabacloud_Aliding20230426::Client::receiverListReport(shared_ptr<ReceiverListReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ReceiverListReportHeaders> headers = make_shared<ReceiverListReportHeaders>();
  return receiverListReportWithOptions(request, headers, runtime);
}

RedirectTaskResponse Alibabacloud_Aliding20230426::Client::redirectTaskWithOptions(shared_ptr<RedirectTaskRequest> request, shared_ptr<RedirectTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<RedirectTaskShrinkHeaders> headers = make_shared<RedirectTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<RedirectTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->byManager)) {
    body->insert(pair<string, string>("ByManager", *request->byManager));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nowActionExecutorId)) {
    body->insert(pair<string, string>("NowActionExecutorId", *request->nowActionExecutorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("TaskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RedirectTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/redirectTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RedirectTaskResponse(callApi(params, req, runtime));
}

RedirectTaskResponse Alibabacloud_Aliding20230426::Client::redirectTask(shared_ptr<RedirectTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RedirectTaskHeaders> headers = make_shared<RedirectTaskHeaders>();
  return redirectTaskWithOptions(request, headers, runtime);
}

RemoveAttendeeResponse Alibabacloud_Aliding20230426::Client::removeAttendeeWithOptions(shared_ptr<RemoveAttendeeRequest> tmpReq, shared_ptr<RemoveAttendeeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveAttendeeShrinkRequest> request = make_shared<RemoveAttendeeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<RemoveAttendeeShrinkHeaders> headers = make_shared<RemoveAttendeeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<RemoveAttendeeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->attendeesToRemove)) {
    request->attendeesToRemoveShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->attendeesToRemove, make_shared<string>("AttendeesToRemove"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attendeesToRemoveShrink)) {
    body->insert(pair<string, string>("AttendeesToRemove", *request->attendeesToRemoveShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAttendee"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/removeAttendee"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAttendeeResponse(callApi(params, req, runtime));
}

RemoveAttendeeResponse Alibabacloud_Aliding20230426::Client::removeAttendee(shared_ptr<RemoveAttendeeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RemoveAttendeeHeaders> headers = make_shared<RemoveAttendeeHeaders>();
  return removeAttendeeWithOptions(request, headers, runtime);
}

RemoveMeetingRoomsResponse Alibabacloud_Aliding20230426::Client::removeMeetingRoomsWithOptions(shared_ptr<RemoveMeetingRoomsRequest> tmpReq, shared_ptr<RemoveMeetingRoomsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveMeetingRoomsShrinkRequest> request = make_shared<RemoveMeetingRoomsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<RemoveMeetingRoomsShrinkHeaders> headers = make_shared<RemoveMeetingRoomsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<RemoveMeetingRoomsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RemoveMeetingRoomsRequestMeetingRoomsToRemove>>(tmpReq->meetingRoomsToRemove)) {
    request->meetingRoomsToRemoveShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->meetingRoomsToRemove, make_shared<string>("MeetingRoomsToRemove"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    body->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->meetingRoomsToRemoveShrink)) {
    body->insert(pair<string, string>("MeetingRoomsToRemove", *request->meetingRoomsToRemoveShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveMeetingRooms"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/removeMeetingRooms"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveMeetingRoomsResponse(callApi(params, req, runtime));
}

RemoveMeetingRoomsResponse Alibabacloud_Aliding20230426::Client::removeMeetingRooms(shared_ptr<RemoveMeetingRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<RemoveMeetingRoomsHeaders> headers = make_shared<RemoveMeetingRoomsHeaders>();
  return removeMeetingRoomsWithOptions(request, headers, runtime);
}

SaveContentResponse Alibabacloud_Aliding20230426::Client::saveContentWithOptions(shared_ptr<SaveContentRequest> tmpReq, shared_ptr<SaveContentHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SaveContentShrinkRequest> request = make_shared<SaveContentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SaveContentShrinkHeaders> headers = make_shared<SaveContentShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SaveContentHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SaveContentRequestContents>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("Contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SaveContentRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("Contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddFrom)) {
    body->insert(pair<string, string>("DdFrom", *request->ddFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveContent"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/saveContent"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveContentResponse(callApi(params, req, runtime));
}

SaveContentResponse Alibabacloud_Aliding20230426::Client::saveContent(shared_ptr<SaveContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SaveContentHeaders> headers = make_shared<SaveContentHeaders>();
  return saveContentWithOptions(request, headers, runtime);
}

SaveFormDataResponse Alibabacloud_Aliding20230426::Client::saveFormDataWithOptions(shared_ptr<SaveFormDataRequest> request, shared_ptr<SaveFormDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SaveFormDataShrinkHeaders> headers = make_shared<SaveFormDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SaveFormDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJson)) {
    body->insert(pair<string, string>("FormDataJson", *request->formDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveFormData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/saveFormData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveFormDataResponse(callApi(params, req, runtime));
}

SaveFormDataResponse Alibabacloud_Aliding20230426::Client::saveFormData(shared_ptr<SaveFormDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SaveFormDataHeaders> headers = make_shared<SaveFormDataHeaders>();
  return saveFormDataWithOptions(request, headers, runtime);
}

SaveFormRemarkResponse Alibabacloud_Aliding20230426::Client::saveFormRemarkWithOptions(shared_ptr<SaveFormRemarkRequest> request, shared_ptr<SaveFormRemarkHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SaveFormRemarkShrinkHeaders> headers = make_shared<SaveFormRemarkShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SaveFormRemarkHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->atUserId)) {
    body->insert(pair<string, string>("AtUserId", *request->atUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceId)) {
    body->insert(pair<string, string>("FormInstanceId", *request->formInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->replyId)) {
    body->insert(pair<string, long>("ReplyId", *request->replyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveFormRemark"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/saveFormRemark"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveFormRemarkResponse(callApi(params, req, runtime));
}

SaveFormRemarkResponse Alibabacloud_Aliding20230426::Client::saveFormRemark(shared_ptr<SaveFormRemarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SaveFormRemarkHeaders> headers = make_shared<SaveFormRemarkHeaders>();
  return saveFormRemarkWithOptions(request, headers, runtime);
}

SearchEmployeeFieldValuesResponse Alibabacloud_Aliding20230426::Client::searchEmployeeFieldValuesWithOptions(shared_ptr<SearchEmployeeFieldValuesRequest> request, shared_ptr<SearchEmployeeFieldValuesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchEmployeeFieldValuesShrinkHeaders> headers = make_shared<SearchEmployeeFieldValuesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchEmployeeFieldValuesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFieldJson)) {
    body->insert(pair<string, string>("SearchFieldJson", *request->searchFieldJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFieldJson)) {
    body->insert(pair<string, string>("TargetFieldJson", *request->targetFieldJson));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEmployeeFieldValues"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/searchEmployeeFieldValues"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEmployeeFieldValuesResponse(callApi(params, req, runtime));
}

SearchEmployeeFieldValuesResponse Alibabacloud_Aliding20230426::Client::searchEmployeeFieldValues(shared_ptr<SearchEmployeeFieldValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchEmployeeFieldValuesHeaders> headers = make_shared<SearchEmployeeFieldValuesHeaders>();
  return searchEmployeeFieldValuesWithOptions(request, headers, runtime);
}

SearchFormDataIdListResponse Alibabacloud_Aliding20230426::Client::searchFormDataIdListWithOptions(shared_ptr<SearchFormDataIdListRequest> request, shared_ptr<SearchFormDataIdListHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchFormDataIdListShrinkHeaders> headers = make_shared<SearchFormDataIdListShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchFormDataIdListHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFieldJson)) {
    body->insert(pair<string, string>("SearchFieldJson", *request->searchFieldJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchFormDataIdList"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/searchFormDataIdList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchFormDataIdListResponse(callApi(params, req, runtime));
}

SearchFormDataIdListResponse Alibabacloud_Aliding20230426::Client::searchFormDataIdList(shared_ptr<SearchFormDataIdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchFormDataIdListHeaders> headers = make_shared<SearchFormDataIdListHeaders>();
  return searchFormDataIdListWithOptions(request, headers, runtime);
}

SearchFormDataSecondGenerationResponse Alibabacloud_Aliding20230426::Client::searchFormDataSecondGenerationWithOptions(shared_ptr<SearchFormDataSecondGenerationRequest> request, shared_ptr<SearchFormDataSecondGenerationHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchFormDataSecondGenerationShrinkHeaders> headers = make_shared<SearchFormDataSecondGenerationShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchFormDataSecondGenerationHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderConfigJson)) {
    body->insert(pair<string, string>("OrderConfigJson", *request->orderConfigJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchCondition)) {
    body->insert(pair<string, string>("SearchCondition", *request->searchCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchFormDataSecondGeneration"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/searchFormDataSecondGeneration"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchFormDataSecondGenerationResponse(callApi(params, req, runtime));
}

SearchFormDataSecondGenerationResponse Alibabacloud_Aliding20230426::Client::searchFormDataSecondGeneration(shared_ptr<SearchFormDataSecondGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchFormDataSecondGenerationHeaders> headers = make_shared<SearchFormDataSecondGenerationHeaders>();
  return searchFormDataSecondGenerationWithOptions(request, headers, runtime);
}

SearchFormDataSecondGenerationNoTableFieldResponse Alibabacloud_Aliding20230426::Client::searchFormDataSecondGenerationNoTableFieldWithOptions(shared_ptr<SearchFormDataSecondGenerationNoTableFieldRequest> request, shared_ptr<SearchFormDataSecondGenerationNoTableFieldHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchFormDataSecondGenerationNoTableFieldShrinkHeaders> headers = make_shared<SearchFormDataSecondGenerationNoTableFieldShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchFormDataSecondGenerationNoTableFieldHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderConfigJson)) {
    body->insert(pair<string, string>("OrderConfigJson", *request->orderConfigJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchCondition)) {
    body->insert(pair<string, string>("SearchCondition", *request->searchCondition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchFormDataSecondGenerationNoTableField"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/searchFormDataSecondGenerationNoTableField"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchFormDataSecondGenerationNoTableFieldResponse(callApi(params, req, runtime));
}

SearchFormDataSecondGenerationNoTableFieldResponse Alibabacloud_Aliding20230426::Client::searchFormDataSecondGenerationNoTableField(shared_ptr<SearchFormDataSecondGenerationNoTableFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchFormDataSecondGenerationNoTableFieldHeaders> headers = make_shared<SearchFormDataSecondGenerationNoTableFieldHeaders>();
  return searchFormDataSecondGenerationNoTableFieldWithOptions(request, headers, runtime);
}

SearchFormDatasResponse Alibabacloud_Aliding20230426::Client::searchFormDatasWithOptions(shared_ptr<SearchFormDatasRequest> request, shared_ptr<SearchFormDatasHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchFormDatasShrinkHeaders> headers = make_shared<SearchFormDatasShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchFormDatasHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createFromTimeGMT)) {
    body->insert(pair<string, string>("CreateFromTimeGMT", *request->createFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createToTimeGMT)) {
    body->insert(pair<string, string>("CreateToTimeGMT", *request->createToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicOrder)) {
    body->insert(pair<string, string>("DynamicOrder", *request->dynamicOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedFromTimeGMT)) {
    body->insert(pair<string, string>("ModifiedFromTimeGMT", *request->modifiedFromTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedToTimeGMT)) {
    body->insert(pair<string, string>("ModifiedToTimeGMT", *request->modifiedToTimeGMT));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originatorId)) {
    body->insert(pair<string, string>("OriginatorId", *request->originatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchFieldJson)) {
    body->insert(pair<string, string>("SearchFieldJson", *request->searchFieldJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchFormDatas"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/searchFormDatas"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchFormDatasResponse(callApi(params, req, runtime));
}

SearchFormDatasResponse Alibabacloud_Aliding20230426::Client::searchFormDatas(shared_ptr<SearchFormDatasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchFormDatasHeaders> headers = make_shared<SearchFormDatasHeaders>();
  return searchFormDatasWithOptions(request, headers, runtime);
}

SearchInnerGroupsResponse Alibabacloud_Aliding20230426::Client::searchInnerGroupsWithOptions(shared_ptr<SearchInnerGroupsRequest> request, shared_ptr<SearchInnerGroupsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SearchInnerGroupsShrinkHeaders> headers = make_shared<SearchInnerGroupsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SearchInnerGroupsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    body->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchInnerGroups"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/im/searchInnerGroups"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchInnerGroupsResponse(callApi(params, req, runtime));
}

SearchInnerGroupsResponse Alibabacloud_Aliding20230426::Client::searchInnerGroups(shared_ptr<SearchInnerGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SearchInnerGroupsHeaders> headers = make_shared<SearchInnerGroupsHeaders>();
  return searchInnerGroupsWithOptions(request, headers, runtime);
}

SendBannerResponse Alibabacloud_Aliding20230426::Client::sendBannerWithOptions(shared_ptr<SendBannerRequest> tmpReq, shared_ptr<SendBannerHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendBannerShrinkRequest> request = make_shared<SendBannerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SendBannerShrinkHeaders> headers = make_shared<SendBannerShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SendBannerHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendBannerRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    body->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendBanner"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/sendBanner"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendBannerResponse(callApi(params, req, runtime));
}

SendBannerResponse Alibabacloud_Aliding20230426::Client::sendBanner(shared_ptr<SendBannerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SendBannerHeaders> headers = make_shared<SendBannerHeaders>();
  return sendBannerWithOptions(request, headers, runtime);
}

SendPopupResponse Alibabacloud_Aliding20230426::Client::sendPopupWithOptions(shared_ptr<SendPopupRequest> tmpReq, shared_ptr<SendPopupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendPopupShrinkRequest> request = make_shared<SendPopupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SendPopupShrinkHeaders> headers = make_shared<SendPopupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SendPopupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendPopupRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    body->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendPopup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/sendPopup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendPopupResponse(callApi(params, req, runtime));
}

SendPopupResponse Alibabacloud_Aliding20230426::Client::sendPopup(shared_ptr<SendPopupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SendPopupHeaders> headers = make_shared<SendPopupHeaders>();
  return sendPopupWithOptions(request, headers, runtime);
}

SendSearchShadeResponse Alibabacloud_Aliding20230426::Client::sendSearchShadeWithOptions(shared_ptr<SendSearchShadeRequest> tmpReq, shared_ptr<SendSearchShadeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendSearchShadeShrinkRequest> request = make_shared<SendSearchShadeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SendSearchShadeShrinkHeaders> headers = make_shared<SendSearchShadeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SendSearchShadeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SendSearchShadeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    body->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendSearchShade"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/watt/sendSearchShade"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendSearchShadeResponse(callApi(params, req, runtime));
}

SendSearchShadeResponse Alibabacloud_Aliding20230426::Client::sendSearchShade(shared_ptr<SendSearchShadeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SendSearchShadeHeaders> headers = make_shared<SendSearchShadeHeaders>();
  return sendSearchShadeWithOptions(request, headers, runtime);
}

SetColumnsVisibilityResponse Alibabacloud_Aliding20230426::Client::setColumnsVisibilityWithOptions(shared_ptr<SetColumnsVisibilityRequest> tmpReq, shared_ptr<SetColumnsVisibilityHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetColumnsVisibilityShrinkRequest> request = make_shared<SetColumnsVisibilityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SetColumnsVisibilityShrinkHeaders> headers = make_shared<SetColumnsVisibilityShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SetColumnsVisibilityHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SetColumnsVisibilityRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->column)) {
    body->insert(pair<string, long>("Column", *request->column));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->columnCount)) {
    body->insert(pair<string, long>("ColumnCount", *request->columnCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    body->insert(pair<string, string>("Visibility", *request->visibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetColumnsVisibility"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/setColumnsVisibility"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetColumnsVisibilityResponse(callApi(params, req, runtime));
}

SetColumnsVisibilityResponse Alibabacloud_Aliding20230426::Client::setColumnsVisibility(shared_ptr<SetColumnsVisibilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SetColumnsVisibilityHeaders> headers = make_shared<SetColumnsVisibilityHeaders>();
  return setColumnsVisibilityWithOptions(request, headers, runtime);
}

SetRowsVisibilityResponse Alibabacloud_Aliding20230426::Client::setRowsVisibilityWithOptions(shared_ptr<SetRowsVisibilityRequest> tmpReq, shared_ptr<SetRowsVisibilityHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetRowsVisibilityShrinkRequest> request = make_shared<SetRowsVisibilityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SetRowsVisibilityShrinkHeaders> headers = make_shared<SetRowsVisibilityShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SetRowsVisibilityHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SetRowsVisibilityRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->row)) {
    body->insert(pair<string, long>("Row", *request->row));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rowCount)) {
    body->insert(pair<string, long>("RowCount", *request->rowCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    body->insert(pair<string, string>("Visibility", *request->visibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetRowsVisibility"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/setRowsVisibility"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetRowsVisibilityResponse(callApi(params, req, runtime));
}

SetRowsVisibilityResponse Alibabacloud_Aliding20230426::Client::setRowsVisibility(shared_ptr<SetRowsVisibilityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SetRowsVisibilityHeaders> headers = make_shared<SetRowsVisibilityHeaders>();
  return setRowsVisibilityWithOptions(request, headers, runtime);
}

SimpleListReportResponse Alibabacloud_Aliding20230426::Client::simpleListReportWithOptions(shared_ptr<SimpleListReportRequest> tmpReq, shared_ptr<SimpleListReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SimpleListReportShrinkRequest> request = make_shared<SimpleListReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SimpleListReportShrinkHeaders> headers = make_shared<SimpleListReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SimpleListReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SimpleListReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cursor)) {
    body->insert(pair<string, long>("Cursor", *request->cursor));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SimpleListReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/simpleListReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SimpleListReportResponse(callApi(params, req, runtime));
}

SimpleListReportResponse Alibabacloud_Aliding20230426::Client::simpleListReport(shared_ptr<SimpleListReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SimpleListReportHeaders> headers = make_shared<SimpleListReportHeaders>();
  return simpleListReportWithOptions(request, headers, runtime);
}

StartCloudRecordResponse Alibabacloud_Aliding20230426::Client::startCloudRecordWithOptions(shared_ptr<StartCloudRecordRequest> tmpReq, shared_ptr<StartCloudRecordHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartCloudRecordShrinkRequest> request = make_shared<StartCloudRecordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StartCloudRecordShrinkHeaders> headers = make_shared<StartCloudRecordShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StartCloudRecordHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartCloudRecordRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smallWindowPosition)) {
    body->insert(pair<string, string>("SmallWindowPosition", *request->smallWindowPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCloudRecord"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/startCloudRecord"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCloudRecordResponse(callApi(params, req, runtime));
}

StartCloudRecordResponse Alibabacloud_Aliding20230426::Client::startCloudRecord(shared_ptr<StartCloudRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StartCloudRecordHeaders> headers = make_shared<StartCloudRecordHeaders>();
  return startCloudRecordWithOptions(request, headers, runtime);
}

StartInstanceResponse Alibabacloud_Aliding20230426::Client::startInstanceWithOptions(shared_ptr<StartInstanceRequest> request, shared_ptr<StartInstanceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<StartInstanceShrinkHeaders> headers = make_shared<StartInstanceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StartInstanceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departmentId)) {
    body->insert(pair<string, string>("DepartmentId", *request->departmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formDataJson)) {
    body->insert(pair<string, string>("FormDataJson", *request->formDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formUuid)) {
    body->insert(pair<string, string>("FormUuid", *request->formUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processCode)) {
    body->insert(pair<string, string>("ProcessCode", *request->processCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processData)) {
    body->insert(pair<string, string>("ProcessData", *request->processData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartInstance"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/startInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartInstanceResponse(callApi(params, req, runtime));
}

StartInstanceResponse Alibabacloud_Aliding20230426::Client::startInstance(shared_ptr<StartInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StartInstanceHeaders> headers = make_shared<StartInstanceHeaders>();
  return startInstanceWithOptions(request, headers, runtime);
}

StartMinutesResponse Alibabacloud_Aliding20230426::Client::startMinutesWithOptions(shared_ptr<StartMinutesRequest> tmpReq, shared_ptr<StartMinutesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartMinutesShrinkRequest> request = make_shared<StartMinutesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StartMinutesShrinkHeaders> headers = make_shared<StartMinutesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StartMinutesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StartMinutesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerUserId)) {
    body->insert(pair<string, string>("ownerUserId", *request->ownerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->recordAudio)) {
    body->insert(pair<string, bool>("recordAudio", *request->recordAudio));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMinutes"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/startMinutes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMinutesResponse(callApi(params, req, runtime));
}

StartMinutesResponse Alibabacloud_Aliding20230426::Client::startMinutes(shared_ptr<StartMinutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StartMinutesHeaders> headers = make_shared<StartMinutesHeaders>();
  return startMinutesWithOptions(request, headers, runtime);
}

StatisticsListByTypeReportResponse Alibabacloud_Aliding20230426::Client::statisticsListByTypeReportWithOptions(shared_ptr<StatisticsListByTypeReportRequest> tmpReq, shared_ptr<StatisticsListByTypeReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StatisticsListByTypeReportShrinkRequest> request = make_shared<StatisticsListByTypeReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StatisticsListByTypeReportShrinkHeaders> headers = make_shared<StatisticsListByTypeReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StatisticsListByTypeReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StatisticsListByTypeReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    body->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    body->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StatisticsListByTypeReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/statisticsListByTypeReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StatisticsListByTypeReportResponse(callApi(params, req, runtime));
}

StatisticsListByTypeReportResponse Alibabacloud_Aliding20230426::Client::statisticsListByTypeReport(shared_ptr<StatisticsListByTypeReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StatisticsListByTypeReportHeaders> headers = make_shared<StatisticsListByTypeReportHeaders>();
  return statisticsListByTypeReportWithOptions(request, headers, runtime);
}

StatisticsReportResponse Alibabacloud_Aliding20230426::Client::statisticsReportWithOptions(shared_ptr<StatisticsReportRequest> tmpReq, shared_ptr<StatisticsReportHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StatisticsReportShrinkRequest> request = make_shared<StatisticsReportShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StatisticsReportShrinkHeaders> headers = make_shared<StatisticsReportShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StatisticsReportHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StatisticsReportRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reportId)) {
    body->insert(pair<string, string>("ReportId", *request->reportId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StatisticsReport"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/log/statisticsReport"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StatisticsReportResponse(callApi(params, req, runtime));
}

StatisticsReportResponse Alibabacloud_Aliding20230426::Client::statisticsReport(shared_ptr<StatisticsReportRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StatisticsReportHeaders> headers = make_shared<StatisticsReportHeaders>();
  return statisticsReportWithOptions(request, headers, runtime);
}

StopCloudRecordResponse Alibabacloud_Aliding20230426::Client::stopCloudRecordWithOptions(shared_ptr<StopCloudRecordRequest> tmpReq, shared_ptr<StopCloudRecordHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopCloudRecordShrinkRequest> request = make_shared<StopCloudRecordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StopCloudRecordShrinkHeaders> headers = make_shared<StopCloudRecordShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StopCloudRecordHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StopCloudRecordRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCloudRecord"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/stopCloudRecord"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCloudRecordResponse(callApi(params, req, runtime));
}

StopCloudRecordResponse Alibabacloud_Aliding20230426::Client::stopCloudRecord(shared_ptr<StopCloudRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StopCloudRecordHeaders> headers = make_shared<StopCloudRecordHeaders>();
  return stopCloudRecordWithOptions(request, headers, runtime);
}

StopMinutesResponse Alibabacloud_Aliding20230426::Client::stopMinutesWithOptions(shared_ptr<StopMinutesRequest> tmpReq, shared_ptr<StopMinutesHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopMinutesShrinkRequest> request = make_shared<StopMinutesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<StopMinutesShrinkHeaders> headers = make_shared<StopMinutesShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<StopMinutesHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<StopMinutesRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMinutes"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/stopMinutes"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMinutesResponse(callApi(params, req, runtime));
}

StopMinutesResponse Alibabacloud_Aliding20230426::Client::stopMinutes(shared_ptr<StopMinutesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<StopMinutesHeaders> headers = make_shared<StopMinutesHeaders>();
  return stopMinutesWithOptions(request, headers, runtime);
}

SubscribeCalendarResponse Alibabacloud_Aliding20230426::Client::subscribeCalendarWithOptions(shared_ptr<SubscribeCalendarRequest> request, shared_ptr<SubscribeCalendarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<SubscribeCalendarShrinkHeaders> headers = make_shared<SubscribeCalendarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SubscribeCalendarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubscribeCalendar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/subscribeCalendar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscribeCalendarResponse(callApi(params, req, runtime));
}

SubscribeCalendarResponse Alibabacloud_Aliding20230426::Client::subscribeCalendar(shared_ptr<SubscribeCalendarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SubscribeCalendarHeaders> headers = make_shared<SubscribeCalendarHeaders>();
  return subscribeCalendarWithOptions(request, headers, runtime);
}

SyncDingTypeResponse Alibabacloud_Aliding20230426::Client::syncDingTypeWithOptions(shared_ptr<SyncDingTypeRequest> tmpReq, shared_ptr<SyncDingTypeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SyncDingTypeShrinkRequest> request = make_shared<SyncDingTypeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<SyncDingTypeShrinkHeaders> headers = make_shared<SyncDingTypeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<SyncDingTypeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SyncDingTypeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dingType)) {
    body->insert(pair<string, string>("DingType", *request->dingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isDimission)) {
    body->insert(pair<string, string>("IsDimission", *request->isDimission));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workNo)) {
    body->insert(pair<string, string>("WorkNo", *request->workNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncDingType"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/indepding/syncDingType"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncDingTypeResponse(callApi(params, req, runtime));
}

SyncDingTypeResponse Alibabacloud_Aliding20230426::Client::syncDingType(shared_ptr<SyncDingTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncDingTypeHeaders> headers = make_shared<SyncDingTypeHeaders>();
  return syncDingTypeWithOptions(request, headers, runtime);
}

TerminateInstanceResponse Alibabacloud_Aliding20230426::Client::terminateInstanceWithOptions(shared_ptr<TerminateInstanceRequest> request, shared_ptr<TerminateInstanceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<TerminateInstanceShrinkHeaders> headers = make_shared<TerminateInstanceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<TerminateInstanceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TerminateInstance"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/terminateInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TerminateInstanceResponse(callApi(params, req, runtime));
}

TerminateInstanceResponse Alibabacloud_Aliding20230426::Client::terminateInstance(shared_ptr<TerminateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TerminateInstanceHeaders> headers = make_shared<TerminateInstanceHeaders>();
  return terminateInstanceWithOptions(request, headers, runtime);
}

UnsubscribeCalendarResponse Alibabacloud_Aliding20230426::Client::unsubscribeCalendarWithOptions(shared_ptr<UnsubscribeCalendarRequest> request, shared_ptr<UnsubscribeCalendarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<UnsubscribeCalendarShrinkHeaders> headers = make_shared<UnsubscribeCalendarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UnsubscribeCalendarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnsubscribeCalendar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/unsubscribeCalendar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnsubscribeCalendarResponse(callApi(params, req, runtime));
}

UnsubscribeCalendarResponse Alibabacloud_Aliding20230426::Client::unsubscribeCalendar(shared_ptr<UnsubscribeCalendarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UnsubscribeCalendarHeaders> headers = make_shared<UnsubscribeCalendarHeaders>();
  return unsubscribeCalendarWithOptions(request, headers, runtime);
}

UpdateFormDataResponse Alibabacloud_Aliding20230426::Client::updateFormDataWithOptions(shared_ptr<UpdateFormDataRequest> request, shared_ptr<UpdateFormDataHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<UpdateFormDataShrinkHeaders> headers = make_shared<UpdateFormDataShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateFormDataHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->formInstanceId)) {
    body->insert(pair<string, string>("FormInstanceId", *request->formInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateFormDataJson)) {
    body->insert(pair<string, string>("UpdateFormDataJson", *request->updateFormDataJson));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useLatestVersion)) {
    body->insert(pair<string, bool>("UseLatestVersion", *request->useLatestVersion));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFormData"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/updateFormData"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFormDataResponse(callApi(params, req, runtime));
}

UpdateFormDataResponse Alibabacloud_Aliding20230426::Client::updateFormData(shared_ptr<UpdateFormDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateFormDataHeaders> headers = make_shared<UpdateFormDataHeaders>();
  return updateFormDataWithOptions(request, headers, runtime);
}

UpdateInstanceResponse Alibabacloud_Aliding20230426::Client::updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<UpdateInstanceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<UpdateInstanceShrinkHeaders> headers = make_shared<UpdateInstanceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateInstanceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processInstanceId)) {
    body->insert(pair<string, string>("ProcessInstanceId", *request->processInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateFormDataJson)) {
    body->insert(pair<string, string>("UpdateFormDataJson", *request->updateFormDataJson));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstance"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/updateInstance"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceResponse(callApi(params, req, runtime));
}

UpdateInstanceResponse Alibabacloud_Aliding20230426::Client::updateInstance(shared_ptr<UpdateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateInstanceHeaders> headers = make_shared<UpdateInstanceHeaders>();
  return updateInstanceWithOptions(request, headers, runtime);
}

UpdateLiveResponse Alibabacloud_Aliding20230426::Client::updateLiveWithOptions(shared_ptr<UpdateLiveRequest> tmpReq, shared_ptr<UpdateLiveHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveShrinkRequest> request = make_shared<UpdateLiveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateLiveShrinkHeaders> headers = make_shared<UpdateLiveShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    body->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->introduction)) {
    body->insert(pair<string, string>("Introduction", *request->introduction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveId)) {
    body->insert(pair<string, string>("LiveId", *request->liveId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preEndTime)) {
    body->insert(pair<string, long>("PreEndTime", *request->preEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preStartTime)) {
    body->insert(pair<string, long>("PreStartTime", *request->preStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLive"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateLive"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveResponse(callApi(params, req, runtime));
}

UpdateLiveResponse Alibabacloud_Aliding20230426::Client::updateLive(shared_ptr<UpdateLiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateLiveHeaders> headers = make_shared<UpdateLiveHeaders>();
  return updateLiveWithOptions(request, headers, runtime);
}

UpdateMeetingRoomResponse Alibabacloud_Aliding20230426::Client::updateMeetingRoomWithOptions(shared_ptr<UpdateMeetingRoomRequest> tmpReq, shared_ptr<UpdateMeetingRoomHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMeetingRoomShrinkRequest> request = make_shared<UpdateMeetingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateMeetingRoomShrinkHeaders> headers = make_shared<UpdateMeetingRoomShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomRequestReservationAuthority>(tmpReq->reservationAuthority)) {
    request->reservationAuthorityShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->reservationAuthority, make_shared<string>("ReservationAuthority"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->roomLabelIds)) {
    request->roomLabelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomLabelIds, make_shared<string>("RoomLabelIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomRequestRoomLocation>(tmpReq->roomLocation)) {
    request->roomLocationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomLocation, make_shared<string>("RoomLocation"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableCycleReservation)) {
    body->insert(pair<string, bool>("EnableCycleReservation", *request->enableCycleReservation));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvRoomId)) {
    body->insert(pair<string, string>("IsvRoomId", *request->isvRoomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reservationAuthorityShrink)) {
    body->insert(pair<string, string>("ReservationAuthority", *request->reservationAuthorityShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomCapacity)) {
    body->insert(pair<string, long>("RoomCapacity", *request->roomCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    body->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomLabelIdsShrink)) {
    body->insert(pair<string, string>("RoomLabelIds", *request->roomLabelIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomLocationShrink)) {
    body->insert(pair<string, string>("RoomLocation", *request->roomLocationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomName)) {
    body->insert(pair<string, string>("RoomName", *request->roomName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomPicture)) {
    body->insert(pair<string, string>("RoomPicture", *request->roomPicture));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomStatus)) {
    body->insert(pair<string, long>("RoomStatus", *request->roomStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMeetingRoom"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateMeetingRoom"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMeetingRoomResponse(callApi(params, req, runtime));
}

UpdateMeetingRoomResponse Alibabacloud_Aliding20230426::Client::updateMeetingRoom(shared_ptr<UpdateMeetingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateMeetingRoomHeaders> headers = make_shared<UpdateMeetingRoomHeaders>();
  return updateMeetingRoomWithOptions(request, headers, runtime);
}

UpdateMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::updateMeetingRoomGroupWithOptions(shared_ptr<UpdateMeetingRoomGroupRequest> tmpReq, shared_ptr<UpdateMeetingRoomGroupHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMeetingRoomGroupShrinkRequest> request = make_shared<UpdateMeetingRoomGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateMeetingRoomGroupShrinkHeaders> headers = make_shared<UpdateMeetingRoomGroupShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomGroupHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateMeetingRoomGroupRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMeetingRoomGroup"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateMeetingRoomGroup"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMeetingRoomGroupResponse(callApi(params, req, runtime));
}

UpdateMeetingRoomGroupResponse Alibabacloud_Aliding20230426::Client::updateMeetingRoomGroup(shared_ptr<UpdateMeetingRoomGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateMeetingRoomGroupHeaders> headers = make_shared<UpdateMeetingRoomGroupHeaders>();
  return updateMeetingRoomGroupWithOptions(request, headers, runtime);
}

UpdateRangeResponse Alibabacloud_Aliding20230426::Client::updateRangeWithOptions(shared_ptr<UpdateRangeRequest> tmpReq, shared_ptr<UpdateRangeHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRangeShrinkRequest> request = make_shared<UpdateRangeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateRangeShrinkHeaders> headers = make_shared<UpdateRangeShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateRangeHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<vector<string>>>(tmpReq->backgroundColors)) {
    request->backgroundColorsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->backgroundColors, make_shared<string>("BackgroundColors"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<vector<UpdateRangeRequestHyperlinks>>>(tmpReq->hyperlinks)) {
    request->hyperlinksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hyperlinks, make_shared<string>("Hyperlinks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateRangeRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<vector<string>>>(tmpReq->values)) {
    request->valuesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->values, make_shared<string>("Values"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundColorsShrink)) {
    body->insert(pair<string, string>("BackgroundColors", *request->backgroundColorsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hyperlinksShrink)) {
    body->insert(pair<string, string>("Hyperlinks", *request->hyperlinksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->numberFormat)) {
    body->insert(pair<string, string>("NumberFormat", *request->numberFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rangeAddress)) {
    body->insert(pair<string, string>("RangeAddress", *request->rangeAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sheetId)) {
    body->insert(pair<string, string>("SheetId", *request->sheetId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->valuesShrink)) {
    body->insert(pair<string, string>("Values", *request->valuesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workbookId)) {
    body->insert(pair<string, string>("WorkbookId", *request->workbookId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRange"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/updateRange"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRangeResponse(callApi(params, req, runtime));
}

UpdateRangeResponse Alibabacloud_Aliding20230426::Client::updateRange(shared_ptr<UpdateRangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateRangeHeaders> headers = make_shared<UpdateRangeHeaders>();
  return updateRangeWithOptions(request, headers, runtime);
}

UpdateScheduleConfSettingsResponse Alibabacloud_Aliding20230426::Client::updateScheduleConfSettingsWithOptions(shared_ptr<UpdateScheduleConfSettingsRequest> tmpReq, shared_ptr<UpdateScheduleConfSettingsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateScheduleConfSettingsShrinkRequest> request = make_shared<UpdateScheduleConfSettingsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateScheduleConfSettingsShrinkHeaders> headers = make_shared<UpdateScheduleConfSettingsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateScheduleConfSettingsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateScheduleConfSettingsRequestScheduleConfSettingModel>(tmpReq->scheduleConfSettingModel)) {
    request->scheduleConfSettingModelShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfSettingModel, make_shared<string>("ScheduleConfSettingModel"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateScheduleConfSettingsRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfSettingModelShrink)) {
    body->insert(pair<string, string>("ScheduleConfSettingModel", *request->scheduleConfSettingModelShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConferenceId)) {
    body->insert(pair<string, string>("ScheduleConferenceId", *request->scheduleConferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScheduleConfSettings"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateScheduleConfSettings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScheduleConfSettingsResponse(callApi(params, req, runtime));
}

UpdateScheduleConfSettingsResponse Alibabacloud_Aliding20230426::Client::updateScheduleConfSettings(shared_ptr<UpdateScheduleConfSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateScheduleConfSettingsHeaders> headers = make_shared<UpdateScheduleConfSettingsHeaders>();
  return updateScheduleConfSettingsWithOptions(request, headers, runtime);
}

UpdateScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::updateScheduleConferenceWithOptions(shared_ptr<UpdateScheduleConferenceRequest> tmpReq, shared_ptr<UpdateScheduleConferenceHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateScheduleConferenceShrinkRequest> request = make_shared<UpdateScheduleConferenceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateScheduleConferenceShrinkHeaders> headers = make_shared<UpdateScheduleConferenceShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateScheduleConferenceHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateScheduleConferenceRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConferenceId)) {
    body->insert(pair<string, string>("ScheduleConferenceId", *request->scheduleConferenceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScheduleConference"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateScheduleConference"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScheduleConferenceResponse(callApi(params, req, runtime));
}

UpdateScheduleConferenceResponse Alibabacloud_Aliding20230426::Client::updateScheduleConference(shared_ptr<UpdateScheduleConferenceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateScheduleConferenceHeaders> headers = make_shared<UpdateScheduleConferenceHeaders>();
  return updateScheduleConferenceWithOptions(request, headers, runtime);
}

UpdateStatusResponse Alibabacloud_Aliding20230426::Client::updateStatusWithOptions(shared_ptr<UpdateStatusRequest> tmpReq, shared_ptr<UpdateStatusHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateStatusShrinkRequest> request = make_shared<UpdateStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateStatusShrinkHeaders> headers = make_shared<UpdateStatusShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateStatusHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->errorLines)) {
    request->errorLinesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->errorLines, make_shared<string>("ErrorLines"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appType)) {
    body->insert(pair<string, string>("AppType", *request->appType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorLinesShrink)) {
    body->insert(pair<string, string>("ErrorLines", *request->errorLinesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->importSequence)) {
    body->insert(pair<string, string>("ImportSequence", *request->importSequence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemToken)) {
    body->insert(pair<string, string>("SystemToken", *request->systemToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStatus"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/yida/updateStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStatusResponse(callApi(params, req, runtime));
}

UpdateStatusResponse Alibabacloud_Aliding20230426::Client::updateStatus(shared_ptr<UpdateStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateStatusHeaders> headers = make_shared<UpdateStatusHeaders>();
  return updateStatusWithOptions(request, headers, runtime);
}

UpdateSubscribedCalendarsResponse Alibabacloud_Aliding20230426::Client::updateSubscribedCalendarsWithOptions(shared_ptr<UpdateSubscribedCalendarsRequest> tmpReq, shared_ptr<UpdateSubscribedCalendarsHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSubscribedCalendarsShrinkRequest> request = make_shared<UpdateSubscribedCalendarsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateSubscribedCalendarsShrinkHeaders> headers = make_shared<UpdateSubscribedCalendarsShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateSubscribedCalendarsHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managers)) {
    request->managersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managers, make_shared<string>("Managers"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateSubscribedCalendarsRequestSubscribeScope>(tmpReq->subscribeScope)) {
    request->subscribeScopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subscribeScope, make_shared<string>("SubscribeScope"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->calendarId)) {
    body->insert(pair<string, string>("CalendarId", *request->calendarId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managersShrink)) {
    body->insert(pair<string, string>("Managers", *request->managersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeScopeShrink)) {
    body->insert(pair<string, string>("SubscribeScope", *request->subscribeScopeShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubscribedCalendars"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/calendar/updateSubscribedCalendars"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubscribedCalendarsResponse(callApi(params, req, runtime));
}

UpdateSubscribedCalendarsResponse Alibabacloud_Aliding20230426::Client::updateSubscribedCalendars(shared_ptr<UpdateSubscribedCalendarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateSubscribedCalendarsHeaders> headers = make_shared<UpdateSubscribedCalendarsHeaders>();
  return updateSubscribedCalendarsWithOptions(request, headers, runtime);
}

UpdateTodoTaskResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskWithOptions(shared_ptr<UpdateTodoTaskRequest> tmpReq, shared_ptr<UpdateTodoTaskHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTodoTaskShrinkRequest> request = make_shared<UpdateTodoTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateTodoTaskShrinkHeaders> headers = make_shared<UpdateTodoTaskShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->executorIds)) {
    request->executorIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorIds, make_shared<string>("executorIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->participantIds)) {
    request->participantIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->participantIds, make_shared<string>("participantIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->done)) {
    body->insert(pair<string, bool>("done", *request->done));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dueTime)) {
    body->insert(pair<string, long>("dueTime", *request->dueTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorIdsShrink)) {
    body->insert(pair<string, string>("executorIds", *request->executorIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->participantIdsShrink)) {
    body->insert(pair<string, string>("participantIds", *request->participantIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTodoTask"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/updateTodoTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTodoTaskResponse(callApi(params, req, runtime));
}

UpdateTodoTaskResponse Alibabacloud_Aliding20230426::Client::updateTodoTask(shared_ptr<UpdateTodoTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTodoTaskHeaders> headers = make_shared<UpdateTodoTaskHeaders>();
  return updateTodoTaskWithOptions(request, headers, runtime);
}

UpdateTodoTaskExecutorStatusResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskExecutorStatusWithOptions(shared_ptr<UpdateTodoTaskExecutorStatusRequest> tmpReq, shared_ptr<UpdateTodoTaskExecutorStatusHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateTodoTaskExecutorStatusShrinkRequest> request = make_shared<UpdateTodoTaskExecutorStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateTodoTaskExecutorStatusShrinkHeaders> headers = make_shared<UpdateTodoTaskExecutorStatusShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskExecutorStatusHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateTodoTaskExecutorStatusRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList>>(tmpReq->executorStatusList)) {
    request->executorStatusListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executorStatusList, make_shared<string>("executorStatusList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorStatusListShrink)) {
    body->insert(pair<string, string>("executorStatusList", *request->executorStatusListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorId)) {
    body->insert(pair<string, string>("operatorId", *request->operatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTodoTaskExecutorStatus"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/task/updateTodoTaskExecutorStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTodoTaskExecutorStatusResponse(callApi(params, req, runtime));
}

UpdateTodoTaskExecutorStatusResponse Alibabacloud_Aliding20230426::Client::updateTodoTaskExecutorStatus(shared_ptr<UpdateTodoTaskExecutorStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTodoTaskExecutorStatusHeaders> headers = make_shared<UpdateTodoTaskExecutorStatusHeaders>();
  return updateTodoTaskExecutorStatusWithOptions(request, headers, runtime);
}

UpdateUserAvatarResponse Alibabacloud_Aliding20230426::Client::updateUserAvatarWithOptions(shared_ptr<UpdateUserAvatarRequest> request, shared_ptr<UpdateUserAvatarHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<UpdateUserAvatarShrinkHeaders> headers = make_shared<UpdateUserAvatarShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateUserAvatarHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarMediaId)) {
    body->insert(pair<string, string>("AvatarMediaId", *request->avatarMediaId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserAvatar"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/contact/updateUserAvatar"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserAvatarResponse(callApi(params, req, runtime));
}

UpdateUserAvatarResponse Alibabacloud_Aliding20230426::Client::updateUserAvatar(shared_ptr<UpdateUserAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateUserAvatarHeaders> headers = make_shared<UpdateUserAvatarHeaders>();
  return updateUserAvatarWithOptions(request, headers, runtime);
}

UpdateVideoConferenceSettingResponse Alibabacloud_Aliding20230426::Client::updateVideoConferenceSettingWithOptions(shared_ptr<UpdateVideoConferenceSettingRequest> tmpReq, shared_ptr<UpdateVideoConferenceSettingHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateVideoConferenceSettingShrinkRequest> request = make_shared<UpdateVideoConferenceSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateVideoConferenceSettingShrinkHeaders> headers = make_shared<UpdateVideoConferenceSettingShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateVideoConferenceSettingHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateVideoConferenceSettingRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allowUnmuteSelf)) {
    body->insert(pair<string, bool>("AllowUnmuteSelf", *request->allowUnmuteSelf));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoTransferHost)) {
    body->insert(pair<string, bool>("AutoTransferHost", *request->autoTransferHost));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forbiddenShareScreen)) {
    body->insert(pair<string, bool>("ForbiddenShareScreen", *request->forbiddenShareScreen));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lockConference)) {
    body->insert(pair<string, bool>("LockConference", *request->lockConference));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->muteAll)) {
    body->insert(pair<string, bool>("MuteAll", *request->muteAll));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyInternalEmployeesJoin)) {
    body->insert(pair<string, bool>("OnlyInternalEmployeesJoin", *request->onlyInternalEmployeesJoin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conferenceId)) {
    body->insert(pair<string, string>("conferenceId", *request->conferenceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVideoConferenceSetting"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/ysp/updateVideoConferenceSetting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVideoConferenceSettingResponse(callApi(params, req, runtime));
}

UpdateVideoConferenceSettingResponse Alibabacloud_Aliding20230426::Client::updateVideoConferenceSetting(shared_ptr<UpdateVideoConferenceSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateVideoConferenceSettingHeaders> headers = make_shared<UpdateVideoConferenceSettingHeaders>();
  return updateVideoConferenceSettingWithOptions(request, headers, runtime);
}

UpdateWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceDocMembersWithOptions(shared_ptr<UpdateWorkspaceDocMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceDocMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWorkspaceDocMembersShrinkRequest> request = make_shared<UpdateWorkspaceDocMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateWorkspaceDocMembersShrinkHeaders> headers = make_shared<UpdateWorkspaceDocMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceDocMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkspaceDocMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceDocMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("NodeId", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceDocMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/updateWorkspaceDocMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceDocMembersResponse(callApi(params, req, runtime));
}

UpdateWorkspaceDocMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceDocMembers(shared_ptr<UpdateWorkspaceDocMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateWorkspaceDocMembersHeaders> headers = make_shared<UpdateWorkspaceDocMembersHeaders>();
  return updateWorkspaceDocMembersWithOptions(request, headers, runtime);
}

UpdateWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceMembersWithOptions(shared_ptr<UpdateWorkspaceMembersRequest> tmpReq, shared_ptr<UpdateWorkspaceMembersHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWorkspaceMembersShrinkRequest> request = make_shared<UpdateWorkspaceMembersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UpdateWorkspaceMembersShrinkHeaders> headers = make_shared<UpdateWorkspaceMembersShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceMembersHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWorkspaceMembersRequestMembers>>(tmpReq->members)) {
    request->membersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->members, make_shared<string>("Members"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateWorkspaceMembersRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->membersShrink)) {
    body->insert(pair<string, string>("Members", *request->membersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workspaceId)) {
    body->insert(pair<string, string>("WorkspaceId", *request->workspaceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWorkspaceMembers"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dingtalk/v1/documents/updateWorkspaceMembers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateWorkspaceMembersResponse(callApi(params, req, runtime));
}

UpdateWorkspaceMembersResponse Alibabacloud_Aliding20230426::Client::updateWorkspaceMembers(shared_ptr<UpdateWorkspaceMembersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateWorkspaceMembersHeaders> headers = make_shared<UpdateWorkspaceMembersHeaders>();
  return updateWorkspaceMembersWithOptions(request, headers, runtime);
}

UploadMediaResponse Alibabacloud_Aliding20230426::Client::uploadMediaWithOptions(shared_ptr<UploadMediaRequest> tmpReq, shared_ptr<UploadMediaHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UploadMediaShrinkRequest> request = make_shared<UploadMediaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<UploadMediaShrinkHeaders> headers = make_shared<UploadMediaShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<UploadMediaHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UploadMediaRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaName)) {
    body->insert(pair<string, string>("mediaName", *request->mediaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    body->insert(pair<string, string>("mediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMedia"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/documents/uploadMedia"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMediaResponse(callApi(params, req, runtime));
}

UploadMediaResponse Alibabacloud_Aliding20230426::Client::uploadMedia(shared_ptr<UploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UploadMediaHeaders> headers = make_shared<UploadMediaHeaders>();
  return uploadMediaWithOptions(request, headers, runtime);
}

WearOrgHonorResponse Alibabacloud_Aliding20230426::Client::wearOrgHonorWithOptions(shared_ptr<WearOrgHonorRequest> tmpReq, shared_ptr<WearOrgHonorHeaders> tmpHeader, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<WearOrgHonorShrinkRequest> request = make_shared<WearOrgHonorShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  shared_ptr<WearOrgHonorShrinkHeaders> headers = make_shared<WearOrgHonorShrinkHeaders>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpHeader, headers);
  if (!Darabonba_Util::Client::isUnset<WearOrgHonorHeadersAccountContext>(tmpHeader->accountContext)) {
    headers->accountContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpHeader->accountContext, make_shared<string>("AccountContext"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<WearOrgHonorRequestTenantContext>(tmpReq->tenantContext)) {
    request->tenantContextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tenantContext, make_shared<string>("TenantContext"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->tenantContextShrink)) {
    body->insert(pair<string, string>("TenantContext", *request->tenantContextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->honorId)) {
    body->insert(pair<string, string>("honorId", *request->honorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orgId)) {
    body->insert(pair<string, long>("orgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("userId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->wear)) {
    body->insert(pair<string, bool>("wear", *request->wear));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->accountContextShrink)) {
    realHeaders->insert(pair<string, string>("AccountContext", Darabonba_Util::Client::toJSONString(headers->accountContextShrink)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WearOrgHonor"))},
    {"version", boost::any(string("2023-04-26"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/aliding/v1/honor/wearOrgHonor"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WearOrgHonorResponse(callApi(params, req, runtime));
}

WearOrgHonorResponse Alibabacloud_Aliding20230426::Client::wearOrgHonor(shared_ptr<WearOrgHonorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<WearOrgHonorHeaders> headers = make_shared<WearOrgHonorHeaders>();
  return wearOrgHonorWithOptions(request, headers, runtime);
}

