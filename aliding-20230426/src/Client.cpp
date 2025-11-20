#include <darabonba/Core.hpp>
#include <alibabacloud/Aliding20230426.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Aliding20230426::Models;
namespace AlibabaCloud
{
namespace Aliding20230426
{

AlibabaCloud::Aliding20230426::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("aliding", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 添加日程参与者
 *
 * @param tmpReq AddAttendeeRequest
 * @param tmpHeader AddAttendeeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAttendeeResponse
 */
AddAttendeeResponse Client::addAttendeeWithOptions(const AddAttendeeRequest &tmpReq, const AddAttendeeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAttendeeShrinkRequest request = AddAttendeeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddAttendeeShrinkHeaders headers = AddAttendeeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasAttendeesToAdd()) {
    request.setAttendeesToAddShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attendeesToAdd(), "AttendeesToAdd", "json"));
  }

  json body = {};
  if (!!request.hasAttendeesToAddShrink()) {
    body["AttendeesToAdd"] = request.attendeesToAddShrink();
  }

  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasChatNotification()) {
    body["chatNotification"] = request.chatNotification();
  }

  if (!!request.hasPushNotification()) {
    body["pushNotification"] = request.pushNotification();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddAttendee"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/addAttendee")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAttendeeResponse>();
}

/**
 * @summary 添加日程参与者
 *
 * @param request AddAttendeeRequest
 * @return AddAttendeeResponse
 */
AddAttendeeResponse Client::addAttendee(const AddAttendeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddAttendeeHeaders headers = AddAttendeeHeaders();
  return addAttendeeWithOptions(request, headers, runtime);
}

/**
 * @summary 新建钉盘空间
 *
 * @param tmpReq AddDriveSpaceRequest
 * @param tmpHeader AddDriveSpaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDriveSpaceResponse
 */
AddDriveSpaceResponse Client::addDriveSpaceWithOptions(const AddDriveSpaceRequest &tmpReq, const AddDriveSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddDriveSpaceShrinkRequest request = AddDriveSpaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddDriveSpaceShrinkHeaders headers = AddDriveSpaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDriveSpace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/addDriveSpace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDriveSpaceResponse>();
}

/**
 * @summary 新建钉盘空间
 *
 * @param request AddDriveSpaceRequest
 * @return AddDriveSpaceResponse
 */
AddDriveSpaceResponse Client::addDriveSpace(const AddDriveSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddDriveSpaceHeaders headers = AddDriveSpaceHeaders();
  return addDriveSpaceWithOptions(request, headers, runtime);
}

/**
 * @summary 添加文件夹
 *
 * @param tmpReq AddFolderRequest
 * @param tmpHeader AddFolderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFolderResponse
 */
AddFolderResponse Client::addFolderWithOptions(const AddFolderRequest &tmpReq, const AddFolderHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddFolderShrinkRequest request = AddFolderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddFolderShrinkHeaders headers = AddFolderShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasParentId()) {
    body["ParentId"] = request.parentId();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddFolder"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/addFolder")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFolderResponse>();
}

/**
 * @summary 添加文件夹
 *
 * @param request AddFolderRequest
 * @return AddFolderResponse
 */
AddFolderResponse Client::addFolder(const AddFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddFolderHeaders headers = AddFolderHeaders();
  return addFolderWithOptions(request, headers, runtime);
}

/**
 * @summary 预定会议室
 *
 * @param tmpReq AddMeetingRoomsRequest
 * @param tmpHeader AddMeetingRoomsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMeetingRoomsResponse
 */
AddMeetingRoomsResponse Client::addMeetingRoomsWithOptions(const AddMeetingRoomsRequest &tmpReq, const AddMeetingRoomsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddMeetingRoomsShrinkRequest request = AddMeetingRoomsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddMeetingRoomsShrinkHeaders headers = AddMeetingRoomsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMeetingRoomsToAdd()) {
    request.setMeetingRoomsToAddShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.meetingRoomsToAdd(), "MeetingRoomsToAdd", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasMeetingRoomsToAddShrink()) {
    body["MeetingRoomsToAdd"] = request.meetingRoomsToAddShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddMeetingRooms"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/addMeetingRooms")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMeetingRoomsResponse>();
}

/**
 * @summary 预定会议室
 *
 * @param request AddMeetingRoomsRequest
 * @return AddMeetingRoomsResponse
 */
AddMeetingRoomsResponse Client::addMeetingRooms(const AddMeetingRoomsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddMeetingRoomsHeaders headers = AddMeetingRoomsHeaders();
  return addMeetingRoomsWithOptions(request, headers, runtime);
}

/**
 * @summary 新增数据表
 *
 * @param tmpReq AddMultiDimTableRequest
 * @param tmpHeader AddMultiDimTableHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMultiDimTableResponse
 */
AddMultiDimTableResponse Client::addMultiDimTableWithOptions(const AddMultiDimTableRequest &tmpReq, const AddMultiDimTableHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddMultiDimTableShrinkRequest request = AddMultiDimTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddMultiDimTableShrinkHeaders headers = AddMultiDimTableShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFields()) {
    request.setFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fields(), "Fields", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasFieldsShrink()) {
    body["Fields"] = request.fieldsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddMultiDimTable"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/addMultiDimTable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMultiDimTableResponse>();
}

/**
 * @summary 新增数据表
 *
 * @param request AddMultiDimTableRequest
 * @return AddMultiDimTableResponse
 */
AddMultiDimTableResponse Client::addMultiDimTable(const AddMultiDimTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddMultiDimTableHeaders headers = AddMultiDimTableHeaders();
  return addMultiDimTableWithOptions(request, headers, runtime);
}

/**
 * @summary 添加文件权限
 *
 * @param tmpReq AddPermissionRequest
 * @param tmpHeader AddPermissionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPermissionResponse
 */
AddPermissionResponse Client::addPermissionWithOptions(const AddPermissionRequest &tmpReq, const AddPermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddPermissionShrinkRequest request = AddPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddPermissionShrinkHeaders headers = AddPermissionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasRoleId()) {
    body["RoleId"] = request.roleId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddPermission"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/addPermission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPermissionResponse>();
}

/**
 * @summary 添加文件权限
 *
 * @param request AddPermissionRequest
 * @return AddPermissionResponse
 */
AddPermissionResponse Client::addPermission(const AddPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddPermissionHeaders headers = AddPermissionHeaders();
  return addPermissionWithOptions(request, headers, runtime);
}

/**
 * @summary 添加闪记权限
 *
 * @param tmpReq AddRecordPermissionRequest
 * @param tmpHeader AddRecordPermissionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecordPermissionResponse
 */
AddRecordPermissionResponse Client::addRecordPermissionWithOptions(const AddRecordPermissionRequest &tmpReq, const AddRecordPermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddRecordPermissionShrinkRequest request = AddRecordPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddRecordPermissionShrinkHeaders headers = AddRecordPermissionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasConferenceId()) {
    body["ConferenceId"] = request.conferenceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddRecordPermission"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/addRecordPermission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecordPermissionResponse>();
}

/**
 * @summary 添加闪记权限
 *
 * @param request AddRecordPermissionRequest
 * @return AddRecordPermissionResponse
 */
AddRecordPermissionResponse Client::addRecordPermission(const AddRecordPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddRecordPermissionHeaders headers = AddRecordPermissionHeaders();
  return addRecordPermissionWithOptions(request, headers, runtime);
}

/**
 * @summary 新增群成员
 *
 * @param request AddScenegroupMemberRequest
 * @param tmpHeader AddScenegroupMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddScenegroupMemberResponse
 */
AddScenegroupMemberResponse Client::addScenegroupMemberWithOptions(const AddScenegroupMemberRequest &request, const AddScenegroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  AddScenegroupMemberShrinkHeaders headers = AddScenegroupMemberShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  if (!!request.hasUserIds()) {
    body["UserIds"] = request.userIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddScenegroupMember"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/addScenegroupMember")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddScenegroupMemberResponse>();
}

/**
 * @summary 新增群成员
 *
 * @param request AddScenegroupMemberRequest
 * @return AddScenegroupMemberResponse
 */
AddScenegroupMemberResponse Client::addScenegroupMember(const AddScenegroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddScenegroupMemberHeaders headers = AddScenegroupMemberHeaders();
  return addScenegroupMemberWithOptions(request, headers, runtime);
}

/**
 * @summary 工单添加备注
 *
 * @param tmpReq AddTicketMemoRequest
 * @param tmpHeader AddTicketMemoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTicketMemoResponse
 */
AddTicketMemoResponse Client::addTicketMemoWithOptions(const AddTicketMemoRequest &tmpReq, const AddTicketMemoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTicketMemoShrinkRequest request = AddTicketMemoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddTicketMemoShrinkHeaders headers = AddTicketMemoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasTicketMemo()) {
    request.setTicketMemoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketMemo(), "TicketMemo", "json"));
  }

  json body = {};
  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTicketMemoShrink()) {
    body["TicketMemo"] = request.ticketMemoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTicketMemo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/addTicketMemo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTicketMemoResponse>();
}

/**
 * @summary 工单添加备注
 *
 * @param request AddTicketMemoRequest
 * @return AddTicketMemoResponse
 */
AddTicketMemoResponse Client::addTicketMemo(const AddTicketMemoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddTicketMemoHeaders headers = AddTicketMemoHeaders();
  return addTicketMemoWithOptions(request, headers, runtime);
}

/**
 * @summary 新建知识库
 *
 * @param tmpReq AddWorkspaceRequest
 * @param tmpHeader AddWorkspaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWorkspaceResponse
 */
AddWorkspaceResponse Client::addWorkspaceWithOptions(const AddWorkspaceRequest &tmpReq, const AddWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddWorkspaceShrinkRequest request = AddWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddWorkspaceShrinkHeaders headers = AddWorkspaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddWorkspace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/addWorkspace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWorkspaceResponse>();
}

/**
 * @summary 新建知识库
 *
 * @param request AddWorkspaceRequest
 * @return AddWorkspaceResponse
 */
AddWorkspaceResponse Client::addWorkspace(const AddWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddWorkspaceHeaders headers = AddWorkspaceHeaders();
  return addWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary 添加知识库文档成员
 *
 * @param tmpReq AddWorkspaceDocMembersRequest
 * @param tmpHeader AddWorkspaceDocMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWorkspaceDocMembersResponse
 */
AddWorkspaceDocMembersResponse Client::addWorkspaceDocMembersWithOptions(const AddWorkspaceDocMembersRequest &tmpReq, const AddWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddWorkspaceDocMembersShrinkRequest request = AddWorkspaceDocMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddWorkspaceDocMembersShrinkHeaders headers = AddWorkspaceDocMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddWorkspaceDocMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/addWorkspaceDocMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWorkspaceDocMembersResponse>();
}

/**
 * @summary 添加知识库文档成员
 *
 * @param request AddWorkspaceDocMembersRequest
 * @return AddWorkspaceDocMembersResponse
 */
AddWorkspaceDocMembersResponse Client::addWorkspaceDocMembers(const AddWorkspaceDocMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddWorkspaceDocMembersHeaders headers = AddWorkspaceDocMembersHeaders();
  return addWorkspaceDocMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 添加知识库成员
 *
 * @param tmpReq AddWorkspaceMembersRequest
 * @param tmpHeader AddWorkspaceMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWorkspaceMembersResponse
 */
AddWorkspaceMembersResponse Client::addWorkspaceMembersWithOptions(const AddWorkspaceMembersRequest &tmpReq, const AddWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddWorkspaceMembersShrinkRequest request = AddWorkspaceMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AddWorkspaceMembersShrinkHeaders headers = AddWorkspaceMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddWorkspaceMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/addWorkspaceMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWorkspaceMembersResponse>();
}

/**
 * @summary 添加知识库成员
 *
 * @param request AddWorkspaceMembersRequest
 * @return AddWorkspaceMembersResponse
 */
AddWorkspaceMembersResponse Client::addWorkspaceMembers(const AddWorkspaceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddWorkspaceMembersHeaders headers = AddWorkspaceMembersHeaders();
  return addWorkspaceMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 指派工单
 *
 * @param tmpReq AssignTicketRequest
 * @param tmpHeader AssignTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignTicketResponse
 */
AssignTicketResponse Client::assignTicketWithOptions(const AssignTicketRequest &tmpReq, const AssignTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssignTicketShrinkRequest request = AssignTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AssignTicketShrinkHeaders headers = AssignTicketShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasNotify()) {
    request.setNotifyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notify(), "Notify", "json"));
  }

  if (!!tmpReq.hasProcessorUserIds()) {
    request.setProcessorUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.processorUserIds(), "ProcessorUserIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasTicketMemo()) {
    request.setTicketMemoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketMemo(), "TicketMemo", "json"));
  }

  json body = {};
  if (!!request.hasNotifyShrink()) {
    body["Notify"] = request.notifyShrink();
  }

  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasProcessorUserIdsShrink()) {
    body["ProcessorUserIds"] = request.processorUserIdsShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTicketMemoShrink()) {
    body["TicketMemo"] = request.ticketMemoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssignTicket"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/assignTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignTicketResponse>();
}

/**
 * @summary 指派工单
 *
 * @param request AssignTicketRequest
 * @return AssignTicketResponse
 */
AssignTicketResponse Client::assignTicket(const AssignTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AssignTicketHeaders headers = AssignTicketHeaders();
  return assignTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 校验AI技能调用权限
 *
 * @param tmpReq AuthorizeSkillRequest
 * @param tmpHeader AuthorizeSkillHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeSkillResponse
 */
AuthorizeSkillResponse Client::authorizeSkillWithOptions(const AuthorizeSkillRequest &tmpReq, const AuthorizeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthorizeSkillShrinkRequest request = AuthorizeSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  AuthorizeSkillShrinkHeaders headers = AuthorizeSkillShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasPermissionCodes()) {
    request.setPermissionCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.permissionCodes(), "PermissionCodes", "json"));
  }

  json body = {};
  if (!!request.hasPermissionCodesShrink()) {
    body["PermissionCodes"] = request.permissionCodesShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthorizeSkill"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/skill/authorizeSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeSkillResponse>();
}

/**
 * @summary 校验AI技能调用权限
 *
 * @param request AuthorizeSkillRequest
 * @return AuthorizeSkillResponse
 */
AuthorizeSkillResponse Client::authorizeSkill(const AuthorizeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuthorizeSkillHeaders headers = AuthorizeSkillHeaders();
  return authorizeSkillWithOptions(request, headers, runtime);
}

/**
 * @summary 批量获取表单实例数据
 *
 * @param tmpReq BatchGetFormDataByIdListRequest
 * @param tmpHeader BatchGetFormDataByIdListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetFormDataByIdListResponse
 */
BatchGetFormDataByIdListResponse Client::batchGetFormDataByIdListWithOptions(const BatchGetFormDataByIdListRequest &tmpReq, const BatchGetFormDataByIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetFormDataByIdListShrinkRequest request = BatchGetFormDataByIdListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  BatchGetFormDataByIdListShrinkHeaders headers = BatchGetFormDataByIdListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFormInstanceIdList()) {
    request.setFormInstanceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.formInstanceIdList(), "FormInstanceIdList", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormInstanceIdListShrink()) {
    body["FormInstanceIdList"] = request.formInstanceIdListShrink();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasNeedFormInstanceValue()) {
    body["NeedFormInstanceValue"] = request.needFormInstanceValue();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGetFormDataByIdList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/batchGetFormDataByIdList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetFormDataByIdListResponse>();
}

/**
 * @summary 批量获取表单实例数据
 *
 * @param request BatchGetFormDataByIdListRequest
 * @return BatchGetFormDataByIdListResponse
 */
BatchGetFormDataByIdListResponse Client::batchGetFormDataByIdList(const BatchGetFormDataByIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchGetFormDataByIdListHeaders headers = BatchGetFormDataByIdListHeaders();
  return batchGetFormDataByIdListWithOptions(request, headers, runtime);
}

/**
 * @summary 批量删除表单实例
 *
 * @param tmpReq BatchRemovalByFormInstanceIdListRequest
 * @param tmpHeader BatchRemovalByFormInstanceIdListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchRemovalByFormInstanceIdListResponse
 */
BatchRemovalByFormInstanceIdListResponse Client::batchRemovalByFormInstanceIdListWithOptions(const BatchRemovalByFormInstanceIdListRequest &tmpReq, const BatchRemovalByFormInstanceIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchRemovalByFormInstanceIdListShrinkRequest request = BatchRemovalByFormInstanceIdListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  BatchRemovalByFormInstanceIdListShrinkHeaders headers = BatchRemovalByFormInstanceIdListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFormInstanceIdList()) {
    request.setFormInstanceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.formInstanceIdList(), "FormInstanceIdList", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAsynchronousExecution()) {
    body["AsynchronousExecution"] = request.asynchronousExecution();
  }

  if (!!request.hasExecuteExpression()) {
    body["ExecuteExpression"] = request.executeExpression();
  }

  if (!!request.hasFormInstanceIdListShrink()) {
    body["FormInstanceIdList"] = request.formInstanceIdListShrink();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchRemovalByFormInstanceIdList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/batchRemovalByFormInstanceIdList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchRemovalByFormInstanceIdListResponse>();
}

/**
 * @summary 批量删除表单实例
 *
 * @param request BatchRemovalByFormInstanceIdListRequest
 * @return BatchRemovalByFormInstanceIdListResponse
 */
BatchRemovalByFormInstanceIdListResponse Client::batchRemovalByFormInstanceIdList(const BatchRemovalByFormInstanceIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchRemovalByFormInstanceIdListHeaders headers = BatchRemovalByFormInstanceIdListHeaders();
  return batchRemovalByFormInstanceIdListWithOptions(request, headers, runtime);
}

/**
 * @summary 批量创建表单实例
 *
 * @param tmpReq BatchSaveFormDataRequest
 * @param tmpHeader BatchSaveFormDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSaveFormDataResponse
 */
BatchSaveFormDataResponse Client::batchSaveFormDataWithOptions(const BatchSaveFormDataRequest &tmpReq, const BatchSaveFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchSaveFormDataShrinkRequest request = BatchSaveFormDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  BatchSaveFormDataShrinkHeaders headers = BatchSaveFormDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFormDataJsonList()) {
    request.setFormDataJsonListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.formDataJsonList(), "FormDataJsonList", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAsynchronousExecution()) {
    body["AsynchronousExecution"] = request.asynchronousExecution();
  }

  if (!!request.hasFormDataJsonListShrink()) {
    body["FormDataJsonList"] = request.formDataJsonListShrink();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasKeepRunningAfterException()) {
    body["KeepRunningAfterException"] = request.keepRunningAfterException();
  }

  if (!!request.hasNoExecuteExpression()) {
    body["NoExecuteExpression"] = request.noExecuteExpression();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchSaveFormData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/batchSaveFormData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSaveFormDataResponse>();
}

/**
 * @summary 批量创建表单实例
 *
 * @param request BatchSaveFormDataRequest
 * @return BatchSaveFormDataResponse
 */
BatchSaveFormDataResponse Client::batchSaveFormData(const BatchSaveFormDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchSaveFormDataHeaders headers = BatchSaveFormDataHeaders();
  return batchSaveFormDataWithOptions(request, headers, runtime);
}

/**
 * @summary 批量更新表单实例内的组件值
 *
 * @param tmpReq BatchUpdateFormDataByInstanceIdRequest
 * @param tmpHeader BatchUpdateFormDataByInstanceIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateFormDataByInstanceIdResponse
 */
BatchUpdateFormDataByInstanceIdResponse Client::batchUpdateFormDataByInstanceIdWithOptions(const BatchUpdateFormDataByInstanceIdRequest &tmpReq, const BatchUpdateFormDataByInstanceIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateFormDataByInstanceIdShrinkRequest request = BatchUpdateFormDataByInstanceIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  BatchUpdateFormDataByInstanceIdShrinkHeaders headers = BatchUpdateFormDataByInstanceIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFormInstanceIdList()) {
    request.setFormInstanceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.formInstanceIdList(), "FormInstanceIdList", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAsynchronousExecution()) {
    body["AsynchronousExecution"] = request.asynchronousExecution();
  }

  if (!!request.hasFormInstanceIdListShrink()) {
    body["FormInstanceIdList"] = request.formInstanceIdListShrink();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasIgnoreEmpty()) {
    body["IgnoreEmpty"] = request.ignoreEmpty();
  }

  if (!!request.hasNoExecuteExpression()) {
    body["NoExecuteExpression"] = request.noExecuteExpression();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasUpdateFormDataJson()) {
    body["UpdateFormDataJson"] = request.updateFormDataJson();
  }

  if (!!request.hasUseLatestFormSchemaVersion()) {
    body["UseLatestFormSchemaVersion"] = request.useLatestFormSchemaVersion();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateFormDataByInstanceId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/batchUpdateFormDataByInstanceId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateFormDataByInstanceIdResponse>();
}

/**
 * @summary 批量更新表单实例内的组件值
 *
 * @param request BatchUpdateFormDataByInstanceIdRequest
 * @return BatchUpdateFormDataByInstanceIdResponse
 */
BatchUpdateFormDataByInstanceIdResponse Client::batchUpdateFormDataByInstanceId(const BatchUpdateFormDataByInstanceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchUpdateFormDataByInstanceIdHeaders headers = BatchUpdateFormDataByInstanceIdHeaders();
  return batchUpdateFormDataByInstanceIdWithOptions(request, headers, runtime);
}

/**
 * @summary 通过表单实例数据批量更新表单实例
 *
 * @param tmpReq BatchUpdateFormDataByInstanceMapRequest
 * @param tmpHeader BatchUpdateFormDataByInstanceMapHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateFormDataByInstanceMapResponse
 */
BatchUpdateFormDataByInstanceMapResponse Client::batchUpdateFormDataByInstanceMapWithOptions(const BatchUpdateFormDataByInstanceMapRequest &tmpReq, const BatchUpdateFormDataByInstanceMapHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateFormDataByInstanceMapShrinkRequest request = BatchUpdateFormDataByInstanceMapShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  BatchUpdateFormDataByInstanceMapShrinkHeaders headers = BatchUpdateFormDataByInstanceMapShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasUpdateFormDataJsonMap()) {
    request.setUpdateFormDataJsonMapShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.updateFormDataJsonMap(), "UpdateFormDataJsonMap", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAsynchronousExecution()) {
    body["AsynchronousExecution"] = request.asynchronousExecution();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasIgnoreEmpty()) {
    body["IgnoreEmpty"] = request.ignoreEmpty();
  }

  if (!!request.hasNoExecuteExpression()) {
    body["NoExecuteExpression"] = request.noExecuteExpression();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasUpdateFormDataJsonMapShrink()) {
    body["UpdateFormDataJsonMap"] = request.updateFormDataJsonMapShrink();
  }

  if (!!request.hasUseLatestFormSchemaVersion()) {
    body["UseLatestFormSchemaVersion"] = request.useLatestFormSchemaVersion();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateFormDataByInstanceMap"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/batchUpdateFormDataByInstanceMap")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateFormDataByInstanceMapResponse>();
}

/**
 * @summary 通过表单实例数据批量更新表单实例
 *
 * @param request BatchUpdateFormDataByInstanceMapRequest
 * @return BatchUpdateFormDataByInstanceMapResponse
 */
BatchUpdateFormDataByInstanceMapResponse Client::batchUpdateFormDataByInstanceMap(const BatchUpdateFormDataByInstanceMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BatchUpdateFormDataByInstanceMapHeaders headers = BatchUpdateFormDataByInstanceMapHeaders();
  return batchUpdateFormDataByInstanceMapWithOptions(request, headers, runtime);
}

/**
 * @summary 取消预约会议
 *
 * @param tmpReq CancelScheduleConferenceRequest
 * @param tmpHeader CancelScheduleConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelScheduleConferenceResponse
 */
CancelScheduleConferenceResponse Client::cancelScheduleConferenceWithOptions(const CancelScheduleConferenceRequest &tmpReq, const CancelScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CancelScheduleConferenceShrinkRequest request = CancelScheduleConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CancelScheduleConferenceShrinkHeaders headers = CancelScheduleConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasScheduleConferenceId()) {
    body["ScheduleConferenceId"] = request.scheduleConferenceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelScheduleConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/cancelScheduleConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelScheduleConferenceResponse>();
}

/**
 * @summary 取消预约会议
 *
 * @param request CancelScheduleConferenceRequest
 * @return CancelScheduleConferenceResponse
 */
CancelScheduleConferenceResponse Client::cancelScheduleConference(const CancelScheduleConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CancelScheduleConferenceHeaders headers = CancelScheduleConferenceHeaders();
  return cancelScheduleConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改阿里钉号
 *
 * @param tmpReq ChangeDingTalkIdRequest
 * @param tmpHeader ChangeDingTalkIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDingTalkIdResponse
 */
ChangeDingTalkIdResponse Client::changeDingTalkIdWithOptions(const ChangeDingTalkIdRequest &tmpReq, const ChangeDingTalkIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChangeDingTalkIdShrinkRequest request = ChangeDingTalkIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ChangeDingTalkIdShrinkHeaders headers = ChangeDingTalkIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDingTalkId()) {
    body["DingTalkId"] = request.dingTalkId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeDingTalkId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/user/changeDingTalkId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDingTalkIdResponse>();
}

/**
 * @summary 修改阿里钉号
 *
 * @param request ChangeDingTalkIdRequest
 * @return ChangeDingTalkIdResponse
 */
ChangeDingTalkIdResponse Client::changeDingTalkId(const ChangeDingTalkIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChangeDingTalkIdHeaders headers = ChangeDingTalkIdHeaders();
  return changeDingTalkIdWithOptions(request, headers, runtime);
}

/**
 * @summary 校验阿里员工
 *
 * @param tmpReq CheckAlibabaStaffRequest
 * @param tmpHeader CheckAlibabaStaffHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAlibabaStaffResponse
 */
CheckAlibabaStaffResponse Client::checkAlibabaStaffWithOptions(const CheckAlibabaStaffRequest &tmpReq, const CheckAlibabaStaffHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckAlibabaStaffShrinkRequest request = CheckAlibabaStaffShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CheckAlibabaStaffShrinkHeaders headers = CheckAlibabaStaffShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMobile()) {
    body["Mobile"] = request.mobile();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAlibabaStaff"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/checkAlibabaStaff")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAlibabaStaffResponse>();
}

/**
 * @summary 校验阿里员工
 *
 * @param request CheckAlibabaStaffRequest
 * @return CheckAlibabaStaffResponse
 */
CheckAlibabaStaffResponse Client::checkAlibabaStaff(const CheckAlibabaStaffRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckAlibabaStaffHeaders headers = CheckAlibabaStaffHeaders();
  return checkAlibabaStaffWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用户是否为企业内部群成员
 *
 * @param request CheckUserIsGroupMemberRequest
 * @param tmpHeader CheckUserIsGroupMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUserIsGroupMemberResponse
 */
CheckUserIsGroupMemberResponse Client::checkUserIsGroupMemberWithOptions(const CheckUserIsGroupMemberRequest &request, const CheckUserIsGroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  CheckUserIsGroupMemberShrinkHeaders headers = CheckUserIsGroupMemberShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckUserIsGroupMember"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/checkUserIsGroupMember")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUserIsGroupMemberResponse>();
}

/**
 * @summary 查询用户是否为企业内部群成员
 *
 * @param request CheckUserIsGroupMemberRequest
 * @return CheckUserIsGroupMemberResponse
 */
CheckUserIsGroupMemberResponse Client::checkUserIsGroupMember(const CheckUserIsGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckUserIsGroupMemberHeaders headers = CheckUserIsGroupMemberHeaders();
  return checkUserIsGroupMemberWithOptions(request, headers, runtime);
}

/**
 * @summary 清除单元格所有内容
 *
 * @param tmpReq ClearRequest
 * @param tmpHeader ClearHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearResponse
 */
ClearResponse Client::clearWithOptions(const ClearRequest &tmpReq, const ClearHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ClearShrinkRequest request = ClearShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ClearShrinkHeaders headers = ClearShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRangeAddress()) {
    body["RangeAddress"] = request.rangeAddress();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Clear"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/clear")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearResponse>();
}

/**
 * @summary 清除单元格所有内容
 *
 * @param request ClearRequest
 * @return ClearResponse
 */
ClearResponse Client::clear(const ClearRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ClearHeaders headers = ClearHeaders();
  return clearWithOptions(request, headers, runtime);
}

/**
 * @summary 清除单元格数据
 *
 * @param tmpReq ClearDataRequest
 * @param tmpHeader ClearDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearDataResponse
 */
ClearDataResponse Client::clearDataWithOptions(const ClearDataRequest &tmpReq, const ClearDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ClearDataShrinkRequest request = ClearDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ClearDataShrinkHeaders headers = ClearDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRangeAddress()) {
    body["RangeAddress"] = request.rangeAddress();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ClearData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/clearData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearDataResponse>();
}

/**
 * @summary 清除单元格数据
 *
 * @param request ClearDataRequest
 * @return ClearDataResponse
 */
ClearDataResponse Client::clearData(const ClearDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ClearDataHeaders headers = ClearDataHeaders();
  return clearDataWithOptions(request, headers, runtime);
}

/**
 * @summary 关闭视频会议
 *
 * @param tmpReq CloseVideoConferenceRequest
 * @param tmpHeader CloseVideoConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseVideoConferenceResponse
 */
CloseVideoConferenceResponse Client::closeVideoConferenceWithOptions(const CloseVideoConferenceRequest &tmpReq, const CloseVideoConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloseVideoConferenceShrinkRequest request = CloseVideoConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CloseVideoConferenceShrinkHeaders headers = CloseVideoConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseVideoConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/closeVideoConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseVideoConferenceResponse>();
}

/**
 * @summary 关闭视频会议
 *
 * @param request CloseVideoConferenceRequest
 * @return CloseVideoConferenceResponse
 */
CloseVideoConferenceResponse Client::closeVideoConference(const CloseVideoConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CloseVideoConferenceHeaders headers = CloseVideoConferenceHeaders();
  return closeVideoConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取日志评论列表
 *
 * @param tmpReq CommentListReportRequest
 * @param tmpHeader CommentListReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommentListReportResponse
 */
CommentListReportResponse Client::commentListReportWithOptions(const CommentListReportRequest &tmpReq, const CommentListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CommentListReportShrinkRequest request = CommentListReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CommentListReportShrinkHeaders headers = CommentListReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOffset()) {
    body["Offset"] = request.offset();
  }

  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CommentListReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/commentListReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommentListReportResponse>();
}

/**
 * @summary 获取日志评论列表
 *
 * @param request CommentListReportRequest
 * @return CommentListReportResponse
 */
CommentListReportResponse Client::commentListReport(const CommentListReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CommentListReportHeaders headers = CommentListReportHeaders();
  return commentListReportWithOptions(request, headers, runtime);
}

/**
 * @summary 提交文件
 *
 * @param tmpReq CommitFileRequest
 * @param tmpHeader CommitFileHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitFileResponse
 */
CommitFileResponse Client::commitFileWithOptions(const CommitFileRequest &tmpReq, const CommitFileHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CommitFileShrinkRequest request = CommitFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CommitFileShrinkHeaders headers = CommitFileShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasParentDentryUuid()) {
    body["ParentDentryUuid"] = request.parentDentryUuid();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUploadKey()) {
    body["UploadKey"] = request.uploadKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CommitFile"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/commitFile")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommitFileResponse>();
}

/**
 * @summary 提交文件
 *
 * @param request CommitFileRequest
 * @return CommitFileResponse
 */
CommitFileResponse Client::commitFile(const CommitFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CommitFileHeaders headers = CommitFileHeaders();
  return commitFileWithOptions(request, headers, runtime);
}

/**
 * @summary 创建知识库节点副本
 *
 * @param tmpReq CopyDentryRequest
 * @param tmpHeader CopyDentryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDentryResponse
 */
CopyDentryResponse Client::copyDentryWithOptions(const CopyDentryRequest &tmpReq, const CopyDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CopyDentryShrinkRequest request = CopyDentryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CopyDentryShrinkHeaders headers = CopyDentryShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTargetSpaceId()) {
    body["TargetSpaceId"] = request.targetSpaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasToNextDentryId()) {
    body["ToNextDentryId"] = request.toNextDentryId();
  }

  if (!!request.hasToParentDentryId()) {
    body["ToParentDentryId"] = request.toParentDentryId();
  }

  if (!!request.hasToPrevDentryId()) {
    body["ToPrevDentryId"] = request.toPrevDentryId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CopyDentry"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/copyDentry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyDentryResponse>();
}

/**
 * @summary 创建知识库节点副本
 *
 * @param request CopyDentryRequest
 * @return CopyDentryResponse
 */
CopyDentryResponse Client::copyDentry(const CopyDentryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CopyDentryHeaders headers = CopyDentryHeaders();
  return copyDentryWithOptions(request, headers, runtime);
}

/**
 * @summary 通过NodeId创建知识库节点副本
 *
 * @param tmpReq CopyDentryByNodeIdRequest
 * @param tmpHeader CopyDentryByNodeIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyDentryByNodeIdResponse
 */
CopyDentryByNodeIdResponse Client::copyDentryByNodeIdWithOptions(const CopyDentryByNodeIdRequest &tmpReq, const CopyDentryByNodeIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CopyDentryByNodeIdShrinkRequest request = CopyDentryByNodeIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CopyDentryByNodeIdShrinkHeaders headers = CopyDentryByNodeIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasToNextNodeId()) {
    body["ToNextNodeId"] = request.toNextNodeId();
  }

  if (!!request.hasToParentNodeId()) {
    body["ToParentNodeId"] = request.toParentNodeId();
  }

  if (!!request.hasToPrevNodeId()) {
    body["ToPrevNodeId"] = request.toPrevNodeId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CopyDentryByNodeId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/copyDentryByNodeId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyDentryByNodeIdResponse>();
}

/**
 * @summary 通过NodeId创建知识库节点副本
 *
 * @param request CopyDentryByNodeIdRequest
 * @return CopyDentryByNodeIdResponse
 */
CopyDentryByNodeIdResponse Client::copyDentryByNodeId(const CopyDentryByNodeIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CopyDentryByNodeIdHeaders headers = CopyDentryByNodeIdHeaders();
  return copyDentryByNodeIdWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq CreateAlidingAssistantRequest
 * @param tmpHeader CreateAlidingAssistantHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlidingAssistantResponse
 */
CreateAlidingAssistantResponse Client::createAlidingAssistantWithOptions(const CreateAlidingAssistantRequest &tmpReq, const CreateAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAlidingAssistantShrinkRequest request = CreateAlidingAssistantShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateAlidingAssistantShrinkHeaders headers = CreateAlidingAssistantShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "Ext", "json"));
  }

  if (!!tmpReq.hasRecommendPrompts()) {
    request.setRecommendPromptsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recommendPrompts(), "RecommendPrompts", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAppCode()) {
    body["AppCode"] = request.appCode();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasExtShrink()) {
    body["Ext"] = request.extShrink();
  }

  if (!!request.hasIcon()) {
    body["Icon"] = request.icon();
  }

  if (!!request.hasInstructions()) {
    body["Instructions"] = request.instructions();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecommendPromptsShrink()) {
    body["RecommendPrompts"] = request.recommendPromptsShrink();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasSourceIdentityId()) {
    body["SourceIdentityId"] = request.sourceIdentityId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWelcomeContent()) {
    body["WelcomeContent"] = request.welcomeContent();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlidingAssistant"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/aiagent/createAlidingAssistant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlidingAssistantResponse>();
}

/**
 * @param request CreateAlidingAssistantRequest
 * @return CreateAlidingAssistantResponse
 */
CreateAlidingAssistantResponse Client::createAlidingAssistant(const CreateAlidingAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateAlidingAssistantHeaders headers = CreateAlidingAssistantHeaders();
  return createAlidingAssistantWithOptions(request, headers, runtime);
}

/**
 * @summary 发布钉钉投放活动
 *
 * @param tmpReq CreateDeliveryPlanRequest
 * @param tmpHeader CreateDeliveryPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeliveryPlanResponse
 */
