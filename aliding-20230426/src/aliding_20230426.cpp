// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aliding_20230426.hpp>
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
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvRoomId)) {
    body->insert(pair<string, string>("IsvRoomId", *request->isvRoomId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->requestUnionId)) {
    body->insert(pair<string, string>("RequestUnionId", *request->requestUnionId));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvRoomId)) {
    body->insert(pair<string, string>("IsvRoomId", *request->isvRoomId));
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