CreateDeliveryPlanResponse Client::createDeliveryPlanWithOptions(const CreateDeliveryPlanRequest &tmpReq, const CreateDeliveryPlanHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDeliveryPlanShrinkRequest request = CreateDeliveryPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateDeliveryPlanShrinkHeaders headers = CreateDeliveryPlanShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdList(), "UserIdList", "json"));
  }

  json body = {};
  if (!!request.hasContentShrink()) {
    body["Content"] = request.contentShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasResId()) {
    body["ResId"] = request.resId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserIdListShrink()) {
    body["UserIdList"] = request.userIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDeliveryPlan"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/createDeliveryPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeliveryPlanResponse>();
}

/**
 * @summary 发布钉钉投放活动
 *
 * @param request CreateDeliveryPlanRequest
 * @return CreateDeliveryPlanResponse
 */
CreateDeliveryPlanResponse Client::createDeliveryPlan(const CreateDeliveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDeliveryPlanHeaders headers = CreateDeliveryPlanHeaders();
  return createDeliveryPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 委托权限创建钉钉个人待办
 *
 * @param tmpReq CreateDingtalkPersonalTodoTaskRequest
 * @param tmpHeader CreateDingtalkPersonalTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDingtalkPersonalTodoTaskResponse
 */
CreateDingtalkPersonalTodoTaskResponse Client::createDingtalkPersonalTodoTaskWithOptions(const CreateDingtalkPersonalTodoTaskRequest &tmpReq, const CreateDingtalkPersonalTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDingtalkPersonalTodoTaskShrinkRequest request = CreateDingtalkPersonalTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateDingtalkPersonalTodoTaskShrinkHeaders headers = CreateDingtalkPersonalTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasExecutorIds()) {
    request.setExecutorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorIds(), "ExecutorIds", "json"));
  }

  if (!!tmpReq.hasNotifyConfigs()) {
    request.setNotifyConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyConfigs(), "NotifyConfigs", "json"));
  }

  if (!!tmpReq.hasParticipantIds()) {
    request.setParticipantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.participantIds(), "ParticipantIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDueTime()) {
    body["DueTime"] = request.dueTime();
  }

  if (!!request.hasExecutorIdsShrink()) {
    body["ExecutorIds"] = request.executorIdsShrink();
  }

  if (!!request.hasNotifyConfigsShrink()) {
    body["NotifyConfigs"] = request.notifyConfigsShrink();
  }

  if (!!request.hasParticipantIdsShrink()) {
    body["ParticipantIds"] = request.participantIdsShrink();
  }

  if (!!request.hasSubject()) {
    body["Subject"] = request.subject();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserToken()) {
    body["UserToken"] = request.userToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDingtalkPersonalTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/createDingtalkPersonalTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDingtalkPersonalTodoTaskResponse>();
}

/**
 * @summary 委托权限创建钉钉个人待办
 *
 * @param request CreateDingtalkPersonalTodoTaskRequest
 * @return CreateDingtalkPersonalTodoTaskResponse
 */
CreateDingtalkPersonalTodoTaskResponse Client::createDingtalkPersonalTodoTask(const CreateDingtalkPersonalTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateDingtalkPersonalTodoTaskHeaders headers = CreateDingtalkPersonalTodoTaskHeaders();
  return createDingtalkPersonalTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建日程
 *
 * @param tmpReq CreateEventRequest
 * @param tmpHeader CreateEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEventWithOptions(const CreateEventRequest &tmpReq, const CreateEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEventShrinkRequest request = CreateEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateEventShrinkHeaders headers = CreateEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasAttendees()) {
    request.setAttendeesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attendees(), "Attendees", "json"));
  }

  if (!!tmpReq.hasCardInstances()) {
    request.setCardInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cardInstances(), "CardInstances", "json"));
  }

  if (!!tmpReq.hasEnd()) {
    request.setEndShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.end(), "End", "json"));
  }

  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  if (!!tmpReq.hasLocation()) {
    request.setLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.location(), "Location", "json"));
  }

  if (!!tmpReq.hasOnlineMeetingInfo()) {
    request.setOnlineMeetingInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.onlineMeetingInfo(), "OnlineMeetingInfo", "json"));
  }

  if (!!tmpReq.hasRecurrence()) {
    request.setRecurrenceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recurrence(), "Recurrence", "json"));
  }

  if (!!tmpReq.hasReminders()) {
    request.setRemindersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.reminders(), "Reminders", "json"));
  }

  if (!!tmpReq.hasRichTextDescription()) {
    request.setRichTextDescriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.richTextDescription(), "RichTextDescription", "json"));
  }

  if (!!tmpReq.hasUiConfigs()) {
    request.setUiConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.uiConfigs(), "UiConfigs", "json"));
  }

  if (!!tmpReq.hasStart()) {
    request.setStartShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.start(), "start", "json"));
  }

  json body = {};
  if (!!request.hasAttendeesShrink()) {
    body["Attendees"] = request.attendeesShrink();
  }

  if (!!request.hasCardInstancesShrink()) {
    body["CardInstances"] = request.cardInstancesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndShrink()) {
    body["End"] = request.endShrink();
  }

  if (!!request.hasExtraShrink()) {
    body["Extra"] = request.extraShrink();
  }

  if (!!request.hasIsAllDay()) {
    body["IsAllDay"] = request.isAllDay();
  }

  if (!!request.hasLocationShrink()) {
    body["Location"] = request.locationShrink();
  }

  if (!!request.hasOnlineMeetingInfoShrink()) {
    body["OnlineMeetingInfo"] = request.onlineMeetingInfoShrink();
  }

  if (!!request.hasRecurrenceShrink()) {
    body["Recurrence"] = request.recurrenceShrink();
  }

  if (!!request.hasRemindersShrink()) {
    body["Reminders"] = request.remindersShrink();
  }

  if (!!request.hasRichTextDescriptionShrink()) {
    body["RichTextDescription"] = request.richTextDescriptionShrink();
  }

  if (!!request.hasSummary()) {
    body["Summary"] = request.summary();
  }

  if (!!request.hasUiConfigsShrink()) {
    body["UiConfigs"] = request.uiConfigsShrink();
  }

  if (!!request.hasCalendarId()) {
    body["calendarId"] = request.calendarId();
  }

  if (!!request.hasStartShrink()) {
    body["start"] = request.startShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/createEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventResponse>();
}

/**
 * @summary 创建日程
 *
 * @param request CreateEventRequest
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEvent(const CreateEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateEventHeaders headers = CreateEventHeaders();
  return createEventWithOptions(request, headers, runtime);
}

/**
 * @summary 创建直播
 *
 * @param tmpReq CreateLiveRequest
 * @param tmpHeader CreateLiveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLiveResponse
 */
CreateLiveResponse Client::createLiveWithOptions(const CreateLiveRequest &tmpReq, const CreateLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLiveShrinkRequest request = CreateLiveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateLiveShrinkHeaders headers = CreateLiveShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCoverUrl()) {
    body["CoverUrl"] = request.coverUrl();
  }

  if (!!request.hasIntroduction()) {
    body["Introduction"] = request.introduction();
  }

  if (!!request.hasPreEndTime()) {
    body["PreEndTime"] = request.preEndTime();
  }

  if (!!request.hasPreStartTime()) {
    body["PreStartTime"] = request.preStartTime();
  }

  if (!!request.hasPublicType()) {
    body["PublicType"] = request.publicType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLive"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/createLive")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLiveResponse>();
}

/**
 * @summary 创建直播
 *
 * @param request CreateLiveRequest
 * @return CreateLiveResponse
 */
CreateLiveResponse Client::createLive(const CreateLiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateLiveHeaders headers = CreateLiveHeaders();
  return createLiveWithOptions(request, headers, runtime);
}

/**
 * @summary 创建会议室
 *
 * @param tmpReq CreateMeetingRoomRequest
 * @param tmpHeader CreateMeetingRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMeetingRoomResponse
 */
CreateMeetingRoomResponse Client::createMeetingRoomWithOptions(const CreateMeetingRoomRequest &tmpReq, const CreateMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMeetingRoomShrinkRequest request = CreateMeetingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateMeetingRoomShrinkHeaders headers = CreateMeetingRoomShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasReservationAuthority()) {
    request.setReservationAuthorityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.reservationAuthority(), "ReservationAuthority", "json"));
  }

  if (!!tmpReq.hasRoomLabelIds()) {
    request.setRoomLabelIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomLabelIds(), "RoomLabelIds", "json"));
  }

  if (!!tmpReq.hasRoomLocation()) {
    request.setRoomLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomLocation(), "RoomLocation", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasEnableCycleReservation()) {
    body["EnableCycleReservation"] = request.enableCycleReservation();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasIsvRoomId()) {
    body["IsvRoomId"] = request.isvRoomId();
  }

  if (!!request.hasReservationAuthorityShrink()) {
    body["ReservationAuthority"] = request.reservationAuthorityShrink();
  }

  if (!!request.hasRoomCapacity()) {
    body["RoomCapacity"] = request.roomCapacity();
  }

  if (!!request.hasRoomLabelIdsShrink()) {
    body["RoomLabelIds"] = request.roomLabelIdsShrink();
  }

  if (!!request.hasRoomLocationShrink()) {
    body["RoomLocation"] = request.roomLocationShrink();
  }

  if (!!request.hasRoomName()) {
    body["RoomName"] = request.roomName();
  }

  if (!!request.hasRoomPicture()) {
    body["RoomPicture"] = request.roomPicture();
  }

  if (!!request.hasRoomStatus()) {
    body["RoomStatus"] = request.roomStatus();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMeetingRoom"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/createMeetingRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMeetingRoomResponse>();
}

/**
 * @summary 创建会议室
 *
 * @param request CreateMeetingRoomRequest
 * @return CreateMeetingRoomResponse
 */
CreateMeetingRoomResponse Client::createMeetingRoom(const CreateMeetingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateMeetingRoomHeaders headers = CreateMeetingRoomHeaders();
  return createMeetingRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 创建会议室分组
 *
 * @param tmpReq CreateMeetingRoomGroupRequest
 * @param tmpHeader CreateMeetingRoomGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMeetingRoomGroupResponse
 */
CreateMeetingRoomGroupResponse Client::createMeetingRoomGroupWithOptions(const CreateMeetingRoomGroupRequest &tmpReq, const CreateMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMeetingRoomGroupShrinkRequest request = CreateMeetingRoomGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateMeetingRoomGroupShrinkHeaders headers = CreateMeetingRoomGroupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasParentGroupId()) {
    body["ParentGroupId"] = request.parentGroupId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMeetingRoomGroup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/createMeetingRoomGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMeetingRoomGroupResponse>();
}

/**
 * @summary 创建会议室分组
 *
 * @param request CreateMeetingRoomGroupRequest
 * @return CreateMeetingRoomGroupResponse
 */
CreateMeetingRoomGroupResponse Client::createMeetingRoomGroup(const CreateMeetingRoomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateMeetingRoomGroupHeaders headers = CreateMeetingRoomGroupHeaders();
  return createMeetingRoomGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建消息
 *
 * @param request CreateMessageRequest
 * @param headers CreateMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMessageResponse
 */
CreateMessageResponse Client::createMessageWithOptions(const CreateMessageRequest &request, const CreateMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMessage"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/createMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMessageResponse>();
}

/**
 * @summary 创建消息
 *
 * @param request CreateMessageRequest
 * @return CreateMessageResponse
 */
CreateMessageResponse Client::createMessage(const CreateMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateMessageHeaders headers = CreateMessageHeaders();
  return createMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 创建字段
 *
 * @param tmpReq CreateMultiDimTableFieldRequest
 * @param tmpHeader CreateMultiDimTableFieldHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMultiDimTableFieldResponse
 */
CreateMultiDimTableFieldResponse Client::createMultiDimTableFieldWithOptions(const CreateMultiDimTableFieldRequest &tmpReq, const CreateMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMultiDimTableFieldShrinkRequest request = CreateMultiDimTableFieldShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateMultiDimTableFieldShrinkHeaders headers = CreateMultiDimTableFieldShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasProperty()) {
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.property(), "Property", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.propertyShrink();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMultiDimTableField"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/createMultiDimTableField")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMultiDimTableFieldResponse>();
}

/**
 * @summary 创建字段
 *
 * @param request CreateMultiDimTableFieldRequest
 * @return CreateMultiDimTableFieldResponse
 */
CreateMultiDimTableFieldResponse Client::createMultiDimTableField(const CreateMultiDimTableFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateMultiDimTableFieldHeaders headers = CreateMultiDimTableFieldHeaders();
  return createMultiDimTableFieldWithOptions(request, headers, runtime);
}

/**
 * @summary 新增或更新表单实例
 *
 * @param request CreateOrUpdateFormDataRequest
 * @param tmpHeader CreateOrUpdateFormDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrUpdateFormDataResponse
 */
CreateOrUpdateFormDataResponse Client::createOrUpdateFormDataWithOptions(const CreateOrUpdateFormDataRequest &request, const CreateOrUpdateFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  CreateOrUpdateFormDataShrinkHeaders headers = CreateOrUpdateFormDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormDataJson()) {
    body["FormDataJson"] = request.formDataJson();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasNoExecuteExpression()) {
    body["NoExecuteExpression"] = request.noExecuteExpression();
  }

  if (!!request.hasSearchCondition()) {
    body["SearchCondition"] = request.searchCondition();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrUpdateFormData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/createOrUpdateFormData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrUpdateFormDataResponse>();
}

/**
 * @summary 新增或更新表单实例
 *
 * @param request CreateOrUpdateFormDataRequest
 * @return CreateOrUpdateFormDataResponse
 */
CreateOrUpdateFormDataResponse Client::createOrUpdateFormData(const CreateOrUpdateFormDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateOrUpdateFormDataHeaders headers = CreateOrUpdateFormDataHeaders();
  return createOrUpdateFormDataWithOptions(request, headers, runtime);
}

/**
 * @summary 创建荣誉勋章模板
 *
 * @param tmpReq CreateOrgHonorTemplateRequest
 * @param tmpHeader CreateOrgHonorTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOrgHonorTemplateResponse
 */
CreateOrgHonorTemplateResponse Client::createOrgHonorTemplateWithOptions(const CreateOrgHonorTemplateRequest &tmpReq, const CreateOrgHonorTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOrgHonorTemplateShrinkRequest request = CreateOrgHonorTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateOrgHonorTemplateShrinkHeaders headers = CreateOrgHonorTemplateShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasAvatarFrameMediaId()) {
    body["avatarFrameMediaId"] = request.avatarFrameMediaId();
  }

  if (!!request.hasDefaultBgColor()) {
    body["defaultBgColor"] = request.defaultBgColor();
  }

  if (!!request.hasMedalDesc()) {
    body["medalDesc"] = request.medalDesc();
  }

  if (!!request.hasMedalMediaId()) {
    body["medalMediaId"] = request.medalMediaId();
  }

  if (!!request.hasMedalName()) {
    body["medalName"] = request.medalName();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateOrgHonorTemplate"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/createOrgHonorTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOrgHonorTemplateResponse>();
}

/**
 * @summary 创建荣誉勋章模板
 *
 * @param request CreateOrgHonorTemplateRequest
 * @return CreateOrgHonorTemplateResponse
 */
CreateOrgHonorTemplateResponse Client::createOrgHonorTemplate(const CreateOrgHonorTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateOrgHonorTemplateHeaders headers = CreateOrgHonorTemplateHeaders();
  return createOrgHonorTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 创建钉钉个人待办任务
 *
 * @param tmpReq CreatePersonalTodoTaskRequest
 * @param tmpHeader CreatePersonalTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePersonalTodoTaskResponse
 */
CreatePersonalTodoTaskResponse Client::createPersonalTodoTaskWithOptions(const CreatePersonalTodoTaskRequest &tmpReq, const CreatePersonalTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePersonalTodoTaskShrinkRequest request = CreatePersonalTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreatePersonalTodoTaskShrinkHeaders headers = CreatePersonalTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasExecutorIds()) {
    request.setExecutorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorIds(), "ExecutorIds", "json"));
  }

  if (!!tmpReq.hasNotifyConfigs()) {
    request.setNotifyConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyConfigs(), "NotifyConfigs", "json"));
  }

  if (!!tmpReq.hasParticipantIds()) {
    request.setParticipantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.participantIds(), "ParticipantIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDueTime()) {
    body["DueTime"] = request.dueTime();
  }

  if (!!request.hasExecutorIdsShrink()) {
    body["ExecutorIds"] = request.executorIdsShrink();
  }

  if (!!request.hasNotifyConfigsShrink()) {
    body["NotifyConfigs"] = request.notifyConfigsShrink();
  }

  if (!!request.hasParticipantIdsShrink()) {
    body["ParticipantIds"] = request.participantIdsShrink();
  }

  if (!!request.hasReminderTimeStamp()) {
    body["ReminderTimeStamp"] = request.reminderTimeStamp();
  }

  if (!!request.hasSubject()) {
    body["Subject"] = request.subject();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePersonalTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/createPersonalTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePersonalTodoTaskResponse>();
}

/**
 * @summary 创建钉钉个人待办任务
 *
 * @param request CreatePersonalTodoTaskRequest
 * @return CreatePersonalTodoTaskResponse
 */
CreatePersonalTodoTaskResponse Client::createPersonalTodoTask(const CreatePersonalTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreatePersonalTodoTaskHeaders headers = CreatePersonalTodoTaskHeaders();
  return createPersonalTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建日志
 *
 * @param tmpReq CreateReportRequest
 * @param tmpHeader CreateReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReportResponse
 */
CreateReportResponse Client::createReportWithOptions(const CreateReportRequest &tmpReq, const CreateReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateReportShrinkRequest request = CreateReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateReportShrinkHeaders headers = CreateReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contents(), "Contents", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasToCids()) {
    request.setToCidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toCids(), "ToCids", "json"));
  }

  if (!!tmpReq.hasToUserids()) {
    request.setToUseridsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.toUserids(), "ToUserids", "json"));
  }

  json body = {};
  if (!!request.hasContentsShrink()) {
    body["Contents"] = request.contentsShrink();
  }

  if (!!request.hasDdFrom()) {
    body["DdFrom"] = request.ddFrom();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasToChat()) {
    body["ToChat"] = request.toChat();
  }

  if (!!request.hasToCidsShrink()) {
    body["ToCids"] = request.toCidsShrink();
  }

  if (!!request.hasToUseridsShrink()) {
    body["ToUserids"] = request.toUseridsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/createReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReportResponse>();
}

/**
 * @summary 创建日志
 *
 * @param request CreateReportRequest
 * @return CreateReportResponse
 */
CreateReportResponse Client::createReport(const CreateReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateReportHeaders headers = CreateReportHeaders();
  return createReportWithOptions(request, headers, runtime);
}

/**
 * @summary 创建运行
 *
 * @param request CreateRunRequest
 * @param headers CreateRunHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRunResponse
 */
FutrueGenerator<CreateRunResponse> Client::createRunWithSSE(const CreateRunRequest &request, const CreateRunHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowStructViewContent()) {
    body["allowStructViewContent"] = request.allowStructViewContent();
  }

  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRun"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/createRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<CreateRunResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 创建运行
 *
 * @param request CreateRunRequest
 * @param headers CreateRunHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRunResponse
 */
CreateRunResponse Client::createRunWithOptions(const CreateRunRequest &request, const CreateRunHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowStructViewContent()) {
    body["allowStructViewContent"] = request.allowStructViewContent();
  }

  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRun"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/createRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRunResponse>();
}

/**
 * @summary 创建运行
 *
 * @param request CreateRunRequest
 * @return CreateRunResponse
 */
CreateRunResponse Client::createRun(const CreateRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateRunHeaders headers = CreateRunHeaders();
  return createRunWithOptions(request, headers, runtime);
}

/**
 * @summary 创建场景群
 *
 * @param request CreateScenegroupRequest
 * @param tmpHeader CreateScenegroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScenegroupResponse
 */
CreateScenegroupResponse Client::createScenegroupWithOptions(const CreateScenegroupRequest &request, const CreateScenegroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  CreateScenegroupShrinkHeaders headers = CreateScenegroupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAddFriendForbidden()) {
    body["AddFriendForbidden"] = request.addFriendForbidden();
  }

  if (!!request.hasAllMembersCanCreateCalendar()) {
    body["AllMembersCanCreateCalendar"] = request.allMembersCanCreateCalendar();
  }

  if (!!request.hasAllMembersCanCreateMcsConf()) {
    body["AllMembersCanCreateMcsConf"] = request.allMembersCanCreateMcsConf();
  }

  if (!!request.hasChatBannedType()) {
    body["ChatBannedType"] = request.chatBannedType();
  }

  if (!!request.hasGroupEmailDisabled()) {
    body["GroupEmailDisabled"] = request.groupEmailDisabled();
  }

  if (!!request.hasGroupLiveSwitch()) {
    body["GroupLiveSwitch"] = request.groupLiveSwitch();
  }

  if (!!request.hasIcon()) {
    body["Icon"] = request.icon();
  }

  if (!!request.hasManagementType()) {
    body["ManagementType"] = request.managementType();
  }

  if (!!request.hasMembersToAdminChat()) {
    body["MembersToAdminChat"] = request.membersToAdminChat();
  }

  if (!!request.hasMentionAllAuthority()) {
    body["MentionAllAuthority"] = request.mentionAllAuthority();
  }

  if (!!request.hasOnlyAdminCanDing()) {
    body["OnlyAdminCanDing"] = request.onlyAdminCanDing();
  }

  if (!!request.hasOnlyAdminCanSetMsgTop()) {
    body["OnlyAdminCanSetMsgTop"] = request.onlyAdminCanSetMsgTop();
  }

  if (!!request.hasSearchable()) {
    body["Searchable"] = request.searchable();
  }

  if (!!request.hasShowHistoryType()) {
    body["ShowHistoryType"] = request.showHistoryType();
  }

  if (!!request.hasSubadminIds()) {
    body["SubadminIds"] = request.subadminIds();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  if (!!request.hasUserIds()) {
    body["UserIds"] = request.userIds();
  }

  if (!!request.hasUuid()) {
    body["Uuid"] = request.uuid();
  }

  if (!!request.hasValidationType()) {
    body["ValidationType"] = request.validationType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScenegroup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/createScenegroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScenegroupResponse>();
}

/**
 * @summary 创建场景群
 *
 * @param request CreateScenegroupRequest
 * @return CreateScenegroupResponse
 */
CreateScenegroupResponse Client::createScenegroup(const CreateScenegroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateScenegroupHeaders headers = CreateScenegroupHeaders();
  return createScenegroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建预约会议
 *
 * @param tmpReq CreateScheduleConferenceRequest
 * @param tmpHeader CreateScheduleConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduleConferenceResponse
 */
CreateScheduleConferenceResponse Client::createScheduleConferenceWithOptions(const CreateScheduleConferenceRequest &tmpReq, const CreateScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduleConferenceShrinkRequest request = CreateScheduleConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateScheduleConferenceShrinkHeaders headers = CreateScheduleConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasScheduleConfSettingModel()) {
    request.setScheduleConfSettingModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfSettingModel(), "ScheduleConfSettingModel", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasScheduleConfSettingModelShrink()) {
    body["ScheduleConfSettingModel"] = request.scheduleConfSettingModelShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduleConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/createScheduleConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduleConferenceResponse>();
}

/**
 * @summary 创建预约会议
 *
 * @param request CreateScheduleConferenceRequest
 * @return CreateScheduleConferenceResponse
 */
CreateScheduleConferenceResponse Client::createScheduleConference(const CreateScheduleConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateScheduleConferenceHeaders headers = CreateScheduleConferenceHeaders();
  return createScheduleConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 发布钉钉搜索穹顶
 *
 * @param tmpReq CreateSearchDomeRequest
 * @param tmpHeader CreateSearchDomeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchDomeResponse
 */
CreateSearchDomeResponse Client::createSearchDomeWithOptions(const CreateSearchDomeRequest &tmpReq, const CreateSearchDomeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSearchDomeShrinkRequest request = CreateSearchDomeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateSearchDomeShrinkHeaders headers = CreateSearchDomeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdList(), "UserIdList", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasResId()) {
    body["ResId"] = request.resId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserIdListShrink()) {
    body["UserIdList"] = request.userIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSearchDome"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/createSearchDome")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSearchDomeResponse>();
}

/**
 * @summary 发布钉钉搜索穹顶
 *
 * @param request CreateSearchDomeRequest
 * @return CreateSearchDomeResponse
 */
CreateSearchDomeResponse Client::createSearchDome(const CreateSearchDomeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSearchDomeHeaders headers = CreateSearchDomeHeaders();
  return createSearchDomeWithOptions(request, headers, runtime);
}

/**
 * @summary 发布钉钉搜索关键词
 *
 * @param tmpReq CreateSearchKeywordRequest
 * @param tmpHeader CreateSearchKeywordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchKeywordResponse
 */
CreateSearchKeywordResponse Client::createSearchKeywordWithOptions(const CreateSearchKeywordRequest &tmpReq, const CreateSearchKeywordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSearchKeywordShrinkRequest request = CreateSearchKeywordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateSearchKeywordShrinkHeaders headers = CreateSearchKeywordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdList(), "UserIdList", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasResId()) {
    body["ResId"] = request.resId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserIdListShrink()) {
    body["UserIdList"] = request.userIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSearchKeyword"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/createSearchKeyword")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSearchKeywordResponse>();
}

/**
 * @summary 发布钉钉搜索关键词
 *
 * @param request CreateSearchKeywordRequest
 * @return CreateSearchKeywordResponse
 */
CreateSearchKeywordResponse Client::createSearchKeyword(const CreateSearchKeywordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSearchKeywordHeaders headers = CreateSearchKeywordHeaders();
  return createSearchKeywordWithOptions(request, headers, runtime);
}

/**
 * @summary 创建工作表
 *
 * @param tmpReq CreateSheetRequest
 * @param tmpHeader CreateSheetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSheetResponse
 */
CreateSheetResponse Client::createSheetWithOptions(const CreateSheetRequest &tmpReq, const CreateSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSheetShrinkRequest request = CreateSheetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateSheetShrinkHeaders headers = CreateSheetShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSheet"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/createSheet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSheetResponse>();
}

/**
 * @summary 创建工作表
 *
 * @param request CreateSheetRequest
 * @return CreateSheetResponse
 */
CreateSheetResponse Client::createSheet(const CreateSheetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSheetHeaders headers = CreateSheetHeaders();
  return createSheetWithOptions(request, headers, runtime);
}

/**
 * @summary 创建订阅日历
 *
 * @param tmpReq CreateSubscribedCalendarRequest
 * @param tmpHeader CreateSubscribedCalendarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubscribedCalendarResponse
 */
CreateSubscribedCalendarResponse Client::createSubscribedCalendarWithOptions(const CreateSubscribedCalendarRequest &tmpReq, const CreateSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSubscribedCalendarShrinkRequest request = CreateSubscribedCalendarShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateSubscribedCalendarShrinkHeaders headers = CreateSubscribedCalendarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasManagers()) {
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managers(), "Managers", "json"));
  }

  if (!!tmpReq.hasSubscribeScope()) {
    request.setSubscribeScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subscribeScope(), "SubscribeScope", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasManagersShrink()) {
    body["Managers"] = request.managersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSubscribeScopeShrink()) {
    body["SubscribeScope"] = request.subscribeScopeShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSubscribedCalendar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/createSubscribedCalendar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubscribedCalendarResponse>();
}

/**
 * @summary 创建订阅日历
 *
 * @param request CreateSubscribedCalendarRequest
 * @return CreateSubscribedCalendarResponse
 */
CreateSubscribedCalendarResponse Client::createSubscribedCalendar(const CreateSubscribedCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSubscribedCalendarHeaders headers = CreateSubscribedCalendarHeaders();
  return createSubscribedCalendarWithOptions(request, headers, runtime);
}

/**
 * @summary 创建线程
 *
 * @param request CreateThreadRequest
 * @param headers CreateThreadHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateThreadResponse
 */
CreateThreadResponse Client::createThreadWithOptions(const CreateThreadRequest &request, const CreateThreadHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateThread"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/createThread")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateThreadResponse>();
}

/**
 * @summary 创建线程
 *
 * @param request CreateThreadRequest
 * @return CreateThreadResponse
 */
CreateThreadResponse Client::createThread(const CreateThreadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateThreadHeaders headers = CreateThreadHeaders();
  return createThreadWithOptions(request, headers, runtime);
}

/**
 * @summary 创建工单
 *
 * @param tmpReq CreateTicketRequest
 * @param tmpHeader CreateTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &tmpReq, const CreateTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTicketShrinkRequest request = CreateTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateTicketShrinkHeaders headers = CreateTicketShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasNotify()) {
    request.setNotifyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notify(), "Notify", "json"));
  }

  if (!!tmpReq.hasProcessorUserIds()) {
    request.setProcessorUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.processorUserIds(), "ProcessorUserIds", "json"));
  }

  if (!!tmpReq.hasSceneContext()) {
    request.setSceneContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sceneContext(), "SceneContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCustomFields()) {
    body["CustomFields"] = request.customFields();
  }

  if (!!request.hasNotifyShrink()) {
    body["Notify"] = request.notifyShrink();
  }

  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTemplateBizId()) {
    body["OpenTemplateBizId"] = request.openTemplateBizId();
  }

  if (!!request.hasProcessorUserIdsShrink()) {
    body["ProcessorUserIds"] = request.processorUserIdsShrink();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSceneContextShrink()) {
    body["SceneContext"] = request.sceneContextShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/createTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @summary 创建工单
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateTicketHeaders headers = CreateTicketHeaders();
  return createTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 创建代办
 *
 * @param tmpReq CreateTodoTaskRequest
 * @param tmpHeader CreateTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTodoTaskResponse
 */
CreateTodoTaskResponse Client::createTodoTaskWithOptions(const CreateTodoTaskRequest &tmpReq, const CreateTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTodoTaskShrinkRequest request = CreateTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateTodoTaskShrinkHeaders headers = CreateTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasActionList()) {
    request.setActionListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.actionList(), "actionList", "json"));
  }

  if (!!tmpReq.hasContentFieldList()) {
    request.setContentFieldListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contentFieldList(), "contentFieldList", "json"));
  }

  if (!!tmpReq.hasDetailUrl()) {
    request.setDetailUrlShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.detailUrl(), "detailUrl", "json"));
  }

  if (!!tmpReq.hasExecutorIds()) {
    request.setExecutorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorIds(), "executorIds", "json"));
  }

  if (!!tmpReq.hasNotifyConfigs()) {
    request.setNotifyConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifyConfigs(), "notifyConfigs", "json"));
  }

  if (!!tmpReq.hasParticipantIds()) {
    request.setParticipantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.participantIds(), "participantIds", "json"));
  }

  if (!!tmpReq.hasRemindNotifyConfigs()) {
    request.setRemindNotifyConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.remindNotifyConfigs(), "remindNotifyConfigs", "json"));
  }

  json query = {};
  if (!!request.hasOperatorId()) {
    query["operatorId"] = request.operatorId();
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasActionListShrink()) {
    body["actionList"] = request.actionListShrink();
  }

  if (!!request.hasContentFieldListShrink()) {
    body["contentFieldList"] = request.contentFieldListShrink();
  }

  if (!!request.hasCreatorId()) {
    body["creatorId"] = request.creatorId();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDetailUrlShrink()) {
    body["detailUrl"] = request.detailUrlShrink();
  }

  if (!!request.hasDueTime()) {
    body["dueTime"] = request.dueTime();
  }

  if (!!request.hasExecutorIdsShrink()) {
    body["executorIds"] = request.executorIdsShrink();
  }

  if (!!request.hasIsOnlyShowExecutor()) {
    body["isOnlyShowExecutor"] = request.isOnlyShowExecutor();
  }

  if (!!request.hasNotifyConfigsShrink()) {
    body["notifyConfigs"] = request.notifyConfigsShrink();
  }

  if (!!request.hasParticipantIdsShrink()) {
    body["participantIds"] = request.participantIdsShrink();
  }

  if (!!request.hasPriority()) {
    body["priority"] = request.priority();
  }

  if (!!request.hasRemindNotifyConfigsShrink()) {
    body["remindNotifyConfigs"] = request.remindNotifyConfigsShrink();
  }

  if (!!request.hasReminderTimeStamp()) {
    body["reminderTimeStamp"] = request.reminderTimeStamp();
  }

  if (!!request.hasSourceId()) {
    body["sourceId"] = request.sourceId();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/createTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTodoTaskResponse>();
}

/**
 * @summary 创建代办
 *
 * @param request CreateTodoTaskRequest
 * @return CreateTodoTaskResponse
 */
CreateTodoTaskResponse Client::createTodoTask(const CreateTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateTodoTaskHeaders headers = CreateTodoTaskHeaders();
  return createTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 创建视频会议
 *
 * @param tmpReq CreateVideoConferenceRequest
 * @param tmpHeader CreateVideoConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoConferenceResponse
 */
CreateVideoConferenceResponse Client::createVideoConferenceWithOptions(const CreateVideoConferenceRequest &tmpReq, const CreateVideoConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVideoConferenceShrinkRequest request = CreateVideoConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateVideoConferenceShrinkHeaders headers = CreateVideoConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasInviteUserIds()) {
    request.setInviteUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inviteUserIds(), "InviteUserIds", "json"));
  }

  json body = {};
  if (!!request.hasConfTitle()) {
    body["ConfTitle"] = request.confTitle();
  }

  if (!!request.hasInviteCaller()) {
    body["InviteCaller"] = request.inviteCaller();
  }

  if (!!request.hasInviteUserIdsShrink()) {
    body["InviteUserIds"] = request.inviteUserIdsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateVideoConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/createVideoConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoConferenceResponse>();
}

/**
 * @summary 创建视频会议
 *
 * @param request CreateVideoConferenceRequest
 * @return CreateVideoConferenceResponse
 */
CreateVideoConferenceResponse Client::createVideoConference(const CreateVideoConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateVideoConferenceHeaders headers = CreateVideoConferenceHeaders();
  return createVideoConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建知识库
 *
 * @param tmpReq CreateWorkspaceRequest
 * @param tmpHeader CreateWorkspaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &tmpReq, const CreateWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkspaceShrinkRequest request = CreateWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateWorkspaceShrinkHeaders headers = CreateWorkspaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/createWorkspace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary 创建知识库
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateWorkspaceHeaders headers = CreateWorkspaceHeaders();
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建知识库文档
 *
 * @param tmpReq CreateWorkspaceDocRequest
 * @param tmpHeader CreateWorkspaceDocHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceDocResponse
 */
CreateWorkspaceDocResponse Client::createWorkspaceDocWithOptions(const CreateWorkspaceDocRequest &tmpReq, const CreateWorkspaceDocHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkspaceDocShrinkRequest request = CreateWorkspaceDocShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  CreateWorkspaceDocShrinkHeaders headers = CreateWorkspaceDocShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDocType()) {
    body["DocType"] = request.docType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentNodeId()) {
    body["ParentNodeId"] = request.parentNodeId();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.templateType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspaceDoc"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/createWorkspaceDoc")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceDocResponse>();
}

/**
 * @summary 创建知识库文档
 *
 * @param request CreateWorkspaceDocRequest
 * @return CreateWorkspaceDocResponse
 */
CreateWorkspaceDocResponse Client::createWorkspaceDoc(const CreateWorkspaceDocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateWorkspaceDocHeaders headers = CreateWorkspaceDocHeaders();
  return createWorkspaceDocWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq DeleteAlidingAssistantRequest
 * @param tmpHeader DeleteAlidingAssistantHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlidingAssistantResponse
 */
DeleteAlidingAssistantResponse Client::deleteAlidingAssistantWithOptions(const DeleteAlidingAssistantRequest &tmpReq, const DeleteAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAlidingAssistantShrinkRequest request = DeleteAlidingAssistantShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteAlidingAssistantShrinkHeaders headers = DeleteAlidingAssistantShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAssistantId()) {
    body["AssistantId"] = request.assistantId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAlidingAssistant"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/aiagent/deleteAlidingAssistant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlidingAssistantResponse>();
}

/**
 * @param request DeleteAlidingAssistantRequest
 * @return DeleteAlidingAssistantResponse
 */
DeleteAlidingAssistantResponse Client::deleteAlidingAssistant(const DeleteAlidingAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteAlidingAssistantHeaders headers = DeleteAlidingAssistantHeaders();
  return deleteAlidingAssistantWithOptions(request, headers, runtime);
}

/**
 * @summary 删除指定列
 *
 * @param tmpReq DeleteColumnsRequest
 * @param tmpHeader DeleteColumnsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteColumnsResponse
 */
DeleteColumnsResponse Client::deleteColumnsWithOptions(const DeleteColumnsRequest &tmpReq, const DeleteColumnsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteColumnsShrinkRequest request = DeleteColumnsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteColumnsShrinkHeaders headers = DeleteColumnsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasColumn()) {
    body["Column"] = request.column();
  }

  if (!!request.hasColumnCount()) {
    body["ColumnCount"] = request.columnCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteColumns"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteColumns")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteColumnsResponse>();
}

/**
 * @summary 删除指定列
 *
 * @param request DeleteColumnsRequest
 * @return DeleteColumnsResponse
 */
DeleteColumnsResponse Client::deleteColumns(const DeleteColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteColumnsHeaders headers = DeleteColumnsHeaders();
  return deleteColumnsWithOptions(request, headers, runtime);
}

/**
 * @summary 删除文件或文件夹
 *
 * @param tmpReq DeleteDentryRequest
 * @param tmpHeader DeleteDentryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDentryResponse
 */
DeleteDentryResponse Client::deleteDentryWithOptions(const DeleteDentryRequest &tmpReq, const DeleteDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDentryShrinkRequest request = DeleteDentryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteDentryShrinkHeaders headers = DeleteDentryShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasToRecycleBin()) {
    body["ToRecycleBin"] = request.toRecycleBin();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDentry"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteDentry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDentryResponse>();
}

/**
 * @summary 删除文件或文件夹
 *
 * @param request DeleteDentryRequest
 * @return DeleteDentryResponse
 */
DeleteDentryResponse Client::deleteDentry(const DeleteDentryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDentryHeaders headers = DeleteDentryHeaders();
  return deleteDentryWithOptions(request, headers, runtime);
}

/**
 * @summary 删除钉盘空间
 *
 * @param tmpReq DeleteDriveSpaceRequest
 * @param tmpHeader DeleteDriveSpaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDriveSpaceResponse
 */
DeleteDriveSpaceResponse Client::deleteDriveSpaceWithOptions(const DeleteDriveSpaceRequest &tmpReq, const DeleteDriveSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDriveSpaceShrinkRequest request = DeleteDriveSpaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteDriveSpaceShrinkHeaders headers = DeleteDriveSpaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDriveSpace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteDriveSpace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDriveSpaceResponse>();
}

/**
 * @summary 删除钉盘空间
 *
 * @param request DeleteDriveSpaceRequest
 * @return DeleteDriveSpaceResponse
 */
DeleteDriveSpaceResponse Client::deleteDriveSpace(const DeleteDriveSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDriveSpaceHeaders headers = DeleteDriveSpaceHeaders();
  return deleteDriveSpaceWithOptions(request, headers, runtime);
}

/**
 * @summary 删除日程
 *
 * @param request DeleteEventRequest
 * @param tmpHeader DeleteEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventResponse
 */
DeleteEventResponse Client::deleteEventWithOptions(const DeleteEventRequest &request, const DeleteEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  DeleteEventShrinkHeaders headers = DeleteEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasPushNotification()) {
    body["pushNotification"] = request.pushNotification();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/deleteEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventResponse>();
}

/**
 * @summary 删除日程
 *
 * @param request DeleteEventRequest
 * @return DeleteEventResponse
 */
DeleteEventResponse Client::deleteEvent(const DeleteEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteEventHeaders headers = DeleteEventHeaders();
  return deleteEventWithOptions(request, headers, runtime);
}

/**
 * @summary 删除表单数据
 *
 * @param request DeleteFormDataRequest
 * @param tmpHeader DeleteFormDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFormDataResponse
 */
DeleteFormDataResponse Client::deleteFormDataWithOptions(const DeleteFormDataRequest &request, const DeleteFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  DeleteFormDataShrinkHeaders headers = DeleteFormDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormInstanceId()) {
    body["FormInstanceId"] = request.formInstanceId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteFormData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/deleteFormData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFormDataResponse>();
}

/**
 * @summary 删除表单数据
 *
 * @param request DeleteFormDataRequest
 * @return DeleteFormDataResponse
 */
DeleteFormDataResponse Client::deleteFormData(const DeleteFormDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteFormDataHeaders headers = DeleteFormDataHeaders();
  return deleteFormDataWithOptions(request, headers, runtime);
}

/**
 * @param request DeleteInstanceRequest
 * @param tmpHeader DeleteInstanceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const DeleteInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  DeleteInstanceShrinkHeaders headers = DeleteInstanceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/deleteInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteInstanceHeaders headers = DeleteInstanceHeaders();
  return deleteInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 删除直播
 *
 * @param tmpReq DeleteLiveRequest
 * @param tmpHeader DeleteLiveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveResponse
 */
DeleteLiveResponse Client::deleteLiveWithOptions(const DeleteLiveRequest &tmpReq, const DeleteLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteLiveShrinkRequest request = DeleteLiveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteLiveShrinkHeaders headers = DeleteLiveShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteLive"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/deleteLive")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveResponse>();
}

/**
 * @summary 删除直播
 *
 * @param request DeleteLiveRequest
 * @return DeleteLiveResponse
 */
DeleteLiveResponse Client::deleteLive(const DeleteLiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteLiveHeaders headers = DeleteLiveHeaders();
  return deleteLiveWithOptions(request, headers, runtime);
}

/**
 * @summary 删除会议室
 *
 * @param tmpReq DeleteMeetingRoomRequest
 * @param tmpHeader DeleteMeetingRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMeetingRoomResponse
 */
DeleteMeetingRoomResponse Client::deleteMeetingRoomWithOptions(const DeleteMeetingRoomRequest &tmpReq, const DeleteMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteMeetingRoomShrinkRequest request = DeleteMeetingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteMeetingRoomShrinkHeaders headers = DeleteMeetingRoomShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRoomId()) {
    body["RoomId"] = request.roomId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMeetingRoom"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/deleteMeetingRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMeetingRoomResponse>();
}

/**
 * @summary 删除会议室
 *
 * @param request DeleteMeetingRoomRequest
 * @return DeleteMeetingRoomResponse
 */
DeleteMeetingRoomResponse Client::deleteMeetingRoom(const DeleteMeetingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMeetingRoomHeaders headers = DeleteMeetingRoomHeaders();
  return deleteMeetingRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 删除会议室分组
 *
 * @param tmpReq DeleteMeetingRoomGroupRequest
 * @param tmpHeader DeleteMeetingRoomGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMeetingRoomGroupResponse
 */
DeleteMeetingRoomGroupResponse Client::deleteMeetingRoomGroupWithOptions(const DeleteMeetingRoomGroupRequest &tmpReq, const DeleteMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteMeetingRoomGroupShrinkRequest request = DeleteMeetingRoomGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteMeetingRoomGroupShrinkHeaders headers = DeleteMeetingRoomGroupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMeetingRoomGroup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/deleteMeetingRoomGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMeetingRoomGroupResponse>();
}

/**
 * @summary 删除会议室分组
 *
 * @param request DeleteMeetingRoomGroupRequest
 * @return DeleteMeetingRoomGroupResponse
 */
DeleteMeetingRoomGroupResponse Client::deleteMeetingRoomGroup(const DeleteMeetingRoomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMeetingRoomGroupHeaders headers = DeleteMeetingRoomGroupHeaders();
  return deleteMeetingRoomGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 删除字段
 *
 * @param tmpReq DeleteMultiDimTableFieldRequest
 * @param tmpHeader DeleteMultiDimTableFieldHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultiDimTableFieldResponse
 */
DeleteMultiDimTableFieldResponse Client::deleteMultiDimTableFieldWithOptions(const DeleteMultiDimTableFieldRequest &tmpReq, const DeleteMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteMultiDimTableFieldShrinkRequest request = DeleteMultiDimTableFieldShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteMultiDimTableFieldShrinkHeaders headers = DeleteMultiDimTableFieldShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasFieldIdOrName()) {
    body["FieldIdOrName"] = request.fieldIdOrName();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMultiDimTableField"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/deleteMultiDimTableField")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultiDimTableFieldResponse>();
}

/**
 * @summary 删除字段
 *
 * @param request DeleteMultiDimTableFieldRequest
 * @return DeleteMultiDimTableFieldResponse
 */
DeleteMultiDimTableFieldResponse Client::deleteMultiDimTableField(const DeleteMultiDimTableFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMultiDimTableFieldHeaders headers = DeleteMultiDimTableFieldHeaders();
  return deleteMultiDimTableFieldWithOptions(request, headers, runtime);
}

/**
 * @summary 删除多行记录
 *
 * @param tmpReq DeleteMultiDimTableRecordsRequest
 * @param tmpHeader DeleteMultiDimTableRecordsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultiDimTableRecordsResponse
 */
DeleteMultiDimTableRecordsResponse Client::deleteMultiDimTableRecordsWithOptions(const DeleteMultiDimTableRecordsRequest &tmpReq, const DeleteMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteMultiDimTableRecordsShrinkRequest request = DeleteMultiDimTableRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteMultiDimTableRecordsShrinkHeaders headers = DeleteMultiDimTableRecordsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRecordIds()) {
    request.setRecordIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordIds(), "RecordIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasRecordIdsShrink()) {
    body["RecordIds"] = request.recordIdsShrink();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteMultiDimTableRecords"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/deleteMultiDimTableRecords")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultiDimTableRecordsResponse>();
}

/**
 * @summary 删除多行记录
 *
 * @param request DeleteMultiDimTableRecordsRequest
 * @return DeleteMultiDimTableRecordsResponse
 */
DeleteMultiDimTableRecordsResponse Client::deleteMultiDimTableRecords(const DeleteMultiDimTableRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteMultiDimTableRecordsHeaders headers = DeleteMultiDimTableRecordsHeaders();
  return deleteMultiDimTableRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary 删除文件权限
 *
 * @param tmpReq DeletePermissionRequest
 * @param tmpHeader DeletePermissionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePermissionResponse
 */
DeletePermissionResponse Client::deletePermissionWithOptions(const DeletePermissionRequest &tmpReq, const DeletePermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeletePermissionShrinkRequest request = DeletePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeletePermissionShrinkHeaders headers = DeletePermissionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasRoleId()) {
    body["RoleId"] = request.roleId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeletePermission"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deletePermission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePermissionResponse>();
}

/**
 * @summary 删除文件权限
 *
 * @param request DeletePermissionRequest
 * @return DeletePermissionResponse
 */
DeletePermissionResponse Client::deletePermission(const DeletePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeletePermissionHeaders headers = DeletePermissionHeaders();
  return deletePermissionWithOptions(request, headers, runtime);
}

/**
 * @summary 删除指定行
 *
 * @param tmpReq DeleteRowsRequest
 * @param tmpHeader DeleteRowsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRowsResponse
 */
DeleteRowsResponse Client::deleteRowsWithOptions(const DeleteRowsRequest &tmpReq, const DeleteRowsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRowsShrinkRequest request = DeleteRowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteRowsShrinkHeaders headers = DeleteRowsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRow()) {
    body["Row"] = request.row();
  }

  if (!!request.hasRowCount()) {
    body["RowCount"] = request.rowCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRows"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteRows")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRowsResponse>();
}

/**
 * @summary 删除指定行
 *
 * @param request DeleteRowsRequest
 * @return DeleteRowsResponse
 */
DeleteRowsResponse Client::deleteRows(const DeleteRowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteRowsHeaders headers = DeleteRowsHeaders();
  return deleteRowsWithOptions(request, headers, runtime);
}

/**
 * @summary 删除群成员
 *
 * @param request DeleteScenegroupMemberRequest
 * @param tmpHeader DeleteScenegroupMemberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScenegroupMemberResponse
 */
DeleteScenegroupMemberResponse Client::deleteScenegroupMemberWithOptions(const DeleteScenegroupMemberRequest &request, const DeleteScenegroupMemberHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  DeleteScenegroupMemberShrinkHeaders headers = DeleteScenegroupMemberShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  if (!!request.hasUserIds()) {
    body["UserIds"] = request.userIds();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteScenegroupMember"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/deleteScenegroupMember")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScenegroupMemberResponse>();
}

/**
 * @summary 删除群成员
 *
 * @param request DeleteScenegroupMemberRequest
 * @return DeleteScenegroupMemberResponse
 */
DeleteScenegroupMemberResponse Client::deleteScenegroupMember(const DeleteScenegroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteScenegroupMemberHeaders headers = DeleteScenegroupMemberHeaders();
  return deleteScenegroupMemberWithOptions(request, headers, runtime);
}

/**
 * @summary 删除一个工作表
 *
 * @param tmpReq DeleteSheetRequest
 * @param tmpHeader DeleteSheetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSheetResponse
 */
DeleteSheetResponse Client::deleteSheetWithOptions(const DeleteSheetRequest &tmpReq, const DeleteSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSheetShrinkRequest request = DeleteSheetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteSheetShrinkHeaders headers = DeleteSheetShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSheet"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteSheet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSheetResponse>();
}

/**
 * @summary 删除一个工作表
 *
 * @param request DeleteSheetRequest
 * @return DeleteSheetResponse
 */
DeleteSheetResponse Client::deleteSheet(const DeleteSheetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSheetHeaders headers = DeleteSheetHeaders();
  return deleteSheetWithOptions(request, headers, runtime);
}

/**
 * @summary 删除订阅日历
 *
 * @param request DeleteSubscribedCalendarRequest
 * @param tmpHeader DeleteSubscribedCalendarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubscribedCalendarResponse
 */
DeleteSubscribedCalendarResponse Client::deleteSubscribedCalendarWithOptions(const DeleteSubscribedCalendarRequest &request, const DeleteSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  DeleteSubscribedCalendarShrinkHeaders headers = DeleteSubscribedCalendarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSubscribedCalendar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/deleteSubscribedCalendar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubscribedCalendarResponse>();
}

/**
 * @summary 删除订阅日历
 *
 * @param request DeleteSubscribedCalendarRequest
 * @return DeleteSubscribedCalendarResponse
 */
DeleteSubscribedCalendarResponse Client::deleteSubscribedCalendar(const DeleteSubscribedCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSubscribedCalendarHeaders headers = DeleteSubscribedCalendarHeaders();
  return deleteSubscribedCalendarWithOptions(request, headers, runtime);
}

/**
 * @summary 删除代办
 *
 * @param tmpReq DeleteTodoTaskRequest
 * @param tmpHeader DeleteTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTodoTaskResponse
 */
DeleteTodoTaskResponse Client::deleteTodoTaskWithOptions(const DeleteTodoTaskRequest &tmpReq, const DeleteTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteTodoTaskShrinkRequest request = DeleteTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteTodoTaskShrinkHeaders headers = DeleteTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasOperatorId()) {
    body["operatorId"] = request.operatorId();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/deleteTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTodoTaskResponse>();
}

/**
 * @summary 删除代办
 *
 * @param request DeleteTodoTaskRequest
 * @return DeleteTodoTaskResponse
 */
DeleteTodoTaskResponse Client::deleteTodoTask(const DeleteTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteTodoTaskHeaders headers = DeleteTodoTaskHeaders();
  return deleteTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 删除知识库文档成员
 *
 * @param tmpReq DeleteWorkspaceDocMembersRequest
 * @param tmpHeader DeleteWorkspaceDocMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceDocMembersResponse
 */
DeleteWorkspaceDocMembersResponse Client::deleteWorkspaceDocMembersWithOptions(const DeleteWorkspaceDocMembersRequest &tmpReq, const DeleteWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteWorkspaceDocMembersShrinkRequest request = DeleteWorkspaceDocMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteWorkspaceDocMembersShrinkHeaders headers = DeleteWorkspaceDocMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkspaceDocMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteWorkspaceDocMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceDocMembersResponse>();
}

/**
 * @summary 删除知识库文档成员
 *
 * @param request DeleteWorkspaceDocMembersRequest
 * @return DeleteWorkspaceDocMembersResponse
 */
DeleteWorkspaceDocMembersResponse Client::deleteWorkspaceDocMembers(const DeleteWorkspaceDocMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteWorkspaceDocMembersHeaders headers = DeleteWorkspaceDocMembersHeaders();
  return deleteWorkspaceDocMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 删除知识库成员
 *
 * @param tmpReq DeleteWorkspaceMembersRequest
 * @param tmpHeader DeleteWorkspaceMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceMembersResponse
 */
DeleteWorkspaceMembersResponse Client::deleteWorkspaceMembersWithOptions(const DeleteWorkspaceMembersRequest &tmpReq, const DeleteWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteWorkspaceMembersShrinkRequest request = DeleteWorkspaceMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DeleteWorkspaceMembersShrinkHeaders headers = DeleteWorkspaceMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkspaceMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/deleteWorkspaceMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceMembersResponse>();
}

/**
 * @summary 删除知识库成员
 *
 * @param request DeleteWorkspaceMembersRequest
 * @return DeleteWorkspaceMembersResponse
 */
DeleteWorkspaceMembersResponse Client::deleteWorkspaceMembers(const DeleteWorkspaceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteWorkspaceMembersHeaders headers = DeleteWorkspaceMembersHeaders();
  return deleteWorkspaceMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 删除块元素
 *
 * @param tmpReq DocBlocksDeleteRequest
 * @param tmpHeader DocBlocksDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocBlocksDeleteResponse
 */
DocBlocksDeleteResponse Client::docBlocksDeleteWithOptions(const DocBlocksDeleteRequest &tmpReq, const DocBlocksDeleteHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DocBlocksDeleteShrinkRequest request = DocBlocksDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DocBlocksDeleteShrinkHeaders headers = DocBlocksDeleteShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBlockId()) {
    body["BlockId"] = request.blockId();
  }

  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocBlocksDelete"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/docBlocksDelete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocBlocksDeleteResponse>();
}

/**
 * @summary 删除块元素
 *
 * @param request DocBlocksDeleteRequest
 * @return DocBlocksDeleteResponse
 */
DocBlocksDeleteResponse Client::docBlocksDelete(const DocBlocksDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DocBlocksDeleteHeaders headers = DocBlocksDeleteHeaders();
  return docBlocksDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 更新块元素
 *
 * @param tmpReq DocBlocksModifyRequest
 * @param tmpHeader DocBlocksModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocBlocksModifyResponse
 */
DocBlocksModifyResponse Client::docBlocksModifyWithOptions(const DocBlocksModifyRequest &tmpReq, const DocBlocksModifyHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DocBlocksModifyShrinkRequest request = DocBlocksModifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DocBlocksModifyShrinkHeaders headers = DocBlocksModifyShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasElement()) {
    request.setElementShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.element(), "Element", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBlockId()) {
    body["BlockId"] = request.blockId();
  }

  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasElementShrink()) {
    body["Element"] = request.elementShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocBlocksModify"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/docBlocksModify")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocBlocksModifyResponse>();
}

/**
 * @summary 更新块元素
 *
 * @param request DocBlocksModifyRequest
 * @return DocBlocksModifyResponse
 */
DocBlocksModifyResponse Client::docBlocksModify(const DocBlocksModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DocBlocksModifyHeaders headers = DocBlocksModifyHeaders();
  return docBlocksModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询块元素
 *
 * @param tmpReq DocBlocksQueryRequest
 * @param tmpHeader DocBlocksQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocBlocksQueryResponse
 */
DocBlocksQueryResponse Client::docBlocksQueryWithOptions(const DocBlocksQueryRequest &tmpReq, const DocBlocksQueryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DocBlocksQueryShrinkRequest request = DocBlocksQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DocBlocksQueryShrinkHeaders headers = DocBlocksQueryShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBlockType()) {
    body["BlockType"] = request.blockType();
  }

  if (!!request.hasDocKey()) {
    body["DocKey"] = request.docKey();
  }

  if (!!request.hasEndIndex()) {
    body["EndIndex"] = request.endIndex();
  }

  if (!!request.hasStartIndex()) {
    body["StartIndex"] = request.startIndex();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocBlocksQuery"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/docBlocksQuery")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocBlocksQueryResponse>();
}

/**
 * @summary 查询块元素
 *
 * @param request DocBlocksQueryRequest
 * @return DocBlocksQueryResponse
 */
DocBlocksQueryResponse Client::docBlocksQuery(const DocBlocksQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DocBlocksQueryHeaders headers = DocBlocksQueryHeaders();
  return docBlocksQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 覆写文档
 *
 * @param tmpReq DocUpdateContentRequest
 * @param tmpHeader DocUpdateContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DocUpdateContentResponse
 */
DocUpdateContentResponse Client::docUpdateContentWithOptions(const DocUpdateContentRequest &tmpReq, const DocUpdateContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DocUpdateContentShrinkRequest request = DocUpdateContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  DocUpdateContentShrinkHeaders headers = DocUpdateContentShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.dataType();
  }

  if (!!request.hasDocKey()) {
    body["DocKey"] = request.docKey();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DocUpdateContent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/docUpdateContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DocUpdateContentResponse>();
}

/**
 * @summary 覆写文档
 *
 * @param request DocUpdateContentRequest
 * @return DocUpdateContentResponse
 */
DocUpdateContentResponse Client::docUpdateContent(const DocUpdateContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DocUpdateContentHeaders headers = DocUpdateContentHeaders();
  return docUpdateContentWithOptions(request, headers, runtime);
}

/**
 * @summary 批量执行宜搭审批任务
 *
 * @param request ExecuteBatchTaskRequest
 * @param tmpHeader ExecuteBatchTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteBatchTaskResponse
 */
ExecuteBatchTaskResponse Client::executeBatchTaskWithOptions(const ExecuteBatchTaskRequest &request, const ExecuteBatchTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ExecuteBatchTaskShrinkHeaders headers = ExecuteBatchTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasOutResult()) {
    body["OutResult"] = request.outResult();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTaskInformationList()) {
    body["TaskInformationList"] = request.taskInformationList();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteBatchTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/executeBatchTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteBatchTaskResponse>();
}

/**
 * @summary 批量执行宜搭审批任务
 *
 * @param request ExecuteBatchTaskRequest
 * @return ExecuteBatchTaskResponse
 */
ExecuteBatchTaskResponse Client::executeBatchTask(const ExecuteBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExecuteBatchTaskHeaders headers = ExecuteBatchTaskHeaders();
  return executeBatchTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 执行宜搭的审批任务
 *
 * @param request ExecutePlatformTaskRequest
 * @param tmpHeader ExecutePlatformTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecutePlatformTaskResponse
 */
ExecutePlatformTaskResponse Client::executePlatformTaskWithOptions(const ExecutePlatformTaskRequest &request, const ExecutePlatformTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ExecutePlatformTaskShrinkHeaders headers = ExecutePlatformTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormDataJson()) {
    body["FormDataJson"] = request.formDataJson();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasNoExecuteExpressions()) {
    body["NoExecuteExpressions"] = request.noExecuteExpressions();
  }

  if (!!request.hasOutResult()) {
    body["OutResult"] = request.outResult();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecutePlatformTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/executePlatformTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecutePlatformTaskResponse>();
}

/**
 * @summary 执行宜搭的审批任务
 *
 * @param request ExecutePlatformTaskRequest
 * @return ExecutePlatformTaskResponse
 */
ExecutePlatformTaskResponse Client::executePlatformTask(const ExecutePlatformTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExecutePlatformTaskHeaders headers = ExecutePlatformTaskHeaders();
  return executePlatformTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 同意或拒绝宜搭审批任务(执行审批任务)
 *
 * @param request ExecuteTaskRequest
 * @param tmpHeader ExecuteTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTaskResponse
 */
ExecuteTaskResponse Client::executeTaskWithOptions(const ExecuteTaskRequest &request, const ExecuteTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ExecuteTaskShrinkHeaders headers = ExecuteTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasDigitalSignUrl()) {
    body["DigitalSignUrl"] = request.digitalSignUrl();
  }

  if (!!request.hasFormDataJson()) {
    body["FormDataJson"] = request.formDataJson();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasNoExecuteExpressions()) {
    body["NoExecuteExpressions"] = request.noExecuteExpressions();
  }

  if (!!request.hasOutResult()) {
    body["OutResult"] = request.outResult();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/executeTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTaskResponse>();
}

/**
 * @summary 同意或拒绝宜搭审批任务(执行审批任务)
 *
 * @param request ExecuteTaskRequest
 * @return ExecuteTaskResponse
 */
ExecuteTaskResponse Client::executeTask(const ExecuteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExecuteTaskHeaders headers = ExecuteTaskHeaders();
  return executeTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 群扩容
 *
 * @param tmpReq ExpandGroupCapacityRequest
 * @param tmpHeader ExpandGroupCapacityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpandGroupCapacityResponse
 */
ExpandGroupCapacityResponse Client::expandGroupCapacityWithOptions(const ExpandGroupCapacityRequest &tmpReq, const ExpandGroupCapacityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExpandGroupCapacityShrinkRequest request = ExpandGroupCapacityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ExpandGroupCapacityShrinkHeaders headers = ExpandGroupCapacityShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExpandGroupCapacity"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/im/expandGroupCapacity")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpandGroupCapacityResponse>();
}

/**
 * @summary 群扩容
 *
 * @param request ExpandGroupCapacityRequest
 * @return ExpandGroupCapacityResponse
 */
ExpandGroupCapacityResponse Client::expandGroupCapacity(const ExpandGroupCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExpandGroupCapacityHeaders headers = ExpandGroupCapacityHeaders();
  return expandGroupCapacityWithOptions(request, headers, runtime);
}

/**
 * @summary 完结工单
 *
 * @param tmpReq FinishTicketRequest
 * @param tmpHeader FinishTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FinishTicketResponse
 */
FinishTicketResponse Client::finishTicketWithOptions(const FinishTicketRequest &tmpReq, const FinishTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FinishTicketShrinkRequest request = FinishTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  FinishTicketShrinkHeaders headers = FinishTicketShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasNotify()) {
    request.setNotifyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notify(), "Notify", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasTicketMemo()) {
    request.setTicketMemoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketMemo(), "TicketMemo", "json"));
  }

  json body = {};
  if (!!request.hasNotifyShrink()) {
    body["Notify"] = request.notifyShrink();
  }

  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTicketMemoShrink()) {
    body["TicketMemo"] = request.ticketMemoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FinishTicket"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/finishTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FinishTicketResponse>();
}

/**
 * @summary 完结工单
 *
 * @param request FinishTicketRequest
 * @return FinishTicketResponse
 */
FinishTicketResponse Client::finishTicket(const FinishTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FinishTicketHeaders headers = FinishTicketHeaders();
  return finishTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 获取流程设计的节点信息
 *
 * @param request GetActivityListRequest
 * @param tmpHeader GetActivityListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetActivityListResponse
 */
GetActivityListResponse Client::getActivityListWithOptions(const GetActivityListRequest &request, const GetActivityListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetActivityListShrinkHeaders headers = GetActivityListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessCode()) {
    body["ProcessCode"] = request.processCode();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetActivityList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getActivityList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetActivityListResponse>();
}

/**
 * @summary 获取流程设计的节点信息
 *
 * @param request GetActivityListRequest
 * @return GetActivityListResponse
 */
GetActivityListResponse Client::getActivityList(const GetActivityListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetActivityListHeaders headers = GetActivityListHeaders();
  return getActivityListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取阿里钉ai助理信息
 *
 * @param tmpReq GetAlidingAssistantInfoRequest
 * @param tmpHeader GetAlidingAssistantInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlidingAssistantInfoResponse
 */
GetAlidingAssistantInfoResponse Client::getAlidingAssistantInfoWithOptions(const GetAlidingAssistantInfoRequest &tmpReq, const GetAlidingAssistantInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAlidingAssistantInfoShrinkRequest request = GetAlidingAssistantInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetAlidingAssistantInfoShrinkHeaders headers = GetAlidingAssistantInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAssistantId()) {
    body["AssistantId"] = request.assistantId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAlidingAssistantInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/aiagent/getAlidingAssistantInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlidingAssistantInfoResponse>();
}

/**
 * @summary 获取阿里钉ai助理信息
 *
 * @param request GetAlidingAssistantInfoRequest
 * @return GetAlidingAssistantInfoResponse
 */
GetAlidingAssistantInfoResponse Client::getAlidingAssistantInfo(const GetAlidingAssistantInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAlidingAssistantInfoHeaders headers = GetAlidingAssistantInfoHeaders();
  return getAlidingAssistantInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取所有工作表
 *
 * @param tmpReq GetAllSheetsRequest
 * @param tmpHeader GetAllSheetsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAllSheetsResponse
 */
GetAllSheetsResponse Client::getAllSheetsWithOptions(const GetAllSheetsRequest &tmpReq, const GetAllSheetsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAllSheetsShrinkRequest request = GetAllSheetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetAllSheetsShrinkHeaders headers = GetAllSheetsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAllSheets"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getAllSheets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAllSheetsResponse>();
}

/**
 * @summary 获取所有工作表
 *
 * @param request GetAllSheetsRequest
 * @return GetAllSheetsResponse
 */
GetAllSheetsResponse Client::getAllSheets(const GetAllSheetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAllSheetsHeaders headers = GetAllSheetsHeaders();
  return getAllSheetsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取助理能力
 *
 * @param request GetAssistantCapabilityRequest
 * @param headers GetAssistantCapabilityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssistantCapabilityResponse
 */
GetAssistantCapabilityResponse Client::getAssistantCapabilityWithOptions(const GetAssistantCapabilityRequest &request, const GetAssistantCapabilityHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasProtocol()) {
    body["protocol"] = request.protocol();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  if (!!request.hasTimeout()) {
    body["timeout"] = request.timeout();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAssistantCapability"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/getAssistantCapability")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssistantCapabilityResponse>();
}

/**
 * @summary 获取助理能力
 *
 * @param request GetAssistantCapabilityRequest
 * @return GetAssistantCapabilityResponse
 */
GetAssistantCapabilityResponse Client::getAssistantCapability(const GetAssistantCapabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAssistantCapabilityHeaders headers = GetAssistantCapabilityHeaders();
  return getAssistantCapabilityWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq GetCardTemplateRequest
 * @param tmpHeader GetCardTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCardTemplateResponse
 */
GetCardTemplateResponse Client::getCardTemplateWithOptions(const GetCardTemplateRequest &tmpReq, const GetCardTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCardTemplateShrinkRequest request = GetCardTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetCardTemplateShrinkHeaders headers = GetCardTemplateShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCardTemplate"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/card/getCardTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCardTemplateResponse>();
}

/**
 * @param request GetCardTemplateRequest
 * @return GetCardTemplateResponse
 */
GetCardTemplateResponse Client::getCardTemplate(const GetCardTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCardTemplateHeaders headers = GetCardTemplateHeaders();
  return getCardTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 获取群存储空间信息
 *
 * @param tmpReq GetConversaionSpaceRequest
 * @param tmpHeader GetConversaionSpaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversaionSpaceResponse
 */
GetConversaionSpaceResponse Client::getConversaionSpaceWithOptions(const GetConversaionSpaceRequest &tmpReq, const GetConversaionSpaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetConversaionSpaceShrinkRequest request = GetConversaionSpaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetConversaionSpaceShrinkHeaders headers = GetConversaionSpaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetConversaionSpace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getConversaionSpace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConversaionSpaceResponse>();
}

/**
 * @summary 获取群存储空间信息
 *
 * @param request GetConversaionSpaceRequest
 * @return GetConversaionSpaceResponse
 */
GetConversaionSpaceResponse Client::getConversaionSpace(const GetConversaionSpaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetConversaionSpaceHeaders headers = GetConversaionSpaceHeaders();
  return getConversaionSpaceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取组织内已完成的审批任务
 *
 * @param request GetCorpAccomplishmentTasksRequest
 * @param tmpHeader GetCorpAccomplishmentTasksHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCorpAccomplishmentTasksResponse
 */
GetCorpAccomplishmentTasksResponse Client::getCorpAccomplishmentTasksWithOptions(const GetCorpAccomplishmentTasksRequest &request, const GetCorpAccomplishmentTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetCorpAccomplishmentTasksShrinkHeaders headers = GetCorpAccomplishmentTasksShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppTypes()) {
    body["AppTypes"] = request.appTypes();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCorpAccomplishmentTasks"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getCorpAccomplishmentTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCorpAccomplishmentTasksResponse>();
}

/**
 * @summary 获取组织内已完成的审批任务
 *
 * @param request GetCorpAccomplishmentTasksRequest
 * @return GetCorpAccomplishmentTasksResponse
 */
GetCorpAccomplishmentTasksResponse Client::getCorpAccomplishmentTasks(const GetCorpAccomplishmentTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCorpAccomplishmentTasksHeaders headers = GetCorpAccomplishmentTasksHeaders();
  return getCorpAccomplishmentTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 获取任务列表（组织维度）
 *
 * @param request GetCorpTasksRequest
 * @param tmpHeader GetCorpTasksHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCorpTasksResponse
 */
GetCorpTasksResponse Client::getCorpTasksWithOptions(const GetCorpTasksRequest &request, const GetCorpTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetCorpTasksShrinkHeaders headers = GetCorpTasksShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppTypes()) {
    body["AppTypes"] = request.appTypes();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCorpTasks"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getCorpTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCorpTasksResponse>();
}

/**
 * @summary 获取任务列表（组织维度）
 *
 * @param request GetCorpTasksRequest
 * @return GetCorpTasksResponse
 */
GetCorpTasksResponse Client::getCorpTasks(const GetCorpTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCorpTasksHeaders headers = GetCorpTasksHeaders();
  return getCorpTasksWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq GetDeptNoRequest
 * @param tmpHeader GetDeptNoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeptNoResponse
 */
GetDeptNoResponse Client::getDeptNoWithOptions(const GetDeptNoRequest &tmpReq, const GetDeptNoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeptNoShrinkRequest request = GetDeptNoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetDeptNoShrinkHeaders headers = GetDeptNoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasDeptId()) {
    body["deptId"] = request.deptId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDeptNo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/dept/getDeptNo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeptNoResponse>();
}

/**
 * @param request GetDeptNoRequest
 * @return GetDeptNoResponse
 */
GetDeptNoResponse Client::getDeptNo(const GetDeptNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeptNoHeaders headers = GetDeptNoHeaders();
  return getDeptNoWithOptions(request, headers, runtime);
}

/**
 * @summary 委托权限获取文档内容
 *
 * @param tmpReq GetDocContentRequest
 * @param tmpHeader GetDocContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocContentResponse
 */
GetDocContentResponse Client::getDocContentWithOptions(const GetDocContentRequest &tmpReq, const GetDocContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDocContentShrinkRequest request = GetDocContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetDocContentShrinkHeaders headers = GetDocContentShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasTargetFormat()) {
    body["TargetFormat"] = request.targetFormat();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserToken()) {
    body["userToken"] = request.userToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocContent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getDocContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocContentResponse>();
}

/**
 * @summary 委托权限获取文档内容
 *
 * @param request GetDocContentRequest
 * @return GetDocContentResponse
 */
GetDocContentResponse Client::getDocContent(const GetDocContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDocContentHeaders headers = GetDocContentHeaders();
  return getDocContentWithOptions(request, headers, runtime);
}

/**
 * @summary 委托权限获取文档内容taskId
 *
 * @param tmpReq GetDocContentTakIdRequest
 * @param tmpHeader GetDocContentTakIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDocContentTakIdResponse
 */
GetDocContentTakIdResponse Client::getDocContentTakIdWithOptions(const GetDocContentTakIdRequest &tmpReq, const GetDocContentTakIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDocContentTakIdShrinkRequest request = GetDocContentTakIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetDocContentTakIdShrinkHeaders headers = GetDocContentTakIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasGenerateCp()) {
    body["GenerateCp"] = request.generateCp();
  }

  if (!!request.hasTargetFormat()) {
    body["TargetFormat"] = request.targetFormat();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDocContentTakId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getDocContentTakId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDocContentTakIdResponse>();
}

/**
 * @summary 委托权限获取文档内容taskId
 *
 * @param request GetDocContentTakIdRequest
 * @return GetDocContentTakIdResponse
 */
GetDocContentTakIdResponse Client::getDocContentTakId(const GetDocContentTakIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDocContentTakIdHeaders headers = GetDocContentTakIdHeaders();
  return getDocContentTakIdWithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个日程详情
 *
 * @param request GetEventRequest
 * @param tmpHeader GetEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventResponse
 */
GetEventResponse Client::getEventWithOptions(const GetEventRequest &request, const GetEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetEventShrinkHeaders headers = GetEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json query = {};
  if (!!request.hasMaxAttendees()) {
    query["MaxAttendees"] = request.maxAttendees();
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/getEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEventResponse>();
}

/**
 * @summary 查询单个日程详情
 *
 * @param request GetEventRequest
 * @return GetEventResponse
 */
GetEventResponse Client::getEvent(const GetEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetEventHeaders headers = GetEventHeaders();
  return getEventWithOptions(request, headers, runtime);
}

/**
 * @summary 获取表单内的组件信息
 *
 * @param request GetFieldDefByUuidRequest
 * @param tmpHeader GetFieldDefByUuidHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFieldDefByUuidResponse
 */
GetFieldDefByUuidResponse Client::getFieldDefByUuidWithOptions(const GetFieldDefByUuidRequest &request, const GetFieldDefByUuidHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetFieldDefByUuidShrinkHeaders headers = GetFieldDefByUuidShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFieldDefByUuid"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getFieldDefByUuid")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFieldDefByUuidResponse>();
}

/**
 * @summary 获取表单内的组件信息
 *
 * @param request GetFieldDefByUuidRequest
 * @return GetFieldDefByUuidResponse
 */
GetFieldDefByUuidResponse Client::getFieldDefByUuid(const GetFieldDefByUuidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFieldDefByUuidHeaders headers = GetFieldDefByUuidHeaders();
  return getFieldDefByUuidWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件下载信息
 *
 * @param tmpReq GetFileDownloadInfoRequest
 * @param tmpHeader GetFileDownloadInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileDownloadInfoResponse
 */
GetFileDownloadInfoResponse Client::getFileDownloadInfoWithOptions(const GetFileDownloadInfoRequest &tmpReq, const GetFileDownloadInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetFileDownloadInfoShrinkRequest request = GetFileDownloadInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetFileDownloadInfoShrinkHeaders headers = GetFileDownloadInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFileDownloadInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getFileDownloadInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileDownloadInfoResponse>();
}

/**
 * @summary 获取文件下载信息
 *
 * @param request GetFileDownloadInfoRequest
 * @return GetFileDownloadInfoResponse
 */
GetFileDownloadInfoResponse Client::getFileDownloadInfo(const GetFileDownloadInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFileDownloadInfoHeaders headers = GetFileDownloadInfoHeaders();
  return getFileDownloadInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件上传信息
 *
 * @param tmpReq GetFileUploadInfoRequest
 * @param tmpHeader GetFileUploadInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileUploadInfoResponse
 */
GetFileUploadInfoResponse Client::getFileUploadInfoWithOptions(const GetFileUploadInfoRequest &tmpReq, const GetFileUploadInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetFileUploadInfoShrinkRequest request = GetFileUploadInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetFileUploadInfoShrinkHeaders headers = GetFileUploadInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasParentDentryUuid()) {
    body["ParentDentryUuid"] = request.parentDentryUuid();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFileUploadInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getFileUploadInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileUploadInfoResponse>();
}

/**
 * @summary 获取文件上传信息
 *
 * @param request GetFileUploadInfoRequest
 * @return GetFileUploadInfoResponse
 */
GetFileUploadInfoResponse Client::getFileUploadInfo(const GetFileUploadInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFileUploadInfoHeaders headers = GetFileUploadInfoHeaders();
  return getFileUploadInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取表单组件定义列表
 *
 * @param request GetFormComponentDefinitionListRequest
 * @param tmpHeader GetFormComponentDefinitionListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFormComponentDefinitionListResponse
 */
GetFormComponentDefinitionListResponse Client::getFormComponentDefinitionListWithOptions(const GetFormComponentDefinitionListRequest &request, const GetFormComponentDefinitionListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetFormComponentDefinitionListShrinkHeaders headers = GetFormComponentDefinitionListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFormComponentDefinitionList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getFormComponentDefinitionList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFormComponentDefinitionListResponse>();
}

/**
 * @summary 获取表单组件定义列表
 *
 * @param request GetFormComponentDefinitionListRequest
 * @return GetFormComponentDefinitionListResponse
 */
GetFormComponentDefinitionListResponse Client::getFormComponentDefinitionList(const GetFormComponentDefinitionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFormComponentDefinitionListHeaders headers = GetFormComponentDefinitionListHeaders();
  return getFormComponentDefinitionListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询表单数据
 *
 * @param request GetFormDataByIDRequest
 * @param tmpHeader GetFormDataByIDHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFormDataByIDResponse
 */
GetFormDataByIDResponse Client::getFormDataByIDWithOptions(const GetFormDataByIDRequest &request, const GetFormDataByIDHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetFormDataByIDShrinkHeaders headers = GetFormDataByIDShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFormDataByID"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getFormDataByID")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFormDataByIDResponse>();
}

/**
 * @summary 查询表单数据
 *
 * @param request GetFormDataByIDRequest
 * @return GetFormDataByIDResponse
 */
GetFormDataByIDResponse Client::getFormDataByID(const GetFormDataByIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFormDataByIDHeaders headers = GetFormDataByIDHeaders();
  return getFormDataByIDWithOptions(request, headers, runtime);
}

/**
 * @summary 获取指定应用下的表单列表
 *
 * @param request GetFormListInAppRequest
 * @param tmpHeader GetFormListInAppHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFormListInAppResponse
 */
GetFormListInAppResponse Client::getFormListInAppWithOptions(const GetFormListInAppRequest &request, const GetFormListInAppHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetFormListInAppShrinkHeaders headers = GetFormListInAppShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormTypes()) {
    body["FormTypes"] = request.formTypes();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetFormListInApp"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getFormListInApp")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFormListInAppResponse>();
}

/**
 * @summary 获取指定应用下的表单列表
 *
 * @param request GetFormListInAppRequest
 * @return GetFormListInAppResponse
 */
GetFormListInAppResponse Client::getFormListInApp(const GetFormListInAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetFormListInAppHeaders headers = GetFormListInAppHeaders();
  return getFormListInAppWithOptions(request, headers, runtime);
}

/**
 * @summary 查询群内直播信息(最早支持2024年01月数据)
 *
 * @param tmpReq GetGroupLiveListRequest
 * @param tmpHeader GetGroupLiveListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGroupLiveListResponse
 */
GetGroupLiveListResponse Client::getGroupLiveListWithOptions(const GetGroupLiveListRequest &tmpReq, const GetGroupLiveListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetGroupLiveListShrinkRequest request = GetGroupLiveListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetGroupLiveListShrinkHeaders headers = GetGroupLiveListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetGroupLiveList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/getGroupLiveList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGroupLiveListResponse>();
}

/**
 * @summary 查询群内直播信息(最早支持2024年01月数据)
 *
 * @param request GetGroupLiveListRequest
 * @return GetGroupLiveListResponse
 */
GetGroupLiveListResponse Client::getGroupLiveList(const GetGroupLiveListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetGroupLiveListHeaders headers = GetGroupLiveListHeaders();
  return getGroupLiveListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业内部群成员
 *
 * @param request GetInnerGroupMembersRequest
 * @param tmpHeader GetInnerGroupMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInnerGroupMembersResponse
 */
GetInnerGroupMembersResponse Client::getInnerGroupMembersWithOptions(const GetInnerGroupMembersRequest &request, const GetInnerGroupMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetInnerGroupMembersShrinkHeaders headers = GetInnerGroupMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOpenConversationId()) {
    body["OpenConversationId"] = request.openConversationId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInnerGroupMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/getInnerGroupMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInnerGroupMembersResponse>();
}

/**
 * @summary 查询企业内部群成员
 *
 * @param request GetInnerGroupMembersRequest
 * @return GetInnerGroupMembersResponse
 */
GetInnerGroupMembersResponse Client::getInnerGroupMembers(const GetInnerGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetInnerGroupMembersHeaders headers = GetInnerGroupMembersHeaders();
  return getInnerGroupMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 根据流程实例ID获取流程实例
 *
 * @param request GetInstanceByIdRequest
 * @param tmpHeader GetInstanceByIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceByIdResponse
 */
GetInstanceByIdResponse Client::getInstanceByIdWithOptions(const GetInstanceByIdRequest &request, const GetInstanceByIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetInstanceByIdShrinkHeaders headers = GetInstanceByIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstanceById"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getInstanceById")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceByIdResponse>();
}

/**
 * @summary 根据流程实例ID获取流程实例
 *
 * @param request GetInstanceByIdRequest
 * @return GetInstanceByIdResponse
 */
GetInstanceByIdResponse Client::getInstanceById(const GetInstanceByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetInstanceByIdHeaders headers = GetInstanceByIdHeaders();
  return getInstanceByIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取实例ID列表
 *
 * @param request GetInstanceIdListRequest
 * @param tmpHeader GetInstanceIdListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceIdListResponse
 */
GetInstanceIdListResponse Client::getInstanceIdListWithOptions(const GetInstanceIdListRequest &request, const GetInstanceIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetInstanceIdListShrinkHeaders headers = GetInstanceIdListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasApprovedResult()) {
    body["ApprovedResult"] = request.approvedResult();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasInstanceStatus()) {
    body["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchFieldJson()) {
    body["SearchFieldJson"] = request.searchFieldJson();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstanceIdList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getInstanceIdList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceIdListResponse>();
}

/**
 * @summary 获取实例ID列表
 *
 * @param request GetInstanceIdListRequest
 * @return GetInstanceIdListResponse
 */
GetInstanceIdListResponse Client::getInstanceIdList(const GetInstanceIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetInstanceIdListHeaders headers = GetInstanceIdListHeaders();
  return getInstanceIdListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取流程实例
 *
 * @param request GetInstancesRequest
 * @param tmpHeader GetInstancesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstancesResponse
 */
GetInstancesResponse Client::getInstancesWithOptions(const GetInstancesRequest &request, const GetInstancesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetInstancesShrinkHeaders headers = GetInstancesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasApprovedResult()) {
    body["ApprovedResult"] = request.approvedResult();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasInstanceStatus()) {
    body["InstanceStatus"] = request.instanceStatus();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOrderConfigJson()) {
    body["OrderConfigJson"] = request.orderConfigJson();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchFieldJson()) {
    body["SearchFieldJson"] = request.searchFieldJson();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstances"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getInstances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstancesResponse>();
}

/**
 * @summary 获取流程实例
 *
 * @param request GetInstancesRequest
 * @return GetInstancesResponse
 */
GetInstancesResponse Client::getInstances(const GetInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetInstancesHeaders headers = GetInstancesHeaders();
  return getInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary 根据实例 ID 列表批量获取流程实例详情(批量获取流程实例列表)
 *
 * @param request GetInstancesByIdListRequest
 * @param tmpHeader GetInstancesByIdListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstancesByIdListResponse
 */
GetInstancesByIdListResponse Client::getInstancesByIdListWithOptions(const GetInstancesByIdListRequest &request, const GetInstancesByIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetInstancesByIdListShrinkHeaders headers = GetInstancesByIdListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessInstanceIds()) {
    body["ProcessInstanceIds"] = request.processInstanceIds();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstancesByIdList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getInstancesByIdList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstancesByIdListResponse>();
}

/**
 * @summary 根据实例 ID 列表批量获取流程实例详情(批量获取流程实例列表)
 *
 * @param request GetInstancesByIdListRequest
 * @return GetInstancesByIdListResponse
 */
GetInstancesByIdListResponse Client::getInstancesByIdList(const GetInstancesByIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetInstancesByIdListHeaders headers = GetInstancesByIdListHeaders();
  return getInstancesByIdListWithOptions(request, headers, runtime);
}

/**
 * @summary 获取直播的可下载回放地址
 *
 * @param tmpReq GetLiveReplayUrlRequest
 * @param tmpHeader GetLiveReplayUrlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveReplayUrlResponse
 */
GetLiveReplayUrlResponse Client::getLiveReplayUrlWithOptions(const GetLiveReplayUrlRequest &tmpReq, const GetLiveReplayUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLiveReplayUrlShrinkRequest request = GetLiveReplayUrlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetLiveReplayUrlShrinkHeaders headers = GetLiveReplayUrlShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetLiveReplayUrl"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/getLiveReplayUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveReplayUrlResponse>();
}

/**
 * @summary 获取直播的可下载回放地址
 *
 * @param request GetLiveReplayUrlRequest
 * @return GetLiveReplayUrlResponse
 */
GetLiveReplayUrlResponse Client::getLiveReplayUrl(const GetLiveReplayUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetLiveReplayUrlHeaders headers = GetLiveReplayUrlHeaders();
  return getLiveReplayUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 获取组织内某人提交的任务
 *
 * @param request GetMeCorpSubmissionRequest
 * @param tmpHeader GetMeCorpSubmissionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMeCorpSubmissionResponse
 */
GetMeCorpSubmissionResponse Client::getMeCorpSubmissionWithOptions(const GetMeCorpSubmissionRequest &request, const GetMeCorpSubmissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetMeCorpSubmissionShrinkHeaders headers = GetMeCorpSubmissionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppTypes()) {
    body["AppTypes"] = request.appTypes();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMeCorpSubmission"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getMeCorpSubmission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMeCorpSubmissionResponse>();
}

/**
 * @summary 获取组织内某人提交的任务
 *
 * @param request GetMeCorpSubmissionRequest
 * @return GetMeCorpSubmissionResponse
 */
GetMeCorpSubmissionResponse Client::getMeCorpSubmission(const GetMeCorpSubmissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMeCorpSubmissionHeaders headers = GetMeCorpSubmissionHeaders();
  return getMeCorpSubmissionWithOptions(request, headers, runtime);
}

/**
 * @summary 获取会议室忙闲信息
 *
 * @param tmpReq GetMeetingRoomsScheduleRequest
 * @param tmpHeader GetMeetingRoomsScheduleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMeetingRoomsScheduleResponse
 */
GetMeetingRoomsScheduleResponse Client::getMeetingRoomsScheduleWithOptions(const GetMeetingRoomsScheduleRequest &tmpReq, const GetMeetingRoomsScheduleHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMeetingRoomsScheduleShrinkRequest request = GetMeetingRoomsScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMeetingRoomsScheduleShrinkHeaders headers = GetMeetingRoomsScheduleShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRoomIds()) {
    request.setRoomIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomIds(), "RoomIds", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasRoomIdsShrink()) {
    body["RoomIds"] = request.roomIdsShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMeetingRoomsSchedule"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/getMeetingRoomsSchedule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMeetingRoomsScheduleResponse>();
}

/**
 * @summary 获取会议室忙闲信息
 *
 * @param request GetMeetingRoomsScheduleRequest
 * @return GetMeetingRoomsScheduleResponse
 */
GetMeetingRoomsScheduleResponse Client::getMeetingRoomsSchedule(const GetMeetingRoomsScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMeetingRoomsScheduleHeaders headers = GetMeetingRoomsScheduleHeaders();
  return getMeetingRoomsScheduleWithOptions(request, headers, runtime);
}

/**
 * @summary 获取我的文档知识库信息
 *
 * @param tmpReq GetMineWorkspaceRequest
 * @param tmpHeader GetMineWorkspaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMineWorkspaceResponse
 */
GetMineWorkspaceResponse Client::getMineWorkspaceWithOptions(const GetMineWorkspaceRequest &tmpReq, const GetMineWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMineWorkspaceShrinkRequest request = GetMineWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMineWorkspaceShrinkHeaders headers = GetMineWorkspaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.request(), "Request", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.requestShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMineWorkspace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getMineWorkspace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMineWorkspaceResponse>();
}

/**
 * @summary 获取我的文档知识库信息
 *
 * @param request GetMineWorkspaceRequest
 * @return GetMineWorkspaceResponse
 */
GetMineWorkspaceResponse Client::getMineWorkspace(const GetMineWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMineWorkspaceHeaders headers = GetMineWorkspaceHeaders();
  return getMineWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取所有字段
 *
 * @param tmpReq GetMultiDimTableAllFieldsRequest
 * @param tmpHeader GetMultiDimTableAllFieldsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiDimTableAllFieldsResponse
 */
GetMultiDimTableAllFieldsResponse Client::getMultiDimTableAllFieldsWithOptions(const GetMultiDimTableAllFieldsRequest &tmpReq, const GetMultiDimTableAllFieldsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMultiDimTableAllFieldsShrinkRequest request = GetMultiDimTableAllFieldsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMultiDimTableAllFieldsShrinkHeaders headers = GetMultiDimTableAllFieldsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMultiDimTableAllFields"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/getMultiDimTableAllFields")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiDimTableAllFieldsResponse>();
}

/**
 * @summary 获取所有字段
 *
 * @param request GetMultiDimTableAllFieldsRequest
 * @return GetMultiDimTableAllFieldsResponse
 */
GetMultiDimTableAllFieldsResponse Client::getMultiDimTableAllFields(const GetMultiDimTableAllFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMultiDimTableAllFieldsHeaders headers = GetMultiDimTableAllFieldsHeaders();
  return getMultiDimTableAllFieldsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取所有数据表
 *
 * @param tmpReq GetMultiDimTableAllSheetsRequest
 * @param tmpHeader GetMultiDimTableAllSheetsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiDimTableAllSheetsResponse
 */
GetMultiDimTableAllSheetsResponse Client::getMultiDimTableAllSheetsWithOptions(const GetMultiDimTableAllSheetsRequest &tmpReq, const GetMultiDimTableAllSheetsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMultiDimTableAllSheetsShrinkRequest request = GetMultiDimTableAllSheetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMultiDimTableAllSheetsShrinkHeaders headers = GetMultiDimTableAllSheetsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMultiDimTableAllSheets"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/getMultiDimTableAllSheets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiDimTableAllSheetsResponse>();
}

/**
 * @summary 获取所有数据表
 *
 * @param request GetMultiDimTableAllSheetsRequest
 * @return GetMultiDimTableAllSheetsResponse
 */
GetMultiDimTableAllSheetsResponse Client::getMultiDimTableAllSheets(const GetMultiDimTableAllSheetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMultiDimTableAllSheetsHeaders headers = GetMultiDimTableAllSheetsHeaders();
  return getMultiDimTableAllSheetsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取记录
 *
 * @param tmpReq GetMultiDimTableRecordRequest
 * @param tmpHeader GetMultiDimTableRecordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiDimTableRecordResponse
 */
GetMultiDimTableRecordResponse Client::getMultiDimTableRecordWithOptions(const GetMultiDimTableRecordRequest &tmpReq, const GetMultiDimTableRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMultiDimTableRecordShrinkRequest request = GetMultiDimTableRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMultiDimTableRecordShrinkHeaders headers = GetMultiDimTableRecordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasRecordId()) {
    body["RecordId"] = request.recordId();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMultiDimTableRecord"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/getMultiDimTableRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiDimTableRecordResponse>();
}

/**
 * @summary 获取记录
 *
 * @param request GetMultiDimTableRecordRequest
 * @return GetMultiDimTableRecordResponse
 */
GetMultiDimTableRecordResponse Client::getMultiDimTableRecord(const GetMultiDimTableRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMultiDimTableRecordHeaders headers = GetMultiDimTableRecordHeaders();
  return getMultiDimTableRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 获取数据表
 *
 * @param tmpReq GetMultiDimTableSheetRequest
 * @param tmpHeader GetMultiDimTableSheetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultiDimTableSheetResponse
 */
GetMultiDimTableSheetResponse Client::getMultiDimTableSheetWithOptions(const GetMultiDimTableSheetRequest &tmpReq, const GetMultiDimTableSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMultiDimTableSheetShrinkRequest request = GetMultiDimTableSheetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMultiDimTableSheetShrinkHeaders headers = GetMultiDimTableSheetShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMultiDimTableSheet"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/getMultiDimTableSheet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultiDimTableSheetResponse>();
}

/**
 * @summary 获取数据表
 *
 * @param request GetMultiDimTableSheetRequest
 * @return GetMultiDimTableSheetResponse
 */
GetMultiDimTableSheetResponse Client::getMultiDimTableSheet(const GetMultiDimTableSheetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMultiDimTableSheetHeaders headers = GetMultiDimTableSheetHeaders();
  return getMultiDimTableSheetWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件分片上传信息
 *
 * @param tmpReq GetMultipartFileUploadInfosRequest
 * @param tmpHeader GetMultipartFileUploadInfosHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMultipartFileUploadInfosResponse
 */
GetMultipartFileUploadInfosResponse Client::getMultipartFileUploadInfosWithOptions(const GetMultipartFileUploadInfosRequest &tmpReq, const GetMultipartFileUploadInfosHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMultipartFileUploadInfosShrinkRequest request = GetMultipartFileUploadInfosShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetMultipartFileUploadInfosShrinkHeaders headers = GetMultipartFileUploadInfosShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasPartNumbers()) {
    request.setPartNumbersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partNumbers(), "PartNumbers", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasPartNumbersShrink()) {
    body["PartNumbers"] = request.partNumbersShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUploadKey()) {
    body["UploadKey"] = request.uploadKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMultipartFileUploadInfos"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/GetMultipartFileUploadInfos")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMultipartFileUploadInfosResponse>();
}

/**
 * @summary 获取文件分片上传信息
 *
 * @param request GetMultipartFileUploadInfosRequest
 * @return GetMultipartFileUploadInfosResponse
 */
GetMultipartFileUploadInfosResponse Client::getMultipartFileUploadInfos(const GetMultipartFileUploadInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetMultipartFileUploadInfosHeaders headers = GetMultipartFileUploadInfosHeaders();
  return getMultipartFileUploadInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询最近活跃的企业内部群列表
 *
 * @param tmpReq GetNewestInnerGroupsRequest
 * @param tmpHeader GetNewestInnerGroupsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNewestInnerGroupsResponse
 */
GetNewestInnerGroupsResponse Client::getNewestInnerGroupsWithOptions(const GetNewestInnerGroupsRequest &tmpReq, const GetNewestInnerGroupsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNewestInnerGroupsShrinkRequest request = GetNewestInnerGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetNewestInnerGroupsShrinkHeaders headers = GetNewestInnerGroupsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.request(), "Request", "json"));
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.requestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNewestInnerGroups"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/getNewestInnerGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNewestInnerGroupsResponse>();
}

/**
 * @summary 查询最近活跃的企业内部群列表
 *
 * @param request GetNewestInnerGroupsRequest
 * @return GetNewestInnerGroupsResponse
 */
GetNewestInnerGroupsResponse Client::getNewestInnerGroups(const GetNewestInnerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetNewestInnerGroupsHeaders headers = GetNewestInnerGroupsHeaders();
  return getNewestInnerGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取节点
 *
 * @param tmpReq GetNodeRequest
 * @param tmpHeader GetNodeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNodeWithOptions(const GetNodeRequest &tmpReq, const GetNodeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNodeShrinkRequest request = GetNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetNodeShrinkHeaders headers = GetNodeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWithPermissionRole()) {
    body["WithPermissionRole"] = request.withPermissionRole();
  }

  if (!!request.hasWithStatisticalInfo()) {
    body["WithStatisticalInfo"] = request.withStatisticalInfo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNode"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getNode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeResponse>();
}

/**
 * @summary 获取节点
 *
 * @param request GetNodeRequest
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNode(const GetNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetNodeHeaders headers = GetNodeHeaders();
  return getNodeWithOptions(request, headers, runtime);
}

/**
 * @summary 通过链接获取节点
 *
 * @param tmpReq GetNodeByUrlRequest
 * @param tmpHeader GetNodeByUrlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeByUrlResponse
 */
GetNodeByUrlResponse Client::getNodeByUrlWithOptions(const GetNodeByUrlRequest &tmpReq, const GetNodeByUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNodeByUrlShrinkRequest request = GetNodeByUrlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetNodeByUrlShrinkHeaders headers = GetNodeByUrlShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.url();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNodeByUrl"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getNodeByUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeByUrlResponse>();
}

/**
 * @summary 通过链接获取节点
 *
 * @param request GetNodeByUrlRequest
 * @return GetNodeByUrlResponse
 */
GetNodeByUrlResponse Client::getNodeByUrl(const GetNodeByUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetNodeByUrlHeaders headers = GetNodeByUrlHeaders();
  return getNodeByUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 批量获取节点
 *
 * @param tmpReq GetNodesRequest
 * @param tmpHeader GetNodesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodesResponse
 */
GetNodesResponse Client::getNodesWithOptions(const GetNodesRequest &tmpReq, const GetNodesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNodesShrinkRequest request = GetNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetNodesShrinkHeaders headers = GetNodesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasNodeIds()) {
    request.setNodeIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeIds(), "NodeIds", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasNodeIdsShrink()) {
    body["NodeIds"] = request.nodeIdsShrink();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNodes"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getNodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodesResponse>();
}

/**
 * @summary 批量获取节点
 *
 * @param request GetNodesRequest
 * @return GetNodesResponse
 */
GetNodesResponse Client::getNodes(const GetNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetNodesHeaders headers = GetNodesHeaders();
  return getNodesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取发送给用户的通知
 *
 * @param request GetNotifyMeRequest
 * @param tmpHeader GetNotifyMeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotifyMeResponse
 */
GetNotifyMeResponse Client::getNotifyMeWithOptions(const GetNotifyMeRequest &request, const GetNotifyMeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetNotifyMeShrinkHeaders headers = GetNotifyMeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppTypes()) {
    body["AppTypes"] = request.appTypes();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasInstanceCreateFromTimeGMT()) {
    body["InstanceCreateFromTimeGMT"] = request.instanceCreateFromTimeGMT();
  }

  if (!!request.hasInstanceCreateToTimeGMT()) {
    body["InstanceCreateToTimeGMT"] = request.instanceCreateToTimeGMT();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNotifyMe"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getNotifyMe")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotifyMeResponse>();
}

/**
 * @summary 获取发送给用户的通知
 *
 * @param request GetNotifyMeRequest
 * @return GetNotifyMeResponse
 */
GetNotifyMeResponse Client::getNotifyMe(const GetNotifyMeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetNotifyMeHeaders headers = GetNotifyMeHeaders();
  return getNotifyMeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取宜搭附件临时免登地址
 *
 * @param request GetOpenUrlRequest
 * @param tmpHeader GetOpenUrlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpenUrlResponse
 */
GetOpenUrlResponse Client::getOpenUrlWithOptions(const GetOpenUrlRequest &request, const GetOpenUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetOpenUrlShrinkHeaders headers = GetOpenUrlShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFileUrl()) {
    body["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOpenUrl"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getOpenUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenUrlResponse>();
}

/**
 * @summary 获取宜搭附件临时免登地址
 *
 * @param request GetOpenUrlRequest
 * @return GetOpenUrlResponse
 */
GetOpenUrlResponse Client::getOpenUrl(const GetOpenUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOpenUrlHeaders headers = GetOpenUrlHeaders();
  return getOpenUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 获取审批记录
 *
 * @param request GetOperationRecordsRequest
 * @param tmpHeader GetOperationRecordsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationRecordsResponse
 */
GetOperationRecordsResponse Client::getOperationRecordsWithOptions(const GetOperationRecordsRequest &request, const GetOperationRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetOperationRecordsShrinkHeaders headers = GetOperationRecordsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOperationRecords"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getOperationRecords")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationRecordsResponse>();
}

/**
 * @summary 获取审批记录
 *
 * @param request GetOperationRecordsRequest
 * @return GetOperationRecordsResponse
 */
GetOperationRecordsResponse Client::getOperationRecords(const GetOperationRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOperationRecordsHeaders headers = GetOperationRecordsHeaders();
  return getOperationRecordsWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq GetOrgLiveListRequest
 * @param tmpHeader GetOrgLiveListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrgLiveListResponse
 */
GetOrgLiveListResponse Client::getOrgLiveListWithOptions(const GetOrgLiveListRequest &tmpReq, const GetOrgLiveListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOrgLiveListShrinkRequest request = GetOrgLiveListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetOrgLiveListShrinkHeaders headers = GetOrgLiveListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOrgLiveList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/getOrgLiveList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrgLiveListResponse>();
}

/**
 * @param request GetOrgLiveListRequest
 * @return GetOrgLiveListResponse
 */
GetOrgLiveListResponse Client::getOrgLiveList(const GetOrgLiveListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOrgLiveListHeaders headers = GetOrgLiveListHeaders();
  return getOrgLiveListWithOptions(request, headers, runtime);
}

/**
 * @summary 委托权限获取组织或者互联网公开文档内容taskId
 *
 * @param tmpReq GetOrgOrWebOpenDocContentTaskIdRequest
 * @param tmpHeader GetOrgOrWebOpenDocContentTaskIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOrgOrWebOpenDocContentTaskIdResponse
 */
GetOrgOrWebOpenDocContentTaskIdResponse Client::getOrgOrWebOpenDocContentTaskIdWithOptions(const GetOrgOrWebOpenDocContentTaskIdRequest &tmpReq, const GetOrgOrWebOpenDocContentTaskIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOrgOrWebOpenDocContentTaskIdShrinkRequest request = GetOrgOrWebOpenDocContentTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetOrgOrWebOpenDocContentTaskIdShrinkHeaders headers = GetOrgOrWebOpenDocContentTaskIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasGenerateCp()) {
    body["GenerateCp"] = request.generateCp();
  }

  if (!!request.hasScopeType()) {
    body["ScopeType"] = request.scopeType();
  }

  if (!!request.hasTargetFormat()) {
    body["TargetFormat"] = request.targetFormat();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOrgOrWebOpenDocContentTaskId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getOrgOrWebOpenDocContentTaskId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOrgOrWebOpenDocContentTaskIdResponse>();
}

/**
 * @summary 委托权限获取组织或者互联网公开文档内容taskId
 *
 * @param request GetOrgOrWebOpenDocContentTaskIdRequest
 * @return GetOrgOrWebOpenDocContentTaskIdResponse
 */
GetOrgOrWebOpenDocContentTaskIdResponse Client::getOrgOrWebOpenDocContentTaskId(const GetOrgOrWebOpenDocContentTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetOrgOrWebOpenDocContentTaskIdHeaders headers = GetOrgOrWebOpenDocContentTaskIdHeaders();
  return getOrgOrWebOpenDocContentTaskIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取流程定义
 *
 * @param request GetProcessDefinitionRequest
 * @param tmpHeader GetProcessDefinitionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProcessDefinitionResponse
 */
GetProcessDefinitionResponse Client::getProcessDefinitionWithOptions(const GetProcessDefinitionRequest &request, const GetProcessDefinitionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetProcessDefinitionShrinkHeaders headers = GetProcessDefinitionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasNameSpace()) {
    body["NameSpace"] = request.nameSpace();
  }

  if (!!request.hasOrderNumber()) {
    body["OrderNumber"] = request.orderNumber();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasSystemType()) {
    body["SystemType"] = request.systemType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetProcessDefinition"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getProcessDefinition")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProcessDefinitionResponse>();
}

/**
 * @summary 获取流程定义
 *
 * @param request GetProcessDefinitionRequest
 * @return GetProcessDefinitionResponse
 */
GetProcessDefinitionResponse Client::getProcessDefinition(const GetProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetProcessDefinitionHeaders headers = GetProcessDefinitionHeaders();
  return getProcessDefinitionWithOptions(request, headers, runtime);
}

/**
 * @summary 获取单元格区域
 *
 * @param tmpReq GetRangeRequest
 * @param tmpHeader GetRangeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRangeResponse
 */
GetRangeResponse Client::getRangeWithOptions(const GetRangeRequest &tmpReq, const GetRangeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRangeShrinkRequest request = GetRangeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetRangeShrinkHeaders headers = GetRangeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRangeAddress()) {
    body["RangeAddress"] = request.rangeAddress();
  }

  if (!!request.hasSelect()) {
    body["Select"] = request.select();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRange"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getRange")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRangeResponse>();
}

/**
 * @summary 获取单元格区域
 *
 * @param request GetRangeRequest
 * @return GetRangeResponse
 */
GetRangeResponse Client::getRange(const GetRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetRangeHeaders headers = GetRangeHeaders();
  return getRangeWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用户有权限的知识库列表(旧)
 *
 * @param tmpReq GetRelatedWorkspacesRequest
 * @param tmpHeader GetRelatedWorkspacesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRelatedWorkspacesResponse
 */
GetRelatedWorkspacesResponse Client::getRelatedWorkspacesWithOptions(const GetRelatedWorkspacesRequest &tmpReq, const GetRelatedWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRelatedWorkspacesShrinkRequest request = GetRelatedWorkspacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetRelatedWorkspacesShrinkHeaders headers = GetRelatedWorkspacesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasIncludeRecent()) {
    body["IncludeRecent"] = request.includeRecent();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRelatedWorkspaces"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getRelatedWorkspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRelatedWorkspacesResponse>();
}

/**
 * @summary 查询用户有权限的知识库列表(旧)
 *
 * @param request GetRelatedWorkspacesRequest
 * @return GetRelatedWorkspacesResponse
 */
GetRelatedWorkspacesResponse Client::getRelatedWorkspaces(const GetRelatedWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetRelatedWorkspacesHeaders headers = GetRelatedWorkspacesHeaders();
  return getRelatedWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取模板详情
 *
 * @param tmpReq GetReportTemplateByNameRequest
 * @param tmpHeader GetReportTemplateByNameHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportTemplateByNameResponse
 */
GetReportTemplateByNameResponse Client::getReportTemplateByNameWithOptions(const GetReportTemplateByNameRequest &tmpReq, const GetReportTemplateByNameHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetReportTemplateByNameShrinkRequest request = GetReportTemplateByNameShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetReportTemplateByNameShrinkHeaders headers = GetReportTemplateByNameShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetReportTemplateByName"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/getReportTemplateByName")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportTemplateByNameResponse>();
}

/**
 * @summary 获取模板详情
 *
 * @param request GetReportTemplateByNameRequest
 * @return GetReportTemplateByNameResponse
 */
GetReportTemplateByNameResponse Client::getReportTemplateByName(const GetReportTemplateByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetReportTemplateByNameHeaders headers = GetReportTemplateByNameHeaders();
  return getReportTemplateByNameWithOptions(request, headers, runtime);
}

/**
 * @summary 获取员工有多少数量的日志（一个月内）是未读状态
 *
 * @param tmpReq GetReportUnReadCountRequest
 * @param tmpHeader GetReportUnReadCountHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetReportUnReadCountResponse
 */
GetReportUnReadCountResponse Client::getReportUnReadCountWithOptions(const GetReportUnReadCountRequest &tmpReq, const GetReportUnReadCountHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetReportUnReadCountShrinkRequest request = GetReportUnReadCountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetReportUnReadCountShrinkHeaders headers = GetReportUnReadCountShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.request(), "Request", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.requestShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetReportUnReadCount"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/getReportUnReadCount")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReportUnReadCountResponse>();
}

/**
 * @summary 获取员工有多少数量的日志（一个月内）是未读状态
 *
 * @param request GetReportUnReadCountRequest
 * @return GetReportUnReadCountResponse
 */
GetReportUnReadCountResponse Client::getReportUnReadCount(const GetReportUnReadCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetReportUnReadCountHeaders headers = GetReportUnReadCountHeaders();
  return getReportUnReadCountWithOptions(request, headers, runtime);
}

/**
 * @summary 查询流程运行任务（VPC）
 *
 * @param request GetRunningTasksRequest
 * @param tmpHeader GetRunningTasksHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunningTasksResponse
 */
GetRunningTasksResponse Client::getRunningTasksWithOptions(const GetRunningTasksRequest &request, const GetRunningTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetRunningTasksShrinkHeaders headers = GetRunningTasksShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRunningTasks"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getRunningTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunningTasksResponse>();
}

/**
 * @summary 查询流程运行任务（VPC）
 *
 * @param request GetRunningTasksRequest
 * @return GetRunningTasksResponse
 */
GetRunningTasksResponse Client::getRunningTasks(const GetRunningTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetRunningTasksHeaders headers = GetRunningTasksHeaders();
  return getRunningTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户忙闲信息
 *
 * @param tmpReq GetScheduleRequest
 * @param tmpHeader GetScheduleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduleResponse
 */
GetScheduleResponse Client::getScheduleWithOptions(const GetScheduleRequest &tmpReq, const GetScheduleHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetScheduleShrinkRequest request = GetScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetScheduleShrinkHeaders headers = GetScheduleShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIds(), "UserIds", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["UserIds"] = request.userIdsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSchedule"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/getSchedule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduleResponse>();
}

/**
 * @summary 获取用户忙闲信息
 *
 * @param request GetScheduleRequest
 * @return GetScheduleResponse
 */
GetScheduleResponse Client::getSchedule(const GetScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetScheduleHeaders headers = GetScheduleHeaders();
  return getScheduleWithOptions(request, headers, runtime);
}

/**
 * @summary 获取工作表
 *
 * @param tmpReq GetSheetRequest
 * @param tmpHeader GetSheetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSheetResponse
 */
GetSheetResponse Client::getSheetWithOptions(const GetSheetRequest &tmpReq, const GetSheetHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSheetShrinkRequest request = GetSheetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetSheetShrinkHeaders headers = GetSheetShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSheet"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/getSheet")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSheetResponse>();
}

/**
 * @summary 获取工作表
 *
 * @param request GetSheetRequest
 * @return GetSheetResponse
 */
GetSheetResponse Client::getSheet(const GetSheetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSheetHeaders headers = GetSheetHeaders();
  return getSheetWithOptions(request, headers, runtime);
}

/**
 * @summary 获取表格文档内容jobId
 *
 * @param tmpReq GetSheetContentJobIdRequest
 * @param tmpHeader GetSheetContentJobIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSheetContentJobIdResponse
 */
GetSheetContentJobIdResponse Client::getSheetContentJobIdWithOptions(const GetSheetContentJobIdRequest &tmpReq, const GetSheetContentJobIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSheetContentJobIdShrinkRequest request = GetSheetContentJobIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetSheetContentJobIdShrinkHeaders headers = GetSheetContentJobIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasExportType()) {
    body["ExportType"] = request.exportType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSheetContentJobId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getSheetContentJobId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSheetContentJobIdResponse>();
}

/**
 * @summary 获取表格文档内容jobId
 *
 * @param request GetSheetContentJobIdRequest
 * @return GetSheetContentJobIdResponse
 */
GetSheetContentJobIdResponse Client::getSheetContentJobId(const GetSheetContentJobIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSheetContentJobIdHeaders headers = GetSheetContentJobIdHeaders();
  return getSheetContentJobIdWithOptions(request, headers, runtime);
}

/**
 * @summary 查询知识库下的目录结构
 *
 * @param tmpReq GetSpaceDirectoriesRequest
 * @param tmpHeader GetSpaceDirectoriesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSpaceDirectoriesResponse
 */
GetSpaceDirectoriesResponse Client::getSpaceDirectoriesWithOptions(const GetSpaceDirectoriesRequest &tmpReq, const GetSpaceDirectoriesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSpaceDirectoriesShrinkRequest request = GetSpaceDirectoriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetSpaceDirectoriesShrinkHeaders headers = GetSpaceDirectoriesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSpaceDirectories"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getSpaceDirectories")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSpaceDirectoriesResponse>();
}

/**
 * @summary 查询知识库下的目录结构
 *
 * @param request GetSpaceDirectoriesRequest
 * @return GetSpaceDirectoriesResponse
 */
GetSpaceDirectoriesResponse Client::getSpaceDirectories(const GetSpaceDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSpaceDirectoriesHeaders headers = GetSpaceDirectoriesHeaders();
  return getSpaceDirectoriesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询单个订阅日历详情
 *
 * @param request GetSubscribedCalendarRequest
 * @param tmpHeader GetSubscribedCalendarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscribedCalendarResponse
 */
GetSubscribedCalendarResponse Client::getSubscribedCalendarWithOptions(const GetSubscribedCalendarRequest &request, const GetSubscribedCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetSubscribedCalendarShrinkHeaders headers = GetSubscribedCalendarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSubscribedCalendar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/getSubscribedCalendar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscribedCalendarResponse>();
}

/**
 * @summary 查询单个订阅日历详情
 *
 * @param request GetSubscribedCalendarRequest
 * @return GetSubscribedCalendarResponse
 */
GetSubscribedCalendarResponse Client::getSubscribedCalendar(const GetSubscribedCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetSubscribedCalendarHeaders headers = GetSubscribedCalendarHeaders();
  return getSubscribedCalendarWithOptions(request, headers, runtime);
}

/**
 * @summary 查询抄送我的任务列表（应用维度）
 *
 * @param request GetTaskCopiesRequest
 * @param tmpHeader GetTaskCopiesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskCopiesResponse
 */
GetTaskCopiesResponse Client::getTaskCopiesWithOptions(const GetTaskCopiesRequest &request, const GetTaskCopiesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  GetTaskCopiesShrinkHeaders headers = GetTaskCopiesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProcessCodes()) {
    body["ProcessCodes"] = request.processCodes();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTaskCopies"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/getTaskCopies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskCopiesResponse>();
}

/**
 * @summary 查询抄送我的任务列表（应用维度）
 *
 * @param request GetTaskCopiesRequest
 * @return GetTaskCopiesResponse
 */
GetTaskCopiesResponse Client::getTaskCopies(const GetTaskCopiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetTaskCopiesHeaders headers = GetTaskCopiesHeaders();
  return getTaskCopiesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户可见的日志模板
 *
 * @param tmpReq GetTemplateListByUserIdRequest
 * @param tmpHeader GetTemplateListByUserIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateListByUserIdResponse
 */
GetTemplateListByUserIdResponse Client::getTemplateListByUserIdWithOptions(const GetTemplateListByUserIdRequest &tmpReq, const GetTemplateListByUserIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTemplateListByUserIdShrinkRequest request = GetTemplateListByUserIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetTemplateListByUserIdShrinkHeaders headers = GetTemplateListByUserIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOffset()) {
    body["Offset"] = request.offset();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTemplateListByUserId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/getTemplateListByUserId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateListByUserIdResponse>();
}

/**
 * @summary 获取用户可见的日志模板
 *
 * @param request GetTemplateListByUserIdRequest
 * @return GetTemplateListByUserIdResponse
 */
GetTemplateListByUserIdResponse Client::getTemplateListByUserId(const GetTemplateListByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetTemplateListByUserIdHeaders headers = GetTemplateListByUserIdHeaders();
  return getTemplateListByUserIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取指定工单详情
 *
 * @param tmpReq GetTicketRequest
 * @param tmpHeader GetTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicketWithOptions(const GetTicketRequest &tmpReq, const GetTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTicketShrinkRequest request = GetTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetTicketShrinkHeaders headers = GetTicketShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTicket"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/getTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTicketResponse>();
}

/**
 * @summary 获取指定工单详情
 *
 * @param request GetTicketRequest
 * @return GetTicketResponse
 */
GetTicketResponse Client::getTicket(const GetTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetTicketHeaders headers = GetTicketHeaders();
  return getTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 获取钉钉待办任务详情
 *
 * @param tmpReq GetTodoTaskRequest
 * @param tmpHeader GetTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTodoTaskResponse
 */
GetTodoTaskResponse Client::getTodoTaskWithOptions(const GetTodoTaskRequest &tmpReq, const GetTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTodoTaskShrinkRequest request = GetTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetTodoTaskShrinkHeaders headers = GetTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/getTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTodoTaskResponse>();
}

/**
 * @summary 获取钉钉待办任务详情
 *
 * @param request GetTodoTaskRequest
 * @return GetTodoTaskResponse
 */
GetTodoTaskResponse Client::getTodoTask(const GetTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetTodoTaskHeaders headers = GetTodoTaskHeaders();
  return getTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 获取专属账号信息
 *
 * @param tmpReq GetUserRequest
 * @param tmpHeader GetUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserResponse
 */
GetUserResponse Client::getUserWithOptions(const GetUserRequest &tmpReq, const GetUserHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserShrinkRequest request = GetUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetUserShrinkHeaders headers = GetUserShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasLanguage()) {
    body["language"] = request.language();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUser"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/getUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserResponse>();
}

/**
 * @summary 获取专属账号信息
 *
 * @param request GetUserRequest
 * @return GetUserResponse
 */
GetUserResponse Client::getUser(const GetUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserHeaders headers = GetUserHeaders();
  return getUserWithOptions(request, headers, runtime);
}

/**
 * @summary 根据unionId获取用户userId
 *
 * @param tmpReq GetUserIdRequest
 * @param tmpHeader GetUserIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdResponse
 */
GetUserIdResponse Client::getUserIdWithOptions(const GetUserIdRequest &tmpReq, const GetUserIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserIdShrinkRequest request = GetUserIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetUserIdShrinkHeaders headers = GetUserIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUnionId()) {
    body["UnionId"] = request.unionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/getUserId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserIdResponse>();
}

/**
 * @summary 根据unionId获取用户userId
 *
 * @param request GetUserIdRequest
 * @return GetUserIdResponse
 */
GetUserIdResponse Client::getUserId(const GetUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdHeaders headers = GetUserIdHeaders();
  return getUserIdWithOptions(request, headers, runtime);
}

/**
 * @summary 根据orgId和staffId获取用户userId
 *
 * @param tmpReq GetUserIdByOrgIdAndStaffIdRequest
 * @param tmpHeader GetUserIdByOrgIdAndStaffIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserIdByOrgIdAndStaffIdResponse
 */
GetUserIdByOrgIdAndStaffIdResponse Client::getUserIdByOrgIdAndStaffIdWithOptions(const GetUserIdByOrgIdAndStaffIdRequest &tmpReq, const GetUserIdByOrgIdAndStaffIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserIdByOrgIdAndStaffIdShrinkRequest request = GetUserIdByOrgIdAndStaffIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetUserIdByOrgIdAndStaffIdShrinkHeaders headers = GetUserIdByOrgIdAndStaffIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOrgId()) {
    body["OrgId"] = request.orgId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserIdByOrgIdAndStaffId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/getUserIdByOrgIdAndStaffId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserIdByOrgIdAndStaffIdResponse>();
}

/**
 * @summary 根据orgId和staffId获取用户userId
 *
 * @param request GetUserIdByOrgIdAndStaffIdRequest
 * @return GetUserIdByOrgIdAndStaffIdResponse
 */
GetUserIdByOrgIdAndStaffIdResponse Client::getUserIdByOrgIdAndStaffId(const GetUserIdByOrgIdAndStaffIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserIdByOrgIdAndStaffIdHeaders headers = GetUserIdByOrgIdAndStaffIdHeaders();
  return getUserIdByOrgIdAndStaffIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户最新的有效的专属账号迁移方案
 *
 * @param tmpReq GetUserLatestPlanRequest
 * @param tmpHeader GetUserLatestPlanHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserLatestPlanResponse
 */
GetUserLatestPlanResponse Client::getUserLatestPlanWithOptions(const GetUserLatestPlanRequest &tmpReq, const GetUserLatestPlanHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserLatestPlanShrinkRequest request = GetUserLatestPlanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetUserLatestPlanShrinkHeaders headers = GetUserLatestPlanShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUserLatestPlan"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/indepding/getUserLatestPlan")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserLatestPlanResponse>();
}

/**
 * @summary 获取用户最新的有效的专属账号迁移方案
 *
 * @param request GetUserLatestPlanRequest
 * @return GetUserLatestPlanResponse
 */
GetUserLatestPlanResponse Client::getUserLatestPlan(const GetUserLatestPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserLatestPlanHeaders headers = GetUserLatestPlanHeaders();
  return getUserLatestPlanWithOptions(request, headers, runtime);
}

/**
 * @summary 获取知识库
 *
 * @param tmpReq GetWorkspaceRequest
 * @param tmpHeader GetWorkspaceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const GetWorkspaceRequest &tmpReq, const GetWorkspaceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetWorkspaceShrinkRequest request = GetWorkspaceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetWorkspaceShrinkHeaders headers = GetWorkspaceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWithPermissionRole()) {
    body["WithPermissionRole"] = request.withPermissionRole();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getWorkspace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary 获取知识库
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetWorkspaceHeaders headers = GetWorkspaceHeaders();
  return getWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary 批量获取知识库
 *
 * @param tmpReq GetWorkspacesRequest
 * @param tmpHeader GetWorkspacesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspacesResponse
 */
GetWorkspacesResponse Client::getWorkspacesWithOptions(const GetWorkspacesRequest &tmpReq, const GetWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetWorkspacesShrinkRequest request = GetWorkspacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GetWorkspacesShrinkHeaders headers = GetWorkspacesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasWorkspaceIds()) {
    request.setWorkspaceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.workspaceIds(), "WorkspaceIds", "json"));
  }

  json body = {};
  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceIdsShrink()) {
    body["WorkspaceIds"] = request.workspaceIdsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWorkspaces"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/getWorkspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspacesResponse>();
}

/**
 * @summary 批量获取知识库
 *
 * @param request GetWorkspacesRequest
 * @return GetWorkspacesResponse
 */
GetWorkspacesResponse Client::getWorkspaces(const GetWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetWorkspacesHeaders headers = GetWorkspacesHeaders();
  return getWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary 授予勋章
 *
 * @param tmpReq GrantHonorRequest
 * @param tmpHeader GrantHonorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantHonorResponse
 */
GrantHonorResponse Client::grantHonorWithOptions(const GrantHonorRequest &tmpReq, const GrantHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantHonorShrinkRequest request = GrantHonorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  GrantHonorShrinkHeaders headers = GrantHonorShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasOpenConversationIds()) {
    request.setOpenConversationIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.openConversationIds(), "openConversationIds", "json"));
  }

  if (!!tmpReq.hasReceiverUserIds()) {
    request.setReceiverUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.receiverUserIds(), "receiverUserIds", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasExpirationTime()) {
    body["expirationTime"] = request.expirationTime();
  }

  if (!!request.hasGrantReason()) {
    body["grantReason"] = request.grantReason();
  }

  if (!!request.hasGranterName()) {
    body["granterName"] = request.granterName();
  }

  if (!!request.hasHonorId()) {
    body["honorId"] = request.honorId();
  }

  if (!!request.hasNoticeAnnouncer()) {
    body["noticeAnnouncer"] = request.noticeAnnouncer();
  }

  if (!!request.hasNoticeSingle()) {
    body["noticeSingle"] = request.noticeSingle();
  }

  if (!!request.hasOpenConversationIdsShrink()) {
    body["openConversationIds"] = request.openConversationIdsShrink();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasReceiverUserIdsShrink()) {
    body["receiverUserIds"] = request.receiverUserIdsShrink();
  }

  if (!!request.hasSenderUserId()) {
    body["senderUserId"] = request.senderUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantHonor"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/grantHonor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantHonorResponse>();
}

/**
 * @summary 授予勋章
 *
 * @param request GrantHonorRequest
 * @return GrantHonorResponse
 */
GrantHonorResponse Client::grantHonor(const GrantHonorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GrantHonorHeaders headers = GrantHonorHeaders();
  return grantHonorWithOptions(request, headers, runtime);
}

/**
 * @summary 初始化文件分片上传
 *
 * @param tmpReq InitMultipartFileUploadRequest
 * @param tmpHeader InitMultipartFileUploadHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitMultipartFileUploadResponse
 */
InitMultipartFileUploadResponse Client::initMultipartFileUploadWithOptions(const InitMultipartFileUploadRequest &tmpReq, const InitMultipartFileUploadHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InitMultipartFileUploadShrinkRequest request = InitMultipartFileUploadShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InitMultipartFileUploadShrinkHeaders headers = InitMultipartFileUploadShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasParentDentryUuid()) {
    body["ParentDentryUuid"] = request.parentDentryUuid();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InitMultipartFileUpload"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/initMultipartFileUpload")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitMultipartFileUploadResponse>();
}

/**
 * @summary 初始化文件分片上传
 *
 * @param request InitMultipartFileUploadRequest
 * @return InitMultipartFileUploadResponse
 */
InitMultipartFileUploadResponse Client::initMultipartFileUpload(const InitMultipartFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InitMultipartFileUploadHeaders headers = InitMultipartFileUploadHeaders();
  return initMultipartFileUploadWithOptions(request, headers, runtime);
}

/**
 * @summary 在指定列左侧插入若干列
 *
 * @param tmpReq InsertColumnsBeforeRequest
 * @param tmpHeader InsertColumnsBeforeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertColumnsBeforeResponse
 */
InsertColumnsBeforeResponse Client::insertColumnsBeforeWithOptions(const InsertColumnsBeforeRequest &tmpReq, const InsertColumnsBeforeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertColumnsBeforeShrinkRequest request = InsertColumnsBeforeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InsertColumnsBeforeShrinkHeaders headers = InsertColumnsBeforeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasColumn()) {
    body["Column"] = request.column();
  }

  if (!!request.hasColumnCount()) {
    body["ColumnCount"] = request.columnCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertColumnsBefore"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/insertColumnsBefore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertColumnsBeforeResponse>();
}

/**
 * @summary 在指定列左侧插入若干列
 *
 * @param request InsertColumnsBeforeRequest
 * @return InsertColumnsBeforeResponse
 */
InsertColumnsBeforeResponse Client::insertColumnsBefore(const InsertColumnsBeforeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertColumnsBeforeHeaders headers = InsertColumnsBeforeHeaders();
  return insertColumnsBeforeWithOptions(request, headers, runtime);
}

/**
 * @summary 文档中插入内容
 *
 * @param tmpReq InsertContentWithOptionsRequest
 * @param tmpHeader InsertContentWithOptionsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertContentWithOptionsResponse
 */
InsertContentWithOptionsResponse Client::insertContentWithOptionsWithOptions(const InsertContentWithOptionsRequest &tmpReq, const InsertContentWithOptionsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertContentWithOptionsShrinkRequest request = InsertContentWithOptionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InsertContentWithOptionsShrinkHeaders headers = InsertContentWithOptionsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasPath()) {
    request.setPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.path(), "Path", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContentShrink()) {
    body["Content"] = request.contentShrink();
  }

  if (!!request.hasDocumentId()) {
    body["DocumentId"] = request.documentId();
  }

  if (!!request.hasIndex()) {
    body["Index"] = request.index();
  }

  if (!!request.hasPathShrink()) {
    body["Path"] = request.pathShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertContentWithOptions"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/insertContentWithOptions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertContentWithOptionsResponse>();
}

/**
 * @summary 文档中插入内容
 *
 * @param request InsertContentWithOptionsRequest
 * @return InsertContentWithOptionsResponse
 */
InsertContentWithOptionsResponse Client::insertContentWithOptions(const InsertContentWithOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertContentWithOptionsHeaders headers = InsertContentWithOptionsHeaders();
  return insertContentWithOptionsWithOptions(request, headers, runtime);
}

/**
 * @summary 插入下拉列表
 *
 * @param tmpReq InsertDropDownListRequest
 * @param tmpHeader InsertDropDownListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertDropDownListResponse
 */
InsertDropDownListResponse Client::insertDropDownListWithOptions(const InsertDropDownListRequest &tmpReq, const InsertDropDownListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertDropDownListShrinkRequest request = InsertDropDownListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InsertDropDownListShrinkHeaders headers = InsertDropDownListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.options(), "Options", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOptionsShrink()) {
    body["Options"] = request.optionsShrink();
  }

  if (!!request.hasRangeAddress()) {
    body["RangeAddress"] = request.rangeAddress();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertDropDownList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/insertDropDownList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertDropDownListResponse>();
}

/**
 * @summary 插入下拉列表
 *
 * @param request InsertDropDownListRequest
 * @return InsertDropDownListResponse
 */
InsertDropDownListResponse Client::insertDropDownList(const InsertDropDownListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertDropDownListHeaders headers = InsertDropDownListHeaders();
  return insertDropDownListWithOptions(request, headers, runtime);
}

/**
 * @summary 新增记录
 *
 * @param tmpReq InsertMultiDimTableRecordRequest
 * @param tmpHeader InsertMultiDimTableRecordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertMultiDimTableRecordResponse
 */
InsertMultiDimTableRecordResponse Client::insertMultiDimTableRecordWithOptions(const InsertMultiDimTableRecordRequest &tmpReq, const InsertMultiDimTableRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertMultiDimTableRecordShrinkRequest request = InsertMultiDimTableRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InsertMultiDimTableRecordShrinkHeaders headers = InsertMultiDimTableRecordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRecords()) {
    request.setRecordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.records(), "Records", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasRecordsShrink()) {
    body["Records"] = request.recordsShrink();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertMultiDimTableRecord"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/insertMultiDimTableRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertMultiDimTableRecordResponse>();
}

/**
 * @summary 新增记录
 *
 * @param request InsertMultiDimTableRecordRequest
 * @return InsertMultiDimTableRecordResponse
 */
InsertMultiDimTableRecordResponse Client::insertMultiDimTableRecord(const InsertMultiDimTableRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertMultiDimTableRecordHeaders headers = InsertMultiDimTableRecordHeaders();
  return insertMultiDimTableRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 在指定行上方插入若干行
 *
 * @param tmpReq InsertRowsBeforeRequest
 * @param tmpHeader InsertRowsBeforeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertRowsBeforeResponse
 */
InsertRowsBeforeResponse Client::insertRowsBeforeWithOptions(const InsertRowsBeforeRequest &tmpReq, const InsertRowsBeforeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsertRowsBeforeShrinkRequest request = InsertRowsBeforeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InsertRowsBeforeShrinkHeaders headers = InsertRowsBeforeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRow()) {
    body["Row"] = request.row();
  }

  if (!!request.hasRowCount()) {
    body["RowCount"] = request.rowCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsertRowsBefore"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/insertRowsBefore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertRowsBeforeResponse>();
}

/**
 * @summary 在指定行上方插入若干行
 *
 * @param request InsertRowsBeforeRequest
 * @return InsertRowsBeforeResponse
 */
InsertRowsBeforeResponse Client::insertRowsBefore(const InsertRowsBeforeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsertRowsBeforeHeaders headers = InsertRowsBeforeHeaders();
  return insertRowsBeforeWithOptions(request, headers, runtime);
}

/**
 * @summary 邀请用户入会
 *
 * @param tmpReq InviteUsersRequest
 * @param tmpHeader InviteUsersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InviteUsersResponse
 */
InviteUsersResponse Client::inviteUsersWithOptions(const InviteUsersRequest &tmpReq, const InviteUsersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InviteUsersShrinkRequest request = InviteUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InviteUsersShrinkHeaders headers = InviteUsersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasInviteeList()) {
    request.setInviteeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inviteeList(), "InviteeList", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasPhoneInviteeList()) {
    request.setPhoneInviteeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phoneInviteeList(), "phoneInviteeList", "json"));
  }

  json body = {};
  if (!!request.hasInviteeListShrink()) {
    body["InviteeList"] = request.inviteeListShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  if (!!request.hasPhoneInviteeListShrink()) {
    body["phoneInviteeList"] = request.phoneInviteeListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InviteUsers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/inviteUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InviteUsersResponse>();
}

/**
 * @summary 邀请用户入会
 *
 * @param request InviteUsersRequest
 * @return InviteUsersResponse
 */
InviteUsersResponse Client::inviteUsers(const InviteUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InviteUsersHeaders headers = InviteUsersHeaders();
  return inviteUsersWithOptions(request, headers, runtime);
}

/**
 * @summary 调用助理
 *
 * @param request InvokeAssistantRequest
 * @param headers InvokeAssistantHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeAssistantResponse
 */
FutrueGenerator<InvokeAssistantResponse> Client::invokeAssistantWithSSE(const InvokeAssistantRequest &request, const InvokeAssistantHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokeAssistant"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/invokeAssistant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<InvokeAssistantResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 调用助理
 *
 * @param request InvokeAssistantRequest
 * @param headers InvokeAssistantHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeAssistantResponse
 */
InvokeAssistantResponse Client::invokeAssistantWithOptions(const InvokeAssistantRequest &request, const InvokeAssistantHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.messages();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.sessionId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.stream();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokeAssistant"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/invokeAssistant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeAssistantResponse>();
}

/**
 * @summary 调用助理
 *
 * @param request InvokeAssistantRequest
 * @return InvokeAssistantResponse
 */
InvokeAssistantResponse Client::invokeAssistant(const InvokeAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvokeAssistantHeaders headers = InvokeAssistantHeaders();
  return invokeAssistantWithOptions(request, headers, runtime);
}

/**
 * @summary 调用AI技能
 *
 * @param tmpReq InvokeSkillRequest
 * @param tmpHeader InvokeSkillHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeSkillResponse
 */
FutrueGenerator<InvokeSkillResponse> Client::invokeSkillWithSSE(const InvokeSkillRequest &tmpReq, const InvokeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeSkillShrinkRequest request = InvokeSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InvokeSkillShrinkHeaders headers = InvokeSkillShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.params(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasParamsShrink()) {
    body["Params"] = request.paramsShrink();
  }

  if (!!request.hasSkillId()) {
    body["SkillId"] = request.skillId();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.stream();
  }

  if (!!request.hasSourceIdOfAssistantId()) {
    body["sourceIdOfAssistantId"] = request.sourceIdOfAssistantId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokeSkill"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/skill/invoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<InvokeSkillResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 调用AI技能
 *
 * @param tmpReq InvokeSkillRequest
 * @param tmpHeader InvokeSkillHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeSkillResponse
 */
InvokeSkillResponse Client::invokeSkillWithOptions(const InvokeSkillRequest &tmpReq, const InvokeSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeSkillShrinkRequest request = InvokeSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  InvokeSkillShrinkHeaders headers = InvokeSkillShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.params(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasParamsShrink()) {
    body["Params"] = request.paramsShrink();
  }

  if (!!request.hasSkillId()) {
    body["SkillId"] = request.skillId();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.stream();
  }

  if (!!request.hasSourceIdOfAssistantId()) {
    body["sourceIdOfAssistantId"] = request.sourceIdOfAssistantId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvokeSkill"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/skill/invoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeSkillResponse>();
}

/**
 * @summary 调用AI技能
 *
 * @param request InvokeSkillRequest
 * @return InvokeSkillResponse
 */
InvokeSkillResponse Client::invokeSkill(const InvokeSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvokeSkillHeaders headers = InvokeSkillHeaders();
  return invokeSkillWithOptions(request, headers, runtime);
}

/**
 * @summary 查询宜搭应用列表
 *
 * @param request ListApplicationRequest
 * @param tmpHeader ListApplicationHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplicationWithOptions(const ListApplicationRequest &request, const ListApplicationHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListApplicationShrinkHeaders headers = ListApplicationShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppFilter()) {
    body["AppFilter"] = request.appFilter();
  }

  if (!!request.hasAppNameSearchKeyword()) {
    body["AppNameSearchKeyword"] = request.appNameSearchKeyword();
  }

  if (!!request.hasCorpId()) {
    body["CorpId"] = request.corpId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.token();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListApplication"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/listApplication")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationResponse>();
}

/**
 * @summary 查询宜搭应用列表
 *
 * @param request ListApplicationRequest
 * @return ListApplicationResponse
 */
ListApplicationResponse Client::listApplication(const ListApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListApplicationHeaders headers = ListApplicationHeaders();
  return listApplicationWithOptions(request, headers, runtime);
}

/**
 * @summary 查询日历
 *
 * @param tmpReq ListCalendarsRequest
 * @param tmpHeader ListCalendarsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalendarsResponse
 */
ListCalendarsResponse Client::listCalendarsWithOptions(const ListCalendarsRequest &tmpReq, const ListCalendarsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCalendarsShrinkRequest request = ListCalendarsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListCalendarsShrinkHeaders headers = ListCalendarsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.request(), "Request", "json"));
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.requestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCalendars"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/listCalendars")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalendarsResponse>();
}

/**
 * @summary 查询日历
 *
 * @param request ListCalendarsRequest
 * @return ListCalendarsResponse
 */
ListCalendarsResponse Client::listCalendars(const ListCalendarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCalendarsHeaders headers = ListCalendarsHeaders();
  return listCalendarsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件或文件夹列表
 *
 * @param tmpReq ListDentriesRequest
 * @param tmpHeader ListDentriesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDentriesResponse
 */
ListDentriesResponse Client::listDentriesWithOptions(const ListDentriesRequest &tmpReq, const ListDentriesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDentriesShrinkRequest request = ListDentriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListDentriesShrinkHeaders headers = ListDentriesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasParentId()) {
    body["ParentId"] = request.parentId();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWithThumbnail()) {
    body["WithThumbnail"] = request.withThumbnail();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDentries"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/listDentries")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDentriesResponse>();
}

/**
 * @summary 获取文件或文件夹列表
 *
 * @param request ListDentriesRequest
 * @return ListDentriesResponse
 */
ListDentriesResponse Client::listDentries(const ListDentriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDentriesHeaders headers = ListDentriesHeaders();
  return listDentriesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取钉盘空间列表
 *
 * @param tmpReq ListDriveSpacesRequest
 * @param tmpHeader ListDriveSpacesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDriveSpacesResponse
 */
ListDriveSpacesResponse Client::listDriveSpacesWithOptions(const ListDriveSpacesRequest &tmpReq, const ListDriveSpacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDriveSpacesShrinkRequest request = ListDriveSpacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListDriveSpacesShrinkHeaders headers = ListDriveSpacesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSpaceType()) {
    body["SpaceType"] = request.spaceType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDriveSpaces"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/listDriveSpaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDriveSpacesResponse>();
}

/**
 * @summary 获取钉盘空间列表
 *
 * @param request ListDriveSpacesRequest
 * @return ListDriveSpacesResponse
 */
ListDriveSpacesResponse Client::listDriveSpaces(const ListDriveSpacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDriveSpacesHeaders headers = ListDriveSpacesHeaders();
  return listDriveSpacesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询日程列表
 *
 * @param request ListEventsRequest
 * @param tmpHeader ListEventsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventsResponse
 */
ListEventsResponse Client::listEventsWithOptions(const ListEventsRequest &request, const ListEventsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListEventsShrinkHeaders headers = ListEventsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasMaxAttendees()) {
    body["MaxAttendees"] = request.maxAttendees();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSeriesMasterId()) {
    body["SeriesMasterId"] = request.seriesMasterId();
  }

  if (!!request.hasShowDeleted()) {
    body["ShowDeleted"] = request.showDeleted();
  }

  if (!!request.hasSyncToken()) {
    body["SyncToken"] = request.syncToken();
  }

  if (!!request.hasTimeMax()) {
    body["TimeMax"] = request.timeMax();
  }

  if (!!request.hasTimeMin()) {
    body["TimeMin"] = request.timeMin();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEvents"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/listEvents")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventsResponse>();
}

/**
 * @summary 查询日程列表
 *
 * @param request ListEventsRequest
 * @return ListEventsResponse
 */
ListEventsResponse Client::listEvents(const ListEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListEventsHeaders headers = ListEventsHeaders();
  return listEventsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询日程视图
 *
 * @param request ListEventsViewRequest
 * @param tmpHeader ListEventsViewHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventsViewResponse
 */
ListEventsViewResponse Client::listEventsViewWithOptions(const ListEventsViewRequest &request, const ListEventsViewHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListEventsViewShrinkHeaders headers = ListEventsViewShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasMaxAttendees()) {
    body["MaxAttendees"] = request.maxAttendees();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTimeMax()) {
    body["TimeMax"] = request.timeMax();
  }

  if (!!request.hasTimeMin()) {
    body["TimeMin"] = request.timeMin();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEventsView"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/listEventsView")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEventsViewResponse>();
}

/**
 * @summary 查询日程视图
 *
 * @param request ListEventsViewRequest
 * @return ListEventsViewResponse
 */
ListEventsViewResponse Client::listEventsView(const ListEventsViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListEventsViewHeaders headers = ListEventsViewHeaders();
  return listEventsViewWithOptions(request, headers, runtime);
}

/**
 * @summary 批量查询宜搭表单实例的评论
 *
 * @param tmpReq ListFormRemarksRequest
 * @param tmpHeader ListFormRemarksHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFormRemarksResponse
 */
ListFormRemarksResponse Client::listFormRemarksWithOptions(const ListFormRemarksRequest &tmpReq, const ListFormRemarksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFormRemarksShrinkRequest request = ListFormRemarksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListFormRemarksShrinkHeaders headers = ListFormRemarksShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFormInstanceIdList()) {
    request.setFormInstanceIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.formInstanceIdList(), "FormInstanceIdList", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormInstanceIdListShrink()) {
    body["FormInstanceIdList"] = request.formInstanceIdListShrink();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFormRemarks"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/listFormRemarks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFormRemarksResponse>();
}

/**
 * @summary 批量查询宜搭表单实例的评论
 *
 * @param request ListFormRemarksRequest
 * @return ListFormRemarksResponse
 */
ListFormRemarksResponse Client::listFormRemarks(const ListFormRemarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListFormRemarksHeaders headers = ListFormRemarksHeaders();
  return listFormRemarksWithOptions(request, headers, runtime);
}

/**
 * @summary 查询消息
 *
 * @param request ListMessageRequest
 * @param headers ListMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMessageResponse
 */
ListMessageResponse Client::listMessageWithOptions(const ListMessageRequest &request, const ListMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.limit();
  }

  if (!!request.hasOrder()) {
    body["order"] = request.order();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.runId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  if (!!request.hasThreadId()) {
    body["threadId"] = request.threadId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMessage"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/listMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessageResponse>();
}

/**
 * @summary 查询消息
 *
 * @param request ListMessageRequest
 * @return ListMessageResponse
 */
ListMessageResponse Client::listMessage(const ListMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListMessageHeaders headers = ListMessageHeaders();
  return listMessageWithOptions(request, headers, runtime);
}

/**
 * @summary 列出多行记录
 *
 * @param tmpReq ListMultiDimTableRecordsRequest
 * @param tmpHeader ListMultiDimTableRecordsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMultiDimTableRecordsResponse
 */
ListMultiDimTableRecordsResponse Client::listMultiDimTableRecordsWithOptions(const ListMultiDimTableRecordsRequest &tmpReq, const ListMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMultiDimTableRecordsShrinkRequest request = ListMultiDimTableRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListMultiDimTableRecordsShrinkHeaders headers = ListMultiDimTableRecordsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.filterShrink();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMultiDimTableRecords"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/listMultiDimTableRecords")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMultiDimTableRecordsResponse>();
}

/**
 * @summary 列出多行记录
 *
 * @param request ListMultiDimTableRecordsRequest
 * @return ListMultiDimTableRecordsResponse
 */
ListMultiDimTableRecordsResponse Client::listMultiDimTableRecords(const ListMultiDimTableRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListMultiDimTableRecordsHeaders headers = ListMultiDimTableRecordsHeaders();
  return listMultiDimTableRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取应用下的页面列表
 *
 * @param request ListNavigationByFormTypeRequest
 * @param tmpHeader ListNavigationByFormTypeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNavigationByFormTypeResponse
 */
ListNavigationByFormTypeResponse Client::listNavigationByFormTypeWithOptions(const ListNavigationByFormTypeRequest &request, const ListNavigationByFormTypeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListNavigationByFormTypeShrinkHeaders headers = ListNavigationByFormTypeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormType()) {
    body["FormType"] = request.formType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListNavigationByFormType"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/listNavigationByFormType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNavigationByFormTypeResponse>();
}

/**
 * @summary 获取应用下的页面列表
 *
 * @param request ListNavigationByFormTypeRequest
 * @return ListNavigationByFormTypeResponse
 */
ListNavigationByFormTypeResponse Client::listNavigationByFormType(const ListNavigationByFormTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListNavigationByFormTypeHeaders headers = ListNavigationByFormTypeHeaders();
  return listNavigationByFormTypeWithOptions(request, headers, runtime);
}

/**
 * @summary 获取节点列表
 *
 * @param tmpReq ListNodesRequest
 * @param tmpHeader ListNodesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &tmpReq, const ListNodesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNodesShrinkRequest request = ListNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListNodesShrinkHeaders headers = ListNodesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasParentNodeId()) {
    body["ParentNodeId"] = request.parentNodeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWithPermissionRole()) {
    body["WithPermissionRole"] = request.withPermissionRole();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/listNodes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary 获取节点列表
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListNodesHeaders headers = ListNodesHeaders();
  return listNodesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件权限列表
 *
 * @param tmpReq ListPermissionsRequest
 * @param tmpHeader ListPermissionsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissionsWithOptions(const ListPermissionsRequest &tmpReq, const ListPermissionsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPermissionsShrinkRequest request = ListPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListPermissionsShrinkHeaders headers = ListPermissionsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPermissions"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/listPermissions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionsResponse>();
}

/**
 * @summary 获取文件权限列表
 *
 * @param request ListPermissionsRequest
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissions(const ListPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListPermissionsHeaders headers = ListPermissionsHeaders();
  return listPermissionsWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户发出的日志列表
 *
 * @param tmpReq ListReportRequest
 * @param tmpHeader ListReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReportResponse
 */
ListReportResponse Client::listReportWithOptions(const ListReportRequest &tmpReq, const ListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListReportShrinkRequest request = ListReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListReportShrinkHeaders headers = ListReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.cursor();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasModifiedEndTime()) {
    body["ModifiedEndTime"] = request.modifiedEndTime();
  }

  if (!!request.hasModifiedStartTime()) {
    body["ModifiedStartTime"] = request.modifiedStartTime();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/listReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReportResponse>();
}

/**
 * @summary 获取用户发出的日志列表
 *
 * @param request ListReportRequest
 * @return ListReportResponse
 */
ListReportResponse Client::listReport(const ListReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListReportHeaders headers = ListReportHeaders();
  return listReportWithOptions(request, headers, runtime);
}

/**
 * @summary 列出AI技能
 *
 * @param request ListSkillRequest
 * @param tmpHeader ListSkillHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillResponse
 */
ListSkillResponse Client::listSkillWithOptions(const ListSkillRequest &request, const ListSkillHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListSkillShrinkHeaders headers = ListSkillShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["groupId"] = request.groupId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSkill"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/skill/listSkill")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillResponse>();
}

/**
 * @summary 列出AI技能
 *
 * @param request ListSkillRequest
 * @return ListSkillResponse
 */
ListSkillResponse Client::listSkill(const ListSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSkillHeaders headers = ListSkillHeaders();
  return listSkillWithOptions(request, headers, runtime);
}

/**
 * @summary 获取子表组件数据
 *
 * @param request ListTableDataByFormInstanceIdTableIdRequest
 * @param tmpHeader ListTableDataByFormInstanceIdTableIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableDataByFormInstanceIdTableIdResponse
 */
ListTableDataByFormInstanceIdTableIdResponse Client::listTableDataByFormInstanceIdTableIdWithOptions(const ListTableDataByFormInstanceIdTableIdRequest &request, const ListTableDataByFormInstanceIdTableIdHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  ListTableDataByFormInstanceIdTableIdShrinkHeaders headers = ListTableDataByFormInstanceIdTableIdShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormInstanceId()) {
    body["FormInstanceId"] = request.formInstanceId();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTableFieldId()) {
    body["TableFieldId"] = request.tableFieldId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTableDataByFormInstanceIdTableId"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/listTableDataByFormInstanceIdTableId")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableDataByFormInstanceIdTableIdResponse>();
}

/**
 * @summary 获取子表组件数据
 *
 * @param request ListTableDataByFormInstanceIdTableIdRequest
 * @return ListTableDataByFormInstanceIdTableIdResponse
 */
ListTableDataByFormInstanceIdTableIdResponse Client::listTableDataByFormInstanceIdTableId(const ListTableDataByFormInstanceIdTableIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListTableDataByFormInstanceIdTableIdHeaders headers = ListTableDataByFormInstanceIdTableIdHeaders();
  return listTableDataByFormInstanceIdTableIdWithOptions(request, headers, runtime);
}

/**
 * @summary 获取知识小组列表
 *
 * @param tmpReq ListTeamsRequest
 * @param tmpHeader ListTeamsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeamsWithOptions(const ListTeamsRequest &tmpReq, const ListTeamsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTeamsShrinkRequest request = ListTeamsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListTeamsShrinkHeaders headers = ListTeamsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTeams"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/listTeams")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTeamsResponse>();
}

/**
 * @summary 获取知识小组列表
 *
 * @param request ListTeamsRequest
 * @return ListTeamsResponse
 */
ListTeamsResponse Client::listTeams(const ListTeamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListTeamsHeaders headers = ListTeamsHeaders();
  return listTeamsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询文档模板
 *
 * @param tmpReq ListTemplateRequest
 * @param tmpHeader ListTemplateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplateWithOptions(const ListTemplateRequest &tmpReq, const ListTemplateHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTemplateShrinkRequest request = ListTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListTemplateShrinkHeaders headers = ListTemplateShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTemplateType()) {
    body["TemplateType"] = request.templateType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTemplate"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/listTemplate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplateResponse>();
}

/**
 * @summary 查询文档模板
 *
 * @param request ListTemplateRequest
 * @return ListTemplateResponse
 */
ListTemplateResponse Client::listTemplate(const ListTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListTemplateHeaders headers = ListTemplateHeaders();
  return listTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 查询工单操作记录
 *
 * @param tmpReq ListTicketOperateRecordRequest
 * @param tmpHeader ListTicketOperateRecordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTicketOperateRecordResponse
 */
ListTicketOperateRecordResponse Client::listTicketOperateRecordWithOptions(const ListTicketOperateRecordRequest &tmpReq, const ListTicketOperateRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTicketOperateRecordShrinkRequest request = ListTicketOperateRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListTicketOperateRecordShrinkHeaders headers = ListTicketOperateRecordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTicketOperateRecord"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/listTicketOperateRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTicketOperateRecordResponse>();
}

/**
 * @summary 查询工单操作记录
 *
 * @param request ListTicketOperateRecordRequest
 * @return ListTicketOperateRecordResponse
 */
ListTicketOperateRecordResponse Client::listTicketOperateRecord(const ListTicketOperateRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListTicketOperateRecordHeaders headers = ListTicketOperateRecordHeaders();
  return listTicketOperateRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 获取知识库列表
 *
 * @param tmpReq ListWorkspacesRequest
 * @param tmpHeader ListWorkspacesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &tmpReq, const ListWorkspacesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkspacesShrinkRequest request = ListWorkspacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ListWorkspacesShrinkHeaders headers = ListWorkspacesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasTeamId()) {
    body["TeamId"] = request.teamId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWithPermissionRole()) {
    body["WithPermissionRole"] = request.withPermissionRole();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/listWorkspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary 获取知识库列表
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListWorkspacesHeaders headers = ListWorkspacesHeaders();
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary 修改日程
 *
 * @param tmpReq PatchEventRequest
 * @param tmpHeader PatchEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PatchEventResponse
 */
PatchEventResponse Client::patchEventWithOptions(const PatchEventRequest &tmpReq, const PatchEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PatchEventShrinkRequest request = PatchEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  PatchEventShrinkHeaders headers = PatchEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasAttendees()) {
    request.setAttendeesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attendees(), "Attendees", "json"));
  }

  if (!!tmpReq.hasCardInstances()) {
    request.setCardInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cardInstances(), "CardInstances", "json"));
  }

  if (!!tmpReq.hasEnd()) {
    request.setEndShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.end(), "End", "json"));
  }

  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  if (!!tmpReq.hasLocation()) {
    request.setLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.location(), "Location", "json"));
  }

  if (!!tmpReq.hasRecurrence()) {
    request.setRecurrenceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recurrence(), "Recurrence", "json"));
  }

  if (!!tmpReq.hasReminders()) {
    request.setRemindersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.reminders(), "Reminders", "json"));
  }

  if (!!tmpReq.hasStart()) {
    request.setStartShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.start(), "Start", "json"));
  }

  json body = {};
  if (!!request.hasAttendeesShrink()) {
    body["Attendees"] = request.attendeesShrink();
  }

  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasCardInstancesShrink()) {
    body["CardInstances"] = request.cardInstancesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndShrink()) {
    body["End"] = request.endShrink();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasExtraShrink()) {
    body["Extra"] = request.extraShrink();
  }

  if (!!request.hasIsAllDay()) {
    body["IsAllDay"] = request.isAllDay();
  }

  if (!!request.hasLocationShrink()) {
    body["Location"] = request.locationShrink();
  }

  if (!!request.hasRecurrenceShrink()) {
    body["Recurrence"] = request.recurrenceShrink();
  }

  if (!!request.hasRemindersShrink()) {
    body["Reminders"] = request.remindersShrink();
  }

  if (!!request.hasStartShrink()) {
    body["Start"] = request.startShrink();
  }

  if (!!request.hasSummary()) {
    body["Summary"] = request.summary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PatchEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/patchEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PatchEventResponse>();
}

/**
 * @summary 修改日程
 *
 * @param request PatchEventRequest
 * @return PatchEventResponse
 */
PatchEventResponse Client::patchEvent(const PatchEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PatchEventHeaders headers = PatchEventHeaders();
  return patchEventWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议录制中的文本信息
 *
 * @param tmpReq QueryCloudRecordTextRequest
 * @param tmpHeader QueryCloudRecordTextHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCloudRecordTextResponse
 */
QueryCloudRecordTextResponse Client::queryCloudRecordTextWithOptions(const QueryCloudRecordTextRequest &tmpReq, const QueryCloudRecordTextHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCloudRecordTextShrinkRequest request = QueryCloudRecordTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryCloudRecordTextShrinkHeaders headers = QueryCloudRecordTextShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDirection()) {
    body["Direction"] = request.direction();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCloudRecordText"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryCloudRecordText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCloudRecordTextResponse>();
}

/**
 * @summary 查询会议录制中的文本信息
 *
 * @param request QueryCloudRecordTextRequest
 * @return QueryCloudRecordTextResponse
 */
QueryCloudRecordTextResponse Client::queryCloudRecordText(const QueryCloudRecordTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryCloudRecordTextHeaders headers = QueryCloudRecordTextHeaders();
  return queryCloudRecordTextWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议录制的详情信息
 *
 * @param tmpReq QueryCloudRecordVideoRequest
 * @param tmpHeader QueryCloudRecordVideoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCloudRecordVideoResponse
 */
QueryCloudRecordVideoResponse Client::queryCloudRecordVideoWithOptions(const QueryCloudRecordVideoRequest &tmpReq, const QueryCloudRecordVideoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCloudRecordVideoShrinkRequest request = QueryCloudRecordVideoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryCloudRecordVideoShrinkHeaders headers = QueryCloudRecordVideoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCloudRecordVideo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryCloudRecordVideo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCloudRecordVideoResponse>();
}

/**
 * @summary 查询会议录制的详情信息
 *
 * @param request QueryCloudRecordVideoRequest
 * @return QueryCloudRecordVideoResponse
 */
QueryCloudRecordVideoResponse Client::queryCloudRecordVideo(const QueryCloudRecordVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryCloudRecordVideoHeaders headers = QueryCloudRecordVideoHeaders();
  return queryCloudRecordVideoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议录制中的视频信息
 *
 * @param tmpReq QueryCloudRecordVideoPlayInfoRequest
 * @param tmpHeader QueryCloudRecordVideoPlayInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCloudRecordVideoPlayInfoResponse
 */
QueryCloudRecordVideoPlayInfoResponse Client::queryCloudRecordVideoPlayInfoWithOptions(const QueryCloudRecordVideoPlayInfoRequest &tmpReq, const QueryCloudRecordVideoPlayInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryCloudRecordVideoPlayInfoShrinkRequest request = QueryCloudRecordVideoPlayInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryCloudRecordVideoPlayInfoShrinkHeaders headers = QueryCloudRecordVideoPlayInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasConferenceId()) {
    body["ConferenceId"] = request.conferenceId();
  }

  if (!!request.hasMediaId()) {
    body["MediaId"] = request.mediaId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryCloudRecordVideoPlayInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryCloudRecordVideoPlayInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCloudRecordVideoPlayInfoResponse>();
}

/**
 * @summary 查询会议录制中的视频信息
 *
 * @param request QueryCloudRecordVideoPlayInfoRequest
 * @return QueryCloudRecordVideoPlayInfoResponse
 */
QueryCloudRecordVideoPlayInfoResponse Client::queryCloudRecordVideoPlayInfo(const QueryCloudRecordVideoPlayInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryCloudRecordVideoPlayInfoHeaders headers = QueryCloudRecordVideoPlayInfoHeaders();
  return queryCloudRecordVideoPlayInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询视频会议信息
 *
 * @param request QueryConferenceInfoRequest
 * @param tmpHeader QueryConferenceInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConferenceInfoResponse
 */
QueryConferenceInfoResponse Client::queryConferenceInfoWithOptions(const QueryConferenceInfoRequest &request, const QueryConferenceInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  QueryConferenceInfoShrinkHeaders headers = QueryConferenceInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryConferenceInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryConferenceInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConferenceInfoResponse>();
}

/**
 * @summary 查询视频会议信息
 *
 * @param request QueryConferenceInfoRequest
 * @return QueryConferenceInfoResponse
 */
QueryConferenceInfoResponse Client::queryConferenceInfo(const QueryConferenceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryConferenceInfoHeaders headers = QueryConferenceInfoHeaders();
  return queryConferenceInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 根据会议码查询视频会议信息
 *
 * @param tmpReq QueryConferenceInfoByRoomCodeRequest
 * @param tmpHeader QueryConferenceInfoByRoomCodeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConferenceInfoByRoomCodeResponse
 */
QueryConferenceInfoByRoomCodeResponse Client::queryConferenceInfoByRoomCodeWithOptions(const QueryConferenceInfoByRoomCodeRequest &tmpReq, const QueryConferenceInfoByRoomCodeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryConferenceInfoByRoomCodeShrinkRequest request = QueryConferenceInfoByRoomCodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryConferenceInfoByRoomCodeShrinkHeaders headers = QueryConferenceInfoByRoomCodeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasRoomCode()) {
    body["roomCode"] = request.roomCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryConferenceInfoByRoomCode"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryConferenceInfoByRoomCode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConferenceInfoByRoomCodeResponse>();
}

/**
 * @summary 根据会议码查询视频会议信息
 *
 * @param request QueryConferenceInfoByRoomCodeRequest
 * @return QueryConferenceInfoByRoomCodeResponse
 */
QueryConferenceInfoByRoomCodeResponse Client::queryConferenceInfoByRoomCode(const QueryConferenceInfoByRoomCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryConferenceInfoByRoomCodeHeaders headers = QueryConferenceInfoByRoomCodeHeaders();
  return queryConferenceInfoByRoomCodeWithOptions(request, headers, runtime);
}

/**
 * @summary 查询视频会议成员
 *
 * @param tmpReq QueryConferenceMembersRequest
 * @param tmpHeader QueryConferenceMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConferenceMembersResponse
 */
QueryConferenceMembersResponse Client::queryConferenceMembersWithOptions(const QueryConferenceMembersRequest &tmpReq, const QueryConferenceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryConferenceMembersShrinkRequest request = QueryConferenceMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryConferenceMembersShrinkHeaders headers = QueryConferenceMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryConferenceMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryConferenceMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConferenceMembersResponse>();
}

/**
 * @summary 查询视频会议成员
 *
 * @param request QueryConferenceMembersRequest
 * @return QueryConferenceMembersResponse
 */
QueryConferenceMembersResponse Client::queryConferenceMembers(const QueryConferenceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryConferenceMembersHeaders headers = QueryConferenceMembersHeaders();
  return queryConferenceMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 获取文件或文件夹信息
 *
 * @param tmpReq QueryDentriesInfoRequest
 * @param tmpHeader QueryDentriesInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDentriesInfoResponse
 */
QueryDentriesInfoResponse Client::queryDentriesInfoWithOptions(const QueryDentriesInfoRequest &tmpReq, const QueryDentriesInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryDentriesInfoShrinkRequest request = QueryDentriesInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryDentriesInfoShrinkHeaders headers = QueryDentriesInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasAppIdsForAppProperties()) {
    request.setAppIdsForAppPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.appIdsForAppProperties(), "AppIdsForAppProperties", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAppIdsForAppPropertiesShrink()) {
    body["AppIdsForAppProperties"] = request.appIdsForAppPropertiesShrink();
  }

  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUnionId()) {
    body["UnionId"] = request.unionId();
  }

  if (!!request.hasWithThumbnail()) {
    body["WithThumbnail"] = request.withThumbnail();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDentriesInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/queryDentriesInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDentriesInfoResponse>();
}

/**
 * @summary 获取文件或文件夹信息
 *
 * @param request QueryDentriesInfoRequest
 * @return QueryDentriesInfoResponse
 */
QueryDentriesInfoResponse Client::queryDentriesInfo(const QueryDentriesInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryDentriesInfoHeaders headers = QueryDentriesInfoHeaders();
  return queryDentriesInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询知识库节点信息
 *
 * @param tmpReq QueryDentryRequest
 * @param tmpHeader QueryDentryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDentryResponse
 */
QueryDentryResponse Client::queryDentryWithOptions(const QueryDentryRequest &tmpReq, const QueryDentryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryDentryShrinkRequest request = QueryDentryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryDentryShrinkHeaders headers = QueryDentryShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryId()) {
    body["DentryId"] = request.dentryId();
  }

  if (!!request.hasIncludeSpace()) {
    body["IncludeSpace"] = request.includeSpace();
  }

  if (!!request.hasSpaceId()) {
    body["SpaceId"] = request.spaceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryDentry"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v2/documents/queryDentry")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDentryResponse>();
}

/**
 * @summary 查询知识库节点信息
 *
 * @param request QueryDentryRequest
 * @return QueryDentryResponse
 */
QueryDentryResponse Client::queryDentry(const QueryDentryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryDentryHeaders headers = QueryDentryHeaders();
  return queryDentryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询群直播详情
 *
 * @param tmpReq QueryGroupLiveInfoRequest
 * @param tmpHeader QueryGroupLiveInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGroupLiveInfoResponse
 */
QueryGroupLiveInfoResponse Client::queryGroupLiveInfoWithOptions(const QueryGroupLiveInfoRequest &tmpReq, const QueryGroupLiveInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryGroupLiveInfoShrinkRequest request = QueryGroupLiveInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryGroupLiveInfoShrinkHeaders headers = QueryGroupLiveInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAnchorUnionId()) {
    body["AnchorUnionId"] = request.anchorUnionId();
  }

  if (!!request.hasLiveUuid()) {
    body["LiveUuid"] = request.liveUuid();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryGroupLiveInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryGroupLiveInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGroupLiveInfoResponse>();
}

/**
 * @summary 查询群直播详情
 *
 * @param request QueryGroupLiveInfoRequest
 * @return QueryGroupLiveInfoResponse
 */
QueryGroupLiveInfoResponse Client::queryGroupLiveInfo(const QueryGroupLiveInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryGroupLiveInfoHeaders headers = QueryGroupLiveInfoHeaders();
  return queryGroupLiveInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询直播信息
 *
 * @param tmpReq QueryLiveInfoRequest
 * @param tmpHeader QueryLiveInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLiveInfoResponse
 */
QueryLiveInfoResponse Client::queryLiveInfoWithOptions(const QueryLiveInfoRequest &tmpReq, const QueryLiveInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryLiveInfoShrinkRequest request = QueryLiveInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryLiveInfoShrinkHeaders headers = QueryLiveInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryLiveInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryLiveInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLiveInfoResponse>();
}

/**
 * @summary 查询直播信息
 *
 * @param request QueryLiveInfoRequest
 * @return QueryLiveInfoResponse
 */
QueryLiveInfoResponse Client::queryLiveInfo(const QueryLiveInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryLiveInfoHeaders headers = QueryLiveInfoHeaders();
  return queryLiveInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询直播的观看数据
 *
 * @param tmpReq QueryLiveWatchDetailRequest
 * @param tmpHeader QueryLiveWatchDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLiveWatchDetailResponse
 */
QueryLiveWatchDetailResponse Client::queryLiveWatchDetailWithOptions(const QueryLiveWatchDetailRequest &tmpReq, const QueryLiveWatchDetailHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryLiveWatchDetailShrinkRequest request = QueryLiveWatchDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryLiveWatchDetailShrinkHeaders headers = QueryLiveWatchDetailShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryLiveWatchDetail"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryLiveWatchDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLiveWatchDetailResponse>();
}

/**
 * @summary 查询直播的观看数据
 *
 * @param request QueryLiveWatchDetailRequest
 * @return QueryLiveWatchDetailResponse
 */
QueryLiveWatchDetailResponse Client::queryLiveWatchDetail(const QueryLiveWatchDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryLiveWatchDetailHeaders headers = QueryLiveWatchDetailHeaders();
  return queryLiveWatchDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 查询直播观看人员信息
 *
 * @param tmpReq QueryLiveWatchUserListRequest
 * @param tmpHeader QueryLiveWatchUserListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLiveWatchUserListResponse
 */
QueryLiveWatchUserListResponse Client::queryLiveWatchUserListWithOptions(const QueryLiveWatchUserListRequest &tmpReq, const QueryLiveWatchUserListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryLiveWatchUserListShrinkRequest request = QueryLiveWatchUserListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryLiveWatchUserListShrinkHeaders headers = QueryLiveWatchUserListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryLiveWatchUserList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryLiveWatchUserList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLiveWatchUserListResponse>();
}

/**
 * @summary 查询直播观看人员信息
 *
 * @param request QueryLiveWatchUserListRequest
 * @return QueryLiveWatchUserListResponse
 */
QueryLiveWatchUserListResponse Client::queryLiveWatchUserList(const QueryLiveWatchUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryLiveWatchUserListHeaders headers = QueryLiveWatchUserListHeaders();
  return queryLiveWatchUserListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议室详情
 *
 * @param tmpReq QueryMeetingRoomRequest
 * @param tmpHeader QueryMeetingRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMeetingRoomResponse
 */
QueryMeetingRoomResponse Client::queryMeetingRoomWithOptions(const QueryMeetingRoomRequest &tmpReq, const QueryMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMeetingRoomShrinkRequest request = QueryMeetingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMeetingRoomShrinkHeaders headers = QueryMeetingRoomShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRoomId()) {
    body["RoomId"] = request.roomId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMeetingRoom"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMeetingRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMeetingRoomResponse>();
}

/**
 * @summary 查询会议室详情
 *
 * @param request QueryMeetingRoomRequest
 * @return QueryMeetingRoomResponse
 */
QueryMeetingRoomResponse Client::queryMeetingRoom(const QueryMeetingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMeetingRoomHeaders headers = QueryMeetingRoomHeaders();
  return queryMeetingRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议室分组信息
 *
 * @param tmpReq QueryMeetingRoomGroupRequest
 * @param tmpHeader QueryMeetingRoomGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMeetingRoomGroupResponse
 */
QueryMeetingRoomGroupResponse Client::queryMeetingRoomGroupWithOptions(const QueryMeetingRoomGroupRequest &tmpReq, const QueryMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMeetingRoomGroupShrinkRequest request = QueryMeetingRoomGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMeetingRoomGroupShrinkHeaders headers = QueryMeetingRoomGroupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMeetingRoomGroup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMeetingRoomGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMeetingRoomGroupResponse>();
}

/**
 * @summary 查询会议室分组信息
 *
 * @param request QueryMeetingRoomGroupRequest
 * @return QueryMeetingRoomGroupResponse
 */
QueryMeetingRoomGroupResponse Client::queryMeetingRoomGroup(const QueryMeetingRoomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMeetingRoomGroupHeaders headers = QueryMeetingRoomGroupHeaders();
  return queryMeetingRoomGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议室分组列表
 *
 * @param tmpReq QueryMeetingRoomGroupListRequest
 * @param tmpHeader QueryMeetingRoomGroupListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMeetingRoomGroupListResponse
 */
QueryMeetingRoomGroupListResponse Client::queryMeetingRoomGroupListWithOptions(const QueryMeetingRoomGroupListRequest &tmpReq, const QueryMeetingRoomGroupListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMeetingRoomGroupListShrinkRequest request = QueryMeetingRoomGroupListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMeetingRoomGroupListShrinkHeaders headers = QueryMeetingRoomGroupListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.request(), "Request", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.requestShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMeetingRoomGroupList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMeetingRoomGroupList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMeetingRoomGroupListResponse>();
}

/**
 * @summary 查询会议室分组列表
 *
 * @param request QueryMeetingRoomGroupListRequest
 * @return QueryMeetingRoomGroupListResponse
 */
QueryMeetingRoomGroupListResponse Client::queryMeetingRoomGroupList(const QueryMeetingRoomGroupListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMeetingRoomGroupListHeaders headers = QueryMeetingRoomGroupListHeaders();
  return queryMeetingRoomGroupListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议室列表
 *
 * @param tmpReq QueryMeetingRoomListRequest
 * @param tmpHeader QueryMeetingRoomListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMeetingRoomListResponse
 */
QueryMeetingRoomListResponse Client::queryMeetingRoomListWithOptions(const QueryMeetingRoomListRequest &tmpReq, const QueryMeetingRoomListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMeetingRoomListShrinkRequest request = QueryMeetingRoomListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMeetingRoomListShrinkHeaders headers = QueryMeetingRoomListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMeetingRoomList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMeetingRoomList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMeetingRoomListResponse>();
}

/**
 * @summary 查询会议室列表
 *
 * @param request QueryMeetingRoomListRequest
 * @return QueryMeetingRoomListResponse
 */
QueryMeetingRoomListResponse Client::queryMeetingRoomList(const QueryMeetingRoomListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMeetingRoomListHeaders headers = QueryMeetingRoomListHeaders();
  return queryMeetingRoomListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询闪记录音
 *
 * @param tmpReq QueryMinutesRequest
 * @param tmpHeader QueryMinutesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMinutesResponse
 */
QueryMinutesResponse Client::queryMinutesWithOptions(const QueryMinutesRequest &tmpReq, const QueryMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMinutesShrinkRequest request = QueryMinutesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMinutesShrinkHeaders headers = QueryMinutesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMinutes"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMinutesResponse>();
}

/**
 * @summary 查询闪记录音
 *
 * @param request QueryMinutesRequest
 * @return QueryMinutesResponse
 */
QueryMinutesResponse Client::queryMinutes(const QueryMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMinutesHeaders headers = QueryMinutesHeaders();
  return queryMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议闪记智能纪要
 *
 * @param tmpReq QueryMinutesSummaryRequest
 * @param tmpHeader QueryMinutesSummaryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMinutesSummaryResponse
 */
QueryMinutesSummaryResponse Client::queryMinutesSummaryWithOptions(const QueryMinutesSummaryRequest &tmpReq, const QueryMinutesSummaryHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMinutesSummaryShrinkRequest request = QueryMinutesSummaryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMinutesSummaryShrinkHeaders headers = QueryMinutesSummaryShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasSummaryTypeList()) {
    request.setSummaryTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.summaryTypeList(), "summaryTypeList", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  if (!!request.hasSummaryTypeListShrink()) {
    body["summaryTypeList"] = request.summaryTypeListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMinutesSummary"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMinutesSummary")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMinutesSummaryResponse>();
}

/**
 * @summary 查询会议闪记智能纪要
 *
 * @param request QueryMinutesSummaryRequest
 * @return QueryMinutesSummaryResponse
 */
QueryMinutesSummaryResponse Client::queryMinutesSummary(const QueryMinutesSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMinutesSummaryHeaders headers = QueryMinutesSummaryHeaders();
  return queryMinutesSummaryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询会议闪记的文本信息
 *
 * @param tmpReq QueryMinutesTextRequest
 * @param tmpHeader QueryMinutesTextHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMinutesTextResponse
 */
QueryMinutesTextResponse Client::queryMinutesTextWithOptions(const QueryMinutesTextRequest &tmpReq, const QueryMinutesTextHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMinutesTextShrinkRequest request = QueryMinutesTextShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryMinutesTextShrinkHeaders headers = QueryMinutesTextShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  if (!!request.hasDirection()) {
    body["direction"] = request.direction();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMinutesText"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryMinutesText")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMinutesTextResponse>();
}

/**
 * @summary 查询会议闪记的文本信息
 *
 * @param request QueryMinutesTextRequest
 * @return QueryMinutesTextResponse
 */
QueryMinutesTextResponse Client::queryMinutesText(const QueryMinutesTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMinutesTextHeaders headers = QueryMinutesTextHeaders();
  return queryMinutesTextWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业荣誉
 *
 * @param tmpReq QueryOrgHonorsRequest
 * @param tmpHeader QueryOrgHonorsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrgHonorsResponse
 */
QueryOrgHonorsResponse Client::queryOrgHonorsWithOptions(const QueryOrgHonorsRequest &tmpReq, const QueryOrgHonorsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryOrgHonorsShrinkRequest request = QueryOrgHonorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryOrgHonorsShrinkHeaders headers = QueryOrgHonorsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryOrgHonors"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/queryOrgHonors")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrgHonorsResponse>();
}

/**
 * @summary 查询企业荣誉
 *
 * @param request QueryOrgHonorsRequest
 * @return QueryOrgHonorsResponse
 */
QueryOrgHonorsResponse Client::queryOrgHonors(const QueryOrgHonorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryOrgHonorsHeaders headers = QueryOrgHonorsHeaders();
  return queryOrgHonorsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业代办
 *
 * @param tmpReq QueryOrgTodoTasksRequest
 * @param tmpHeader QueryOrgTodoTasksHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrgTodoTasksResponse
 */
QueryOrgTodoTasksResponse Client::queryOrgTodoTasksWithOptions(const QueryOrgTodoTasksRequest &tmpReq, const QueryOrgTodoTasksHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryOrgTodoTasksShrinkRequest request = QueryOrgTodoTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryOrgTodoTasksShrinkHeaders headers = QueryOrgTodoTasksShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasIsDone()) {
    body["isDone"] = request.isDone();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryOrgTodoTasks"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/queryOrgTodoTasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrgTodoTasksResponse>();
}

/**
 * @summary 查询企业代办
 *
 * @param request QueryOrgTodoTasksRequest
 * @return QueryOrgTodoTasksResponse
 */
QueryOrgTodoTasksResponse Client::queryOrgTodoTasks(const QueryOrgTodoTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryOrgTodoTasksHeaders headers = QueryOrgTodoTasksHeaders();
  return queryOrgTodoTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 查询闪记的链接，可通过链接查看闪记内容
 *
 * @param tmpReq QueryRecordMinutesUrlRequest
 * @param tmpHeader QueryRecordMinutesUrlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordMinutesUrlResponse
 */
QueryRecordMinutesUrlResponse Client::queryRecordMinutesUrlWithOptions(const QueryRecordMinutesUrlRequest &tmpReq, const QueryRecordMinutesUrlHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryRecordMinutesUrlShrinkRequest request = QueryRecordMinutesUrlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryRecordMinutesUrlShrinkHeaders headers = QueryRecordMinutesUrlShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBizType()) {
    body["BizType"] = request.bizType();
  }

  if (!!request.hasConferenceId()) {
    body["ConferenceId"] = request.conferenceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryRecordMinutesUrl"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryRecordMinutesUrl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordMinutesUrlResponse>();
}

/**
 * @summary 查询闪记的链接，可通过链接查看闪记内容
 *
 * @param request QueryRecordMinutesUrlRequest
 * @return QueryRecordMinutesUrlResponse
 */
QueryRecordMinutesUrlResponse Client::queryRecordMinutesUrl(const QueryRecordMinutesUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryRecordMinutesUrlHeaders headers = QueryRecordMinutesUrlHeaders();
  return queryRecordMinutesUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 获取日志详情
 *
 * @param tmpReq QueryReportDetailRequest
 * @param tmpHeader QueryReportDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReportDetailResponse
 */
QueryReportDetailResponse Client::queryReportDetailWithOptions(const QueryReportDetailRequest &tmpReq, const QueryReportDetailHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryReportDetailShrinkRequest request = QueryReportDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryReportDetailShrinkHeaders headers = QueryReportDetailShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryReportDetail"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/queryReportDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReportDetailResponse>();
}

/**
 * @summary 获取日志详情
 *
 * @param request QueryReportDetailRequest
 * @return QueryReportDetailResponse
 */
QueryReportDetailResponse Client::queryReportDetail(const QueryReportDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryReportDetailHeaders headers = QueryReportDetailHeaders();
  return queryReportDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 查询预约会议
 *
 * @param tmpReq QueryScheduleConferenceRequest
 * @param tmpHeader QueryScheduleConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScheduleConferenceResponse
 */
QueryScheduleConferenceResponse Client::queryScheduleConferenceWithOptions(const QueryScheduleConferenceRequest &tmpReq, const QueryScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryScheduleConferenceShrinkRequest request = QueryScheduleConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryScheduleConferenceShrinkHeaders headers = QueryScheduleConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasScheduleConferenceId()) {
    body["scheduleConferenceId"] = request.scheduleConferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryScheduleConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryScheduleConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryScheduleConferenceResponse>();
}

/**
 * @summary 查询预约会议
 *
 * @param request QueryScheduleConferenceRequest
 * @return QueryScheduleConferenceResponse
 */
QueryScheduleConferenceResponse Client::queryScheduleConference(const QueryScheduleConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryScheduleConferenceHeaders headers = QueryScheduleConferenceHeaders();
  return queryScheduleConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询预约会议历史会议信息
 *
 * @param tmpReq QueryScheduleConferenceInfoRequest
 * @param tmpHeader QueryScheduleConferenceInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryScheduleConferenceInfoResponse
 */
QueryScheduleConferenceInfoResponse Client::queryScheduleConferenceInfoWithOptions(const QueryScheduleConferenceInfoRequest &tmpReq, const QueryScheduleConferenceInfoHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryScheduleConferenceInfoShrinkRequest request = QueryScheduleConferenceInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryScheduleConferenceInfoShrinkHeaders headers = QueryScheduleConferenceInfoShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasScheduleConferenceId()) {
    body["ScheduleConferenceId"] = request.scheduleConferenceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryScheduleConferenceInfo"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/queryScheduleConferenceInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryScheduleConferenceInfoResponse>();
}

/**
 * @summary 查询预约会议历史会议信息
 *
 * @param request QueryScheduleConferenceInfoRequest
 * @return QueryScheduleConferenceInfoResponse
 */
QueryScheduleConferenceInfoResponse Client::queryScheduleConferenceInfo(const QueryScheduleConferenceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryScheduleConferenceInfoHeaders headers = QueryScheduleConferenceInfoHeaders();
  return queryScheduleConferenceInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 查询员工勋章列表
 *
 * @param tmpReq QueryUserHonorsRequest
 * @param tmpHeader QueryUserHonorsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserHonorsResponse
 */
QueryUserHonorsResponse Client::queryUserHonorsWithOptions(const QueryUserHonorsRequest &tmpReq, const QueryUserHonorsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryUserHonorsShrinkRequest request = QueryUserHonorsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  QueryUserHonorsShrinkHeaders headers = QueryUserHonorsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasMaxResults()) {
    body["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["nextToken"] = request.nextToken();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryUserHonors"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/queryUserHonors")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserHonorsResponse>();
}

/**
 * @summary 查询员工勋章列表
 *
 * @param request QueryUserHonorsRequest
 * @return QueryUserHonorsResponse
 */
QueryUserHonorsResponse Client::queryUserHonors(const QueryUserHonorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryUserHonorsHeaders headers = QueryUserHonorsHeaders();
  return queryUserHonorsWithOptions(request, headers, runtime);
}

/**
 * @summary 收回勋章
 *
 * @param tmpReq RecallHonorRequest
 * @param tmpHeader RecallHonorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecallHonorResponse
 */
RecallHonorResponse Client::recallHonorWithOptions(const RecallHonorRequest &tmpReq, const RecallHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RecallHonorShrinkRequest request = RecallHonorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  RecallHonorShrinkHeaders headers = RecallHonorShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasHonorId()) {
    body["honorId"] = request.honorId();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RecallHonor"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/recallHonor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecallHonorResponse>();
}

/**
 * @summary 收回勋章
 *
 * @param request RecallHonorRequest
 * @return RecallHonorResponse
 */
RecallHonorResponse Client::recallHonor(const RecallHonorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RecallHonorHeaders headers = RecallHonorHeaders();
  return recallHonorWithOptions(request, headers, runtime);
}

/**
 * @summary 获取日志接收人员列表
 *
 * @param tmpReq ReceiverListReportRequest
 * @param tmpHeader ReceiverListReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReceiverListReportResponse
 */
ReceiverListReportResponse Client::receiverListReportWithOptions(const ReceiverListReportRequest &tmpReq, const ReceiverListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReceiverListReportShrinkRequest request = ReceiverListReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  ReceiverListReportShrinkHeaders headers = ReceiverListReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOffset()) {
    body["Offset"] = request.offset();
  }

  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReceiverListReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/receiverListReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReceiverListReportResponse>();
}

/**
 * @summary 获取日志接收人员列表
 *
 * @param request ReceiverListReportRequest
 * @return ReceiverListReportResponse
 */
ReceiverListReportResponse Client::receiverListReport(const ReceiverListReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ReceiverListReportHeaders headers = ReceiverListReportHeaders();
  return receiverListReportWithOptions(request, headers, runtime);
}

/**
 * @summary 转交任务
 *
 * @param request RedirectTaskRequest
 * @param tmpHeader RedirectTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RedirectTaskResponse
 */
RedirectTaskResponse Client::redirectTaskWithOptions(const RedirectTaskRequest &request, const RedirectTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  RedirectTaskShrinkHeaders headers = RedirectTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasByManager()) {
    body["ByManager"] = request.byManager();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasNowActionExecutorId()) {
    body["NowActionExecutorId"] = request.nowActionExecutorId();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RedirectTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/redirectTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RedirectTaskResponse>();
}

/**
 * @summary 转交任务
 *
 * @param request RedirectTaskRequest
 * @return RedirectTaskResponse
 */
RedirectTaskResponse Client::redirectTask(const RedirectTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RedirectTaskHeaders headers = RedirectTaskHeaders();
  return redirectTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 删除日程参与者
 *
 * @param tmpReq RemoveAttendeeRequest
 * @param tmpHeader RemoveAttendeeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAttendeeResponse
 */
RemoveAttendeeResponse Client::removeAttendeeWithOptions(const RemoveAttendeeRequest &tmpReq, const RemoveAttendeeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveAttendeeShrinkRequest request = RemoveAttendeeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  RemoveAttendeeShrinkHeaders headers = RemoveAttendeeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasAttendeesToRemove()) {
    request.setAttendeesToRemoveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.attendeesToRemove(), "AttendeesToRemove", "json"));
  }

  json body = {};
  if (!!request.hasAttendeesToRemoveShrink()) {
    body["AttendeesToRemove"] = request.attendeesToRemoveShrink();
  }

  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveAttendee"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/removeAttendee")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAttendeeResponse>();
}

/**
 * @summary 删除日程参与者
 *
 * @param request RemoveAttendeeRequest
 * @return RemoveAttendeeResponse
 */
RemoveAttendeeResponse Client::removeAttendee(const RemoveAttendeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveAttendeeHeaders headers = RemoveAttendeeHeaders();
  return removeAttendeeWithOptions(request, headers, runtime);
}

/**
 * @summary 取消预定会议室
 *
 * @param tmpReq RemoveMeetingRoomsRequest
 * @param tmpHeader RemoveMeetingRoomsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveMeetingRoomsResponse
 */
RemoveMeetingRoomsResponse Client::removeMeetingRoomsWithOptions(const RemoveMeetingRoomsRequest &tmpReq, const RemoveMeetingRoomsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveMeetingRoomsShrinkRequest request = RemoveMeetingRoomsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  RemoveMeetingRoomsShrinkHeaders headers = RemoveMeetingRoomsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMeetingRoomsToRemove()) {
    request.setMeetingRoomsToRemoveShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.meetingRoomsToRemove(), "MeetingRoomsToRemove", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasMeetingRoomsToRemoveShrink()) {
    body["MeetingRoomsToRemove"] = request.meetingRoomsToRemoveShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveMeetingRooms"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/removeMeetingRooms")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveMeetingRoomsResponse>();
}

/**
 * @summary 取消预定会议室
 *
 * @param request RemoveMeetingRoomsRequest
 * @return RemoveMeetingRoomsResponse
 */
RemoveMeetingRoomsResponse Client::removeMeetingRooms(const RemoveMeetingRoomsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RemoveMeetingRoomsHeaders headers = RemoveMeetingRoomsHeaders();
  return removeMeetingRoomsWithOptions(request, headers, runtime);
}

/**
 * @summary 设置日程响应邀请状态
 *
 * @param tmpReq RespondEventRequest
 * @param tmpHeader RespondEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RespondEventResponse
 */
RespondEventResponse Client::respondEventWithOptions(const RespondEventRequest &tmpReq, const RespondEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RespondEventShrinkRequest request = RespondEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  RespondEventShrinkHeaders headers = RespondEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasEventId()) {
    body["EventId"] = request.eventId();
  }

  if (!!request.hasResponseStatus()) {
    body["ResponseStatus"] = request.responseStatus();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RespondEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/respondEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RespondEventResponse>();
}

/**
 * @summary 设置日程响应邀请状态
 *
 * @param request RespondEventRequest
 * @return RespondEventResponse
 */
RespondEventResponse Client::respondEvent(const RespondEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RespondEventHeaders headers = RespondEventHeaders();
  return respondEventWithOptions(request, headers, runtime);
}

/**
 * @summary 查询运行
 *
 * @param request RetrieveRunRequest
 * @param headers RetrieveRunHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveRunResponse
 */
RetrieveRunResponse Client::retrieveRunWithOptions(const RetrieveRunRequest &request, const RetrieveRunHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAssistantId()) {
    body["assistantId"] = request.assistantId();
  }

  if (!!request.hasOriginalAssistantId()) {
    body["originalAssistantId"] = request.originalAssistantId();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.runId();
  }

  if (!!request.hasSourceIdOfOriginalAssistantId()) {
    body["sourceIdOfOriginalAssistantId"] = request.sourceIdOfOriginalAssistantId();
  }

  if (!!request.hasSourceTypeOfOriginalAssistantId()) {
    body["sourceTypeOfOriginalAssistantId"] = request.sourceTypeOfOriginalAssistantId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountId()) {
    realHeaders["accountId"] = Darabonba::Convert::stringVal(headers.accountId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetrieveRun"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ai/v1/assistant/retrieveRun")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveRunResponse>();
}

/**
 * @summary 查询运行
 *
 * @param request RetrieveRunRequest
 * @return RetrieveRunResponse
 */
RetrieveRunResponse Client::retrieveRun(const RetrieveRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  RetrieveRunHeaders headers = RetrieveRunHeaders();
  return retrieveRunWithOptions(request, headers, runtime);
}

/**
 * @summary 保存日志内容
 *
 * @param tmpReq SaveContentRequest
 * @param tmpHeader SaveContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContentResponse
 */
SaveContentResponse Client::saveContentWithOptions(const SaveContentRequest &tmpReq, const SaveContentHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SaveContentShrinkRequest request = SaveContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SaveContentShrinkHeaders headers = SaveContentShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContents()) {
    request.setContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contents(), "Contents", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContentsShrink()) {
    body["Contents"] = request.contentsShrink();
  }

  if (!!request.hasDdFrom()) {
    body["DdFrom"] = request.ddFrom();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveContent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/saveContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContentResponse>();
}

/**
 * @summary 保存日志内容
 *
 * @param request SaveContentRequest
 * @return SaveContentResponse
 */
SaveContentResponse Client::saveContent(const SaveContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SaveContentHeaders headers = SaveContentHeaders();
  return saveContentWithOptions(request, headers, runtime);
}

/**
 * @summary 保存表单数据
 *
 * @param request SaveFormDataRequest
 * @param tmpHeader SaveFormDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveFormDataResponse
 */
SaveFormDataResponse Client::saveFormDataWithOptions(const SaveFormDataRequest &request, const SaveFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SaveFormDataShrinkHeaders headers = SaveFormDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormDataJson()) {
    body["FormDataJson"] = request.formDataJson();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveFormData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/saveFormData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveFormDataResponse>();
}

/**
 * @summary 保存表单数据
 *
 * @param request SaveFormDataRequest
 * @return SaveFormDataResponse
 */
SaveFormDataResponse Client::saveFormData(const SaveFormDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SaveFormDataHeaders headers = SaveFormDataHeaders();
  return saveFormDataWithOptions(request, headers, runtime);
}

/**
 * @summary 提交表单或流程实例下的评论
 *
 * @param request SaveFormRemarkRequest
 * @param tmpHeader SaveFormRemarkHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveFormRemarkResponse
 */
SaveFormRemarkResponse Client::saveFormRemarkWithOptions(const SaveFormRemarkRequest &request, const SaveFormRemarkHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SaveFormRemarkShrinkHeaders headers = SaveFormRemarkShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasAtUserId()) {
    body["AtUserId"] = request.atUserId();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasFormInstanceId()) {
    body["FormInstanceId"] = request.formInstanceId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasReplyId()) {
    body["ReplyId"] = request.replyId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SaveFormRemark"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/saveFormRemark")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveFormRemarkResponse>();
}

/**
 * @summary 提交表单或流程实例下的评论
 *
 * @param request SaveFormRemarkRequest
 * @return SaveFormRemarkResponse
 */
SaveFormRemarkResponse Client::saveFormRemark(const SaveFormRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SaveFormRemarkHeaders headers = SaveFormRemarkHeaders();
  return saveFormRemarkWithOptions(request, headers, runtime);
}

/**
 * @summary 获取员工组件的值
 *
 * @param request SearchEmployeeFieldValuesRequest
 * @param tmpHeader SearchEmployeeFieldValuesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEmployeeFieldValuesResponse
 */
SearchEmployeeFieldValuesResponse Client::searchEmployeeFieldValuesWithOptions(const SearchEmployeeFieldValuesRequest &request, const SearchEmployeeFieldValuesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchEmployeeFieldValuesShrinkHeaders headers = SearchEmployeeFieldValuesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasSearchFieldJson()) {
    body["SearchFieldJson"] = request.searchFieldJson();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasTargetFieldJson()) {
    body["TargetFieldJson"] = request.targetFieldJson();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchEmployeeFieldValues"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/searchEmployeeFieldValues")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchEmployeeFieldValuesResponse>();
}

/**
 * @summary 获取员工组件的值
 *
 * @param request SearchEmployeeFieldValuesRequest
 * @return SearchEmployeeFieldValuesResponse
 */
SearchEmployeeFieldValuesResponse Client::searchEmployeeFieldValues(const SearchEmployeeFieldValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchEmployeeFieldValuesHeaders headers = SearchEmployeeFieldValuesHeaders();
  return searchEmployeeFieldValuesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取多个表单实例ID
 *
 * @param request SearchFormDataIdListRequest
 * @param tmpHeader SearchFormDataIdListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchFormDataIdListResponse
 */
SearchFormDataIdListResponse Client::searchFormDataIdListWithOptions(const SearchFormDataIdListRequest &request, const SearchFormDataIdListHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchFormDataIdListShrinkHeaders headers = SearchFormDataIdListShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchFieldJson()) {
    body["SearchFieldJson"] = request.searchFieldJson();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchFormDataIdList"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/searchFormDataIdList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchFormDataIdListResponse>();
}

/**
 * @summary 获取多个表单实例ID
 *
 * @param request SearchFormDataIdListRequest
 * @return SearchFormDataIdListResponse
 */
SearchFormDataIdListResponse Client::searchFormDataIdList(const SearchFormDataIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchFormDataIdListHeaders headers = SearchFormDataIdListHeaders();
  return searchFormDataIdListWithOptions(request, headers, runtime);
}

/**
 * @summary 通过高级查询条件获取表单实例数据（包括子表单组件数据）
 *
 * @param request SearchFormDataSecondGenerationRequest
 * @param tmpHeader SearchFormDataSecondGenerationHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchFormDataSecondGenerationResponse
 */
SearchFormDataSecondGenerationResponse Client::searchFormDataSecondGenerationWithOptions(const SearchFormDataSecondGenerationRequest &request, const SearchFormDataSecondGenerationHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchFormDataSecondGenerationShrinkHeaders headers = SearchFormDataSecondGenerationShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOrderConfigJson()) {
    body["OrderConfigJson"] = request.orderConfigJson();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchCondition()) {
    body["SearchCondition"] = request.searchCondition();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchFormDataSecondGeneration"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/searchFormDataSecondGeneration")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchFormDataSecondGenerationResponse>();
}

/**
 * @summary 通过高级查询条件获取表单实例数据（包括子表单组件数据）
 *
 * @param request SearchFormDataSecondGenerationRequest
 * @return SearchFormDataSecondGenerationResponse
 */
SearchFormDataSecondGenerationResponse Client::searchFormDataSecondGeneration(const SearchFormDataSecondGenerationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchFormDataSecondGenerationHeaders headers = SearchFormDataSecondGenerationHeaders();
  return searchFormDataSecondGenerationWithOptions(request, headers, runtime);
}

/**
 * @summary 通过高级查询条件获取表单实例数据（不包括子表单组件数据）
 *
 * @param request SearchFormDataSecondGenerationNoTableFieldRequest
 * @param tmpHeader SearchFormDataSecondGenerationNoTableFieldHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchFormDataSecondGenerationNoTableFieldResponse
 */
SearchFormDataSecondGenerationNoTableFieldResponse Client::searchFormDataSecondGenerationNoTableFieldWithOptions(const SearchFormDataSecondGenerationNoTableFieldRequest &request, const SearchFormDataSecondGenerationNoTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchFormDataSecondGenerationNoTableFieldShrinkHeaders headers = SearchFormDataSecondGenerationNoTableFieldShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOrderConfigJson()) {
    body["OrderConfigJson"] = request.orderConfigJson();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchCondition()) {
    body["SearchCondition"] = request.searchCondition();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchFormDataSecondGenerationNoTableField"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/searchFormDataSecondGenerationNoTableField")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchFormDataSecondGenerationNoTableFieldResponse>();
}

/**
 * @summary 通过高级查询条件获取表单实例数据（不包括子表单组件数据）
 *
 * @param request SearchFormDataSecondGenerationNoTableFieldRequest
 * @return SearchFormDataSecondGenerationNoTableFieldResponse
 */
SearchFormDataSecondGenerationNoTableFieldResponse Client::searchFormDataSecondGenerationNoTableField(const SearchFormDataSecondGenerationNoTableFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchFormDataSecondGenerationNoTableFieldHeaders headers = SearchFormDataSecondGenerationNoTableFieldHeaders();
  return searchFormDataSecondGenerationNoTableFieldWithOptions(request, headers, runtime);
}

/**
 * @summary 查询表单实例数据
 *
 * @param request SearchFormDatasRequest
 * @param tmpHeader SearchFormDatasHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchFormDatasResponse
 */
SearchFormDatasResponse Client::searchFormDatasWithOptions(const SearchFormDatasRequest &request, const SearchFormDatasHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchFormDatasShrinkHeaders headers = SearchFormDatasShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasCreateFromTimeGMT()) {
    body["CreateFromTimeGMT"] = request.createFromTimeGMT();
  }

  if (!!request.hasCreateToTimeGMT()) {
    body["CreateToTimeGMT"] = request.createToTimeGMT();
  }

  if (!!request.hasCurrentPage()) {
    body["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasDynamicOrder()) {
    body["DynamicOrder"] = request.dynamicOrder();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasModifiedFromTimeGMT()) {
    body["ModifiedFromTimeGMT"] = request.modifiedFromTimeGMT();
  }

  if (!!request.hasModifiedToTimeGMT()) {
    body["ModifiedToTimeGMT"] = request.modifiedToTimeGMT();
  }

  if (!!request.hasOriginatorId()) {
    body["OriginatorId"] = request.originatorId();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchFieldJson()) {
    body["SearchFieldJson"] = request.searchFieldJson();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchFormDatas"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/searchFormDatas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchFormDatasResponse>();
}

/**
 * @summary 查询表单实例数据
 *
 * @param request SearchFormDatasRequest
 * @return SearchFormDatasResponse
 */
SearchFormDatasResponse Client::searchFormDatas(const SearchFormDatasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchFormDatasHeaders headers = SearchFormDatasHeaders();
  return searchFormDatasWithOptions(request, headers, runtime);
}

/**
 * @summary 根据关键词搜索企业内部群
 *
 * @param request SearchInnerGroupsRequest
 * @param tmpHeader SearchInnerGroupsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchInnerGroupsResponse
 */
SearchInnerGroupsResponse Client::searchInnerGroupsWithOptions(const SearchInnerGroupsRequest &request, const SearchInnerGroupsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SearchInnerGroupsShrinkHeaders headers = SearchInnerGroupsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasSearchKey()) {
    body["SearchKey"] = request.searchKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchInnerGroups"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/im/searchInnerGroups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchInnerGroupsResponse>();
}

/**
 * @summary 根据关键词搜索企业内部群
 *
 * @param request SearchInnerGroupsRequest
 * @return SearchInnerGroupsResponse
 */
SearchInnerGroupsResponse Client::searchInnerGroups(const SearchInnerGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchInnerGroupsHeaders headers = SearchInnerGroupsHeaders();
  return searchInnerGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 发送钉钉Banner通知
 *
 * @param tmpReq SendBannerRequest
 * @param tmpHeader SendBannerHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendBannerResponse
 */
SendBannerResponse Client::sendBannerWithOptions(const SendBannerRequest &tmpReq, const SendBannerHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendBannerShrinkRequest request = SendBannerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SendBannerShrinkHeaders headers = SendBannerShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContentShrink()) {
    body["Content"] = request.contentShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendBanner"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/sendBanner")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendBannerResponse>();
}

/**
 * @summary 发送钉钉Banner通知
 *
 * @param request SendBannerRequest
 * @return SendBannerResponse
 */
SendBannerResponse Client::sendBanner(const SendBannerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendBannerHeaders headers = SendBannerHeaders();
  return sendBannerWithOptions(request, headers, runtime);
}

/**
 * @summary 发送钉钉封屏弹窗
 *
 * @param tmpReq SendPopupRequest
 * @param tmpHeader SendPopupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendPopupResponse
 */
SendPopupResponse Client::sendPopupWithOptions(const SendPopupRequest &tmpReq, const SendPopupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendPopupShrinkRequest request = SendPopupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SendPopupShrinkHeaders headers = SendPopupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContentShrink()) {
    body["Content"] = request.contentShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendPopup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/sendPopup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendPopupResponse>();
}

/**
 * @summary 发送钉钉封屏弹窗
 *
 * @param request SendPopupRequest
 * @return SendPopupResponse
 */
SendPopupResponse Client::sendPopup(const SendPopupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendPopupHeaders headers = SendPopupHeaders();
  return sendPopupWithOptions(request, headers, runtime);
}

/**
 * @summary 发送钉钉搜索底纹
 *
 * @param tmpReq SendSearchShadeRequest
 * @param tmpHeader SendSearchShadeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSearchShadeResponse
 */
SendSearchShadeResponse Client::sendSearchShadeWithOptions(const SendSearchShadeRequest &tmpReq, const SendSearchShadeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendSearchShadeShrinkRequest request = SendSearchShadeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SendSearchShadeShrinkHeaders headers = SendSearchShadeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasContentShrink()) {
    body["Content"] = request.contentShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendSearchShade"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/watt/sendSearchShade")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSearchShadeResponse>();
}

/**
 * @summary 发送钉钉搜索底纹
 *
 * @param request SendSearchShadeRequest
 * @return SendSearchShadeResponse
 */
SendSearchShadeResponse Client::sendSearchShade(const SendSearchShadeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendSearchShadeHeaders headers = SendSearchShadeHeaders();
  return sendSearchShadeWithOptions(request, headers, runtime);
}

/**
 * @summary 指定列隐藏
 *
 * @param tmpReq SetColumnsVisibilityRequest
 * @param tmpHeader SetColumnsVisibilityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetColumnsVisibilityResponse
 */
SetColumnsVisibilityResponse Client::setColumnsVisibilityWithOptions(const SetColumnsVisibilityRequest &tmpReq, const SetColumnsVisibilityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetColumnsVisibilityShrinkRequest request = SetColumnsVisibilityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SetColumnsVisibilityShrinkHeaders headers = SetColumnsVisibilityShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasColumn()) {
    body["Column"] = request.column();
  }

  if (!!request.hasColumnCount()) {
    body["ColumnCount"] = request.columnCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.visibility();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetColumnsVisibility"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/setColumnsVisibility")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetColumnsVisibilityResponse>();
}

/**
 * @summary 指定列隐藏
 *
 * @param request SetColumnsVisibilityRequest
 * @return SetColumnsVisibilityResponse
 */
SetColumnsVisibilityResponse Client::setColumnsVisibility(const SetColumnsVisibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SetColumnsVisibilityHeaders headers = SetColumnsVisibilityHeaders();
  return setColumnsVisibilityWithOptions(request, headers, runtime);
}

/**
 * @summary 设置联席主持人
 *
 * @param tmpReq SetConferenceHostsRequest
 * @param tmpHeader SetConferenceHostsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetConferenceHostsResponse
 */
SetConferenceHostsResponse Client::setConferenceHostsWithOptions(const SetConferenceHostsRequest &tmpReq, const SetConferenceHostsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetConferenceHostsShrinkRequest request = SetConferenceHostsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SetConferenceHostsShrinkHeaders headers = SetConferenceHostsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIds(), "UserIds", "json"));
  }

  json body = {};
  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["UserIds"] = request.userIdsShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetConferenceHosts"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/setConferenceHosts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetConferenceHostsResponse>();
}

/**
 * @summary 设置联席主持人
 *
 * @param request SetConferenceHostsRequest
 * @return SetConferenceHostsResponse
 */
SetConferenceHostsResponse Client::setConferenceHosts(const SetConferenceHostsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SetConferenceHostsHeaders headers = SetConferenceHostsHeaders();
  return setConferenceHostsWithOptions(request, headers, runtime);
}

/**
 * @summary 指定行隐藏
 *
 * @param tmpReq SetRowsVisibilityRequest
 * @param tmpHeader SetRowsVisibilityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRowsVisibilityResponse
 */
SetRowsVisibilityResponse Client::setRowsVisibilityWithOptions(const SetRowsVisibilityRequest &tmpReq, const SetRowsVisibilityHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetRowsVisibilityShrinkRequest request = SetRowsVisibilityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SetRowsVisibilityShrinkHeaders headers = SetRowsVisibilityShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasRow()) {
    body["Row"] = request.row();
  }

  if (!!request.hasRowCount()) {
    body["RowCount"] = request.rowCount();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.visibility();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetRowsVisibility"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/setRowsVisibility")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRowsVisibilityResponse>();
}

/**
 * @summary 指定行隐藏
 *
 * @param request SetRowsVisibilityRequest
 * @return SetRowsVisibilityResponse
 */
SetRowsVisibilityResponse Client::setRowsVisibility(const SetRowsVisibilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SetRowsVisibilityHeaders headers = SetRowsVisibilityHeaders();
  return setRowsVisibilityWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用户发送日志的概要信息
 *
 * @param tmpReq SimpleListReportRequest
 * @param tmpHeader SimpleListReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SimpleListReportResponse
 */
SimpleListReportResponse Client::simpleListReportWithOptions(const SimpleListReportRequest &tmpReq, const SimpleListReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SimpleListReportShrinkRequest request = SimpleListReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SimpleListReportShrinkHeaders headers = SimpleListReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCursor()) {
    body["Cursor"] = request.cursor();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SimpleListReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/simpleListReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SimpleListReportResponse>();
}

/**
 * @summary 获取用户发送日志的概要信息
 *
 * @param request SimpleListReportRequest
 * @return SimpleListReportResponse
 */
SimpleListReportResponse Client::simpleListReport(const SimpleListReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SimpleListReportHeaders headers = SimpleListReportHeaders();
  return simpleListReportWithOptions(request, headers, runtime);
}

/**
 * @summary 开启视频会议云录制
 *
 * @param tmpReq StartCloudRecordRequest
 * @param tmpHeader StartCloudRecordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCloudRecordResponse
 */
StartCloudRecordResponse Client::startCloudRecordWithOptions(const StartCloudRecordRequest &tmpReq, const StartCloudRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartCloudRecordShrinkRequest request = StartCloudRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StartCloudRecordShrinkHeaders headers = StartCloudRecordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMode()) {
    body["Mode"] = request.mode();
  }

  if (!!request.hasSmallWindowPosition()) {
    body["SmallWindowPosition"] = request.smallWindowPosition();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartCloudRecord"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/startCloudRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCloudRecordResponse>();
}

/**
 * @summary 开启视频会议云录制
 *
 * @param request StartCloudRecordRequest
 * @return StartCloudRecordResponse
 */
StartCloudRecordResponse Client::startCloudRecord(const StartCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartCloudRecordHeaders headers = StartCloudRecordHeaders();
  return startCloudRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 发起宜搭审批流程
 *
 * @param request StartInstanceRequest
 * @param tmpHeader StartInstanceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const StartInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  StartInstanceShrinkHeaders headers = StartInstanceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasDepartmentId()) {
    body["DepartmentId"] = request.departmentId();
  }

  if (!!request.hasFormDataJson()) {
    body["FormDataJson"] = request.formDataJson();
  }

  if (!!request.hasFormUuid()) {
    body["FormUuid"] = request.formUuid();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessCode()) {
    body["ProcessCode"] = request.processCode();
  }

  if (!!request.hasProcessData()) {
    body["ProcessData"] = request.processData();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/startInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 发起宜搭审批流程
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartInstanceHeaders headers = StartInstanceHeaders();
  return startInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 开启闪记
 *
 * @param tmpReq StartMinutesRequest
 * @param tmpHeader StartMinutesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMinutesResponse
 */
StartMinutesResponse Client::startMinutesWithOptions(const StartMinutesRequest &tmpReq, const StartMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartMinutesShrinkRequest request = StartMinutesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StartMinutesShrinkHeaders headers = StartMinutesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  if (!!request.hasOwnerUserId()) {
    body["ownerUserId"] = request.ownerUserId();
  }

  if (!!request.hasRecordAudio()) {
    body["recordAudio"] = request.recordAudio();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartMinutes"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/startMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMinutesResponse>();
}

/**
 * @summary 开启闪记
 *
 * @param request StartMinutesRequest
 * @return StartMinutesResponse
 */
StartMinutesResponse Client::startMinutes(const StartMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StartMinutesHeaders headers = StartMinutesHeaders();
  return startMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取日志相关人员列表
 *
 * @param tmpReq StatisticsListByTypeReportRequest
 * @param tmpHeader StatisticsListByTypeReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StatisticsListByTypeReportResponse
 */
StatisticsListByTypeReportResponse Client::statisticsListByTypeReportWithOptions(const StatisticsListByTypeReportRequest &tmpReq, const StatisticsListByTypeReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StatisticsListByTypeReportShrinkRequest request = StatisticsListByTypeReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StatisticsListByTypeReportShrinkHeaders headers = StatisticsListByTypeReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasOffset()) {
    body["Offset"] = request.offset();
  }

  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StatisticsListByTypeReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/statisticsListByTypeReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StatisticsListByTypeReportResponse>();
}

/**
 * @summary 获取日志相关人员列表
 *
 * @param request StatisticsListByTypeReportRequest
 * @return StatisticsListByTypeReportResponse
 */
StatisticsListByTypeReportResponse Client::statisticsListByTypeReport(const StatisticsListByTypeReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StatisticsListByTypeReportHeaders headers = StatisticsListByTypeReportHeaders();
  return statisticsListByTypeReportWithOptions(request, headers, runtime);
}

/**
 * @summary 获取日志统计数据
 *
 * @param tmpReq StatisticsReportRequest
 * @param tmpHeader StatisticsReportHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StatisticsReportResponse
 */
StatisticsReportResponse Client::statisticsReportWithOptions(const StatisticsReportRequest &tmpReq, const StatisticsReportHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StatisticsReportShrinkRequest request = StatisticsReportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StatisticsReportShrinkHeaders headers = StatisticsReportShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasReportId()) {
    body["ReportId"] = request.reportId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StatisticsReport"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/log/statisticsReport")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StatisticsReportResponse>();
}

/**
 * @summary 获取日志统计数据
 *
 * @param request StatisticsReportRequest
 * @return StatisticsReportResponse
 */
StatisticsReportResponse Client::statisticsReport(const StatisticsReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StatisticsReportHeaders headers = StatisticsReportHeaders();
  return statisticsReportWithOptions(request, headers, runtime);
}

/**
 * @summary 停止视频会议云录制
 *
 * @param tmpReq StopCloudRecordRequest
 * @param tmpHeader StopCloudRecordHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecordWithOptions(const StopCloudRecordRequest &tmpReq, const StopCloudRecordHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopCloudRecordShrinkRequest request = StopCloudRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StopCloudRecordShrinkHeaders headers = StopCloudRecordShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopCloudRecord"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/stopCloudRecord")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCloudRecordResponse>();
}

/**
 * @summary 停止视频会议云录制
 *
 * @param request StopCloudRecordRequest
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecord(const StopCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopCloudRecordHeaders headers = StopCloudRecordHeaders();
  return stopCloudRecordWithOptions(request, headers, runtime);
}

/**
 * @summary 暂停闪记
 *
 * @param tmpReq StopMinutesRequest
 * @param tmpHeader StopMinutesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMinutesResponse
 */
StopMinutesResponse Client::stopMinutesWithOptions(const StopMinutesRequest &tmpReq, const StopMinutesHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopMinutesShrinkRequest request = StopMinutesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  StopMinutesShrinkHeaders headers = StopMinutesShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopMinutes"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/stopMinutes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMinutesResponse>();
}

/**
 * @summary 暂停闪记
 *
 * @param request StopMinutesRequest
 * @return StopMinutesResponse
 */
StopMinutesResponse Client::stopMinutes(const StopMinutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StopMinutesHeaders headers = StopMinutesHeaders();
  return stopMinutesWithOptions(request, headers, runtime);
}

/**
 * @summary 订阅公共日历
 *
 * @param request SubscribeCalendarRequest
 * @param tmpHeader SubscribeCalendarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeCalendarResponse
 */
SubscribeCalendarResponse Client::subscribeCalendarWithOptions(const SubscribeCalendarRequest &request, const SubscribeCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  SubscribeCalendarShrinkHeaders headers = SubscribeCalendarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubscribeCalendar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/subscribeCalendar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribeCalendarResponse>();
}

/**
 * @summary 订阅公共日历
 *
 * @param request SubscribeCalendarRequest
 * @return SubscribeCalendarResponse
 */
SubscribeCalendarResponse Client::subscribeCalendar(const SubscribeCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SubscribeCalendarHeaders headers = SubscribeCalendarHeaders();
  return subscribeCalendarWithOptions(request, headers, runtime);
}

/**
 * @summary 订阅文件变更事件
 *
 * @param tmpReq SubscribeEventRequest
 * @param tmpHeader SubscribeEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribeEventResponse
 */
SubscribeEventResponse Client::subscribeEventWithOptions(const SubscribeEventRequest &tmpReq, const SubscribeEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubscribeEventShrinkRequest request = SubscribeEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SubscribeEventShrinkHeaders headers = SubscribeEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasScope()) {
    body["Scope"] = request.scope();
  }

  if (!!request.hasScopeId()) {
    body["ScopeId"] = request.scopeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubscribeEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/subscribeEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribeEventResponse>();
}

/**
 * @summary 订阅文件变更事件
 *
 * @param request SubscribeEventRequest
 * @return SubscribeEventResponse
 */
SubscribeEventResponse Client::subscribeEvent(const SubscribeEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SubscribeEventHeaders headers = SubscribeEventHeaders();
  return subscribeEventWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq SwitchMainOrgRequest
 * @param tmpHeader SwitchMainOrgHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchMainOrgResponse
 */
SwitchMainOrgResponse Client::switchMainOrgWithOptions(const SwitchMainOrgRequest &tmpReq, const SwitchMainOrgHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SwitchMainOrgShrinkRequest request = SwitchMainOrgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SwitchMainOrgShrinkHeaders headers = SwitchMainOrgShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTargetOrgId()) {
    body["TargetOrgId"] = request.targetOrgId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SwitchMainOrg"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/user/switchMainOrg")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchMainOrgResponse>();
}

/**
 * @param request SwitchMainOrgRequest
 * @return SwitchMainOrgResponse
 */
SwitchMainOrgResponse Client::switchMainOrg(const SwitchMainOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SwitchMainOrgHeaders headers = SwitchMainOrgHeaders();
  return switchMainOrgWithOptions(request, headers, runtime);
}

/**
 * @summary 同步钉钉账号类型
 *
 * @param tmpReq SyncDingTypeRequest
 * @param tmpHeader SyncDingTypeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDingTypeResponse
 */
SyncDingTypeResponse Client::syncDingTypeWithOptions(const SyncDingTypeRequest &tmpReq, const SyncDingTypeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncDingTypeShrinkRequest request = SyncDingTypeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  SyncDingTypeShrinkHeaders headers = SyncDingTypeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDingType()) {
    body["DingType"] = request.dingType();
  }

  if (!!request.hasIsDimission()) {
    body["IsDimission"] = request.isDimission();
  }

  if (!!request.hasSource()) {
    body["Source"] = request.source();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkNo()) {
    body["WorkNo"] = request.workNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncDingType"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/indepding/syncDingType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDingTypeResponse>();
}

/**
 * @summary 同步钉钉账号类型
 *
 * @param request SyncDingTypeRequest
 * @return SyncDingTypeResponse
 */
SyncDingTypeResponse Client::syncDingType(const SyncDingTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SyncDingTypeHeaders headers = SyncDingTypeHeaders();
  return syncDingTypeWithOptions(request, headers, runtime);
}

/**
 * @summary 终止流程实例
 *
 * @param request TerminateInstanceRequest
 * @param tmpHeader TerminateInstanceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateInstanceResponse
 */
TerminateInstanceResponse Client::terminateInstanceWithOptions(const TerminateInstanceRequest &request, const TerminateInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  TerminateInstanceShrinkHeaders headers = TerminateInstanceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TerminateInstance"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/terminateInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateInstanceResponse>();
}

/**
 * @summary 终止流程实例
 *
 * @param request TerminateInstanceRequest
 * @return TerminateInstanceResponse
 */
TerminateInstanceResponse Client::terminateInstance(const TerminateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TerminateInstanceHeaders headers = TerminateInstanceHeaders();
  return terminateInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 转交工单
 *
 * @param tmpReq TransferTicketRequest
 * @param tmpHeader TransferTicketHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferTicketResponse
 */
TransferTicketResponse Client::transferTicketWithOptions(const TransferTicketRequest &tmpReq, const TransferTicketHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TransferTicketShrinkRequest request = TransferTicketShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  TransferTicketShrinkHeaders headers = TransferTicketShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasNotify()) {
    request.setNotifyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notify(), "Notify", "json"));
  }

  if (!!tmpReq.hasProcessorUserIds()) {
    request.setProcessorUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.processorUserIds(), "ProcessorUserIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasTicketMemo()) {
    request.setTicketMemoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketMemo(), "TicketMemo", "json"));
  }

  json body = {};
  if (!!request.hasNotifyShrink()) {
    body["Notify"] = request.notifyShrink();
  }

  if (!!request.hasOpenTeamId()) {
    body["OpenTeamId"] = request.openTeamId();
  }

  if (!!request.hasOpenTicketId()) {
    body["OpenTicketId"] = request.openTicketId();
  }

  if (!!request.hasProcessorUserIdsShrink()) {
    body["ProcessorUserIds"] = request.processorUserIdsShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTicketMemoShrink()) {
    body["TicketMemo"] = request.ticketMemoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TransferTicket"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ticket/transferTicket")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferTicketResponse>();
}

/**
 * @summary 转交工单
 *
 * @param request TransferTicketRequest
 * @return TransferTicketResponse
 */
TransferTicketResponse Client::transferTicket(const TransferTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TransferTicketHeaders headers = TransferTicketHeaders();
  return transferTicketWithOptions(request, headers, runtime);
}

/**
 * @summary 取消订阅公共日历
 *
 * @param request UnsubscribeCalendarRequest
 * @param tmpHeader UnsubscribeCalendarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeCalendarResponse
 */
UnsubscribeCalendarResponse Client::unsubscribeCalendarWithOptions(const UnsubscribeCalendarRequest &request, const UnsubscribeCalendarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  UnsubscribeCalendarShrinkHeaders headers = UnsubscribeCalendarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnsubscribeCalendar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/unsubscribeCalendar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnsubscribeCalendarResponse>();
}

/**
 * @summary 取消订阅公共日历
 *
 * @param request UnsubscribeCalendarRequest
 * @return UnsubscribeCalendarResponse
 */
UnsubscribeCalendarResponse Client::unsubscribeCalendar(const UnsubscribeCalendarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UnsubscribeCalendarHeaders headers = UnsubscribeCalendarHeaders();
  return unsubscribeCalendarWithOptions(request, headers, runtime);
}

/**
 * @summary 取消订阅文件变更事件
 *
 * @param tmpReq UnsubscribeEventRequest
 * @param tmpHeader UnsubscribeEventHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnsubscribeEventResponse
 */
UnsubscribeEventResponse Client::unsubscribeEventWithOptions(const UnsubscribeEventRequest &tmpReq, const UnsubscribeEventHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnsubscribeEventShrinkRequest request = UnsubscribeEventShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UnsubscribeEventShrinkHeaders headers = UnsubscribeEventShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasScope()) {
    body["Scope"] = request.scope();
  }

  if (!!request.hasScopeId()) {
    body["ScopeId"] = request.scopeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnsubscribeEvent"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/unsubscribeEvent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnsubscribeEventResponse>();
}

/**
 * @summary 取消订阅文件变更事件
 *
 * @param request UnsubscribeEventRequest
 * @return UnsubscribeEventResponse
 */
UnsubscribeEventResponse Client::unsubscribeEvent(const UnsubscribeEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UnsubscribeEventHeaders headers = UnsubscribeEventHeaders();
  return unsubscribeEventWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq UpdateAlidingAssistantRequest
 * @param tmpHeader UpdateAlidingAssistantHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlidingAssistantResponse
 */
UpdateAlidingAssistantResponse Client::updateAlidingAssistantWithOptions(const UpdateAlidingAssistantRequest &tmpReq, const UpdateAlidingAssistantHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAlidingAssistantShrinkRequest request = UpdateAlidingAssistantShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateAlidingAssistantShrinkHeaders headers = UpdateAlidingAssistantShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ext(), "Ext", "json"));
  }

  if (!!tmpReq.hasFeature()) {
    request.setFeatureShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.feature(), "Feature", "json"));
  }

  if (!!tmpReq.hasRecommendPrompts()) {
    request.setRecommendPromptsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recommendPrompts(), "RecommendPrompts", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAssistantId()) {
    body["AssistantId"] = request.assistantId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasExtShrink()) {
    body["Ext"] = request.extShrink();
  }

  if (!!request.hasFallbackContent()) {
    body["FallbackContent"] = request.fallbackContent();
  }

  if (!!request.hasFeatureShrink()) {
    body["Feature"] = request.featureShrink();
  }

  if (!!request.hasIcon()) {
    body["Icon"] = request.icon();
  }

  if (!!request.hasInstructions()) {
    body["Instructions"] = request.instructions();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecommendPromptsShrink()) {
    body["RecommendPrompts"] = request.recommendPromptsShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWelcomeContent()) {
    body["WelcomeContent"] = request.welcomeContent();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlidingAssistant"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/aiagent/updateAlidingAssistant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlidingAssistantResponse>();
}

/**
 * @param request UpdateAlidingAssistantRequest
 * @return UpdateAlidingAssistantResponse
 */
UpdateAlidingAssistantResponse Client::updateAlidingAssistant(const UpdateAlidingAssistantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateAlidingAssistantHeaders headers = UpdateAlidingAssistantHeaders();
  return updateAlidingAssistantWithOptions(request, headers, runtime);
}

/**
 * @param tmpReq UpdateConvExtensionRequest
 * @param tmpHeader UpdateConvExtensionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConvExtensionResponse
 */
UpdateConvExtensionResponse Client::updateConvExtensionWithOptions(const UpdateConvExtensionRequest &tmpReq, const UpdateConvExtensionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConvExtensionShrinkRequest request = UpdateConvExtensionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateConvExtensionShrinkHeaders headers = UpdateConvExtensionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasStaffIdList()) {
    request.setStaffIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.staffIdList(), "StaffIdList", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMobileUrl()) {
    body["MobileUrl"] = request.mobileUrl();
  }

  if (!!request.hasPcUrl()) {
    body["PcUrl"] = request.pcUrl();
  }

  if (!!request.hasStaffIdListShrink()) {
    body["StaffIdList"] = request.staffIdListShrink();
  }

  if (!!request.hasSystemUid()) {
    body["SystemUid"] = request.systemUid();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConvExtension"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/conversation/updateConvExtension")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConvExtensionResponse>();
}

/**
 * @param request UpdateConvExtensionRequest
 * @return UpdateConvExtensionResponse
 */
UpdateConvExtensionResponse Client::updateConvExtension(const UpdateConvExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateConvExtensionHeaders headers = UpdateConvExtensionHeaders();
  return updateConvExtensionWithOptions(request, headers, runtime);
}

/**
 * @summary 更新表单数据
 *
 * @param request UpdateFormDataRequest
 * @param tmpHeader UpdateFormDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFormDataResponse
 */
UpdateFormDataResponse Client::updateFormDataWithOptions(const UpdateFormDataRequest &request, const UpdateFormDataHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  UpdateFormDataShrinkHeaders headers = UpdateFormDataShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasFormInstanceId()) {
    body["FormInstanceId"] = request.formInstanceId();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasUpdateFormDataJson()) {
    body["UpdateFormDataJson"] = request.updateFormDataJson();
  }

  if (!!request.hasUseLatestVersion()) {
    body["UseLatestVersion"] = request.useLatestVersion();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateFormData"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/updateFormData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFormDataResponse>();
}

/**
 * @summary 更新表单数据
 *
 * @param request UpdateFormDataRequest
 * @return UpdateFormDataResponse
 */
UpdateFormDataResponse Client::updateFormData(const UpdateFormDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateFormDataHeaders headers = UpdateFormDataHeaders();
  return updateFormDataWithOptions(request, headers, runtime);
}

/**
 * @summary 更新流程实例
 *
 * @param request UpdateInstanceRequest
 * @param tmpHeader UpdateInstanceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstanceWithOptions(const UpdateInstanceRequest &request, const UpdateInstanceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  UpdateInstanceShrinkHeaders headers = UpdateInstanceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.processInstanceId();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  if (!!request.hasUpdateFormDataJson()) {
    body["UpdateFormDataJson"] = request.updateFormDataJson();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateInstance"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/updateInstance")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstanceResponse>();
}

/**
 * @summary 更新流程实例
 *
 * @param request UpdateInstanceRequest
 * @return UpdateInstanceResponse
 */
UpdateInstanceResponse Client::updateInstance(const UpdateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateInstanceHeaders headers = UpdateInstanceHeaders();
  return updateInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary 修改直播属性信息
 *
 * @param tmpReq UpdateLiveRequest
 * @param tmpHeader UpdateLiveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLiveResponse
 */
UpdateLiveResponse Client::updateLiveWithOptions(const UpdateLiveRequest &tmpReq, const UpdateLiveHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLiveShrinkRequest request = UpdateLiveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateLiveShrinkHeaders headers = UpdateLiveShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasCoverUrl()) {
    body["CoverUrl"] = request.coverUrl();
  }

  if (!!request.hasIntroduction()) {
    body["Introduction"] = request.introduction();
  }

  if (!!request.hasLiveId()) {
    body["LiveId"] = request.liveId();
  }

  if (!!request.hasPreEndTime()) {
    body["PreEndTime"] = request.preEndTime();
  }

  if (!!request.hasPreStartTime()) {
    body["PreStartTime"] = request.preStartTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateLive"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateLive")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLiveResponse>();
}

/**
 * @summary 修改直播属性信息
 *
 * @param request UpdateLiveRequest
 * @return UpdateLiveResponse
 */
UpdateLiveResponse Client::updateLive(const UpdateLiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateLiveHeaders headers = UpdateLiveHeaders();
  return updateLiveWithOptions(request, headers, runtime);
}

/**
 * @summary 更新会议室信息
 *
 * @param tmpReq UpdateMeetingRoomRequest
 * @param tmpHeader UpdateMeetingRoomHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMeetingRoomResponse
 */
UpdateMeetingRoomResponse Client::updateMeetingRoomWithOptions(const UpdateMeetingRoomRequest &tmpReq, const UpdateMeetingRoomHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMeetingRoomShrinkRequest request = UpdateMeetingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateMeetingRoomShrinkHeaders headers = UpdateMeetingRoomShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasReservationAuthority()) {
    request.setReservationAuthorityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.reservationAuthority(), "ReservationAuthority", "json"));
  }

  if (!!tmpReq.hasRoomLabelIds()) {
    request.setRoomLabelIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomLabelIds(), "RoomLabelIds", "json"));
  }

  if (!!tmpReq.hasRoomLocation()) {
    request.setRoomLocationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomLocation(), "RoomLocation", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasEnableCycleReservation()) {
    body["EnableCycleReservation"] = request.enableCycleReservation();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasIsvRoomId()) {
    body["IsvRoomId"] = request.isvRoomId();
  }

  if (!!request.hasReservationAuthorityShrink()) {
    body["ReservationAuthority"] = request.reservationAuthorityShrink();
  }

  if (!!request.hasRoomCapacity()) {
    body["RoomCapacity"] = request.roomCapacity();
  }

  if (!!request.hasRoomId()) {
    body["RoomId"] = request.roomId();
  }

  if (!!request.hasRoomLabelIdsShrink()) {
    body["RoomLabelIds"] = request.roomLabelIdsShrink();
  }

  if (!!request.hasRoomLocationShrink()) {
    body["RoomLocation"] = request.roomLocationShrink();
  }

  if (!!request.hasRoomName()) {
    body["RoomName"] = request.roomName();
  }

  if (!!request.hasRoomPicture()) {
    body["RoomPicture"] = request.roomPicture();
  }

  if (!!request.hasRoomStatus()) {
    body["RoomStatus"] = request.roomStatus();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMeetingRoom"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateMeetingRoom")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMeetingRoomResponse>();
}

/**
 * @summary 更新会议室信息
 *
 * @param request UpdateMeetingRoomRequest
 * @return UpdateMeetingRoomResponse
 */
UpdateMeetingRoomResponse Client::updateMeetingRoom(const UpdateMeetingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMeetingRoomHeaders headers = UpdateMeetingRoomHeaders();
  return updateMeetingRoomWithOptions(request, headers, runtime);
}

/**
 * @summary 更新会议室分组信息
 *
 * @param tmpReq UpdateMeetingRoomGroupRequest
 * @param tmpHeader UpdateMeetingRoomGroupHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMeetingRoomGroupResponse
 */
UpdateMeetingRoomGroupResponse Client::updateMeetingRoomGroupWithOptions(const UpdateMeetingRoomGroupRequest &tmpReq, const UpdateMeetingRoomGroupHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMeetingRoomGroupShrinkRequest request = UpdateMeetingRoomGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateMeetingRoomGroupShrinkHeaders headers = UpdateMeetingRoomGroupShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMeetingRoomGroup"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateMeetingRoomGroup")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMeetingRoomGroupResponse>();
}

/**
 * @summary 更新会议室分组信息
 *
 * @param request UpdateMeetingRoomGroupRequest
 * @return UpdateMeetingRoomGroupResponse
 */
UpdateMeetingRoomGroupResponse Client::updateMeetingRoomGroup(const UpdateMeetingRoomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMeetingRoomGroupHeaders headers = UpdateMeetingRoomGroupHeaders();
  return updateMeetingRoomGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 更新数据表
 *
 * @param tmpReq UpdateMultiDimTableRequest
 * @param tmpHeader UpdateMultiDimTableHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMultiDimTableResponse
 */
UpdateMultiDimTableResponse Client::updateMultiDimTableWithOptions(const UpdateMultiDimTableRequest &tmpReq, const UpdateMultiDimTableHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMultiDimTableShrinkRequest request = UpdateMultiDimTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateMultiDimTableShrinkHeaders headers = UpdateMultiDimTableShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMultiDimTable"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/updateMultiDimTable")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMultiDimTableResponse>();
}

/**
 * @summary 更新数据表
 *
 * @param request UpdateMultiDimTableRequest
 * @return UpdateMultiDimTableResponse
 */
UpdateMultiDimTableResponse Client::updateMultiDimTable(const UpdateMultiDimTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMultiDimTableHeaders headers = UpdateMultiDimTableHeaders();
  return updateMultiDimTableWithOptions(request, headers, runtime);
}

/**
 * @summary 更新字段
 *
 * @param tmpReq UpdateMultiDimTableFieldRequest
 * @param tmpHeader UpdateMultiDimTableFieldHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMultiDimTableFieldResponse
 */
UpdateMultiDimTableFieldResponse Client::updateMultiDimTableFieldWithOptions(const UpdateMultiDimTableFieldRequest &tmpReq, const UpdateMultiDimTableFieldHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMultiDimTableFieldShrinkRequest request = UpdateMultiDimTableFieldShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateMultiDimTableFieldShrinkHeaders headers = UpdateMultiDimTableFieldShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasProperty()) {
    request.setPropertyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.property(), "Property", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasFieldIdOrName()) {
    body["FieldIdOrName"] = request.fieldIdOrName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPropertyShrink()) {
    body["Property"] = request.propertyShrink();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMultiDimTableField"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/updateMultiDimTableField")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMultiDimTableFieldResponse>();
}

/**
 * @summary 更新字段
 *
 * @param request UpdateMultiDimTableFieldRequest
 * @return UpdateMultiDimTableFieldResponse
 */
UpdateMultiDimTableFieldResponse Client::updateMultiDimTableField(const UpdateMultiDimTableFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMultiDimTableFieldHeaders headers = UpdateMultiDimTableFieldHeaders();
  return updateMultiDimTableFieldWithOptions(request, headers, runtime);
}

/**
 * @summary 更新多行记录
 *
 * @param tmpReq UpdateMultiDimTableRecordsRequest
 * @param tmpHeader UpdateMultiDimTableRecordsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMultiDimTableRecordsResponse
 */
UpdateMultiDimTableRecordsResponse Client::updateMultiDimTableRecordsWithOptions(const UpdateMultiDimTableRecordsRequest &tmpReq, const UpdateMultiDimTableRecordsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMultiDimTableRecordsShrinkRequest request = UpdateMultiDimTableRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateMultiDimTableRecordsShrinkHeaders headers = UpdateMultiDimTableRecordsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasRecordIds()) {
    request.setRecordIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordIds(), "RecordIds", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasBaseId()) {
    body["BaseId"] = request.baseId();
  }

  if (!!request.hasRecordIdsShrink()) {
    body["RecordIds"] = request.recordIdsShrink();
  }

  if (!!request.hasSheetIdOrName()) {
    body["SheetIdOrName"] = request.sheetIdOrName();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMultiDimTableRecords"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/table/updateMultiDimTableRecords")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMultiDimTableRecordsResponse>();
}

/**
 * @summary 更新多行记录
 *
 * @param request UpdateMultiDimTableRecordsRequest
 * @return UpdateMultiDimTableRecordsResponse
 */
UpdateMultiDimTableRecordsResponse Client::updateMultiDimTableRecords(const UpdateMultiDimTableRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateMultiDimTableRecordsHeaders headers = UpdateMultiDimTableRecordsHeaders();
  return updateMultiDimTableRecordsWithOptions(request, headers, runtime);
}

/**
 * @summary 更新文件权限
 *
 * @param tmpReq UpdatePermissionRequest
 * @param tmpHeader UpdatePermissionHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePermissionResponse
 */
UpdatePermissionResponse Client::updatePermissionWithOptions(const UpdatePermissionRequest &tmpReq, const UpdatePermissionHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePermissionShrinkRequest request = UpdatePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdatePermissionShrinkHeaders headers = UpdatePermissionShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "Option", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasDentryUuid()) {
    body["DentryUuid"] = request.dentryUuid();
  }

  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasOptionShrink()) {
    body["Option"] = request.optionShrink();
  }

  if (!!request.hasRoleId()) {
    body["RoleId"] = request.roleId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePermission"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/updatePermission")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePermissionResponse>();
}

/**
 * @summary 更新文件权限
 *
 * @param request UpdatePermissionRequest
 * @return UpdatePermissionResponse
 */
UpdatePermissionResponse Client::updatePermission(const UpdatePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdatePermissionHeaders headers = UpdatePermissionHeaders();
  return updatePermissionWithOptions(request, headers, runtime);
}

/**
 * @summary 更新单元格区域
 *
 * @param tmpReq UpdateRangeRequest
 * @param tmpHeader UpdateRangeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRangeResponse
 */
UpdateRangeResponse Client::updateRangeWithOptions(const UpdateRangeRequest &tmpReq, const UpdateRangeHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRangeShrinkRequest request = UpdateRangeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateRangeShrinkHeaders headers = UpdateRangeShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasBackgroundColors()) {
    request.setBackgroundColorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.backgroundColors(), "BackgroundColors", "json"));
  }

  if (!!tmpReq.hasHyperlinks()) {
    request.setHyperlinksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hyperlinks(), "Hyperlinks", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.values(), "Values", "json"));
  }

  json body = {};
  if (!!request.hasBackgroundColorsShrink()) {
    body["BackgroundColors"] = request.backgroundColorsShrink();
  }

  if (!!request.hasHyperlinksShrink()) {
    body["Hyperlinks"] = request.hyperlinksShrink();
  }

  if (!!request.hasNumberFormat()) {
    body["NumberFormat"] = request.numberFormat();
  }

  if (!!request.hasRangeAddress()) {
    body["RangeAddress"] = request.rangeAddress();
  }

  if (!!request.hasSheetId()) {
    body["SheetId"] = request.sheetId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasValuesShrink()) {
    body["Values"] = request.valuesShrink();
  }

  if (!!request.hasWorkbookId()) {
    body["WorkbookId"] = request.workbookId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRange"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/updateRange")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRangeResponse>();
}

/**
 * @summary 更新单元格区域
 *
 * @param request UpdateRangeRequest
 * @return UpdateRangeResponse
 */
UpdateRangeResponse Client::updateRange(const UpdateRangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateRangeHeaders headers = UpdateRangeHeaders();
  return updateRangeWithOptions(request, headers, runtime);
}

/**
 * @summary 更新预约会议设置
 *
 * @param tmpReq UpdateScheduleConfSettingsRequest
 * @param tmpHeader UpdateScheduleConfSettingsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduleConfSettingsResponse
 */
UpdateScheduleConfSettingsResponse Client::updateScheduleConfSettingsWithOptions(const UpdateScheduleConfSettingsRequest &tmpReq, const UpdateScheduleConfSettingsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScheduleConfSettingsShrinkRequest request = UpdateScheduleConfSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateScheduleConfSettingsShrinkHeaders headers = UpdateScheduleConfSettingsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasScheduleConfSettingModel()) {
    request.setScheduleConfSettingModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfSettingModel(), "ScheduleConfSettingModel", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasScheduleConfSettingModelShrink()) {
    body["ScheduleConfSettingModel"] = request.scheduleConfSettingModelShrink();
  }

  if (!!request.hasScheduleConferenceId()) {
    body["ScheduleConferenceId"] = request.scheduleConferenceId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduleConfSettings"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateScheduleConfSettings")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduleConfSettingsResponse>();
}

/**
 * @summary 更新预约会议设置
 *
 * @param request UpdateScheduleConfSettingsRequest
 * @return UpdateScheduleConfSettingsResponse
 */
UpdateScheduleConfSettingsResponse Client::updateScheduleConfSettings(const UpdateScheduleConfSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateScheduleConfSettingsHeaders headers = UpdateScheduleConfSettingsHeaders();
  return updateScheduleConfSettingsWithOptions(request, headers, runtime);
}

/**
 * @summary 更新预约会议
 *
 * @param tmpReq UpdateScheduleConferenceRequest
 * @param tmpHeader UpdateScheduleConferenceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduleConferenceResponse
 */
UpdateScheduleConferenceResponse Client::updateScheduleConferenceWithOptions(const UpdateScheduleConferenceRequest &tmpReq, const UpdateScheduleConferenceHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScheduleConferenceShrinkRequest request = UpdateScheduleConferenceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateScheduleConferenceShrinkHeaders headers = UpdateScheduleConferenceShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasScheduleConferenceId()) {
    body["ScheduleConferenceId"] = request.scheduleConferenceId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduleConference"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateScheduleConference")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduleConferenceResponse>();
}

/**
 * @summary 更新预约会议
 *
 * @param request UpdateScheduleConferenceRequest
 * @return UpdateScheduleConferenceResponse
 */
UpdateScheduleConferenceResponse Client::updateScheduleConference(const UpdateScheduleConferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateScheduleConferenceHeaders headers = UpdateScheduleConferenceHeaders();
  return updateScheduleConferenceWithOptions(request, headers, runtime);
}

/**
 * @summary 更新状态
 *
 * @param tmpReq UpdateStatusRequest
 * @param tmpHeader UpdateStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStatusResponse
 */
UpdateStatusResponse Client::updateStatusWithOptions(const UpdateStatusRequest &tmpReq, const UpdateStatusHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStatusShrinkRequest request = UpdateStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateStatusShrinkHeaders headers = UpdateStatusShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasErrorLines()) {
    request.setErrorLinesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.errorLines(), "ErrorLines", "json"));
  }

  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasErrorLinesShrink()) {
    body["ErrorLines"] = request.errorLinesShrink();
  }

  if (!!request.hasImportSequence()) {
    body["ImportSequence"] = request.importSequence();
  }

  if (!!request.hasLanguage()) {
    body["Language"] = request.language();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasSystemToken()) {
    body["SystemToken"] = request.systemToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStatus"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/yida/updateStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStatusResponse>();
}

/**
 * @summary 更新状态
 *
 * @param request UpdateStatusRequest
 * @return UpdateStatusResponse
 */
UpdateStatusResponse Client::updateStatus(const UpdateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateStatusHeaders headers = UpdateStatusHeaders();
  return updateStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 更新订阅日历
 *
 * @param tmpReq UpdateSubscribedCalendarsRequest
 * @param tmpHeader UpdateSubscribedCalendarsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscribedCalendarsResponse
 */
UpdateSubscribedCalendarsResponse Client::updateSubscribedCalendarsWithOptions(const UpdateSubscribedCalendarsRequest &tmpReq, const UpdateSubscribedCalendarsHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubscribedCalendarsShrinkRequest request = UpdateSubscribedCalendarsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateSubscribedCalendarsShrinkHeaders headers = UpdateSubscribedCalendarsShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasManagers()) {
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managers(), "Managers", "json"));
  }

  if (!!tmpReq.hasSubscribeScope()) {
    request.setSubscribeScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subscribeScope(), "SubscribeScope", "json"));
  }

  json body = {};
  if (!!request.hasCalendarId()) {
    body["CalendarId"] = request.calendarId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasManagersShrink()) {
    body["Managers"] = request.managersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSubscribeScopeShrink()) {
    body["SubscribeScope"] = request.subscribeScopeShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSubscribedCalendars"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/calendar/updateSubscribedCalendars")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscribedCalendarsResponse>();
}

/**
 * @summary 更新订阅日历
 *
 * @param request UpdateSubscribedCalendarsRequest
 * @return UpdateSubscribedCalendarsResponse
 */
UpdateSubscribedCalendarsResponse Client::updateSubscribedCalendars(const UpdateSubscribedCalendarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateSubscribedCalendarsHeaders headers = UpdateSubscribedCalendarsHeaders();
  return updateSubscribedCalendarsWithOptions(request, headers, runtime);
}

/**
 * @summary 更新代办
 *
 * @param tmpReq UpdateTodoTaskRequest
 * @param tmpHeader UpdateTodoTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTodoTaskResponse
 */
UpdateTodoTaskResponse Client::updateTodoTaskWithOptions(const UpdateTodoTaskRequest &tmpReq, const UpdateTodoTaskHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTodoTaskShrinkRequest request = UpdateTodoTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateTodoTaskShrinkHeaders headers = UpdateTodoTaskShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasExecutorIds()) {
    request.setExecutorIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorIds(), "executorIds", "json"));
  }

  if (!!tmpReq.hasParticipantIds()) {
    request.setParticipantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.participantIds(), "participantIds", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDone()) {
    body["done"] = request.done();
  }

  if (!!request.hasDueTime()) {
    body["dueTime"] = request.dueTime();
  }

  if (!!request.hasExecutorIdsShrink()) {
    body["executorIds"] = request.executorIdsShrink();
  }

  if (!!request.hasParticipantIdsShrink()) {
    body["participantIds"] = request.participantIdsShrink();
  }

  if (!!request.hasSubject()) {
    body["subject"] = request.subject();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTodoTask"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/updateTodoTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTodoTaskResponse>();
}

/**
 * @summary 更新代办
 *
 * @param request UpdateTodoTaskRequest
 * @return UpdateTodoTaskResponse
 */
UpdateTodoTaskResponse Client::updateTodoTask(const UpdateTodoTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateTodoTaskHeaders headers = UpdateTodoTaskHeaders();
  return updateTodoTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 更新代办执行者状态
 *
 * @param tmpReq UpdateTodoTaskExecutorStatusRequest
 * @param tmpHeader UpdateTodoTaskExecutorStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTodoTaskExecutorStatusResponse
 */
UpdateTodoTaskExecutorStatusResponse Client::updateTodoTaskExecutorStatusWithOptions(const UpdateTodoTaskExecutorStatusRequest &tmpReq, const UpdateTodoTaskExecutorStatusHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTodoTaskExecutorStatusShrinkRequest request = UpdateTodoTaskExecutorStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateTodoTaskExecutorStatusShrinkHeaders headers = UpdateTodoTaskExecutorStatusShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  if (!!tmpReq.hasExecutorStatusList()) {
    request.setExecutorStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executorStatusList(), "executorStatusList", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasExecutorStatusListShrink()) {
    body["executorStatusList"] = request.executorStatusListShrink();
  }

  if (!!request.hasOperatorId()) {
    body["operatorId"] = request.operatorId();
  }

  if (!!request.hasTaskId()) {
    body["taskId"] = request.taskId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTodoTaskExecutorStatus"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/task/updateTodoTaskExecutorStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTodoTaskExecutorStatusResponse>();
}

/**
 * @summary 更新代办执行者状态
 *
 * @param request UpdateTodoTaskExecutorStatusRequest
 * @return UpdateTodoTaskExecutorStatusResponse
 */
UpdateTodoTaskExecutorStatusResponse Client::updateTodoTaskExecutorStatus(const UpdateTodoTaskExecutorStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateTodoTaskExecutorStatusHeaders headers = UpdateTodoTaskExecutorStatusHeaders();
  return updateTodoTaskExecutorStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 更新企业账号用户头像
 *
 * @param request UpdateUserAvatarRequest
 * @param tmpHeader UpdateUserAvatarHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserAvatarResponse
 */
UpdateUserAvatarResponse Client::updateUserAvatarWithOptions(const UpdateUserAvatarRequest &request, const UpdateUserAvatarHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  UpdateUserAvatarShrinkHeaders headers = UpdateUserAvatarShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  json body = {};
  if (!!request.hasAvatarMediaId()) {
    body["AvatarMediaId"] = request.avatarMediaId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserAvatar"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/contact/updateUserAvatar")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserAvatarResponse>();
}

/**
 * @summary 更新企业账号用户头像
 *
 * @param request UpdateUserAvatarRequest
 * @return UpdateUserAvatarResponse
 */
UpdateUserAvatarResponse Client::updateUserAvatar(const UpdateUserAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateUserAvatarHeaders headers = UpdateUserAvatarHeaders();
  return updateUserAvatarWithOptions(request, headers, runtime);
}

/**
 * @summary 设置正在进行中的视频会议属性
 *
 * @param tmpReq UpdateVideoConferenceSettingRequest
 * @param tmpHeader UpdateVideoConferenceSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoConferenceSettingResponse
 */
UpdateVideoConferenceSettingResponse Client::updateVideoConferenceSettingWithOptions(const UpdateVideoConferenceSettingRequest &tmpReq, const UpdateVideoConferenceSettingHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVideoConferenceSettingShrinkRequest request = UpdateVideoConferenceSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateVideoConferenceSettingShrinkHeaders headers = UpdateVideoConferenceSettingShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasAllowUnmuteSelf()) {
    body["AllowUnmuteSelf"] = request.allowUnmuteSelf();
  }

  if (!!request.hasAutoTransferHost()) {
    body["AutoTransferHost"] = request.autoTransferHost();
  }

  if (!!request.hasForbiddenShareScreen()) {
    body["ForbiddenShareScreen"] = request.forbiddenShareScreen();
  }

  if (!!request.hasLockConference()) {
    body["LockConference"] = request.lockConference();
  }

  if (!!request.hasMuteAll()) {
    body["MuteAll"] = request.muteAll();
  }

  if (!!request.hasOnlyInternalEmployeesJoin()) {
    body["OnlyInternalEmployeesJoin"] = request.onlyInternalEmployeesJoin();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasConferenceId()) {
    body["conferenceId"] = request.conferenceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateVideoConferenceSetting"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/ysp/updateVideoConferenceSetting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoConferenceSettingResponse>();
}

/**
 * @summary 设置正在进行中的视频会议属性
 *
 * @param request UpdateVideoConferenceSettingRequest
 * @return UpdateVideoConferenceSettingResponse
 */
UpdateVideoConferenceSettingResponse Client::updateVideoConferenceSetting(const UpdateVideoConferenceSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateVideoConferenceSettingHeaders headers = UpdateVideoConferenceSettingHeaders();
  return updateVideoConferenceSettingWithOptions(request, headers, runtime);
}

/**
 * @summary 修改知识库文档成员权限
 *
 * @param tmpReq UpdateWorkspaceDocMembersRequest
 * @param tmpHeader UpdateWorkspaceDocMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceDocMembersResponse
 */
UpdateWorkspaceDocMembersResponse Client::updateWorkspaceDocMembersWithOptions(const UpdateWorkspaceDocMembersRequest &tmpReq, const UpdateWorkspaceDocMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkspaceDocMembersShrinkRequest request = UpdateWorkspaceDocMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateWorkspaceDocMembersShrinkHeaders headers = UpdateWorkspaceDocMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspaceDocMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/updateWorkspaceDocMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceDocMembersResponse>();
}

/**
 * @summary 修改知识库文档成员权限
 *
 * @param request UpdateWorkspaceDocMembersRequest
 * @return UpdateWorkspaceDocMembersResponse
 */
UpdateWorkspaceDocMembersResponse Client::updateWorkspaceDocMembers(const UpdateWorkspaceDocMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateWorkspaceDocMembersHeaders headers = UpdateWorkspaceDocMembersHeaders();
  return updateWorkspaceDocMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 更新知识库成员权限
 *
 * @param tmpReq UpdateWorkspaceMembersRequest
 * @param tmpHeader UpdateWorkspaceMembersHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceMembersResponse
 */
UpdateWorkspaceMembersResponse Client::updateWorkspaceMembersWithOptions(const UpdateWorkspaceMembersRequest &tmpReq, const UpdateWorkspaceMembersHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkspaceMembersShrinkRequest request = UpdateWorkspaceMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UpdateWorkspaceMembersShrinkHeaders headers = UpdateWorkspaceMembersShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasMembers()) {
    request.setMembersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.members(), "Members", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasMembersShrink()) {
    body["Members"] = request.membersShrink();
  }

  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspaceMembers"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dingtalk/v1/documents/updateWorkspaceMembers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceMembersResponse>();
}

/**
 * @summary 更新知识库成员权限
 *
 * @param request UpdateWorkspaceMembersRequest
 * @return UpdateWorkspaceMembersResponse
 */
UpdateWorkspaceMembersResponse Client::updateWorkspaceMembers(const UpdateWorkspaceMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateWorkspaceMembersHeaders headers = UpdateWorkspaceMembersHeaders();
  return updateWorkspaceMembersWithOptions(request, headers, runtime);
}

/**
 * @summary 上传媒体<br/>
 *
 * @param tmpReq UploadMediaRequest
 * @param tmpHeader UploadMediaHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMediaResponse
 */
UploadMediaResponse Client::uploadMediaWithOptions(const UploadMediaRequest &tmpReq, const UploadMediaHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadMediaShrinkRequest request = UploadMediaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  UploadMediaShrinkHeaders headers = UploadMediaShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasMediaName()) {
    body["mediaName"] = request.mediaName();
  }

  if (!!request.hasMediaType()) {
    body["mediaType"] = request.mediaType();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.url();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadMedia"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/documents/uploadMedia")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadMediaResponse>();
}

/**
 * @summary 上传媒体<br/>
 *
 * @param request UploadMediaRequest
 * @return UploadMediaResponse
 */
UploadMediaResponse Client::uploadMedia(const UploadMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UploadMediaHeaders headers = UploadMediaHeaders();
  return uploadMediaWithOptions(request, headers, runtime);
}

/**
 * @summary 穿戴勋章
 *
 * @param tmpReq WearOrgHonorRequest
 * @param tmpHeader WearOrgHonorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return WearOrgHonorResponse
 */
WearOrgHonorResponse Client::wearOrgHonorWithOptions(const WearOrgHonorRequest &tmpReq, const WearOrgHonorHeaders &tmpHeader, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  WearOrgHonorShrinkRequest request = WearOrgHonorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  WearOrgHonorShrinkHeaders headers = WearOrgHonorShrinkHeaders();
  Utils::Utils::convert(tmpHeader, headers);
  if (!!tmpHeader.hasAccountContext()) {
    headers.setAccountContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpHeader.accountContext(), "AccountContext", "json"));
  }

  if (!!tmpReq.hasTenantContext()) {
    request.setTenantContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tenantContext(), "TenantContext", "json"));
  }

  json body = {};
  if (!!request.hasTenantContextShrink()) {
    body["TenantContext"] = request.tenantContextShrink();
  }

  if (!!request.hasHonorId()) {
    body["honorId"] = request.honorId();
  }

  if (!!request.hasOrgId()) {
    body["orgId"] = request.orgId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.userId();
  }

  if (!!request.hasWear()) {
    body["wear"] = request.wear();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAccountContextShrink()) {
    realHeaders["AccountContext"] = json(headers.accountContextShrink()).dump();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "WearOrgHonor"},
    {"version" , "2023-04-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aliding/v1/honor/wearOrgHonor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WearOrgHonorResponse>();
}

/**
 * @summary 穿戴勋章
 *
 * @param request WearOrgHonorRequest
 * @return WearOrgHonorResponse
 */
WearOrgHonorResponse Client::wearOrgHonor(const WearOrgHonorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  WearOrgHonorHeaders headers = WearOrgHonorHeaders();
  return wearOrgHonorWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Aliding20230426