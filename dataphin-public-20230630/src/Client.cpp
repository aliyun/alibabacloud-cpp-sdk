#include <darabonba/Core.hpp>
#include <alibabacloud/DataphinPublic20230630.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DataphinPublic20230630::Models;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{

AlibabaCloud::DataphinPublic20230630::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("dataphin-public", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a regular member to a data service application. Only the application owner can perform this operation.
 * Release version: v6.0.0.
 *
 * @param tmpReq AddDataServiceAppMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataServiceAppMemberResponse
 */
AddDataServiceAppMemberResponse Client::addDataServiceAppMemberWithOptions(const AddDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddDataServiceAppMemberShrinkRequest request = AddDataServiceAppMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDataServiceAppMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataServiceAppMemberResponse>();
}

/**
 * @summary Adds a regular member to a data service application. Only the application owner can perform this operation.
 * Release version: v6.0.0.
 *
 * @param request AddDataServiceAppMemberRequest
 * @return AddDataServiceAppMemberResponse
 */
AddDataServiceAppMemberResponse Client::addDataServiceAppMember(const AddDataServiceAppMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataServiceAppMemberWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a Data Service project and assigns a role.
 *
 * @param tmpReq AddDataServiceProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDataServiceProjectMemberResponse
 */
AddDataServiceProjectMemberResponse Client::addDataServiceProjectMemberWithOptions(const AddDataServiceProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddDataServiceProjectMemberShrinkRequest request = AddDataServiceProjectMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDataServiceProjectMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDataServiceProjectMemberResponse>();
}

/**
 * @summary Adds a user to a Data Service project and assigns a role.
 *
 * @param request AddDataServiceProjectMemberRequest
 * @return AddDataServiceProjectMemberResponse
 */
AddDataServiceProjectMemberResponse Client::addDataServiceProjectMember(const AddDataServiceProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataServiceProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Adds project members.
 *
 * @param tmpReq AddProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddProjectMemberResponse
 */
AddProjectMemberResponse Client::addProjectMemberWithOptions(const AddProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddProjectMemberShrinkRequest request = AddProjectMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddProjectMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddProjectMemberResponse>();
}

/**
 * @summary Adds project members.
 *
 * @param request AddProjectMemberRequest
 * @return AddProjectMemberResponse
 */
AddProjectMemberResponse Client::addProjectMember(const AddProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Registers data lineage. Released in version 5.4.0.
 *
 * @param tmpReq AddRegisterLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRegisterLineageResponse
 */
AddRegisterLineageResponse Client::addRegisterLineageWithOptions(const AddRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddRegisterLineageShrinkRequest request = AddRegisterLineageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddRegisterLineageCommand()) {
    request.setAddRegisterLineageCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddRegisterLineageCommand(), "AddRegisterLineageCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAddRegisterLineageCommandShrink()) {
    body["AddRegisterLineageCommand"] = request.getAddRegisterLineageCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddRegisterLineage"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRegisterLineageResponse>();
}

/**
 * @summary Registers data lineage. Released in version 5.4.0.
 *
 * @param request AddRegisterLineageRequest
 * @return AddRegisterLineageResponse
 */
AddRegisterLineageResponse Client::addRegisterLineage(const AddRegisterLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRegisterLineageWithOptions(request, runtime);
}

/**
 * @summary Adds users to a tenant in batches. This API operation can be invoked only by super administrators and system administration.
 *
 * @param tmpReq AddTenantMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTenantMembersResponse
 */
AddTenantMembersResponse Client::addTenantMembersWithOptions(const AddTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTenantMembersShrinkRequest request = AddTenantMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTenantMembers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTenantMembersResponse>();
}

/**
 * @summary Adds users to a tenant in batches. This API operation can be invoked only by super administrators and system administration.
 *
 * @param request AddTenantMembersRequest
 * @return AddTenantMembersResponse
 */
AddTenantMembersResponse Client::addTenantMembers(const AddTenantMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTenantMembersWithOptions(request, runtime);
}

/**
 * @summary Adds tenant members by using source users.
 *
 * @param tmpReq AddTenantMembersBySourceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTenantMembersBySourceUserResponse
 */
AddTenantMembersBySourceUserResponse Client::addTenantMembersBySourceUserWithOptions(const AddTenantMembersBySourceUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddTenantMembersBySourceUserShrinkRequest request = AddTenantMembersBySourceUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTenantMembersBySourceUser"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTenantMembersBySourceUserResponse>();
}

/**
 * @summary Adds tenant members by using source users.
 *
 * @param request AddTenantMembersBySourceUserRequest
 * @return AddTenantMembersBySourceUserResponse
 */
AddTenantMembersBySourceUserResponse Client::addTenantMembersBySourceUser(const AddTenantMembersBySourceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTenantMembersBySourceUserWithOptions(request, runtime);
}

/**
 * @summary Adds members to a user group.
 *
 * @param tmpReq AddUserGroupMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddUserGroupMemberResponse
 */
AddUserGroupMemberResponse Client::addUserGroupMemberWithOptions(const AddUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddUserGroupMemberShrinkRequest request = AddUserGroupMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddCommand()) {
    request.setAddCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddCommand(), "AddCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAddCommandShrink()) {
    body["AddCommand"] = request.getAddCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddUserGroupMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddUserGroupMemberResponse>();
}

/**
 * @summary Adds members to a user group.
 *
 * @param request AddUserGroupMemberRequest
 * @return AddUserGroupMemberResponse
 */
AddUserGroupMemberResponse Client::addUserGroupMember(const AddUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary Applies for API permissions.
 *
 * @param tmpReq ApplyDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyDataServiceApiResponse
 */
ApplyDataServiceApiResponse Client::applyDataServiceApiWithOptions(const ApplyDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyDataServiceApiShrinkRequest request = ApplyDataServiceApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyCommand()) {
    request.setApplyCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplyCommand(), "ApplyCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasApplyCommandShrink()) {
    body["ApplyCommand"] = request.getApplyCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyDataServiceApi"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyDataServiceApiResponse>();
}

/**
 * @summary Applies for API permissions.
 *
 * @param request ApplyDataServiceApiRequest
 * @return ApplyDataServiceApiResponse
 */
ApplyDataServiceApiResponse Client::applyDataServiceApi(const ApplyDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Applies for application permissions.
 *
 * @param tmpReq ApplyDataServiceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyDataServiceAppResponse
 */
ApplyDataServiceAppResponse Client::applyDataServiceAppWithOptions(const ApplyDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyDataServiceAppShrinkRequest request = ApplyDataServiceAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyCommand()) {
    request.setApplyCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplyCommand(), "ApplyCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasApplyCommandShrink()) {
    body["ApplyCommand"] = request.getApplyCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyDataServiceApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyDataServiceAppResponse>();
}

/**
 * @summary Applies for application permissions.
 *
 * @param request ApplyDataServiceAppRequest
 * @return ApplyDataServiceAppResponse
 */
ApplyDataServiceAppResponse Client::applyDataServiceApp(const ApplyDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary Applies for resource permissions at the table or column level. Available since version 6.4.0.
 *
 * @param tmpReq ApplyResourcePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyResourcePermissionResponse
 */
ApplyResourcePermissionResponse Client::applyResourcePermissionWithOptions(const ApplyResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyResourcePermissionShrinkRequest request = ApplyResourcePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyCommand()) {
    request.setApplyCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplyCommand(), "ApplyCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasApplyCommandShrink()) {
    body["ApplyCommand"] = request.getApplyCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyResourcePermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyResourcePermissionResponse>();
}

/**
 * @summary Applies for resource permissions at the table or column level. Available since version 6.4.0.
 *
 * @param request ApplyResourcePermissionRequest
 * @return ApplyResourcePermissionResponse
 */
ApplyResourcePermissionResponse Client::applyResourcePermission(const ApplyResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary Binds specified quality rules to schedule settings.
 * Release version: v5.4.2.
 *
 * @param tmpReq AssignQualityRuleOfAllRuleScopeSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
 */
AssignQualityRuleOfAllRuleScopeSchedulesResponse Client::assignQualityRuleOfAllRuleScopeSchedulesWithOptions(const AssignQualityRuleOfAllRuleScopeSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest request = AssignQualityRuleOfAllRuleScopeSchedulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssignCommand()) {
    request.setAssignCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssignCommand(), "AssignCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAssignCommandShrink()) {
    body["AssignCommand"] = request.getAssignCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AssignQualityRuleOfAllRuleScopeSchedules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignQualityRuleOfAllRuleScopeSchedulesResponse>();
}

/**
 * @summary Binds specified quality rules to schedule settings.
 * Release version: v5.4.2.
 *
 * @param request AssignQualityRuleOfAllRuleScopeSchedulesRequest
 * @return AssignQualityRuleOfAllRuleScopeSchedulesResponse
 */
AssignQualityRuleOfAllRuleScopeSchedulesResponse Client::assignQualityRuleOfAllRuleScopeSchedules(const AssignQualityRuleOfAllRuleScopeSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignQualityRuleOfAllRuleScopeSchedulesWithOptions(request, runtime);
}

/**
 * @summary Creates knowledge graph entity records in batches. Released in version v6.1.1.
 *
 * @param tmpReq BatchCreateKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateKgEntityResponse
 */
BatchCreateKgEntityResponse Client::batchCreateKgEntityWithOptions(const BatchCreateKgEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateKgEntityShrinkRequest request = BatchCreateKgEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateKgEntityResponse>();
}

/**
 * @summary Creates knowledge graph entity records in batches. Released in version v6.1.1.
 *
 * @param request BatchCreateKgEntityRequest
 * @return BatchCreateKgEntityResponse
 */
BatchCreateKgEntityResponse Client::batchCreateKgEntity(const BatchCreateKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateKgEntityWithOptions(request, runtime);
}

/**
 * @summary Creates knowledge graph relationship records in batches. Released in version v6.1.1.
 *
 * @param tmpReq BatchCreateKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateKgRelationResponse
 */
BatchCreateKgRelationResponse Client::batchCreateKgRelationWithOptions(const BatchCreateKgRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateKgRelationShrinkRequest request = BatchCreateKgRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateKgRelationResponse>();
}

/**
 * @summary Creates knowledge graph relationship records in batches. Released in version v6.1.1.
 *
 * @param request BatchCreateKgRelationRequest
 * @return BatchCreateKgRelationResponse
 */
BatchCreateKgRelationResponse Client::batchCreateKgRelation(const BatchCreateKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateKgRelationWithOptions(request, runtime);
}

/**
 * @summary Transfers assets in batches. Released in version 6.3.2.
 *
 * @param tmpReq BatchHandoverAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchHandoverAssetResponse
 */
BatchHandoverAssetResponse Client::batchHandoverAssetWithOptions(const BatchHandoverAssetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchHandoverAssetShrinkRequest request = BatchHandoverAssetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHandoverCommand()) {
    request.setHandoverCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHandoverCommand(), "HandoverCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasHandoverCommandShrink()) {
    body["HandoverCommand"] = request.getHandoverCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchHandoverAsset"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchHandoverAssetResponse>();
}

/**
 * @summary Transfers assets in batches. Released in version 6.3.2.
 *
 * @param request BatchHandoverAssetRequest
 * @return BatchHandoverAssetResponse
 */
BatchHandoverAssetResponse Client::batchHandoverAsset(const BatchHandoverAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchHandoverAssetWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity of a saved cluster. Available since v6.4.0.
 *
 * @param request CheckComputeClusterConnectivityByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckComputeClusterConnectivityByIdResponse
 */
CheckComputeClusterConnectivityByIdResponse Client::checkComputeClusterConnectivityByIdWithOptions(const CheckComputeClusterConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckComputeClusterConnectivityById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckComputeClusterConnectivityByIdResponse>();
}

/**
 * @summary Checks the connectivity of a saved cluster. Available since v6.4.0.
 *
 * @param request CheckComputeClusterConnectivityByIdRequest
 * @return CheckComputeClusterConnectivityByIdResponse
 */
CheckComputeClusterConnectivityByIdResponse Client::checkComputeClusterConnectivityById(const CheckComputeClusterConnectivityByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComputeClusterConnectivityByIdWithOptions(request, runtime);
}

/**
 * @summary Validates the connectivity.
 *
 * @param tmpReq CheckComputeSourceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckComputeSourceConnectivityResponse
 */
CheckComputeSourceConnectivityResponse Client::checkComputeSourceConnectivityWithOptions(const CheckComputeSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckComputeSourceConnectivityShrinkRequest request = CheckComputeSourceConnectivityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckCommand()) {
    request.setCheckCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckCommand(), "CheckCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCheckCommandShrink()) {
    body["CheckCommand"] = request.getCheckCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckComputeSourceConnectivity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckComputeSourceConnectivityResponse>();
}

/**
 * @summary Validates the connectivity.
 *
 * @param request CheckComputeSourceConnectivityRequest
 * @return CheckComputeSourceConnectivityResponse
 */
CheckComputeSourceConnectivityResponse Client::checkComputeSourceConnectivity(const CheckComputeSourceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComputeSourceConnectivityWithOptions(request, runtime);
}

/**
 * @summary Verifies the connectivity of an existing compute source by using the compute source ID.
 *
 * @param request CheckComputeSourceConnectivityByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckComputeSourceConnectivityByIdResponse
 */
CheckComputeSourceConnectivityByIdResponse Client::checkComputeSourceConnectivityByIdWithOptions(const CheckComputeSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckComputeSourceConnectivityById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckComputeSourceConnectivityByIdResponse>();
}

/**
 * @summary Verifies the connectivity of an existing compute source by using the compute source ID.
 *
 * @param request CheckComputeSourceConnectivityByIdRequest
 * @return CheckComputeSourceConnectivityByIdResponse
 */
CheckComputeSourceConnectivityByIdResponse Client::checkComputeSourceConnectivityById(const CheckComputeSourceConnectivityByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComputeSourceConnectivityByIdWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity of a datasource.
 *
 * @param tmpReq CheckDataSourceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataSourceConnectivityResponse
 */
CheckDataSourceConnectivityResponse Client::checkDataSourceConnectivityWithOptions(const CheckDataSourceConnectivityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckDataSourceConnectivityShrinkRequest request = CheckDataSourceConnectivityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckCommand()) {
    request.setCheckCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckCommand(), "CheckCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCheckCommandShrink()) {
    body["CheckCommand"] = request.getCheckCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckDataSourceConnectivity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataSourceConnectivityResponse>();
}

/**
 * @summary Checks the connectivity of a datasource.
 *
 * @param request CheckDataSourceConnectivityRequest
 * @return CheckDataSourceConnectivityResponse
 */
CheckDataSourceConnectivityResponse Client::checkDataSourceConnectivity(const CheckDataSourceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataSourceConnectivityWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity of a data source.
 *
 * @param request CheckDataSourceConnectivityByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataSourceConnectivityByIdResponse
 */
CheckDataSourceConnectivityByIdResponse Client::checkDataSourceConnectivityByIdWithOptions(const CheckDataSourceConnectivityByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDataSourceConnectivityById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataSourceConnectivityByIdResponse>();
}

/**
 * @summary Checks the connectivity of a data source.
 *
 * @param request CheckDataSourceConnectivityByIdRequest
 * @return CheckDataSourceConnectivityByIdResponse
 */
CheckDataSourceConnectivityByIdResponse Client::checkDataSourceConnectivityById(const CheckDataSourceConnectivityByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataSourceConnectivityByIdWithOptions(request, runtime);
}

/**
 * @summary Checks the connectivity of a data source on a specified schedule resource group. Available since version 6.3.2.
 *
 * @description Asynchronously initiates a data source connectivity check on a specified schedule resource group and immediately returns the check task ID in the Data field. You can poll the task result by calling GetCheckConnectivityJobByJobId. Difference from CheckDataSourceConnectivity: The check task of this operation is executed on the schedule resource group specified by the customer, which is applicable to scenarios where the network between the Dataphin server and the target data source is disconnected.
 *
 * @param tmpReq CheckDataSourceConnectivityOnResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDataSourceConnectivityOnResourceGroupResponse
 */
CheckDataSourceConnectivityOnResourceGroupResponse Client::checkDataSourceConnectivityOnResourceGroupWithOptions(const CheckDataSourceConnectivityOnResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckDataSourceConnectivityOnResourceGroupShrinkRequest request = CheckDataSourceConnectivityOnResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckCommand()) {
    request.setCheckCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckCommand(), "CheckCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCheckCommandShrink()) {
    body["CheckCommand"] = request.getCheckCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckDataSourceConnectivityOnResourceGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDataSourceConnectivityOnResourceGroupResponse>();
}

/**
 * @summary Checks the connectivity of a data source on a specified schedule resource group. Available since version 6.3.2.
 *
 * @description Asynchronously initiates a data source connectivity check on a specified schedule resource group and immediately returns the check task ID in the Data field. You can poll the task result by calling GetCheckConnectivityJobByJobId. Difference from CheckDataSourceConnectivity: The check task of this operation is executed on the schedule resource group specified by the customer, which is applicable to scenarios where the network between the Dataphin server and the target data source is disconnected.
 *
 * @param request CheckDataSourceConnectivityOnResourceGroupRequest
 * @return CheckDataSourceConnectivityOnResourceGroupResponse
 */
CheckDataSourceConnectivityOnResourceGroupResponse Client::checkDataSourceConnectivityOnResourceGroup(const CheckDataSourceConnectivityOnResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataSourceConnectivityOnResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Checks whether the project is depended on by data dependencies such as nodes.
 *
 * @param request CheckProjectHasDependencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckProjectHasDependencyResponse
 */
CheckProjectHasDependencyResponse Client::checkProjectHasDependencyWithOptions(const CheckProjectHasDependencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckProjectHasDependency"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckProjectHasDependencyResponse>();
}

/**
 * @summary Checks whether the project is depended on by data dependencies such as nodes.
 *
 * @param request CheckProjectHasDependencyRequest
 * @return CheckProjectHasDependencyResponse
 */
CheckProjectHasDependencyResponse Client::checkProjectHasDependency(const CheckProjectHasDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkProjectHasDependencyWithOptions(request, runtime);
}

/**
 * @summary Checks whether a user has the specified resource permissions.
 *
 * @param tmpReq CheckResourcePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckResourcePermissionResponse
 */
CheckResourcePermissionResponse Client::checkResourcePermissionWithOptions(const CheckResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckResourcePermissionShrinkRequest request = CheckResourcePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckCommand()) {
    request.setCheckCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckCommand(), "CheckCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCheckCommandShrink()) {
    body["CheckCommand"] = request.getCheckCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckResourcePermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckResourcePermissionResponse>();
}

/**
 * @summary Checks whether a user has the specified resource permissions.
 *
 * @param request CheckResourcePermissionRequest
 * @return CheckResourcePermissionResponse
 */
CheckResourcePermissionResponse Client::checkResourcePermission(const CheckResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary Creates an ad hoc query file.
 *
 * @param tmpReq CreateAdHocFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAdHocFileResponse
 */
CreateAdHocFileResponse Client::createAdHocFileWithOptions(const CreateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAdHocFileShrinkRequest request = CreateAdHocFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAdHocFile"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAdHocFileResponse>();
}

/**
 * @summary Creates an ad hoc query file.
 *
 * @param request CreateAdHocFileRequest
 * @return CreateAdHocFileResponse
 */
CreateAdHocFileResponse Client::createAdHocFile(const CreateAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdHocFileWithOptions(request, runtime);
}

/**
 * @summary Creates a Basic (single-environment) project.
 *
 * @param tmpReq CreateBasicProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBasicProjectResponse
 */
CreateBasicProjectResponse Client::createBasicProjectWithOptions(const CreateBasicProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBasicProjectShrinkRequest request = CreateBasicProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBasicProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBasicProjectResponse>();
}

/**
 * @summary Creates a Basic (single-environment) project.
 *
 * @param request CreateBasicProjectRequest
 * @return CreateBasicProjectResponse
 */
CreateBasicProjectResponse Client::createBasicProject(const CreateBasicProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBasicProjectWithOptions(request, runtime);
}

/**
 * @summary Creates an offline computing task.
 *
 * @param tmpReq CreateBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchTaskResponse
 */
CreateBatchTaskResponse Client::createBatchTaskWithOptions(const CreateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBatchTaskShrinkRequest request = CreateBatchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchTaskResponse>();
}

/**
 * @summary Creates an offline computing task.
 *
 * @param request CreateBatchTaskRequest
 * @return CreateBatchTaskResponse
 */
CreateBatchTaskResponse Client::createBatchTask(const CreateBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an offline computing template. Available since version 6.4.0.
 *
 * @param tmpReq CreateBatchTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBatchTemplateResponse
 */
CreateBatchTemplateResponse Client::createBatchTemplateWithOptions(const CreateBatchTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBatchTemplateShrinkRequest request = CreateBatchTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBatchTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBatchTemplateResponse>();
}

/**
 * @summary Creates an offline computing template. Available since version 6.4.0.
 *
 * @param request CreateBatchTemplateRequest
 * @return CreateBatchTemplateResponse
 */
CreateBatchTemplateResponse Client::createBatchTemplate(const CreateBatchTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a business entity.
 *
 * @param tmpReq CreateBizEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBizEntityResponse
 */
CreateBizEntityResponse Client::createBizEntityWithOptions(const CreateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBizEntityShrinkRequest request = CreateBizEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBizEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBizEntityResponse>();
}

/**
 * @summary Creates a business entity.
 *
 * @param request CreateBizEntityRequest
 * @return CreateBizEntityResponse
 */
CreateBizEntityResponse Client::createBizEntity(const CreateBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizEntityWithOptions(request, runtime);
}

/**
 * @summary Creates a business metric. Release version: v5.5.0.
 *
 * @param tmpReq CreateBizMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBizMetricResponse
 */
CreateBizMetricResponse Client::createBizMetricWithOptions(const CreateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBizMetricShrinkRequest request = CreateBizMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateBizMetricCommand()) {
    request.setCreateBizMetricCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateBizMetricCommand(), "CreateBizMetricCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateBizMetricCommandShrink()) {
    body["CreateBizMetricCommand"] = request.getCreateBizMetricCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBizMetric"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBizMetricResponse>();
}

/**
 * @summary Creates a business metric. Release version: v5.5.0.
 *
 * @param request CreateBizMetricRequest
 * @return CreateBizMetricResponse
 */
CreateBizMetricResponse Client::createBizMetric(const CreateBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizMetricWithOptions(request, runtime);
}

/**
 * @summary Creates a data domain.
 *
 * @param tmpReq CreateBizUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBizUnitResponse
 */
CreateBizUnitResponse Client::createBizUnitWithOptions(const CreateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateBizUnitShrinkRequest request = CreateBizUnitShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBizUnit"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBizUnitResponse>();
}

/**
 * @summary Creates a data domain.
 *
 * @param request CreateBizUnitRequest
 * @return CreateBizUnitResponse
 */
CreateBizUnitResponse Client::createBizUnit(const CreateBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizUnitWithOptions(request, runtime);
}

/**
 * @summary Creates a cluster. Release version: v6.3.0.
 *
 * @param tmpReq CreateComputeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeClusterResponse
 */
CreateComputeClusterResponse Client::createComputeClusterWithOptions(const CreateComputeClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateComputeClusterShrinkRequest request = CreateComputeClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClusterConfig()) {
    request.setClusterConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterConfig(), "ClusterConfig", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasClusterConfigShrink()) {
    body["ClusterConfig"] = request.getClusterConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeCluster"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeClusterResponse>();
}

/**
 * @summary Creates a cluster. Release version: v6.3.0.
 *
 * @param request CreateComputeClusterRequest
 * @return CreateComputeClusterResponse
 */
CreateComputeClusterResponse Client::createComputeCluster(const CreateComputeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a compute source. Only business unit administrators and project administrators are authorized to perform this operation.
 *
 * @param tmpReq CreateComputeSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeSourceResponse
 */
CreateComputeSourceResponse Client::createComputeSourceWithOptions(const CreateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateComputeSourceShrinkRequest request = CreateComputeSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateComputeSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeSourceResponse>();
}

/**
 * @summary Creates a compute source. Only business unit administrators and project administrators are authorized to perform this operation.
 *
 * @param request CreateComputeSourceRequest
 * @return CreateComputeSourceResponse
 */
CreateComputeSourceResponse Client::createComputeSource(const CreateComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a data domain.
 *
 * @param tmpReq CreateDataDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataDomainResponse
 */
CreateDataDomainResponse Client::createDataDomainWithOptions(const CreateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataDomainShrinkRequest request = CreateDataDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataDomain"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataDomainResponse>();
}

/**
 * @summary Creates a data domain.
 *
 * @param request CreateDataDomainRequest
 * @return CreateDataDomainResponse
 */
CreateDataDomainResponse Client::createDataDomain(const CreateDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a data service API and submits it.
 *
 * @param tmpReq CreateDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceApiResponse
 */
CreateDataServiceApiResponse Client::createDataServiceApiWithOptions(const CreateDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataServiceApiShrinkRequest request = CreateDataServiceApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataServiceApi"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceApiResponse>();
}

/**
 * @summary Creates a data service API and submits it.
 *
 * @param request CreateDataServiceApiRequest
 * @return CreateDataServiceApiResponse
 */
CreateDataServiceApiResponse Client::createDataServiceApi(const CreateDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Creates a data service application. Only super administrators or system administration administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param tmpReq CreateDataServiceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceAppResponse
 */
CreateDataServiceAppResponse Client::createDataServiceAppWithOptions(const CreateDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataServiceAppShrinkRequest request = CreateDataServiceAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataServiceApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceAppResponse>();
}

/**
 * @summary Creates a data service application. Only super administrators or system administration administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request CreateDataServiceAppRequest
 * @return CreateDataServiceAppResponse
 */
CreateDataServiceAppResponse Client::createDataServiceApp(const CreateDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary Creates a data service application group. Only super administrators and system administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request CreateDataServiceAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceAppGroupResponse
 */
CreateDataServiceAppGroupResponse Client::createDataServiceAppGroupWithOptions(const CreateDataServiceAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataServiceAppGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceAppGroupResponse>();
}

/**
 * @summary Creates a data service application group. Only super administrators and system administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request CreateDataServiceAppGroupRequest
 * @return CreateDataServiceAppGroupResponse
 */
CreateDataServiceAppGroupResponse Client::createDataServiceAppGroup(const CreateDataServiceAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceAppGroupWithOptions(request, runtime);
}

/**
 * @summary Create Data Source: Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permission to perform this operation.
 *
 * @param tmpReq CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataSourceShrinkRequest request = CreateDataSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSourceResponse>();
}

/**
 * @summary Create Data Source: Tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators have permission to perform this operation.
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset in a specified project. Available since v6.2.0.
 *
 * @description ## Request description
 * - This API operation creates a dataset in a specified project.
 * - ProjectId is a required parameter that specifies the ID of the project in which to create the dataset.
 * - CreateCommand is a complex object that contains various configuration information required to create the dataset.
 * - Name, Type, ContentType, and Scenario are required fields that specify the dataset name, type, content type, and Scenarios, respectively.
 * - You can configure FileStorageConfig and MetadataStorageConfig in VersionConfig as needed.
 * - If real-time metatable configuration is required, provide the RealtimeMetaTableConfig information.
 * - Make sure that all required fields are correctly filled in. Otherwise, the request will be failed.
 *
 * @param tmpReq CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatasetShrinkRequest request = CreateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a dataset in a specified project. Available since v6.2.0.
 *
 * @description ## Request description
 * - This API operation creates a dataset in a specified project.
 * - ProjectId is a required parameter that specifies the ID of the project in which to create the dataset.
 * - CreateCommand is a complex object that contains various configuration information required to create the dataset.
 * - Name, Type, ContentType, and Scenario are required fields that specify the dataset name, type, content type, and Scenarios, respectively.
 * - You can configure FileStorageConfig and MetadataStorageConfig in VersionConfig as needed.
 * - If real-time metatable configuration is required, provide the RealtimeMetaTableConfig information.
 * - Make sure that all required fields are correctly filled in. Otherwise, the request will be failed.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary Creates a Dev-Prod (dual-environment) project.
 *
 * @param tmpReq CreateDevProdProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDevProdProjectResponse
 */
CreateDevProdProjectResponse Client::createDevProdProjectWithOptions(const CreateDevProdProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDevProdProjectShrinkRequest request = CreateDevProdProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDevProdProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDevProdProjectResponse>();
}

/**
 * @summary Creates a Dev-Prod (dual-environment) project.
 *
 * @param request CreateDevProdProjectRequest
 * @return CreateDevProdProjectResponse
 */
CreateDevProdProjectResponse Client::createDevProdProject(const CreateDevProdProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDevProdProjectWithOptions(request, runtime);
}

/**
 * @summary Creates a menu tree directory. This operation supports features such as compute nodes, data integration, and synchronization tasks.
 *
 * @param tmpReq CreateDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectoryWithOptions(const CreateDirectoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDirectoryShrinkRequest request = CreateDirectoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDirectory"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDirectoryResponse>();
}

/**
 * @summary Creates a menu tree directory. This operation supports features such as compute nodes, data integration, and synchronization tasks.
 *
 * @param request CreateDirectoryRequest
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectory(const CreateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirectoryWithOptions(request, runtime);
}

/**
 * @summary Creates a knowledge graph entity record. Online version: v6.1.1.
 *
 * @param tmpReq CreateKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKgEntityResponse
 */
CreateKgEntityResponse Client::createKgEntityWithOptions(const CreateKgEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateKgEntityShrinkRequest request = CreateKgEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKgEntityResponse>();
}

/**
 * @summary Creates a knowledge graph entity record. Online version: v6.1.1.
 *
 * @param request CreateKgEntityRequest
 * @return CreateKgEntityResponse
 */
CreateKgEntityResponse Client::createKgEntity(const CreateKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKgEntityWithOptions(request, runtime);
}

/**
 * @summary Creates a knowledge graph relationship record. Online version: v6.1.1.
 *
 * @param tmpReq CreateKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKgRelationResponse
 */
CreateKgRelationResponse Client::createKgRelationWithOptions(const CreateKgRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateKgRelationShrinkRequest request = CreateKgRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKgRelationResponse>();
}

/**
 * @summary Creates a knowledge graph relationship record. Online version: v6.1.1.
 *
 * @param request CreateKgRelationRequest
 * @return CreateKgRelationResponse
 */
CreateKgRelationResponse Client::createKgRelation(const CreateKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKgRelationWithOptions(request, runtime);
}

/**
 * @summary Backfills data in list mode or massive mode. Take note of the following items: 1. Data backfill instances are generated and run, which affects the data output of related tables. 2. Nodes are run, which incurs computing and storage costs.
 *
 * @param tmpReq CreateNodeSupplementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeSupplementResponse
 */
CreateNodeSupplementResponse Client::createNodeSupplementWithOptions(const CreateNodeSupplementRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateNodeSupplementShrinkRequest request = CreateNodeSupplementShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateNodeSupplement"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeSupplementResponse>();
}

/**
 * @summary Backfills data in list mode or massive mode. Take note of the following items: 1. Data backfill instances are generated and run, which affects the data output of related tables. 2. Nodes are run, which incurs computing and storage costs.
 *
 * @param request CreateNodeSupplementRequest
 * @return CreateNodeSupplementResponse
 */
CreateNodeSupplementResponse Client::createNodeSupplement(const CreateNodeSupplementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeSupplementWithOptions(request, runtime);
}

/**
 * @summary Creates an integration pipeline or unstructured workflow node.
 *
 * @param tmpReq CreatePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const CreatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePipelineShrinkRequest request = CreatePipelineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary Creates an integration pipeline or unstructured workflow node.
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineWithOptions(request, runtime);
}

/**
 * @summary Asynchronously create a pipeline/unstructured workflow.
 *
 * @param tmpReq CreatePipelineByAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineByAsyncResponse
 */
CreatePipelineByAsyncResponse Client::createPipelineByAsyncWithOptions(const CreatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePipelineByAsyncShrinkRequest request = CreatePipelineByAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipelineByAsync"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineByAsyncResponse>();
}

/**
 * @summary Asynchronously create a pipeline/unstructured workflow.
 *
 * @param request CreatePipelineByAsyncRequest
 * @return CreatePipelineByAsyncResponse
 */
CreatePipelineByAsyncResponse Client::createPipelineByAsync(const CreatePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary Creates a data integration task. Note: This operation is deprecated starting from Dataphin v5.3.1. Use CreatePipeline instead.
 *
 * @param tmpReq CreatePipelineNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineNodeResponse
 */
CreatePipelineNodeResponse Client::createPipelineNodeWithOptions(const CreatePipelineNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePipelineNodeShrinkRequest request = CreatePipelineNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreatePipelineNodeCommand()) {
    request.setCreatePipelineNodeCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreatePipelineNodeCommand(), "CreatePipelineNodeCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreatePipelineNodeCommandShrink()) {
    body["CreatePipelineNodeCommand"] = request.getCreatePipelineNodeCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipelineNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineNodeResponse>();
}

/**
 * @summary Creates a data integration task. Note: This operation is deprecated starting from Dataphin v5.3.1. Use CreatePipeline instead.
 *
 * @param request CreatePipelineNodeRequest
 * @return CreatePipelineNodeResponse
 */
CreatePipelineNodeResponse Client::createPipelineNode(const CreatePipelineNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a quality rectification process. Released in version 6.4.0.
 *
 * @param tmpReq CreateRectifyFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRectifyFlowResponse
 */
CreateRectifyFlowResponse Client::createRectifyFlowWithOptions(const CreateRectifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRectifyFlowShrinkRequest request = CreateRectifyFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRectifyFlow"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRectifyFlowResponse>();
}

/**
 * @summary Creates a quality rectification process. Released in version 6.4.0.
 *
 * @param request CreateRectifyFlowRequest
 * @return CreateRectifyFlowResponse
 */
CreateRectifyFlowResponse Client::createRectifyFlow(const CreateRectifyFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRectifyFlowWithOptions(request, runtime);
}

/**
 * @summary Creates a resource file.
 *
 * @param tmpReq CreateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const CreateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateResourceShrinkRequest request = CreateResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateResource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceResponse>();
}

/**
 * @summary Creates a resource file.
 *
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a row-level permission.
 *
 * @description Queries the details of published APIs based on the appKey.
 *
 * @param tmpReq CreateRowPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRowPermissionResponse
 */
CreateRowPermissionResponse Client::createRowPermissionWithOptions(const CreateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRowPermissionShrinkRequest request = CreateRowPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateRowPermissionCommand()) {
    request.setCreateRowPermissionCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateRowPermissionCommand(), "CreateRowPermissionCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateRowPermissionCommandShrink()) {
    body["CreateRowPermissionCommand"] = request.getCreateRowPermissionCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRowPermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRowPermissionResponse>();
}

/**
 * @summary Creates a row-level permission.
 *
 * @description Queries the details of published APIs based on the appKey.
 *
 * @param request CreateRowPermissionRequest
 * @return CreateRowPermissionResponse
 */
CreateRowPermissionResponse Client::createRowPermission(const CreateRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRowPermissionWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduling monitoring alerting configuration by specifying a monitored object and one or more alerting rules. Online version: v6.4.0.
 *
 * @param tmpReq CreateScheduleMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduleMonitorResponse
 */
CreateScheduleMonitorResponse Client::createScheduleMonitorWithOptions(const CreateScheduleMonitorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduleMonitorShrinkRequest request = CreateScheduleMonitorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduleMonitor"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduleMonitorResponse>();
}

/**
 * @summary Creates a scheduling monitoring alerting configuration by specifying a monitored object and one or more alerting rules. Online version: v6.4.0.
 *
 * @param request CreateScheduleMonitorRequest
 * @return CreateScheduleMonitorResponse
 */
CreateScheduleMonitorResponse Client::createScheduleMonitor(const CreateScheduleMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduleMonitorWithOptions(request, runtime);
}

/**
 * @summary Creates a data category. Available since v5.4.2.
 *
 * @param tmpReq CreateSecurityClassifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityClassifyResponse
 */
CreateSecurityClassifyResponse Client::createSecurityClassifyWithOptions(const CreateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityClassifyShrinkRequest request = CreateSecurityClassifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSecurityClassify"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityClassifyResponse>();
}

/**
 * @summary Creates a data category. Available since v5.4.2.
 *
 * @param request CreateSecurityClassifyRequest
 * @return CreateSecurityClassifyResponse
 */
CreateSecurityClassifyResponse Client::createSecurityClassify(const CreateSecurityClassifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityClassifyWithOptions(request, runtime);
}

/**
 * @summary Creates a data classification folder. Available since v5.4.2.
 *
 * @param tmpReq CreateSecurityClassifyCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityClassifyCatalogResponse
 */
CreateSecurityClassifyCatalogResponse Client::createSecurityClassifyCatalogWithOptions(const CreateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityClassifyCatalogShrinkRequest request = CreateSecurityClassifyCatalogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSecurityClassifyCatalog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityClassifyCatalogResponse>();
}

/**
 * @summary Creates a data classification folder. Available since v5.4.2.
 *
 * @param request CreateSecurityClassifyCatalogRequest
 * @return CreateSecurityClassifyCatalogResponse
 */
CreateSecurityClassifyCatalogResponse Client::createSecurityClassifyCatalog(const CreateSecurityClassifyCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityClassifyCatalogWithOptions(request, runtime);
}

/**
 * @summary Creates a security identification result.
 * Release version: v5.4.2.
 *
 * @param tmpReq CreateSecurityIdentifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityIdentifyResultResponse
 */
CreateSecurityIdentifyResultResponse Client::createSecurityIdentifyResultWithOptions(const CreateSecurityIdentifyResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityIdentifyResultShrinkRequest request = CreateSecurityIdentifyResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSecurityIdentifyResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityIdentifyResultResponse>();
}

/**
 * @summary Creates a security identification result.
 * Release version: v5.4.2.
 *
 * @param request CreateSecurityIdentifyResultRequest
 * @return CreateSecurityIdentifyResultResponse
 */
CreateSecurityIdentifyResultResponse Client::createSecurityIdentifyResult(const CreateSecurityIdentifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityIdentifyResultWithOptions(request, runtime);
}

/**
 * @summary Creates a data classification level. Available since v5.4.2.
 *
 * @param tmpReq CreateSecurityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityLevelResponse
 */
CreateSecurityLevelResponse Client::createSecurityLevelWithOptions(const CreateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityLevelShrinkRequest request = CreateSecurityLevelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSecurityLevel"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityLevelResponse>();
}

/**
 * @summary Creates a data classification level. Available since v5.4.2.
 *
 * @param request CreateSecurityLevelRequest
 * @return CreateSecurityLevelResponse
 */
CreateSecurityLevelResponse Client::createSecurityLevel(const CreateSecurityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityLevelWithOptions(request, runtime);
}

/**
 * @summary Creates a standard. Release version: v5.4.2.
 *
 * @param tmpReq CreateStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardResponse
 */
CreateStandardResponse Client::createStandardWithOptions(const CreateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardShrinkRequest request = CreateStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardResponse>();
}

/**
 * @summary Creates a standard. Release version: v5.4.2.
 *
 * @param request CreateStandardRequest
 * @return CreateStandardResponse
 */
CreateStandardResponse Client::createStandard(const CreateStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardWithOptions(request, runtime);
}

/**
 * @summary Creates a data standard lookup table. Released in version v5.4.2.
 *
 * @param tmpReq CreateStandardLookupTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardLookupTableResponse
 */
CreateStandardLookupTableResponse Client::createStandardLookupTableWithOptions(const CreateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardLookupTableShrinkRequest request = CreateStandardLookupTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardLookupTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardLookupTableResponse>();
}

/**
 * @summary Creates a data standard lookup table. Released in version v5.4.2.
 *
 * @param request CreateStandardLookupTableRequest
 * @return CreateStandardLookupTableResponse
 */
CreateStandardLookupTableResponse Client::createStandardLookupTable(const CreateStandardLookupTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardLookupTableWithOptions(request, runtime);
}

/**
 * @summary Creates standard mapping relationships, including valid mappings and invalid mappings.
 * Release version: v5.4.2.
 *
 * @param tmpReq CreateStandardMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardMappingResponse
 */
CreateStandardMappingResponse Client::createStandardMappingWithOptions(const CreateStandardMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardMappingShrinkRequest request = CreateStandardMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardMapping"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardMappingResponse>();
}

/**
 * @summary Creates standard mapping relationships, including valid mappings and invalid mappings.
 * Release version: v5.4.2.
 *
 * @param request CreateStandardMappingRequest
 * @return CreateStandardMappingResponse
 */
CreateStandardMappingResponse Client::createStandardMapping(const CreateStandardMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardMappingWithOptions(request, runtime);
}

/**
 * @summary Creates a standard association relationship.
 * Online version: v5.4.2.
 *
 * @param tmpReq CreateStandardRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardRelationsResponse
 */
CreateStandardRelationsResponse Client::createStandardRelationsWithOptions(const CreateStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardRelationsShrinkRequest request = CreateStandardRelationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardRelations"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardRelationsResponse>();
}

/**
 * @summary Creates a standard association relationship.
 * Online version: v5.4.2.
 *
 * @param request CreateStandardRelationsRequest
 * @return CreateStandardRelationsResponse
 */
CreateStandardRelationsResponse Client::createStandardRelations(const CreateStandardRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardRelationsWithOptions(request, runtime);
}

/**
 * @summary Creates a standard set.
 * Available since: v5.4.2.
 *
 * @param tmpReq CreateStandardSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardSetResponse
 */
CreateStandardSetResponse Client::createStandardSetWithOptions(const CreateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardSetShrinkRequest request = CreateStandardSetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardSet"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardSetResponse>();
}

/**
 * @summary Creates a standard set.
 * Available since: v5.4.2.
 *
 * @param request CreateStandardSetRequest
 * @return CreateStandardSetResponse
 */
CreateStandardSetResponse Client::createStandardSet(const CreateStandardSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardSetWithOptions(request, runtime);
}

/**
 * @summary Creates a data standard template. Release version: v5.4.2.
 *
 * @param tmpReq CreateStandardTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardTemplateResponse
 */
CreateStandardTemplateResponse Client::createStandardTemplateWithOptions(const CreateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardTemplateShrinkRequest request = CreateStandardTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardTemplateResponse>();
}

/**
 * @summary Creates a data standard template. Release version: v5.4.2.
 *
 * @param request CreateStandardTemplateRequest
 * @return CreateStandardTemplateResponse
 */
CreateStandardTemplateResponse Client::createStandardTemplate(const CreateStandardTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a data standard root word. Released in version v5.4.2.
 *
 * @param tmpReq CreateStandardWordRootRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStandardWordRootResponse
 */
CreateStandardWordRootResponse Client::createStandardWordRootWithOptions(const CreateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStandardWordRootShrinkRequest request = CreateStandardWordRootShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStandardWordRoot"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStandardWordRootResponse>();
}

/**
 * @summary Creates a data standard root word. Released in version v5.4.2.
 *
 * @param request CreateStandardWordRootRequest
 * @return CreateStandardWordRootResponse
 */
CreateStandardWordRootResponse Client::createStandardWordRoot(const CreateStandardWordRootRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStandardWordRootWithOptions(request, runtime);
}

/**
 * @summary Creates a stream-batch integrated task.
 *
 * @param tmpReq CreateStreamBatchJobMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamBatchJobMappingResponse
 */
CreateStreamBatchJobMappingResponse Client::createStreamBatchJobMappingWithOptions(const CreateStreamBatchJobMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateStreamBatchJobMappingShrinkRequest request = CreateStreamBatchJobMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamBatchJobMappingCreateCommand()) {
    request.setStreamBatchJobMappingCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamBatchJobMappingCreateCommand(), "StreamBatchJobMappingCreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasStreamBatchJobMappingCreateCommandShrink()) {
    body["StreamBatchJobMappingCreateCommand"] = request.getStreamBatchJobMappingCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateStreamBatchJobMapping"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamBatchJobMappingResponse>();
}

/**
 * @summary Creates a stream-batch integrated task.
 *
 * @param request CreateStreamBatchJobMappingRequest
 * @return CreateStreamBatchJobMappingResponse
 */
CreateStreamBatchJobMappingResponse Client::createStreamBatchJobMapping(const CreateStreamBatchJobMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamBatchJobMappingWithOptions(request, runtime);
}

/**
 * @summary Creates a user-defined function.
 *
 * @param tmpReq CreateUdfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUdfResponse
 */
CreateUdfResponse Client::createUdfWithOptions(const CreateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUdfShrinkRequest request = CreateUdfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUdf"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUdfResponse>();
}

/**
 * @summary Creates a user-defined function.
 *
 * @param request CreateUdfRequest
 * @return CreateUdfResponse
 */
CreateUdfResponse Client::createUdf(const CreateUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUdfWithOptions(request, runtime);
}

/**
 * @summary Creates a user group.
 *
 * @param tmpReq CreateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroupWithOptions(const CreateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserGroupShrinkRequest request = CreateUserGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserGroupResponse>();
}

/**
 * @summary Creates a user group.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an unstructured workflow node using JSON script mode. Online since v6.2.0.
 *
 * @param tmpReq CreateWorkFlowByJsonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkFlowByJsonResponse
 */
CreateWorkFlowByJsonResponse Client::createWorkFlowByJsonWithOptions(const CreateWorkFlowByJsonRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkFlowByJsonShrinkRequest request = CreateWorkFlowByJsonShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasCreateCommand()) {
    request.setCreateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCreateCommand(), "CreateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasCreateCommandShrink()) {
    body["CreateCommand"] = request.getCreateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkFlowByJson"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkFlowByJsonResponse>();
}

/**
 * @summary Creates an unstructured workflow node using JSON script mode. Online since v6.2.0.
 *
 * @param request CreateWorkFlowByJsonRequest
 * @return CreateWorkFlowByJsonResponse
 */
CreateWorkFlowByJsonResponse Client::createWorkFlowByJson(const CreateWorkFlowByJsonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkFlowByJsonWithOptions(request, runtime);
}

/**
 * @summary Deletes an ad hoc query file from the menu tree.
 *
 * @param request DeleteAdHocFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdHocFileResponse
 */
DeleteAdHocFileResponse Client::deleteAdHocFileWithOptions(const DeleteAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAdHocFile"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAdHocFileResponse>();
}

/**
 * @summary Deletes an ad hoc query file from the menu tree.
 *
 * @param request DeleteAdHocFileRequest
 * @return DeleteAdHocFileResponse
 */
DeleteAdHocFileResponse Client::deleteAdHocFile(const DeleteAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdHocFileWithOptions(request, runtime);
}

/**
 * @summary Deletes an offline computing task. If the task is not offline, you must take it offline before deleting it.
 *
 * @param tmpReq DeleteBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBatchTaskResponse
 */
DeleteBatchTaskResponse Client::deleteBatchTaskWithOptions(const DeleteBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteBatchTaskShrinkRequest request = DeleteBatchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteBatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBatchTaskResponse>();
}

/**
 * @summary Deletes an offline computing task. If the task is not offline, you must take it offline before deleting it.
 *
 * @param request DeleteBatchTaskRequest
 * @return DeleteBatchTaskResponse
 */
DeleteBatchTaskResponse Client::deleteBatchTask(const DeleteBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a business entity.
 *
 * @param request DeleteBizEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBizEntityResponse
 */
DeleteBizEntityResponse Client::deleteBizEntityWithOptions(const DeleteBizEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizUnitId()) {
    query["BizUnitId"] = request.getBizUnitId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBizEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBizEntityResponse>();
}

/**
 * @summary Deletes a business entity.
 *
 * @param request DeleteBizEntityRequest
 * @return DeleteBizEntityResponse
 */
DeleteBizEntityResponse Client::deleteBizEntity(const DeleteBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizEntityWithOptions(request, runtime);
}

/**
 * @summary Deletes a business metric.
 * Release version: v5.5.0.
 *
 * @param tmpReq DeleteBizMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBizMetricResponse
 */
DeleteBizMetricResponse Client::deleteBizMetricWithOptions(const DeleteBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteBizMetricShrinkRequest request = DeleteBizMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteBizMetricCommand()) {
    request.setDeleteBizMetricCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteBizMetricCommand(), "DeleteBizMetricCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteBizMetricCommandShrink()) {
    body["DeleteBizMetricCommand"] = request.getDeleteBizMetricCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteBizMetric"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBizMetricResponse>();
}

/**
 * @summary Deletes a business metric.
 * Release version: v5.5.0.
 *
 * @param request DeleteBizMetricRequest
 * @return DeleteBizMetricResponse
 */
DeleteBizMetricResponse Client::deleteBizMetric(const DeleteBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizMetricWithOptions(request, runtime);
}

/**
 * @summary Deletes a data domain.
 *
 * @param request DeleteBizUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBizUnitResponse
 */
DeleteBizUnitResponse Client::deleteBizUnitWithOptions(const DeleteBizUnitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBizUnit"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBizUnitResponse>();
}

/**
 * @summary Deletes a data domain.
 *
 * @param request DeleteBizUnitRequest
 * @return DeleteBizUnitResponse
 */
DeleteBizUnitResponse Client::deleteBizUnit(const DeleteBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizUnitWithOptions(request, runtime);
}

/**
 * @summary Deletes a cluster. Online version: v6.3.0.
 *
 * @param request DeleteComputeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeClusterResponse
 */
DeleteComputeClusterResponse Client::deleteComputeClusterWithOptions(const DeleteComputeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeCluster"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeClusterResponse>();
}

/**
 * @summary Deletes a cluster. Online version: v6.3.0.
 *
 * @param request DeleteComputeClusterRequest
 * @return DeleteComputeClusterResponse
 */
DeleteComputeClusterResponse Client::deleteComputeCluster(const DeleteComputeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a compute source.
 *
 * @param request DeleteComputeSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeSourceResponse
 */
DeleteComputeSourceResponse Client::deleteComputeSourceWithOptions(const DeleteComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeSourceResponse>();
}

/**
 * @summary Deletes a compute source.
 *
 * @param request DeleteComputeSourceRequest
 * @return DeleteComputeSourceResponse
 */
DeleteComputeSourceResponse Client::deleteComputeSource(const DeleteComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a subject domain.
 *
 * @param request DeleteDataDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataDomainResponse
 */
DeleteDataDomainResponse Client::deleteDataDomainWithOptions(const DeleteDataDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizUnitId()) {
    query["BizUnitId"] = request.getBizUnitId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataDomain"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataDomainResponse>();
}

/**
 * @summary Deletes a subject domain.
 *
 * @param request DeleteDataDomainRequest
 * @return DeleteDataDomainResponse
 */
DeleteDataDomainResponse Client::deleteDataDomain(const DeleteDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a data service application. Only superusers, system administrators, or application owners can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request DeleteDataServiceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataServiceAppResponse
 */
DeleteDataServiceAppResponse Client::deleteDataServiceAppWithOptions(const DeleteDataServiceAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataServiceApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataServiceAppResponse>();
}

/**
 * @summary Deletes a data service application. Only superusers, system administrators, or application owners can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request DeleteDataServiceAppRequest
 * @return DeleteDataServiceAppResponse
 */
DeleteDataServiceAppResponse Client::deleteDataServiceApp(const DeleteDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary Deletes a data service application group. Only superusers and system administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request DeleteDataServiceAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataServiceAppGroupResponse
 */
DeleteDataServiceAppGroupResponse Client::deleteDataServiceAppGroupWithOptions(const DeleteDataServiceAppGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataServiceAppGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataServiceAppGroupResponse>();
}

/**
 * @summary Deletes a data service application group. Only superusers and system administrators can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request DeleteDataServiceAppGroupRequest
 * @return DeleteDataServiceAppGroupResponse
 */
DeleteDataServiceAppGroupResponse Client::deleteDataServiceAppGroup(const DeleteDataServiceAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataServiceAppGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source.
 *
 * @param tmpReq DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataSourceShrinkRequest request = DeleteDataSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Deletes a data source.
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset. Release version: v6.2.0.
 *
 * @param request DeleteDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary Deletes a dataset. Release version: v6.2.0.
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary Deletes a file directory from the menu tree.
 *
 * @param request DeleteDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectoryWithOptions(const DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDirectory"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDirectoryResponse>();
}

/**
 * @summary Deletes a file directory from the menu tree.
 *
 * @param request DeleteDirectoryRequest
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectory(const DeleteDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoryWithOptions(request, runtime);
}

/**
 * @summary Deletes an entity record. Online version: v6.1.1.
 *
 * @param request DeleteKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKgEntityResponse
 */
DeleteKgEntityResponse Client::deleteKgEntityWithOptions(const DeleteKgEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKgEntityResponse>();
}

/**
 * @summary Deletes an entity record. Online version: v6.1.1.
 *
 * @param request DeleteKgEntityRequest
 * @return DeleteKgEntityResponse
 */
DeleteKgEntityResponse Client::deleteKgEntity(const DeleteKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKgEntityWithOptions(request, runtime);
}

/**
 * @summary Deletes a relationship record. Online version: v6.1.1.
 *
 * @param request DeleteKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKgRelationResponse
 */
DeleteKgRelationResponse Client::deleteKgRelationWithOptions(const DeleteKgRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKgRelationResponse>();
}

/**
 * @summary Deletes a relationship record. Online version: v6.1.1.
 *
 * @param request DeleteKgRelationRequest
 * @return DeleteKgRelationResponse
 */
DeleteKgRelationResponse Client::deleteKgRelation(const DeleteKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKgRelationWithOptions(request, runtime);
}

/**
 * @summary Deletes a project. This applies to both Basic and Dev-Prod projects.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary Deletes a project. This applies to both Basic and Dev-Prod projects.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes quality rule objects in batches. Released in version 5.4.2.
 *
 * @param tmpReq DeleteQualityRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityRulesResponse
 */
DeleteQualityRulesResponse Client::deleteQualityRulesWithOptions(const DeleteQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQualityRulesShrinkRequest request = DeleteQualityRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteQualityRules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityRulesResponse>();
}

/**
 * @summary Deletes quality rule objects in batches. Released in version 5.4.2.
 *
 * @param request DeleteQualityRulesRequest
 * @return DeleteQualityRulesResponse
 */
DeleteQualityRulesResponse Client::deleteQualityRules(const DeleteQualityRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple quality scheduling objects. Release version: v5.4.2.
 *
 * @param tmpReq DeleteQualitySchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualitySchedulesResponse
 */
DeleteQualitySchedulesResponse Client::deleteQualitySchedulesWithOptions(const DeleteQualitySchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQualitySchedulesShrinkRequest request = DeleteQualitySchedulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteQualitySchedules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualitySchedulesResponse>();
}

/**
 * @summary Deletes multiple quality scheduling objects. Release version: v5.4.2.
 *
 * @param request DeleteQualitySchedulesRequest
 * @return DeleteQualitySchedulesResponse
 */
DeleteQualitySchedulesResponse Client::deleteQualitySchedules(const DeleteQualitySchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualitySchedulesWithOptions(request, runtime);
}

/**
 * @summary Deletes quality template objects in batches. Available since version v5.4.2.
 *
 * @param tmpReq DeleteQualityTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityTemplatesResponse
 */
DeleteQualityTemplatesResponse Client::deleteQualityTemplatesWithOptions(const DeleteQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQualityTemplatesShrinkRequest request = DeleteQualityTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteQualityTemplates"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityTemplatesResponse>();
}

/**
 * @summary Deletes quality template objects in batches. Available since version v5.4.2.
 *
 * @param request DeleteQualityTemplatesRequest
 * @return DeleteQualityTemplatesResponse
 */
DeleteQualityTemplatesResponse Client::deleteQualityTemplates(const DeleteQualityTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityTemplatesWithOptions(request, runtime);
}

/**
 * @summary Deletes quality monitored objects in batches. Release version: v5.4.2.
 *
 * @param tmpReq DeleteQualityWatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityWatchesResponse
 */
DeleteQualityWatchesResponse Client::deleteQualityWatchesWithOptions(const DeleteQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteQualityWatchesShrinkRequest request = DeleteQualityWatchesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteQualityWatches"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityWatchesResponse>();
}

/**
 * @summary Deletes quality monitored objects in batches. Release version: v5.4.2.
 *
 * @param request DeleteQualityWatchesRequest
 * @return DeleteQualityWatchesResponse
 */
DeleteQualityWatchesResponse Client::deleteQualityWatches(const DeleteQualityWatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityWatchesWithOptions(request, runtime);
}

/**
 * @summary Deletes registered data lineage. Available since v5.4.0.
 *
 * @param tmpReq DeleteRegisterLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRegisterLineageResponse
 */
DeleteRegisterLineageResponse Client::deleteRegisterLineageWithOptions(const DeleteRegisterLineageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRegisterLineageShrinkRequest request = DeleteRegisterLineageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteRegisterLineageCommand()) {
    request.setDeleteRegisterLineageCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteRegisterLineageCommand(), "DeleteRegisterLineageCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteRegisterLineageCommandShrink()) {
    body["DeleteRegisterLineageCommand"] = request.getDeleteRegisterLineageCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRegisterLineage"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRegisterLineageResponse>();
}

/**
 * @summary Deletes registered data lineage. Available since v5.4.0.
 *
 * @param request DeleteRegisterLineageRequest
 * @return DeleteRegisterLineageResponse
 */
DeleteRegisterLineageResponse Client::deleteRegisterLineage(const DeleteRegisterLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegisterLineageWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource file.
 *
 * @param request DeleteResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceResponse>();
}

/**
 * @summary Deletes a resource file.
 *
 * @param request DeleteResourceRequest
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const DeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes row-level permissions.
 *
 * @param tmpReq DeleteRowPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRowPermissionResponse
 */
DeleteRowPermissionResponse Client::deleteRowPermissionWithOptions(const DeleteRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRowPermissionShrinkRequest request = DeleteRowPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteRowPermissionCommand()) {
    request.setDeleteRowPermissionCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteRowPermissionCommand(), "DeleteRowPermissionCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteRowPermissionCommandShrink()) {
    body["DeleteRowPermissionCommand"] = request.getDeleteRowPermissionCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRowPermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRowPermissionResponse>();
}

/**
 * @summary Deletes row-level permissions.
 *
 * @param request DeleteRowPermissionRequest
 * @return DeleteRowPermissionResponse
 */
DeleteRowPermissionResponse Client::deleteRowPermission(const DeleteRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRowPermissionWithOptions(request, runtime);
}

/**
 * @summary Deletes a data category. Released in version v5.4.2.
 *
 * @param tmpReq DeleteSecurityClassifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityClassifyResponse
 */
DeleteSecurityClassifyResponse Client::deleteSecurityClassifyWithOptions(const DeleteSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSecurityClassifyShrinkRequest request = DeleteSecurityClassifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSecurityClassify"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityClassifyResponse>();
}

/**
 * @summary Deletes a data category. Released in version v5.4.2.
 *
 * @param request DeleteSecurityClassifyRequest
 * @return DeleteSecurityClassifyResponse
 */
DeleteSecurityClassifyResponse Client::deleteSecurityClassify(const DeleteSecurityClassifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityClassifyWithOptions(request, runtime);
}

/**
 * @summary Deletes a data classification catalog. Available since version v5.4.2.
 *
 * @param tmpReq DeleteSecurityClassifyCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityClassifyCatalogResponse
 */
DeleteSecurityClassifyCatalogResponse Client::deleteSecurityClassifyCatalogWithOptions(const DeleteSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSecurityClassifyCatalogShrinkRequest request = DeleteSecurityClassifyCatalogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSecurityClassifyCatalog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityClassifyCatalogResponse>();
}

/**
 * @summary Deletes a data classification catalog. Available since version v5.4.2.
 *
 * @param request DeleteSecurityClassifyCatalogRequest
 * @return DeleteSecurityClassifyCatalogResponse
 */
DeleteSecurityClassifyCatalogResponse Client::deleteSecurityClassifyCatalog(const DeleteSecurityClassifyCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityClassifyCatalogWithOptions(request, runtime);
}

/**
 * @summary Deletes security identification results in batches. Released in version 5.4.2.
 *
 * @param tmpReq DeleteSecurityIdentifyResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityIdentifyResultsResponse
 */
DeleteSecurityIdentifyResultsResponse Client::deleteSecurityIdentifyResultsWithOptions(const DeleteSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSecurityIdentifyResultsShrinkRequest request = DeleteSecurityIdentifyResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSecurityIdentifyResults"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityIdentifyResultsResponse>();
}

/**
 * @summary Deletes security identification results in batches. Released in version 5.4.2.
 *
 * @param request DeleteSecurityIdentifyResultsRequest
 * @return DeleteSecurityIdentifyResultsResponse
 */
DeleteSecurityIdentifyResultsResponse Client::deleteSecurityIdentifyResults(const DeleteSecurityIdentifyResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityIdentifyResultsWithOptions(request, runtime);
}

/**
 * @summary Deletes a data classification level. Available since v5.4.2.
 *
 * @param tmpReq DeleteSecurityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityLevelResponse
 */
DeleteSecurityLevelResponse Client::deleteSecurityLevelWithOptions(const DeleteSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteSecurityLevelShrinkRequest request = DeleteSecurityLevelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteSecurityLevel"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityLevelResponse>();
}

/**
 * @summary Deletes a data classification level. Available since v5.4.2.
 *
 * @param request DeleteSecurityLevelRequest
 * @return DeleteSecurityLevelResponse
 */
DeleteSecurityLevelResponse Client::deleteSecurityLevel(const DeleteSecurityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityLevelWithOptions(request, runtime);
}

/**
 * @summary Deletes a standard. Release version: v5.4.2.
 *
 * @param tmpReq DeleteStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardResponse
 */
DeleteStandardResponse Client::deleteStandardWithOptions(const DeleteStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteStandardShrinkRequest request = DeleteStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardResponse>();
}

/**
 * @summary Deletes a standard. Release version: v5.4.2.
 *
 * @param request DeleteStandardRequest
 * @return DeleteStandardResponse
 */
DeleteStandardResponse Client::deleteStandard(const DeleteStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardWithOptions(request, runtime);
}

/**
 * @summary Deletes invalid mapping relationships. Released in version v5.4.2.
 *
 * @param tmpReq DeleteStandardInValidMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardInValidMappingResponse
 */
DeleteStandardInValidMappingResponse Client::deleteStandardInValidMappingWithOptions(const DeleteStandardInValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteStandardInValidMappingShrinkRequest request = DeleteStandardInValidMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteStandardInValidMapping"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardInValidMappingResponse>();
}

/**
 * @summary Deletes invalid mapping relationships. Released in version v5.4.2.
 *
 * @param request DeleteStandardInValidMappingRequest
 * @return DeleteStandardInValidMappingResponse
 */
DeleteStandardInValidMappingResponse Client::deleteStandardInValidMapping(const DeleteStandardInValidMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardInValidMappingWithOptions(request, runtime);
}

/**
 * @summary Deletes a data standard lookup table. Released in version 5.4.2.
 *
 * @param request DeleteStandardLookupTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardLookupTableResponse
 */
DeleteStandardLookupTableResponse Client::deleteStandardLookupTableWithOptions(const DeleteStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStandardLookupTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardLookupTableResponse>();
}

/**
 * @summary Deletes a data standard lookup table. Released in version 5.4.2.
 *
 * @param request DeleteStandardLookupTableRequest
 * @return DeleteStandardLookupTableResponse
 */
DeleteStandardLookupTableResponse Client::deleteStandardLookupTable(const DeleteStandardLookupTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardLookupTableWithOptions(request, runtime);
}

/**
 * @summary Deletes standard associations in batches. Available since version 5.4.2.
 *
 * @param tmpReq DeleteStandardRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardRelationsResponse
 */
DeleteStandardRelationsResponse Client::deleteStandardRelationsWithOptions(const DeleteStandardRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteStandardRelationsShrinkRequest request = DeleteStandardRelationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteStandardRelations"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardRelationsResponse>();
}

/**
 * @summary Deletes standard associations in batches. Available since version 5.4.2.
 *
 * @param request DeleteStandardRelationsRequest
 * @return DeleteStandardRelationsResponse
 */
DeleteStandardRelationsResponse Client::deleteStandardRelations(const DeleteStandardRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardRelationsWithOptions(request, runtime);
}

/**
 * @summary Deletes a standard set.
 * Online version: v5.4.2.
 *
 * @param request DeleteStandardSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardSetResponse
 */
DeleteStandardSetResponse Client::deleteStandardSetWithOptions(const DeleteStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStandardSet"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardSetResponse>();
}

/**
 * @summary Deletes a standard set.
 * Online version: v5.4.2.
 *
 * @param request DeleteStandardSetRequest
 * @return DeleteStandardSetResponse
 */
DeleteStandardSetResponse Client::deleteStandardSet(const DeleteStandardSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardSetWithOptions(request, runtime);
}

/**
 * @summary Deletes valid mapping relationships. Release version: v5.4.2.
 *
 * @param tmpReq DeleteStandardValidMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardValidMappingResponse
 */
DeleteStandardValidMappingResponse Client::deleteStandardValidMappingWithOptions(const DeleteStandardValidMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteStandardValidMappingShrinkRequest request = DeleteStandardValidMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeleteCommand()) {
    request.setDeleteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeleteCommand(), "DeleteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDeleteCommandShrink()) {
    body["DeleteCommand"] = request.getDeleteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteStandardValidMapping"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardValidMappingResponse>();
}

/**
 * @summary Deletes valid mapping relationships. Release version: v5.4.2.
 *
 * @param request DeleteStandardValidMappingRequest
 * @return DeleteStandardValidMappingResponse
 */
DeleteStandardValidMappingResponse Client::deleteStandardValidMapping(const DeleteStandardValidMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardValidMappingWithOptions(request, runtime);
}

/**
 * @summary Deletes a data standard root word.
 * Online version: v5.4.2.
 *
 * @param request DeleteStandardWordRootRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStandardWordRootResponse
 */
DeleteStandardWordRootResponse Client::deleteStandardWordRootWithOptions(const DeleteStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStandardWordRoot"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStandardWordRootResponse>();
}

/**
 * @summary Deletes a data standard root word.
 * Online version: v5.4.2.
 *
 * @param request DeleteStandardWordRootRequest
 * @return DeleteStandardWordRootResponse
 */
DeleteStandardWordRootResponse Client::deleteStandardWordRoot(const DeleteStandardWordRootRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStandardWordRootWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom function.
 *
 * @param request DeleteUdfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUdfResponse
 */
DeleteUdfResponse Client::deleteUdfWithOptions(const DeleteUdfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUdf"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUdfResponse>();
}

/**
 * @summary Deletes a custom function.
 *
 * @param request DeleteUdfRequest
 * @return DeleteUdfResponse
 */
DeleteUdfResponse Client::deleteUdf(const DeleteUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUdfWithOptions(request, runtime);
}

/**
 * @summary Deletes a user group.
 *
 * @param request DeleteUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroupWithOptions(const DeleteUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserGroupResponse>();
}

/**
 * @summary Deletes a user group.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary Executes a custom Cypher query. Online version: v6.2.0.
 *
 * @param tmpReq ExecKgCypherRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecKgCypherResponse
 */
ExecKgCypherResponse Client::execKgCypherWithOptions(const ExecKgCypherRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecKgCypherShrinkRequest request = ExecKgCypherShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecCommand()) {
    request.setExecCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecCommand(), "ExecCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasExecCommandShrink()) {
    body["ExecCommand"] = request.getExecCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecKgCypher"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecKgCypherResponse>();
}

/**
 * @summary Executes a custom Cypher query. Online version: v6.2.0.
 *
 * @param request ExecKgCypherRequest
 * @return ExecKgCypherResponse
 */
ExecKgCypherResponse Client::execKgCypher(const ExecKgCypherRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execKgCypherWithOptions(request, runtime);
}

/**
 * @summary Executes a custom Cypher query. Available since v6.3.0.
 *
 * @param tmpReq ExecKgGremlinRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecKgGremlinResponse
 */
ExecKgGremlinResponse Client::execKgGremlinWithOptions(const ExecKgGremlinRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecKgGremlinShrinkRequest request = ExecKgGremlinShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecCommand()) {
    request.setExecCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecCommand(), "ExecCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasExecCommandShrink()) {
    body["ExecCommand"] = request.getExecCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecKgGremlin"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecKgGremlinResponse>();
}

/**
 * @summary Executes a custom Cypher query. Available since v6.3.0.
 *
 * @param request ExecKgGremlinRequest
 * @return ExecKgGremlinResponse
 */
ExecKgGremlinResponse Client::execKgGremlin(const ExecKgGremlinRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execKgGremlinWithOptions(request, runtime);
}

/**
 * @summary Executes an ad hoc query task.
 *
 * @param tmpReq ExecuteAdHocTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAdHocTaskResponse
 */
ExecuteAdHocTaskResponse Client::executeAdHocTaskWithOptions(const ExecuteAdHocTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteAdHocTaskShrinkRequest request = ExecuteAdHocTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecuteCommand()) {
    request.setExecuteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecuteCommand(), "ExecuteCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasExecuteCommandShrink()) {
    body["ExecuteCommand"] = request.getExecuteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteAdHocTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAdHocTaskResponse>();
}

/**
 * @summary Executes an ad hoc query task.
 *
 * @param request ExecuteAdHocTaskRequest
 * @return ExecuteAdHocTaskResponse
 */
ExecuteAdHocTaskResponse Client::executeAdHocTask(const ExecuteAdHocTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeAdHocTaskWithOptions(request, runtime);
}

/**
 * @summary Executes a DDL statement: creates a table on a data source based on the specified data source identifier and DDL statement.
 *
 * @param tmpReq ExecuteDDLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteDDLResponse
 */
ExecuteDDLResponse Client::executeDDLWithOptions(const ExecuteDDLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteDDLShrinkRequest request = ExecuteDDLShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasDDLCommand()) {
    request.setDDLCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDDLCommand(), "DDLCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasDDLCommandShrink()) {
    body["DDLCommand"] = request.getDDLCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteDDL"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteDDLResponse>();
}

/**
 * @summary Executes a DDL statement: creates a table on a data source based on the specified data source identifier and DDL statement.
 *
 * @param request ExecuteDDLRequest
 * @return ExecuteDDLResponse
 */
ExecuteDDLResponse Client::executeDDL(const ExecuteDDLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeDDLWithOptions(request, runtime);
}

/**
 * @summary Runs a manually scheduled node.
 *
 * @param tmpReq ExecuteManualNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteManualNodeResponse
 */
ExecuteManualNodeResponse Client::executeManualNodeWithOptions(const ExecuteManualNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteManualNodeShrinkRequest request = ExecuteManualNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecuteCommand()) {
    request.setExecuteCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecuteCommand(), "ExecuteCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasExecuteCommandShrink()) {
    body["ExecuteCommand"] = request.getExecuteCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteManualNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteManualNodeResponse>();
}

/**
 * @summary Runs a manually scheduled node.
 *
 * @param request ExecuteManualNodeRequest
 * @return ExecuteManualNodeResponse
 */
ExecuteManualNodeResponse Client::executeManualNode(const ExecuteManualNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeManualNodeWithOptions(request, runtime);
}

/**
 * @summary Runs a trigger node.
 *
 * @param request ExecuteTriggerNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteTriggerNodeResponse
 */
ExecuteTriggerNodeResponse Client::executeTriggerNodeWithOptions(const ExecuteTriggerNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizDate()) {
    query["BizDate"] = request.getBizDate();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasIndex()) {
    query["Index"] = request.getIndex();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteTriggerNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteTriggerNodeResponse>();
}

/**
 * @summary Runs a trigger node.
 *
 * @param request ExecuteTriggerNodeRequest
 * @return ExecuteTriggerNodeResponse
 */
ExecuteTriggerNodeResponse Client::executeTriggerNode(const ExecuteTriggerNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeTriggerNodeWithOptions(request, runtime);
}

/**
 * @summary Exports knowledge graph metadata definitions. Online version: v6.1.1.
 *
 * @param request ExportKgSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportKgSchemaResponse
 */
ExportKgSchemaResponse Client::exportKgSchemaWithOptions(const ExportKgSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasOutputFormat()) {
    query["OutputFormat"] = request.getOutputFormat();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportKgSchema"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportKgSchemaResponse>();
}

/**
 * @summary Exports knowledge graph metadata definitions. Online version: v6.1.1.
 *
 * @param request ExportKgSchemaRequest
 * @return ExportKgSchemaResponse
 */
ExportKgSchemaResponse Client::exportKgSchema(const ExportKgSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportKgSchemaWithOptions(request, runtime);
}

/**
 * @summary Reruns downstream nodes to fix data link issues. Supports forced rerun of downstream nodes. Impact: incurs compute costs and affects data output.
 *
 * @param tmpReq FixDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FixDataResponse
 */
FixDataResponse Client::fixDataWithOptions(const FixDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FixDataShrinkRequest request = FixDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFixDataCommand()) {
    request.setFixDataCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFixDataCommand(), "FixDataCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasFixDataCommandShrink()) {
    body["FixDataCommand"] = request.getFixDataCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FixData"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FixDataResponse>();
}

/**
 * @summary Reruns downstream nodes to fix data link issues. Supports forced rerun of downstream nodes. Impact: incurs compute costs and affects data output.
 *
 * @param request FixDataRequest
 * @return FixDataResponse
 */
FixDataResponse Client::fixData(const FixDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fixDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves all authorized accounts for a row-level permission by using the row-level permission ID.
 *
 * @param tmpReq GetAccountByRowPermissionIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccountByRowPermissionIdResponse
 */
GetAccountByRowPermissionIdResponse Client::getAccountByRowPermissionIdWithOptions(const GetAccountByRowPermissionIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAccountByRowPermissionIdShrinkRequest request = GetAccountByRowPermissionIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGetAccountByRowPermissionIdQuery()) {
    request.setGetAccountByRowPermissionIdQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGetAccountByRowPermissionIdQuery(), "GetAccountByRowPermissionIdQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasGetAccountByRowPermissionIdQueryShrink()) {
    body["GetAccountByRowPermissionIdQuery"] = request.getGetAccountByRowPermissionIdQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAccountByRowPermissionId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccountByRowPermissionIdResponse>();
}

/**
 * @summary Retrieves all authorized accounts for a row-level permission by using the row-level permission ID.
 *
 * @param request GetAccountByRowPermissionIdRequest
 * @return GetAccountByRowPermissionIdResponse
 */
GetAccountByRowPermissionIdResponse Client::getAccountByRowPermissionId(const GetAccountByRowPermissionIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountByRowPermissionIdWithOptions(request, runtime);
}

/**
 * @summary Queries a custom query file in the directory tree.
 *
 * @param request GetAdHocFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdHocFileResponse
 */
GetAdHocFileResponse Client::getAdHocFileWithOptions(const GetAdHocFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdHocFile"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdHocFileResponse>();
}

/**
 * @summary Queries a custom query file in the directory tree.
 *
 * @param request GetAdHocFileRequest
 * @return GetAdHocFileResponse
 */
GetAdHocFileResponse Client::getAdHocFile(const GetAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocFileWithOptions(request, runtime);
}

/**
 * @summary Retrieves the execution logs of an ad-hoc query task.
 *
 * @param request GetAdHocTaskLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdHocTaskLogResponse
 */
GetAdHocTaskLogResponse Client::getAdHocTaskLogWithOptions(const GetAdHocTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSubTaskId()) {
    query["SubTaskId"] = request.getSubTaskId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdHocTaskLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdHocTaskLogResponse>();
}

/**
 * @summary Retrieves the execution logs of an ad-hoc query task.
 *
 * @param request GetAdHocTaskLogRequest
 * @return GetAdHocTaskLogResponse
 */
GetAdHocTaskLogResponse Client::getAdHocTaskLog(const GetAdHocTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocTaskLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the execution results of an ad hoc query task.
 *
 * @param request GetAdHocTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdHocTaskResultResponse
 */
GetAdHocTaskResultResponse Client::getAdHocTaskResultWithOptions(const GetAdHocTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSubTaskId()) {
    query["SubTaskId"] = request.getSubTaskId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdHocTaskResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdHocTaskResultResponse>();
}

/**
 * @summary Retrieves the execution results of an ad hoc query task.
 *
 * @param request GetAdHocTaskResultRequest
 * @return GetAdHocTaskResultResponse
 */
GetAdHocTaskResultResponse Client::getAdHocTaskResult(const GetAdHocTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocTaskResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an alert event.
 *
 * @param request GetAlertEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertEventResponse
 */
GetAlertEventResponse Client::getAlertEventWithOptions(const GetAlertEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertEvent"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertEventResponse>();
}

/**
 * @summary Retrieves the details of an alert event.
 *
 * @param request GetAlertEventRequest
 * @return GetAlertEventResponse
 */
GetAlertEventResponse Client::getAlertEvent(const GetAlertEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertEventWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an approval task based on the approval flow ID, including the approval process steps. Available from version 6.4.0.
 *
 * @param request GetApprovalTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApprovalTaskDetailResponse
 */
GetApprovalTaskDetailResponse Client::getApprovalTaskDetailWithOptions(const GetApprovalTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApprovalTaskDetail"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApprovalTaskDetailResponse>();
}

/**
 * @summary Queries the details of an approval task based on the approval flow ID, including the approval process steps. Available from version 6.4.0.
 *
 * @param request GetApprovalTaskDetailRequest
 * @return GetApprovalTaskDetailResponse
 */
GetApprovalTaskDetailResponse Client::getApprovalTaskDetail(const GetApprovalTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApprovalTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Queries asset property values. Online version: v6.3.0.
 *
 * @param tmpReq GetAssetAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssetAttributesResponse
 */
GetAssetAttributesResponse Client::getAssetAttributesWithOptions(const GetAssetAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAssetAttributesShrinkRequest request = GetAssetAttributesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryCommand()) {
    request.setQueryCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryCommand(), "QueryCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasQueryCommandShrink()) {
    body["QueryCommand"] = request.getQueryCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAssetAttributes"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssetAttributesResponse>();
}

/**
 * @summary Queries asset property values. Online version: v6.3.0.
 *
 * @param request GetAssetAttributesRequest
 * @return GetAssetAttributesResponse
 */
GetAssetAttributesResponse Client::getAssetAttributes(const GetAssetAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetAttributesWithOptions(request, runtime);
}

/**
 * @summary Queries the mapping relationships based on the asset object GUID. Released in version 5.4.2.
 *
 * @param tmpReq GetAssetMappingRelationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssetMappingRelationsResponse
 */
GetAssetMappingRelationsResponse Client::getAssetMappingRelationsWithOptions(const GetAssetMappingRelationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAssetMappingRelationsShrinkRequest request = GetAssetMappingRelationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetMappingQuery()) {
    request.setAssetMappingQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetMappingQuery(), "AssetMappingQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAssetMappingQueryShrink()) {
    body["AssetMappingQuery"] = request.getAssetMappingQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAssetMappingRelations"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssetMappingRelationsResponse>();
}

/**
 * @summary Queries the mapping relationships based on the asset object GUID. Released in version 5.4.2.
 *
 * @param request GetAssetMappingRelationsRequest
 * @return GetAssetMappingRelationsResponse
 */
GetAssetMappingRelationsResponse Client::getAssetMappingRelations(const GetAssetMappingRelationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetMappingRelationsWithOptions(request, runtime);
}

/**
 * @summary Queries asset property definitions. Online version: v6.3.0.
 *
 * @param request GetAssetTypeAttributeCodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAssetTypeAttributeCodesResponse
 */
GetAssetTypeAttributeCodesResponse Client::getAssetTypeAttributeCodesWithOptions(const GetAssetTypeAttributeCodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetType()) {
    query["AssetType"] = request.getAssetType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAssetTypeAttributeCodes"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAssetTypeAttributeCodesResponse>();
}

/**
 * @summary Queries asset property definitions. Online version: v6.3.0.
 *
 * @param request GetAssetTypeAttributeCodesRequest
 * @return GetAssetTypeAttributeCodesResponse
 */
GetAssetTypeAttributeCodesResponse Client::getAssetTypeAttributeCodes(const GetAssetTypeAttributeCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAssetTypeAttributeCodesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an offline computing task.
 *
 * @param request GetBatchTaskInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTaskInfoResponse
 */
GetBatchTaskInfoResponse Client::getBatchTaskInfoWithOptions(const GetBatchTaskInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasIncludeAllUpStreams()) {
    query["IncludeAllUpStreams"] = request.getIncludeAllUpStreams();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTaskInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTaskInfoResponse>();
}

/**
 * @summary Retrieves the details of an offline computing task.
 *
 * @param request GetBatchTaskInfoRequest
 * @return GetBatchTaskInfoResponse
 */
GetBatchTaskInfoResponse Client::getBatchTaskInfo(const GetBatchTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified version of an offline computing task.
 *
 * @param request GetBatchTaskInfoByVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTaskInfoByVersionResponse
 */
GetBatchTaskInfoByVersionResponse Client::getBatchTaskInfoByVersionWithOptions(const GetBatchTaskInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTaskInfoByVersion"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTaskInfoByVersionResponse>();
}

/**
 * @summary Retrieves the details of a specified version of an offline computing task.
 *
 * @param request GetBatchTaskInfoByVersionRequest
 * @return GetBatchTaskInfoByVersionResponse
 */
GetBatchTaskInfoByVersionResponse Client::getBatchTaskInfoByVersion(const GetBatchTaskInfoByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskInfoByVersionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the custom lineage of an offline task.
 *
 * @param request GetBatchTaskUdfLineagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTaskUdfLineagesResponse
 */
GetBatchTaskUdfLineagesResponse Client::getBatchTaskUdfLineagesWithOptions(const GetBatchTaskUdfLineagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTaskUdfLineages"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTaskUdfLineagesResponse>();
}

/**
 * @summary Retrieves the custom lineage of an offline task.
 *
 * @param request GetBatchTaskUdfLineagesRequest
 * @return GetBatchTaskUdfLineagesResponse
 */
GetBatchTaskUdfLineagesResponse Client::getBatchTaskUdfLineages(const GetBatchTaskUdfLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskUdfLineagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of batch taskfile versions.
 *
 * @param request GetBatchTaskVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTaskVersionsResponse
 */
GetBatchTaskVersionsResponse Client::getBatchTaskVersionsWithOptions(const GetBatchTaskVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTaskVersions"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTaskVersionsResponse>();
}

/**
 * @summary Queries a list of batch taskfile versions.
 *
 * @param request GetBatchTaskVersionsRequest
 * @return GetBatchTaskVersionsResponse
 */
GetBatchTaskVersionsResponse Client::getBatchTaskVersions(const GetBatchTaskVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskVersionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the versions of a specified offline template. Available since v6.2.0.
 *
 * @param request GetBatchTemplateVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchTemplateVersionsResponse
 */
GetBatchTemplateVersionsResponse Client::getBatchTemplateVersionsWithOptions(const GetBatchTemplateVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchTemplateVersions"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchTemplateVersionsResponse>();
}

/**
 * @summary Retrieves the versions of a specified offline template. Available since v6.2.0.
 *
 * @param request GetBatchTemplateVersionsRequest
 * @return GetBatchTemplateVersionsResponse
 */
GetBatchTemplateVersionsResponse Client::getBatchTemplateVersions(const GetBatchTemplateVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTemplateVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries the mapping relationships based on the GUID of the owning asset. Released in v5.4.2.
 *
 * @param tmpReq GetBelongAssetMappingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBelongAssetMappingResponse
 */
GetBelongAssetMappingResponse Client::getBelongAssetMappingWithOptions(const GetBelongAssetMappingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetBelongAssetMappingShrinkRequest request = GetBelongAssetMappingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetMappingQuery()) {
    request.setAssetMappingQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetMappingQuery(), "AssetMappingQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasAssetMappingQueryShrink()) {
    body["AssetMappingQuery"] = request.getAssetMappingQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetBelongAssetMapping"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBelongAssetMappingResponse>();
}

/**
 * @summary Queries the mapping relationships based on the GUID of the owning asset. Released in v5.4.2.
 *
 * @param request GetBelongAssetMappingRequest
 * @return GetBelongAssetMappingResponse
 */
GetBelongAssetMappingResponse Client::getBelongAssetMapping(const GetBelongAssetMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBelongAssetMappingWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a business entity.
 *
 * @param request GetBizEntityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBizEntityInfoResponse
 */
GetBizEntityInfoResponse Client::getBizEntityInfoWithOptions(const GetBizEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBizEntityInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBizEntityInfoResponse>();
}

/**
 * @summary Retrieves the details of a business entity.
 *
 * @param request GetBizEntityInfoRequest
 * @return GetBizEntityInfoResponse
 */
GetBizEntityInfoResponse Client::getBizEntityInfo(const GetBizEntityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizEntityInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a business entity of a specified version.
 *
 * @param request GetBizEntityInfoByVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBizEntityInfoByVersionResponse
 */
GetBizEntityInfoByVersionResponse Client::getBizEntityInfoByVersionWithOptions(const GetBizEntityInfoByVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBizEntityInfoByVersion"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBizEntityInfoByVersionResponse>();
}

/**
 * @summary Queries the details of a business entity of a specified version.
 *
 * @param request GetBizEntityInfoByVersionRequest
 * @return GetBizEntityInfoByVersionResponse
 */
GetBizEntityInfoByVersionResponse Client::getBizEntityInfoByVersion(const GetBizEntityInfoByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizEntityInfoByVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a business metric by name. Release version: v5.5.0.
 *
 * @param tmpReq GetBizMetricByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBizMetricByNameResponse
 */
GetBizMetricByNameResponse Client::getBizMetricByNameWithOptions(const GetBizMetricByNameRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetBizMetricByNameShrinkRequest request = GetBizMetricByNameShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBizMetricByNameQuery()) {
    request.setBizMetricByNameQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBizMetricByNameQuery(), "BizMetricByNameQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasBizMetricByNameQueryShrink()) {
    body["BizMetricByNameQuery"] = request.getBizMetricByNameQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetBizMetricByName"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBizMetricByNameResponse>();
}

/**
 * @summary Queries the details of a business metric by name. Release version: v5.5.0.
 *
 * @param request GetBizMetricByNameRequest
 * @return GetBizMetricByNameResponse
 */
GetBizMetricByNameResponse Client::getBizMetricByName(const GetBizMetricByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizMetricByNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data sector.
 *
 * @param request GetBizUnitInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBizUnitInfoResponse
 */
GetBizUnitInfoResponse Client::getBizUnitInfoWithOptions(const GetBizUnitInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBizUnitInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBizUnitInfoResponse>();
}

/**
 * @summary Retrieves the details of a data sector.
 *
 * @param request GetBizUnitInfoRequest
 * @return GetBizUnitInfoResponse
 */
GetBizUnitInfoResponse Client::getBizUnitInfo(const GetBizUnitInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizUnitInfoWithOptions(request, runtime);
}

/**
 * @summary Queries asset details. Online version: v6.1.0.
 *
 * @param tmpReq GetCatalogAssetDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogAssetDetailsResponse
 */
GetCatalogAssetDetailsResponse Client::getCatalogAssetDetailsWithOptions(const GetCatalogAssetDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCatalogAssetDetailsShrinkRequest request = GetCatalogAssetDetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGetCatalogAssetDetailsQuery()) {
    request.setGetCatalogAssetDetailsQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGetCatalogAssetDetailsQuery(), "GetCatalogAssetDetailsQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasGetCatalogAssetDetailsQueryShrink()) {
    body["GetCatalogAssetDetailsQuery"] = request.getGetCatalogAssetDetailsQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCatalogAssetDetails"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogAssetDetailsResponse>();
}

/**
 * @summary Queries asset details. Online version: v6.1.0.
 *
 * @param request GetCatalogAssetDetailsRequest
 * @return GetCatalogAssetDetailsResponse
 */
GetCatalogAssetDetailsResponse Client::getCatalogAssetDetails(const GetCatalogAssetDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCatalogAssetDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries a data source connectivity check task by task ID. Available since version 6.3.2.
 *
 * @description Queries the latest status and error message of a data source connectivity check task by task ID. This operation is used to poll the asynchronous task returned by CheckDataSourceConnectivityOnResourceGroup. If the task does not exist, Data is empty.
 *
 * @param request GetCheckConnectivityJobByJobIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCheckConnectivityJobByJobIdResponse
 */
GetCheckConnectivityJobByJobIdResponse Client::getCheckConnectivityJobByJobIdWithOptions(const GetCheckConnectivityJobByJobIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCheckConnectivityJobByJobId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCheckConnectivityJobByJobIdResponse>();
}

/**
 * @summary Queries a data source connectivity check task by task ID. Available since version 6.3.2.
 *
 * @description Queries the latest status and error message of a data source connectivity check task by task ID. This operation is used to poll the asynchronous task returned by CheckDataSourceConnectivityOnResourceGroup. If the task does not exist, Data is empty.
 *
 * @param request GetCheckConnectivityJobByJobIdRequest
 * @return GetCheckConnectivityJobByJobIdResponse
 */
GetCheckConnectivityJobByJobIdResponse Client::getCheckConnectivityJobByJobId(const GetCheckConnectivityJobByJobIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCheckConnectivityJobByJobIdWithOptions(request, runtime);
}

/**
 * @summary Queries a list of connectivity check tasks based on the specified data source ID, including null value validation and tenant permission verification to prevent cross-tenant access. Release version: v5.5.0.
 *
 * @description Queries the details of tested connectivity tasks based on the data source ID.
 *
 * @param request GetCheckConnectivityJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCheckConnectivityJobsResponse
 */
GetCheckConnectivityJobsResponse Client::getCheckConnectivityJobsWithOptions(const GetCheckConnectivityJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCheckConnectivityJobs"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCheckConnectivityJobsResponse>();
}

/**
 * @summary Queries a list of connectivity check tasks based on the specified data source ID, including null value validation and tenant permission verification to prevent cross-tenant access. Release version: v5.5.0.
 *
 * @description Queries the details of tested connectivity tasks based on the data source ID.
 *
 * @param request GetCheckConnectivityJobsRequest
 * @return GetCheckConnectivityJobsResponse
 */
GetCheckConnectivityJobsResponse Client::getCheckConnectivityJobs(const GetCheckConnectivityJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCheckConnectivityJobsWithOptions(request, runtime);
}

/**
 * @summary Retrieves cluster information based on the environment.
 *
 * @param request GetClusterQueueInfoByEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterQueueInfoByEnvResponse
 */
GetClusterQueueInfoByEnvResponse Client::getClusterQueueInfoByEnvWithOptions(const GetClusterQueueInfoByEnvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStreamBatchMode()) {
    query["StreamBatchMode"] = request.getStreamBatchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterQueueInfoByEnv"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterQueueInfoByEnvResponse>();
}

/**
 * @summary Retrieves cluster information based on the environment.
 *
 * @param request GetClusterQueueInfoByEnvRequest
 * @return GetClusterQueueInfoByEnvResponse
 */
GetClusterQueueInfoByEnvResponse Client::getClusterQueueInfoByEnv(const GetClusterQueueInfoByEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterQueueInfoByEnvWithOptions(request, runtime);
}

/**
 * @summary Queries cluster details. Available since v6.3.0.
 *
 * @description Queries the details of a tested connectivity task based on the datasource ID.
 *
 * @param request GetComputeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeClusterResponse
 */
GetComputeClusterResponse Client::getComputeClusterWithOptions(const GetComputeClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeCluster"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeClusterResponse>();
}

/**
 * @summary Queries cluster details. Available since v6.3.0.
 *
 * @description Queries the details of a tested connectivity task based on the datasource ID.
 *
 * @param request GetComputeClusterRequest
 * @return GetComputeClusterResponse
 */
GetComputeClusterResponse Client::getComputeCluster(const GetComputeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeClusterWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a compute source by its ID.
 *
 * @param request GetComputeSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeSourceResponse
 */
GetComputeSourceResponse Client::getComputeSourceWithOptions(const GetComputeSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeSourceResponse>();
}

/**
 * @summary Retrieves the details of a compute source by its ID.
 *
 * @param request GetComputeSourceRequest
 * @return GetComputeSourceResponse
 */
GetComputeSourceResponse Client::getComputeSource(const GetComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeSourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified quality watchtask by governance item ID. Online version: v6.3.0.
 *
 * @description Retrieves the details of a Query Governance object by governance item ID.
 *
 * @param tmpReq GetDataAssetsGovernObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataAssetsGovernObjectResponse
 */
GetDataAssetsGovernObjectResponse Client::getDataAssetsGovernObjectWithOptions(const GetDataAssetsGovernObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDataAssetsGovernObjectShrinkRequest request = GetDataAssetsGovernObjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommand()) {
    request.setCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommand(), "Command", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCommandShrink()) {
    body["Command"] = request.getCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetDataAssetsGovernObject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataAssetsGovernObjectResponse>();
}

/**
 * @summary Retrieves the details of a specified quality watchtask by governance item ID. Online version: v6.3.0.
 *
 * @description Retrieves the details of a Query Governance object by governance item ID.
 *
 * @param request GetDataAssetsGovernObjectRequest
 * @return GetDataAssetsGovernObjectResponse
 */
GetDataAssetsGovernObjectResponse Client::getDataAssetsGovernObject(const GetDataAssetsGovernObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataAssetsGovernObjectWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data domain.
 *
 * @param request GetDataDomainInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataDomainInfoResponse
 */
GetDataDomainInfoResponse Client::getDataDomainInfoWithOptions(const GetDataDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataDomainInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataDomainInfoResponse>();
}

/**
 * @summary Retrieves the details of a data domain.
 *
 * @param request GetDataDomainInfoRequest
 * @return GetDataDomainInfoResponse
 */
GetDataDomainInfoResponse Client::getDataDomainInfo(const GetDataDomainInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataDomainInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the summary statistics of API calls for Service Monitoring.
 *
 * @param request GetDataServiceApiCallSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiCallSummaryResponse
 */
GetDataServiceApiCallSummaryResponse Client::getDataServiceApiCallSummaryWithOptions(const GetDataServiceApiCallSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiCallSummary"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiCallSummaryResponse>();
}

/**
 * @summary Retrieves the summary statistics of API calls for Service Monitoring.
 *
 * @param request GetDataServiceApiCallSummaryRequest
 * @return GetDataServiceApiCallSummaryResponse
 */
GetDataServiceApiCallSummaryResponse Client::getDataServiceApiCallSummary(const GetDataServiceApiCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiCallSummaryWithOptions(request, runtime);
}

/**
 * @summary Service Monitoring: Analyzes API access trends.
 *
 * @param request GetDataServiceApiCallTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiCallTrendResponse
 */
GetDataServiceApiCallTrendResponse Client::getDataServiceApiCallTrendWithOptions(const GetDataServiceApiCallTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiCallTrend"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiCallTrendResponse>();
}

/**
 * @summary Service Monitoring: Analyzes API access trends.
 *
 * @param request GetDataServiceApiCallTrendRequest
 * @return GetDataServiceApiCallTrendResponse
 */
GetDataServiceApiCallTrendResponse Client::getDataServiceApiCallTrend(const GetDataServiceApiCallTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiCallTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves the API documentation.
 *
 * @param request GetDataServiceApiDocumentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiDocumentResponse
 */
GetDataServiceApiDocumentResponse Client::getDataServiceApiDocumentWithOptions(const GetDataServiceApiDocumentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiDocument"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiDocumentResponse>();
}

/**
 * @summary Retrieves the API documentation.
 *
 * @param request GetDataServiceApiDocumentRequest
 * @return GetDataServiceApiDocumentResponse
 */
GetDataServiceApiDocumentResponse Client::getDataServiceApiDocument(const GetDataServiceApiDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiDocumentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the summary of API exception impacts.
 *
 * @param request GetDataServiceApiErrorImpactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiErrorImpactResponse
 */
GetDataServiceApiErrorImpactResponse Client::getDataServiceApiErrorImpactWithOptions(const GetDataServiceApiErrorImpactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiErrorImpact"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiErrorImpactResponse>();
}

/**
 * @summary Retrieves the summary of API exception impacts.
 *
 * @param request GetDataServiceApiErrorImpactRequest
 * @return GetDataServiceApiErrorImpactResponse
 */
GetDataServiceApiErrorImpactResponse Client::getDataServiceApiErrorImpact(const GetDataServiceApiErrorImpactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiErrorImpactWithOptions(request, runtime);
}

/**
 * @summary Queries the list of API groups in Data Service.
 *
 * @param request GetDataServiceApiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiGroupsResponse
 */
GetDataServiceApiGroupsResponse Client::getDataServiceApiGroupsWithOptions(const GetDataServiceApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiGroups"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiGroupsResponse>();
}

/**
 * @summary Queries the list of API groups in Data Service.
 *
 * @param request GetDataServiceApiGroupsRequest
 * @return GetDataServiceApiGroupsResponse
 */
GetDataServiceApiGroupsResponse Client::getDataServiceApiGroups(const GetDataServiceApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data service application, including the project, application name, authentication information, and IP address whitelist. Only application members can view this information. Released in v6.0.0.
 *
 * @param request GetDataServiceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAppResponse
 */
GetDataServiceAppResponse Client::getDataServiceAppWithOptions(const GetDataServiceAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAppResponse>();
}

/**
 * @summary Queries the details of a data service application, including the project, application name, authentication information, and IP address whitelist. Only application members can view this information. Released in v6.0.0.
 *
 * @param request GetDataServiceAppRequest
 * @return GetDataServiceAppResponse
 */
GetDataServiceAppResponse Client::getDataServiceApp(const GetDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of users who have permissions for the application.
 *
 * @param request GetDataServiceAppAuthorizedUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAppAuthorizedUsersResponse
 */
GetDataServiceAppAuthorizedUsersResponse Client::getDataServiceAppAuthorizedUsersWithOptions(const GetDataServiceAppAuthorizedUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAppAuthorizedUsers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAppAuthorizedUsersResponse>();
}

/**
 * @summary Retrieves the list of users who have permissions for the application.
 *
 * @param request GetDataServiceAppAuthorizedUsersRequest
 * @return GetDataServiceAppAuthorizedUsersResponse
 */
GetDataServiceAppAuthorizedUsersResponse Client::getDataServiceAppAuthorizedUsers(const GetDataServiceAppAuthorizedUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppAuthorizedUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the list of application groups for a data service project.
 *
 * @param request GetDataServiceAppGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAppGroupsResponse
 */
GetDataServiceAppGroupsResponse Client::getDataServiceAppGroupsWithOptions(const GetDataServiceAppGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAppGroups"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAppGroupsResponse>();
}

/**
 * @summary Queries the list of application groups for a data service project.
 *
 * @param request GetDataServiceAppGroupsRequest
 * @return GetDataServiceAppGroupsResponse
 */
GetDataServiceAppGroupsResponse Client::getDataServiceAppGroups(const GetDataServiceAppGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the member list of a data service application, including regular members and owners. Only application owners can call this operation.
 * Online version: v6.0.0.
 *
 * @param request GetDataServiceAppMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAppMembersResponse
 */
GetDataServiceAppMembersResponse Client::getDataServiceAppMembersWithOptions(const GetDataServiceAppMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAppMembers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAppMembersResponse>();
}

/**
 * @summary Queries the member list of a data service application, including regular members and owners. Only application owners can call this operation.
 * Online version: v6.0.0.
 *
 * @param request GetDataServiceAppMembersRequest
 * @return GetDataServiceAppMembersResponse
 */
GetDataServiceAppMembersResponse Client::getDataServiceAppMembers(const GetDataServiceAppMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppMembersWithOptions(request, runtime);
}

/**
 * @summary Queries the applications in a group.
 *
 * @param request GetDataServiceAppsByGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAppsByGroupIdResponse
 */
GetDataServiceAppsByGroupIdResponse Client::getDataServiceAppsByGroupIdWithOptions(const GetDataServiceAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAppsByGroupId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAppsByGroupIdResponse>();
}

/**
 * @summary Queries the applications in a group.
 *
 * @param request GetDataServiceAppsByGroupIdRequest
 * @return GetDataServiceAppsByGroupIdResponse
 */
GetDataServiceAppsByGroupIdResponse Client::getDataServiceAppsByGroupId(const GetDataServiceAppsByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppsByGroupIdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of applications that the account has permissions to access based on the app group ID.
 *
 * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAuthorizedAppsByGroupIdResponse
 */
GetDataServiceAuthorizedAppsByGroupIdResponse Client::getDataServiceAuthorizedAppsByGroupIdWithOptions(const GetDataServiceAuthorizedAppsByGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAuthorizedAppsByGroupId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAuthorizedAppsByGroupIdResponse>();
}

/**
 * @summary Queries the list of applications that the account has permissions to access based on the app group ID.
 *
 * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
 * @return GetDataServiceAuthorizedAppsByGroupIdResponse
 */
GetDataServiceAuthorizedAppsByGroupIdResponse Client::getDataServiceAuthorizedAppsByGroupId(const GetDataServiceAuthorizedAppsByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAuthorizedAppsByGroupIdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of projects that the user has access to.
 *
 * @param request GetDataServiceAuthorizedProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceAuthorizedProjectsResponse
 */
GetDataServiceAuthorizedProjectsResponse Client::getDataServiceAuthorizedProjectsWithOptions(const GetDataServiceAuthorizedProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceAuthorizedProjects"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceAuthorizedProjectsResponse>();
}

/**
 * @summary Queries the list of projects that the user has access to.
 *
 * @param request GetDataServiceAuthorizedProjectsRequest
 * @return GetDataServiceAuthorizedProjectsResponse
 */
GetDataServiceAuthorizedProjectsResponse Client::getDataServiceAuthorizedProjects(const GetDataServiceAuthorizedProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAuthorizedProjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of projects for which the current user is the owner.
 *
 * @param request GetDataServiceMyProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceMyProjectsResponse
 */
GetDataServiceMyProjectsResponse Client::getDataServiceMyProjectsWithOptions(const GetDataServiceMyProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceMyProjects"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceMyProjectsResponse>();
}

/**
 * @summary Retrieves the list of projects for which the current user is the owner.
 *
 * @param request GetDataServiceMyProjectsRequest
 * @return GetDataServiceMyProjectsResponse
 */
GetDataServiceMyProjectsResponse Client::getDataServiceMyProjects(const GetDataServiceMyProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceMyProjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of users that can be added as project members.
 *
 * @param request GetDataServiceProjectAddableUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceProjectAddableUsersResponse
 */
GetDataServiceProjectAddableUsersResponse Client::getDataServiceProjectAddableUsersWithOptions(const GetDataServiceProjectAddableUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceProjectAddableUsers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceProjectAddableUsersResponse>();
}

/**
 * @summary Retrieves a list of users that can be added as project members.
 *
 * @param request GetDataServiceProjectAddableUsersRequest
 * @return GetDataServiceProjectAddableUsersResponse
 */
GetDataServiceProjectAddableUsersResponse Client::getDataServiceProjectAddableUsers(const GetDataServiceProjectAddableUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceProjectAddableUsersWithOptions(request, runtime);
}

/**
 * @summary Queries the integration tasks and database SQL tasks affected by data source changes.
 *
 * @param request GetDataSourceDependenciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceDependenciesResponse
 */
GetDataSourceDependenciesResponse Client::getDataSourceDependenciesWithOptions(const GetDataSourceDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSourceDependencies"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceDependenciesResponse>();
}

/**
 * @summary Queries the integration tasks and database SQL tasks affected by data source changes.
 *
 * @param request GetDataSourceDependenciesRequest
 * @return GetDataSourceDependenciesResponse
 */
GetDataSourceDependenciesResponse Client::getDataSourceDependencies(const GetDataSourceDependenciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceDependenciesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a dataset. Release version: v6.2.0.
 *
 * @description Queries the details of a tested connectivity task based on the data source ID.
 *
 * @param request GetDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary Retrieves a dataset. Release version: v6.2.0.
 *
 * @description Queries the details of a tested connectivity task based on the data source ID.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetWithOptions(request, runtime);
}

/**
 * @summary Queries the upstream dependencies of a development object.
 *
 * @param request GetDevObjectDependencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDevObjectDependencyResponse
 */
GetDevObjectDependencyResponse Client::getDevObjectDependencyWithOptions(const GetDevObjectDependencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectFrom()) {
    query["ObjectFrom"] = request.getObjectFrom();
  }

  if (!!request.hasObjectId()) {
    query["ObjectId"] = request.getObjectId();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDevObjectDependency"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDevObjectDependencyResponse>();
}

/**
 * @summary Queries the upstream dependencies of a development object.
 *
 * @param request GetDevObjectDependencyRequest
 * @return GetDevObjectDependencyResponse
 */
GetDevObjectDependencyResponse Client::getDevObjectDependency(const GetDevObjectDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDevObjectDependencyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the folder directory tree.
 *
 * @param request GetDirectoryTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDirectoryTreeResponse
 */
GetDirectoryTreeResponse Client::getDirectoryTreeWithOptions(const GetDirectoryTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDirectoryTree"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDirectoryTreeResponse>();
}

/**
 * @summary Retrieves the folder directory tree.
 *
 * @param request GetDirectoryTreeRequest
 * @return GetDirectoryTreeResponse
 */
GetDirectoryTreeResponse Client::getDirectoryTree(const GetDirectoryTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryTreeWithOptions(request, runtime);
}

/**
 * @summary Retrieves temporary read and write authorization for file storage.
 *
 * @param request GetFileStorageCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileStorageCredentialResponse
 */
GetFileStorageCredentialResponse Client::getFileStorageCredentialWithOptions(const GetFileStorageCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasPurpose()) {
    query["Purpose"] = request.getPurpose();
  }

  if (!!request.hasUseVpcEndpoint()) {
    query["UseVpcEndpoint"] = request.getUseVpcEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFileStorageCredential"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileStorageCredentialResponse>();
}

/**
 * @summary Retrieves temporary read and write authorization for file storage.
 *
 * @param request GetFileStorageCredentialRequest
 * @return GetFileStorageCredentialResponse
 */
GetFileStorageCredentialResponse Client::getFileStorageCredential(const GetFileStorageCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileStorageCredentialWithOptions(request, runtime);
}

/**
 * @summary Retrieves the statistical granularity information of an aggregate logical table. Available from version 6.4.0.
 *
 * @description Queries the statistical granularity of an aggregate logical table. Recursive objects are referenced by ID. Logical tree node IDs are valid only within the currently returned tree.
 *
 * @param request GetGranularityBySummaryIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetGranularityBySummaryIdResponse
 */
GetGranularityBySummaryIdResponse Client::getGranularityBySummaryIdWithOptions(const GetGranularityBySummaryIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasQueryDraft()) {
    query["QueryDraft"] = request.getQueryDraft();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetGranularityBySummaryId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetGranularityBySummaryIdResponse>();
}

/**
 * @summary Retrieves the statistical granularity information of an aggregate logical table. Available from version 6.4.0.
 *
 * @description Queries the statistical granularity of an aggregate logical table. Recursive objects are referenced by ID. Logical tree node IDs are valid only within the currently returned tree.
 *
 * @param request GetGranularityBySummaryIdRequest
 * @return GetGranularityBySummaryIdResponse
 */
GetGranularityBySummaryIdResponse Client::getGranularityBySummaryId(const GetGranularityBySummaryIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getGranularityBySummaryIdWithOptions(request, runtime);
}

/**
 * @summary Queries the downstream instances of a specified instance.
 *
 * @param tmpReq GetInstanceDownStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceDownStreamResponse
 */
GetInstanceDownStreamResponse Client::getInstanceDownStreamWithOptions(const GetInstanceDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetInstanceDownStreamShrinkRequest request = GetInstanceDownStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceGet()) {
    request.setInstanceGetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceGet(), "InstanceGet", "json"));
  }

  json query = {};
  if (!!request.hasDownStreamDepth()) {
    query["DownStreamDepth"] = request.getDownStreamDepth();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRunStatus()) {
    query["RunStatus"] = request.getRunStatus();
  }

  json body = {};
  if (!!request.hasInstanceGetShrink()) {
    body["InstanceGet"] = request.getInstanceGetShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstanceDownStream"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceDownStreamResponse>();
}

/**
 * @summary Queries the downstream instances of a specified instance.
 *
 * @param request GetInstanceDownStreamRequest
 * @return GetInstanceDownStreamResponse
 */
GetInstanceDownStreamResponse Client::getInstanceDownStream(const GetInstanceDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceDownStreamWithOptions(request, runtime);
}

/**
 * @summary Queries the upstream and downstream nodes of an instance. Supports logical tables and code nodes.
 *
 * @param tmpReq GetInstanceUpDownStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceUpDownStreamResponse
 */
GetInstanceUpDownStreamResponse Client::getInstanceUpDownStreamWithOptions(const GetInstanceUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetInstanceUpDownStreamShrinkRequest request = GetInstanceUpDownStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceId()) {
    request.setInstanceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceId(), "InstanceId", "json"));
  }

  json query = {};
  if (!!request.hasDownStreamDepth()) {
    query["DownStreamDepth"] = request.getDownStreamDepth();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUpStreamDepth()) {
    query["UpStreamDepth"] = request.getUpStreamDepth();
  }

  json body = {};
  if (!!request.hasInstanceIdShrink()) {
    body["InstanceId"] = request.getInstanceIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetInstanceUpDownStream"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceUpDownStreamResponse>();
}

/**
 * @summary Queries the upstream and downstream nodes of an instance. Supports logical tables and code nodes.
 *
 * @param request GetInstanceUpDownStreamRequest
 * @return GetInstanceUpDownStreamResponse
 */
GetInstanceUpDownStreamResponse Client::getInstanceUpDownStream(const GetInstanceUpDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceUpDownStreamWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of workspaces with authorized knowledge graphs. Release version: v6.3.0.
 *
 * @param request GetKgAuthorizedWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKgAuthorizedWorkspacesResponse
 */
GetKgAuthorizedWorkspacesResponse Client::getKgAuthorizedWorkspacesWithOptions(const GetKgAuthorizedWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKgAuthorizedWorkspaces"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKgAuthorizedWorkspacesResponse>();
}

/**
 * @summary Retrieves a list of workspaces with authorized knowledge graphs. Release version: v6.3.0.
 *
 * @param request GetKgAuthorizedWorkspacesRequest
 * @return GetKgAuthorizedWorkspacesResponse
 */
GetKgAuthorizedWorkspacesResponse Client::getKgAuthorizedWorkspaces(const GetKgAuthorizedWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKgAuthorizedWorkspacesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a knowledge graph entity record. Available since version 6.1.1.
 *
 * @param request GetKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKgEntityResponse
 */
GetKgEntityResponse Client::getKgEntityWithOptions(const GetKgEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityId()) {
    query["EntityId"] = request.getEntityId();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKgEntityResponse>();
}

/**
 * @summary Retrieves the details of a knowledge graph entity record. Available since version 6.1.1.
 *
 * @param request GetKgEntityRequest
 * @return GetKgEntityResponse
 */
GetKgEntityResponse Client::getKgEntity(const GetKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKgEntityWithOptions(request, runtime);
}

/**
 * @summary Retrieves neighbor nodes of a graph model entity. Online version: v6.2.0.
 *
 * @param tmpReq GetKgNeighborRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKgNeighborResponse
 */
GetKgNeighborResponse Client::getKgNeighborWithOptions(const GetKgNeighborRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetKgNeighborShrinkRequest request = GetKgNeighborShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNeighborsQuery()) {
    request.setNeighborsQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNeighborsQuery(), "NeighborsQuery", "json"));
  }

  json query = {};
  if (!!request.hasEntityDataId()) {
    query["EntityDataId"] = request.getEntityDataId();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasNeighborsQueryShrink()) {
    body["NeighborsQuery"] = request.getNeighborsQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetKgNeighbor"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKgNeighborResponse>();
}

/**
 * @summary Retrieves neighbor nodes of a graph model entity. Online version: v6.2.0.
 *
 * @param request GetKgNeighborRequest
 * @return GetKgNeighborResponse
 */
GetKgNeighborResponse Client::getKgNeighbor(const GetKgNeighborRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKgNeighborWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a knowledge graph relation record. Released in version v6.1.1.
 *
 * @param request GetKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKgRelationResponse
 */
GetKgRelationResponse Client::getKgRelationWithOptions(const GetKgRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRelationId()) {
    query["RelationId"] = request.getRelationId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKgRelationResponse>();
}

/**
 * @summary Retrieves the details of a knowledge graph relation record. Released in version v6.1.1.
 *
 * @param request GetKgRelationRequest
 * @return GetKgRelationResponse
 */
GetKgRelationResponse Client::getKgRelation(const GetKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKgRelationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the publish result of a graph model. Online version: v6.2.0.
 *
 * @param request GetKgSchemaPublishResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKgSchemaPublishResultResponse
 */
GetKgSchemaPublishResultResponse Client::getKgSchemaPublishResultWithOptions(const GetKgSchemaPublishResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKgSchemaPublishResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKgSchemaPublishResultResponse>();
}

/**
 * @summary Retrieves the publish result of a graph model. Online version: v6.2.0.
 *
 * @param request GetKgSchemaPublishResultRequest
 * @return GetKgSchemaPublishResultResponse
 */
GetKgSchemaPublishResultResponse Client::getKgSchemaPublishResult(const GetKgSchemaPublishResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKgSchemaPublishResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of the latest pending release record.
 *
 * @param tmpReq GetLatestSubmitDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLatestSubmitDetailResponse
 */
GetLatestSubmitDetailResponse Client::getLatestSubmitDetailWithOptions(const GetLatestSubmitDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetLatestSubmitDetailShrinkRequest request = GetLatestSubmitDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitDetailQuery()) {
    request.setSubmitDetailQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitDetailQuery(), "SubmitDetailQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitDetailQueryShrink()) {
    body["SubmitDetailQuery"] = request.getSubmitDetailQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetLatestSubmitDetail"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLatestSubmitDetailResponse>();
}

/**
 * @summary Retrieves the details of the latest pending release record.
 *
 * @param request GetLatestSubmitDetailRequest
 * @return GetLatestSubmitDetailResponse
 */
GetLatestSubmitDetailResponse Client::getLatestSubmitDetail(const GetLatestSubmitDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLatestSubmitDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a specific large language model service provider and available models by name. Online version: v6.3.0.
 *
 * @param request GetLlmModelProviderByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLlmModelProviderByNameResponse
 */
GetLlmModelProviderByNameResponse Client::getLlmModelProviderByNameWithOptions(const GetLlmModelProviderByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLlmModelProviderByName"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLlmModelProviderByNameResponse>();
}

/**
 * @summary Queries a specific large language model service provider and available models by name. Online version: v6.3.0.
 *
 * @param request GetLlmModelProviderByNameRequest
 * @return GetLlmModelProviderByNameResponse
 */
GetLlmModelProviderByNameResponse Client::getLlmModelProviderByName(const GetLlmModelProviderByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLlmModelProviderByNameWithOptions(request, runtime);
}

/**
 * @summary Queries all large language model service providers and available models. Available since v6.3.0.
 *
 * @param request GetLlmModelProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLlmModelProvidersResponse
 */
GetLlmModelProvidersResponse Client::getLlmModelProvidersWithOptions(const GetLlmModelProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLlmModelProviders"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLlmModelProvidersResponse>();
}

/**
 * @summary Queries all large language model service providers and available models. Available since v6.3.0.
 *
 * @param request GetLlmModelProvidersRequest
 * @return GetLlmModelProvidersResponse
 */
GetLlmModelProvidersResponse Client::getLlmModelProviders(const GetLlmModelProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLlmModelProvidersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of user roles.
 *
 * @param request GetMyRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMyRolesResponse
 */
GetMyRolesResponse Client::getMyRolesWithOptions(const GetMyRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMyRoles"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMyRolesResponse>();
}

/**
 * @summary Retrieves the list of user roles.
 *
 * @param request GetMyRolesRequest
 * @return GetMyRolesResponse
 */
GetMyRolesResponse Client::getMyRoles(const GetMyRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMyRolesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the tenants to which the current user belongs.
 *
 * @param tmpReq GetMyTenantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMyTenantsResponse
 */
GetMyTenantsResponse Client::getMyTenantsWithOptions(const GetMyTenantsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMyTenantsShrinkRequest request = GetMyTenantsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFeatureCodeList()) {
    request.setFeatureCodeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFeatureCodeList(), "FeatureCodeList", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasFeatureCodeListShrink()) {
    body["FeatureCodeList"] = request.getFeatureCodeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMyTenants"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMyTenantsResponse>();
}

/**
 * @summary Retrieves the tenants to which the current user belongs.
 *
 * @param request GetMyTenantsRequest
 * @return GetMyTenantsResponse
 */
GetMyTenantsResponse Client::getMyTenants(const GetMyTenantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMyTenantsWithOptions(request, runtime);
}

/**
 * @summary Queries the upstream and downstream nodes of a node.
 *
 * @param tmpReq GetNodeUpDownStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeUpDownStreamResponse
 */
GetNodeUpDownStreamResponse Client::getNodeUpDownStreamWithOptions(const GetNodeUpDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNodeUpDownStreamShrinkRequest request = GetNodeUpDownStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNodeId()) {
    request.setNodeIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeId(), "NodeId", "json"));
  }

  json query = {};
  if (!!request.hasDownStreamDepth()) {
    query["DownStreamDepth"] = request.getDownStreamDepth();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUpStreamDepth()) {
    query["UpStreamDepth"] = request.getUpStreamDepth();
  }

  json body = {};
  if (!!request.hasNodeIdShrink()) {
    body["NodeId"] = request.getNodeIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetNodeUpDownStream"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeUpDownStreamResponse>();
}

/**
 * @summary Queries the upstream and downstream nodes of a node.
 *
 * @param request GetNodeUpDownStreamRequest
 * @return GetNodeUpDownStreamResponse
 */
GetNodeUpDownStreamResponse Client::getNodeUpDownStream(const GetNodeUpDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeUpDownStreamWithOptions(request, runtime);
}

/**
 * @summary Queries an execution record by ID. Available since version 6.2.0.
 *
 * @param tmpReq GetOperationRecordByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationRecordByIdResponse
 */
GetOperationRecordByIdResponse Client::getOperationRecordByIdWithOptions(const GetOperationRecordByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOperationRecordByIdShrinkRequest request = GetOperationRecordByIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDetailCommand()) {
    request.setDetailCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDetailCommand(), "DetailCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDetailCommandShrink()) {
    body["DetailCommand"] = request.getDetailCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOperationRecordById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationRecordByIdResponse>();
}

/**
 * @summary Queries an execution record by ID. Available since version 6.2.0.
 *
 * @param request GetOperationRecordByIdRequest
 * @return GetOperationRecordByIdResponse
 */
GetOperationRecordByIdResponse Client::getOperationRecordById(const GetOperationRecordByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationRecordByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an operation record. Available since version 6.2.0.
 *
 * @param tmpReq GetOperationRecordDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationRecordDetailResponse
 */
GetOperationRecordDetailResponse Client::getOperationRecordDetailWithOptions(const GetOperationRecordDetailRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOperationRecordDetailShrinkRequest request = GetOperationRecordDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordDetailCommand()) {
    request.setRecordDetailCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordDetailCommand(), "RecordDetailCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRecordDetailCommandShrink()) {
    body["RecordDetailCommand"] = request.getRecordDetailCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOperationRecordDetail"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationRecordDetailResponse>();
}

/**
 * @summary Queries the details of an operation record. Available since version 6.2.0.
 *
 * @param request GetOperationRecordDetailRequest
 * @return GetOperationRecordDetailResponse
 */
GetOperationRecordDetailResponse Client::getOperationRecordDetail(const GetOperationRecordDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationRecordDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the executed code of operation records. Release version: v6.2.0.
 *
 * @param tmpReq GetOperationRecordRunCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationRecordRunCodeResponse
 */
GetOperationRecordRunCodeResponse Client::getOperationRecordRunCodeWithOptions(const GetOperationRecordRunCodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetOperationRecordRunCodeShrinkRequest request = GetOperationRecordRunCodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCodeCommand()) {
    request.setCodeCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCodeCommand(), "CodeCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCodeCommandShrink()) {
    body["CodeCommand"] = request.getCodeCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetOperationRecordRunCode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationRecordRunCodeResponse>();
}

/**
 * @summary Queries the executed code of operation records. Release version: v6.2.0.
 *
 * @param request GetOperationRecordRunCodeRequest
 * @return GetOperationRecordRunCodeResponse
 */
GetOperationRecordRunCodeResponse Client::getOperationRecordRunCode(const GetOperationRecordRunCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationRecordRunCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the submit status of data backfill.
 *
 * @param request GetOperationSubmitStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationSubmitStatusResponse
 */
GetOperationSubmitStatusResponse Client::getOperationSubmitStatusWithOptions(const GetOperationSubmitStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOperationSubmitStatus"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationSubmitStatusResponse>();
}

/**
 * @summary Queries the submit status of data backfill.
 *
 * @param request GetOperationSubmitStatusRequest
 * @return GetOperationSubmitStatusResponse
 */
GetOperationSubmitStatusResponse Client::getOperationSubmitStatus(const GetOperationSubmitStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationSubmitStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves instance information.
 *
 * @param request GetPhysicalInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalInstanceResponse
 */
GetPhysicalInstanceResponse Client::getPhysicalInstanceWithOptions(const GetPhysicalInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalInstance"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalInstanceResponse>();
}

/**
 * @summary Retrieves instance information.
 *
 * @param request GetPhysicalInstanceRequest
 * @return GetPhysicalInstanceResponse
 */
GetPhysicalInstanceResponse Client::getPhysicalInstance(const GetPhysicalInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the execution logs of an instance. If the instance has been rerun multiple times, multiple log entries are returned.
 *
 * @param request GetPhysicalInstanceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalInstanceLogResponse
 */
GetPhysicalInstanceLogResponse Client::getPhysicalInstanceLogWithOptions(const GetPhysicalInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalInstanceLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalInstanceLogResponse>();
}

/**
 * @summary Retrieves the execution logs of an instance. If the instance has been rerun multiple times, multiple log entries are returned.
 *
 * @param request GetPhysicalInstanceLogRequest
 * @return GetPhysicalInstanceLogResponse
 */
GetPhysicalInstanceLogResponse Client::getPhysicalInstanceLog(const GetPhysicalInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalInstanceLogWithOptions(request, runtime);
}

/**
 * @summary Queries physical scheduling nodes.
 *
 * @param request GetPhysicalNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalNodeResponse
 */
GetPhysicalNodeResponse Client::getPhysicalNodeWithOptions(const GetPhysicalNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalNodeResponse>();
}

/**
 * @summary Queries physical scheduling nodes.
 *
 * @param request GetPhysicalNodeRequest
 * @return GetPhysicalNodeResponse
 */
GetPhysicalNodeResponse Client::getPhysicalNode(const GetPhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary Queries physical nodes by output name. Only offline code nodes and integration task nodes are supported.
 *
 * @param request GetPhysicalNodeByOutputNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalNodeByOutputNameResponse
 */
GetPhysicalNodeByOutputNameResponse Client::getPhysicalNodeByOutputNameWithOptions(const GetPhysicalNodeByOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.getOutputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalNodeByOutputName"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalNodeByOutputNameResponse>();
}

/**
 * @summary Queries physical nodes by output name. Only offline code nodes and integration task nodes are supported.
 *
 * @param request GetPhysicalNodeByOutputNameRequest
 * @return GetPhysicalNodeByOutputNameResponse
 */
GetPhysicalNodeByOutputNameResponse Client::getPhysicalNodeByOutputName(const GetPhysicalNodeByOutputNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeByOutputNameWithOptions(request, runtime);
}

/**
 * @summary Queries the code content of a scheduling node.
 *
 * @param request GetPhysicalNodeContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalNodeContentResponse
 */
GetPhysicalNodeContentResponse Client::getPhysicalNodeContentWithOptions(const GetPhysicalNodeContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalNodeContent"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalNodeContentResponse>();
}

/**
 * @summary Queries the code content of a scheduling node.
 *
 * @param request GetPhysicalNodeContentRequest
 * @return GetPhysicalNodeContentResponse
 */
GetPhysicalNodeContentResponse Client::getPhysicalNodeContent(const GetPhysicalNodeContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeContentWithOptions(request, runtime);
}

/**
 * @summary Queries the node operation logs.
 *
 * @param request GetPhysicalNodeOperationLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhysicalNodeOperationLogResponse
 */
GetPhysicalNodeOperationLogResponse Client::getPhysicalNodeOperationLogWithOptions(const GetPhysicalNodeOperationLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhysicalNodeOperationLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhysicalNodeOperationLogResponse>();
}

/**
 * @summary Queries the node operation logs.
 *
 * @param request GetPhysicalNodeOperationLogRequest
 * @return GetPhysicalNodeOperationLogResponse
 */
GetPhysicalNodeOperationLogResponse Client::getPhysicalNodeOperationLog(const GetPhysicalNodeOperationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeOperationLogWithOptions(request, runtime);
}

/**
 * @summary Queries the execution result of an asynchronous pipeline task.
 *
 * @param tmpReq GetPipelineAsyncResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineAsyncResultResponse
 */
GetPipelineAsyncResultResponse Client::getPipelineAsyncResultWithOptions(const GetPipelineAsyncResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPipelineAsyncResultShrinkRequest request = GetPipelineAsyncResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  json query = {};
  if (!!request.hasAsyncId()) {
    query["AsyncId"] = request.getAsyncId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetPipelineAsyncResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineAsyncResultResponse>();
}

/**
 * @summary Queries the execution result of an asynchronous pipeline task.
 *
 * @param request GetPipelineAsyncResultRequest
 * @return GetPipelineAsyncResultResponse
 */
GetPipelineAsyncResultResponse Client::getPipelineAsyncResult(const GetPipelineAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineAsyncResultWithOptions(request, runtime);
}

/**
 * @summary Queries a pipeline node by pipeline node ID.
 *
 * @param tmpReq GetPipelineByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineByIdResponse
 */
GetPipelineByIdResponse Client::getPipelineByIdWithOptions(const GetPipelineByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPipelineByIdShrinkRequest request = GetPipelineByIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasQueryId()) {
    request.setQueryIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryId(), "QueryId", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasQueryIdShrink()) {
    body["QueryId"] = request.getQueryIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetPipelineById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineByIdResponse>();
}

/**
 * @summary Queries a pipeline node by pipeline node ID.
 *
 * @param request GetPipelineByIdRequest
 * @return GetPipelineByIdResponse
 */
GetPipelineByIdResponse Client::getPipelineById(const GetPipelineByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineByIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a project by project ID.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Retrieves the details of a project by project ID.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Retrieves project details by project name.
 *
 * @param request GetProjectByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectByNameResponse
 */
GetProjectByNameResponse Client::getProjectByNameWithOptions(const GetProjectByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectByName"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectByNameResponse>();
}

/**
 * @summary Retrieves project details by project name.
 *
 * @param request GetProjectByNameRequest
 * @return GetProjectByNameResponse
 */
GetProjectByNameResponse Client::getProjectByName(const GetProjectByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectByNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves the production account for a project. Only super administrators can call this API operation.
 *
 * @param request GetProjectProduceUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectProduceUserResponse
 */
GetProjectProduceUserResponse Client::getProjectProduceUserWithOptions(const GetProjectProduceUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectProduceUser"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectProduceUserResponse>();
}

/**
 * @summary Retrieves the production account for a project. Only super administrators can call this API operation.
 *
 * @param request GetProjectProduceUserRequest
 * @return GetProjectProduceUserResponse
 */
GetProjectProduceUserResponse Client::getProjectProduceUser(const GetProjectProduceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectProduceUserWithOptions(request, runtime);
}

/**
 * @summary Retrieves the project whitelist.
 *
 * @param request GetProjectWhiteListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectWhiteListsResponse
 */
GetProjectWhiteListsResponse Client::getProjectWhiteListsWithOptions(const GetProjectWhiteListsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectWhiteLists"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectWhiteListsResponse>();
}

/**
 * @summary Retrieves the project whitelist.
 *
 * @param request GetProjectWhiteListsRequest
 * @return GetProjectWhiteListsResponse
 */
GetProjectWhiteListsResponse Client::getProjectWhiteLists(const GetProjectWhiteListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWhiteListsWithOptions(request, runtime);
}

/**
 * @summary Retrieves alert settings by monitored object ID. Release version: v5.4.2.
 *
 * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
 */
GetQualityAlertOfAllRuleScopeByWatchIdResponse Client::getQualityAlertOfAllRuleScopeByWatchIdWithOptions(const GetQualityAlertOfAllRuleScopeByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWatchId()) {
    query["WatchId"] = request.getWatchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityAlertOfAllRuleScopeByWatchId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityAlertOfAllRuleScopeByWatchIdResponse>();
}

/**
 * @summary Retrieves alert settings by monitored object ID. Release version: v5.4.2.
 *
 * @param request GetQualityAlertOfAllRuleScopeByWatchIdRequest
 * @return GetQualityAlertOfAllRuleScopeByWatchIdResponse
 */
GetQualityAlertOfAllRuleScopeByWatchIdResponse Client::getQualityAlertOfAllRuleScopeByWatchId(const GetQualityAlertOfAllRuleScopeByWatchIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityAlertOfAllRuleScopeByWatchIdWithOptions(request, runtime);
}

/**
 * @summary Queries the execution progress and result of an asynchronous task for creating or updating an archived table by progress ID. Available since v6.3.0.
 *
 * @param request GetQualityArchiveTableProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityArchiveTableProgressResponse
 */
GetQualityArchiveTableProgressResponse Client::getQualityArchiveTableProgressWithOptions(const GetQualityArchiveTableProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProgressId()) {
    query["ProgressId"] = request.getProgressId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityArchiveTableProgress"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityArchiveTableProgressResponse>();
}

/**
 * @summary Queries the execution progress and result of an asynchronous task for creating or updating an archived table by progress ID. Available since v6.3.0.
 *
 * @param request GetQualityArchiveTableProgressRequest
 * @return GetQualityArchiveTableProgressResponse
 */
GetQualityArchiveTableProgressResponse Client::getQualityArchiveTableProgress(const GetQualityArchiveTableProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityArchiveTableProgressWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quality rule object. Release version: v5.4.2.
 *
 * @param request GetQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleResponse
 */
GetQualityRuleResponse Client::getQualityRuleWithOptions(const GetQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRule"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleResponse>();
}

/**
 * @summary Retrieves the quality rule object. Release version: v5.4.2.
 *
 * @param request GetQualityRuleRequest
 * @return GetQualityRuleResponse
 */
GetQualityRuleResponse Client::getQualityRule(const GetQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a quality task object. Released in version 5.4.2.
 *
 * @param request GetQualityRuleTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleTaskResponse
 */
GetQualityRuleTaskResponse Client::getQualityRuleTaskWithOptions(const GetQualityRuleTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRuleTaskId()) {
    query["RuleTaskId"] = request.getRuleTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRuleTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleTaskResponse>();
}

/**
 * @summary Retrieves the details of a quality task object. Released in version 5.4.2.
 *
 * @param request GetQualityRuleTaskRequest
 * @return GetQualityRuleTaskResponse
 */
GetQualityRuleTaskResponse Client::getQualityRuleTask(const GetQualityRuleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the log content of a quality node task object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityRuleTaskLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleTaskLogResponse
 */
GetQualityRuleTaskLogResponse Client::getQualityRuleTaskLogWithOptions(const GetQualityRuleTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRuleTaskId()) {
    query["RuleTaskId"] = request.getRuleTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityRuleTaskLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleTaskLogResponse>();
}

/**
 * @summary Retrieves the log content of a quality node task object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityRuleTaskLogRequest
 * @return GetQualityRuleTaskLogResponse
 */
GetQualityRuleTaskLogResponse Client::getQualityRuleTaskLog(const GetQualityRuleTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleTaskLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quality scheduling object. Available since v5.4.2.
 *
 * @param request GetQualityScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityScheduleResponse
 */
GetQualityScheduleResponse Client::getQualityScheduleWithOptions(const GetQualityScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualitySchedule"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityScheduleResponse>();
}

/**
 * @summary Retrieves the quality scheduling object. Available since v5.4.2.
 *
 * @param request GetQualityScheduleRequest
 * @return GetQualityScheduleResponse
 */
GetQualityScheduleResponse Client::getQualitySchedule(const GetQualityScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityScheduleWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of scheduling settings by monitored object ID. Available since v5.4.2.
 *
 * @param request GetQualitySchedulesByWatchIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualitySchedulesByWatchIdResponse
 */
GetQualitySchedulesByWatchIdResponse Client::getQualitySchedulesByWatchIdWithOptions(const GetQualitySchedulesByWatchIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWatchId()) {
    query["WatchId"] = request.getWatchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualitySchedulesByWatchId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualitySchedulesByWatchIdResponse>();
}

/**
 * @summary Retrieves a list of scheduling settings by monitored object ID. Available since v5.4.2.
 *
 * @param request GetQualitySchedulesByWatchIdRequest
 * @return GetQualitySchedulesByWatchIdResponse
 */
GetQualitySchedulesByWatchIdResponse Client::getQualitySchedulesByWatchId(const GetQualitySchedulesByWatchIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualitySchedulesByWatchIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves a quality template object. Released in version 5.4.2.
 *
 * @param request GetQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityTemplateResponse
 */
GetQualityTemplateResponse Client::getQualityTemplateWithOptions(const GetQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityTemplateResponse>();
}

/**
 * @summary Retrieves a quality template object. Released in version 5.4.2.
 *
 * @param request GetQualityTemplateRequest
 * @return GetQualityTemplateResponse
 */
GetQualityTemplateResponse Client::getQualityTemplate(const GetQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves a quality monitoring object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityWatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityWatchResponse
 */
GetQualityWatchResponse Client::getQualityWatchWithOptions(const GetQualityWatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityWatch"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityWatchResponse>();
}

/**
 * @summary Retrieves a quality monitoring object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityWatchRequest
 * @return GetQualityWatchResponse
 */
GetQualityWatchResponse Client::getQualityWatch(const GetQualityWatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityWatchWithOptions(request, runtime);
}

/**
 * @summary Retrieves a quality watchtask record by the original ID of the monitored object, such as the ID of a data source, table, or metric. Release version: v5.4.2.
 *
 * @param request GetQualityWatchByObjectIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityWatchByObjectIdResponse
 */
GetQualityWatchByObjectIdResponse Client::getQualityWatchByObjectIdWithOptions(const GetQualityWatchByObjectIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWatchObjectId()) {
    query["WatchObjectId"] = request.getWatchObjectId();
  }

  if (!!request.hasWatchType()) {
    query["WatchType"] = request.getWatchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityWatchByObjectId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityWatchByObjectIdResponse>();
}

/**
 * @summary Retrieves a quality watchtask record by the original ID of the monitored object, such as the ID of a data source, table, or metric. Release version: v5.4.2.
 *
 * @param request GetQualityWatchByObjectIdRequest
 * @return GetQualityWatchByObjectIdResponse
 */
GetQualityWatchByObjectIdResponse Client::getQualityWatchByObjectId(const GetQualityWatchByObjectIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityWatchByObjectIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves a monitoring node object. Online version: v5.4.2.
 *
 * @param request GetQualityWatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityWatchTaskResponse
 */
GetQualityWatchTaskResponse Client::getQualityWatchTaskWithOptions(const GetQualityWatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWatchTaskId()) {
    query["WatchTaskId"] = request.getWatchTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityWatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityWatchTaskResponse>();
}

/**
 * @summary Retrieves a monitoring node object. Online version: v5.4.2.
 *
 * @param request GetQualityWatchTaskRequest
 * @return GetQualityWatchTaskResponse
 */
GetQualityWatchTaskResponse Client::getQualityWatchTask(const GetQualityWatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityWatchTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the log content of a monitoring task object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityWatchTaskLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityWatchTaskLogResponse
 */
GetQualityWatchTaskLogResponse Client::getQualityWatchTaskLogWithOptions(const GetQualityWatchTaskLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWatchTaskId()) {
    query["WatchTaskId"] = request.getWatchTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualityWatchTaskLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityWatchTaskLogResponse>();
}

/**
 * @summary Retrieves the log content of a monitoring task object.
 * Online version: v5.4.2.
 *
 * @param request GetQualityWatchTaskLogRequest
 * @return GetQualityWatchTaskLogResponse
 */
GetQualityWatchTaskLogResponse Client::getQualityWatchTaskLog(const GetQualityWatchTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityWatchTaskLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the cluster version based on the cluster ID.
 *
 * @param request GetQueueEngineVersionByEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQueueEngineVersionByEnvResponse
 */
GetQueueEngineVersionByEnvResponse Client::getQueueEngineVersionByEnvWithOptions(const GetQueueEngineVersionByEnvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasQueueName()) {
    query["QueueName"] = request.getQueueName();
  }

  if (!!request.hasStreamBatchMode()) {
    query["StreamBatchMode"] = request.getStreamBatchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQueueEngineVersionByEnv"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQueueEngineVersionByEnvResponse>();
}

/**
 * @summary Retrieves the cluster version based on the cluster ID.
 *
 * @param request GetQueueEngineVersionByEnvRequest
 * @return GetQueueEngineVersionByEnvResponse
 */
GetQueueEngineVersionByEnvResponse Client::getQueueEngineVersionByEnv(const GetQueueEngineVersionByEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueEngineVersionByEnvWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quality rectification process. Released in version 6.4.0.
 *
 * @param tmpReq GetRectifyFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRectifyFlowResponse
 */
GetRectifyFlowResponse Client::getRectifyFlowWithOptions(const GetRectifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRectifyFlowShrinkRequest request = GetRectifyFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGetQuery()) {
    request.setGetQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGetQuery(), "GetQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasGetQueryShrink()) {
    body["GetQuery"] = request.getGetQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRectifyFlow"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRectifyFlowResponse>();
}

/**
 * @summary Retrieves the quality rectification process. Released in version 6.4.0.
 *
 * @param request GetRectifyFlowRequest
 * @return GetRectifyFlowResponse
 */
GetRectifyFlowResponse Client::getRectifyFlow(const GetRectifyFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRectifyFlowWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a resource file.
 *
 * @param request GetResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResourceWithOptions(const GetResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceResponse>();
}

/**
 * @summary Retrieves the details of a resource file.
 *
 * @param request GetResourceRequest
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResource(const GetResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified version of a resource file.
 *
 * @param request GetResourceByVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceByVersionResponse
 */
GetResourceByVersionResponse Client::getResourceByVersionWithOptions(const GetResourceByVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceByVersion"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceByVersionResponse>();
}

/**
 * @summary Retrieves the details of a specified version of a resource file.
 *
 * @param request GetResourceByVersionRequest
 * @return GetResourceByVersionResponse
 */
GetResourceByVersionResponse Client::getResourceByVersion(const GetResourceByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceByVersionWithOptions(request, runtime);
}

/**
 * @summary Online version: v5.4.2.
 *
 * @param tmpReq GetRowPermissionByTableGuidsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRowPermissionByTableGuidsResponse
 */
GetRowPermissionByTableGuidsResponse Client::getRowPermissionByTableGuidsWithOptions(const GetRowPermissionByTableGuidsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetRowPermissionByTableGuidsShrinkRequest request = GetRowPermissionByTableGuidsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGetRowPermissionByTableGuidsQuery()) {
    request.setGetRowPermissionByTableGuidsQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGetRowPermissionByTableGuidsQuery(), "GetRowPermissionByTableGuidsQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasGetRowPermissionByTableGuidsQueryShrink()) {
    body["GetRowPermissionByTableGuidsQuery"] = request.getGetRowPermissionByTableGuidsQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetRowPermissionByTableGuids"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRowPermissionByTableGuidsResponse>();
}

/**
 * @summary Online version: v5.4.2.
 *
 * @param request GetRowPermissionByTableGuidsRequest
 * @return GetRowPermissionByTableGuidsResponse
 */
GetRowPermissionByTableGuidsResponse Client::getRowPermissionByTableGuids(const GetRowPermissionByTableGuidsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRowPermissionByTableGuidsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data classification. Release version: v5.4.2.
 *
 * @param request GetSecurityClassifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityClassifyResponse
 */
GetSecurityClassifyResponse Client::getSecurityClassifyWithOptions(const GetSecurityClassifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecurityClassify"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityClassifyResponse>();
}

/**
 * @summary Retrieves the details of a data classification. Release version: v5.4.2.
 *
 * @param request GetSecurityClassifyRequest
 * @return GetSecurityClassifyResponse
 */
GetSecurityClassifyResponse Client::getSecurityClassify(const GetSecurityClassifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityClassifyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a recognition result. Release version: v5.4.2.
 *
 * @param request GetSecurityIdentifyResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityIdentifyResultResponse
 */
GetSecurityIdentifyResultResponse Client::getSecurityIdentifyResultWithOptions(const GetSecurityIdentifyResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecurityIdentifyResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityIdentifyResultResponse>();
}

/**
 * @summary Retrieves the details of a recognition result. Release version: v5.4.2.
 *
 * @param request GetSecurityIdentifyResultRequest
 * @return GetSecurityIdentifyResultResponse
 */
GetSecurityIdentifyResultResponse Client::getSecurityIdentifyResult(const GetSecurityIdentifyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityIdentifyResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data classification level. Available since v5.4.2.
 *
 * @param request GetSecurityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityLevelResponse
 */
GetSecurityLevelResponse Client::getSecurityLevelWithOptions(const GetSecurityLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndex()) {
    query["Index"] = request.getIndex();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecurityLevel"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityLevelResponse>();
}

/**
 * @summary Retrieves the details of a data classification level. Available since v5.4.2.
 *
 * @param request GetSecurityLevelRequest
 * @return GetSecurityLevelResponse
 */
GetSecurityLevelResponse Client::getSecurityLevel(const GetSecurityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityLevelWithOptions(request, runtime);
}

/**
 * @summary Retrieves a key value by key name. Online version: v5.4.2.
 *
 * @param request GetSecuritySecretKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecuritySecretKeyResponse
 */
GetSecuritySecretKeyResponse Client::getSecuritySecretKeyWithOptions(const GetSecuritySecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecuritySecretKey"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecuritySecretKeyResponse>();
}

/**
 * @summary Retrieves a key value by key name. Online version: v5.4.2.
 *
 * @param request GetSecuritySecretKeyRequest
 * @return GetSecuritySecretKeyResponse
 */
GetSecuritySecretKeyResponse Client::getSecuritySecretKey(const GetSecuritySecretKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecuritySecretKeyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the Dataphin server version.
 *
 * @description Queries the details of published APIs based on the appKey.
 *
 * @param request GetServerVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServerVersionResponse
 */
GetServerVersionResponse Client::getServerVersionWithOptions(const GetServerVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServerVersion"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServerVersionResponse>();
}

/**
 * @summary Retrieves the Dataphin server version.
 *
 * @description Queries the details of published APIs based on the appKey.
 *
 * @param request GetServerVersionRequest
 * @return GetServerVersionResponse
 */
GetServerVersionResponse Client::getServerVersion(const GetServerVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getServerVersionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the description and metadata of an integration source table, including the table description and field list. This operation supports three sources: project or compute source tables, direct query tables of data sources, and externally collected data sources. The query results are returned in real time. For external data sources, metadata collection must be completed first. Release version: v6.3.2.
 *
 * @param tmpReq GetSourceTableMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceTableMetaResponse
 */
GetSourceTableMetaResponse Client::getSourceTableMetaWithOptions(const GetSourceTableMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSourceTableMetaShrinkRequest request = GetSourceTableMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasQueryShrink()) {
    body["Query"] = request.getQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSourceTableMeta"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceTableMetaResponse>();
}

/**
 * @summary Retrieves the description and metadata of an integration source table, including the table description and field list. This operation supports three sources: project or compute source tables, direct query tables of data sources, and externally collected data sources. The query results are returned in real time. For external data sources, metadata collection must be completed first. Release version: v6.3.2.
 *
 * @param request GetSourceTableMetaRequest
 * @return GetSourceTableMetaResponse
 */
GetSourceTableMetaResponse Client::getSourceTableMeta(const GetSourceTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSourceTableMetaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the Spark client information for the cluster associated with the compute source.
 *
 * @param request GetSparkLocalClientInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkLocalClientInfoResponse
 */
GetSparkLocalClientInfoResponse Client::getSparkLocalClientInfoWithOptions(const GetSparkLocalClientInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvEnum()) {
    query["EnvEnum"] = request.getEnvEnum();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSparkLocalClientInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkLocalClientInfoResponse>();
}

/**
 * @summary Retrieves the Spark client information for the cluster associated with the compute source.
 *
 * @param request GetSparkLocalClientInfoRequest
 * @return GetSparkLocalClientInfoResponse
 */
GetSparkLocalClientInfoResponse Client::getSparkLocalClientInfo(const GetSparkLocalClientInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkLocalClientInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a standard. Released in v5.4.2.
 *
 * @param tmpReq GetStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardResponse
 */
GetStandardResponse Client::getStandardWithOptions(const GetStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetStandardShrinkRequest request = GetStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStandardGetQuery()) {
    request.setStandardGetQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStandardGetQuery(), "StandardGetQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasStandardGetQueryShrink()) {
    body["StandardGetQuery"] = request.getStandardGetQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardResponse>();
}

/**
 * @summary Retrieves the details of a standard. Released in v5.4.2.
 *
 * @param request GetStandardRequest
 * @return GetStandardResponse
 */
GetStandardResponse Client::getStandard(const GetStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data standard lookup table. Released in version 5.4.2.
 *
 * @param request GetStandardLookupTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardLookupTableResponse
 */
GetStandardLookupTableResponse Client::getStandardLookupTableWithOptions(const GetStandardLookupTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasNullable()) {
    query["Nullable"] = request.getNullable();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStandardLookupTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardLookupTableResponse>();
}

/**
 * @summary Retrieves the details of a data standard lookup table. Released in version 5.4.2.
 *
 * @param request GetStandardLookupTableRequest
 * @return GetStandardLookupTableResponse
 */
GetStandardLookupTableResponse Client::getStandardLookupTable(const GetStandardLookupTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardLookupTableWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a standard set. Release version: v5.4.2.
 *
 * @param request GetStandardSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardSetResponse
 */
GetStandardSetResponse Client::getStandardSetWithOptions(const GetStandardSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasNullable()) {
    query["Nullable"] = request.getNullable();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStandardSet"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardSetResponse>();
}

/**
 * @summary Retrieves the details of a standard set. Release version: v5.4.2.
 *
 * @param request GetStandardSetRequest
 * @return GetStandardSetResponse
 */
GetStandardSetResponse Client::getStandardSet(const GetStandardSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardSetWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics of standards by standard type under a directory.
 * Available since: v5.4.2.
 *
 * @param tmpReq GetStandardStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardStatisticsResponse
 */
GetStandardStatisticsResponse Client::getStandardStatisticsWithOptions(const GetStandardStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetStandardStatisticsShrinkRequest request = GetStandardStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStatisticsQuery()) {
    request.setStatisticsQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatisticsQuery(), "StatisticsQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasStatisticsQueryShrink()) {
    body["StatisticsQuery"] = request.getStatisticsQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetStandardStatistics"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardStatisticsResponse>();
}

/**
 * @summary Queries the statistics of standards by standard type under a directory.
 * Available since: v5.4.2.
 *
 * @param request GetStandardStatisticsRequest
 * @return GetStandardStatisticsResponse
 */
GetStandardStatisticsResponse Client::getStandardStatistics(const GetStandardStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data standard template. Released in version v5.4.2.
 *
 * @param tmpReq GetStandardTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardTemplateResponse
 */
GetStandardTemplateResponse Client::getStandardTemplateWithOptions(const GetStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetStandardTemplateShrinkRequest request = GetStandardTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterQuery()) {
    request.setFilterQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterQuery(), "FilterQuery", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasNullable()) {
    query["Nullable"] = request.getNullable();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasFilterQueryShrink()) {
    body["FilterQuery"] = request.getFilterQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetStandardTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardTemplateResponse>();
}

/**
 * @summary Retrieves the details of a data standard template. Released in version v5.4.2.
 *
 * @param request GetStandardTemplateRequest
 * @return GetStandardTemplateResponse
 */
GetStandardTemplateResponse Client::getStandardTemplate(const GetStandardTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data standard word root. Release version: v5.4.2.
 *
 * @param request GetStandardWordRootRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandardWordRootResponse
 */
GetStandardWordRootResponse Client::getStandardWordRootWithOptions(const GetStandardWordRootRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNullable()) {
    query["Nullable"] = request.getNullable();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStandardWordRoot"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandardWordRootResponse>();
}

/**
 * @summary Queries the details of a data standard word root. Release version: v5.4.2.
 *
 * @param request GetStandardWordRootRequest
 * @return GetStandardWordRootResponse
 */
GetStandardWordRootResponse Client::getStandardWordRoot(const GetStandardWordRootRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandardWordRootWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of real-time development nodes.
 *
 * @param request GetStreamJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStreamJobsResponse
 */
GetStreamJobsResponse Client::getStreamJobsWithOptions(const GetStreamJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStreamJobs"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStreamJobsResponse>();
}

/**
 * @summary Retrieves the list of real-time development nodes.
 *
 * @param request GetStreamJobsRequest
 * @return GetStreamJobsResponse
 */
GetStreamJobsResponse Client::getStreamJobs(const GetStreamJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamJobsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the full text of JobManager or TaskManager logs. Available since version 6.4.0.
 *
 * @description Retrieves the full text of JobManager or TaskManager logs in the production environment.
 *
 * @param request GetStreamLogContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStreamLogContentResponse
 */
GetStreamLogContentResponse Client::getStreamLogContentWithOptions(const GetStreamLogContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentInstanceId()) {
    query["DeploymentInstanceId"] = request.getDeploymentInstanceId();
  }

  if (!!request.hasLogName()) {
    query["LogName"] = request.getLogName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskmanagerId()) {
    query["TaskmanagerId"] = request.getTaskmanagerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStreamLogContent"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStreamLogContentResponse>();
}

/**
 * @summary Retrieves the full text of JobManager or TaskManager logs. Available since version 6.4.0.
 *
 * @description Retrieves the full text of JobManager or TaskManager logs in the production environment.
 *
 * @param request GetStreamLogContentRequest
 * @return GetStreamLogContentResponse
 */
GetStreamLogContentResponse Client::getStreamLogContent(const GetStreamLogContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamLogContentWithOptions(request, runtime);
}

/**
 * @summary Retrieves a single start or stop operation record and the log content. Available since version 6.4.0.
 *
 * @description Retrieves a single start or stop operation record and the log content by querying the production environment.
 *
 * @param request GetStreamOpsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStreamOpsRecordResponse
 */
GetStreamOpsRecordResponse Client::getStreamOpsRecordWithOptions(const GetStreamOpsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasOpsRecordId()) {
    query["OpsRecordId"] = request.getOpsRecordId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStreamOpsRecord"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStreamOpsRecordResponse>();
}

/**
 * @summary Retrieves a single start or stop operation record and the log content. Available since version 6.4.0.
 *
 * @description Retrieves a single start or stop operation record and the log content by querying the production environment.
 *
 * @param request GetStreamOpsRecordRequest
 * @return GetStreamOpsRecordResponse
 */
GetStreamOpsRecordResponse Client::getStreamOpsRecord(const GetStreamOpsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamOpsRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information and running status of a real-time task. Available since v6.4.0.
 *
 * @description Queries the basic information and running status of a real-time task. The DEV and PROD environments are supported.
 *
 * @param request GetStreamTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStreamTaskResponse
 */
GetStreamTaskResponse Client::getStreamTaskWithOptions(const GetStreamTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStreamTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStreamTaskResponse>();
}

/**
 * @summary Queries the basic information and running status of a real-time task. Available since v6.4.0.
 *
 * @description Queries the basic information and running status of a real-time task. The DEV and PROD environments are supported.
 *
 * @param request GetStreamTaskRequest
 * @return GetStreamTaskResponse
 */
GetStreamTaskResponse Client::getStreamTask(const GetStreamTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves dagrun information for all business dates of a data backfill instance workflow.
 *
 * @param request GetSupplementDagrunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupplementDagrunResponse
 */
GetSupplementDagrunResponse Client::getSupplementDagrunWithOptions(const GetSupplementDagrunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasSupplementId()) {
    query["SupplementId"] = request.getSupplementId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupplementDagrun"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupplementDagrunResponse>();
}

/**
 * @summary Retrieves dagrun information for all business dates of a data backfill instance workflow.
 *
 * @param request GetSupplementDagrunRequest
 * @return GetSupplementDagrunResponse
 */
GetSupplementDagrunResponse Client::getSupplementDagrun(const GetSupplementDagrunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplementDagrunWithOptions(request, runtime);
}

/**
 * @summary Lists all node instances for a specific business date in a data backfill workflow.
 *
 * @param request GetSupplementDagrunInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSupplementDagrunInstanceResponse
 */
GetSupplementDagrunInstanceResponse Client::getSupplementDagrunInstanceWithOptions(const GetSupplementDagrunInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDagrunId()) {
    query["DagrunId"] = request.getDagrunId();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSupplementDagrunInstance"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSupplementDagrunInstanceResponse>();
}

/**
 * @summary Lists all node instances for a specific business date in a data backfill workflow.
 *
 * @param request GetSupplementDagrunInstanceRequest
 * @return GetSupplementDagrunInstanceResponse
 */
GetSupplementDagrunInstanceResponse Client::getSupplementDagrunInstance(const GetSupplementDagrunInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplementDagrunInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a table asset inventory. Release version: v6.3.2.
 *
 * @param request GetTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const GetTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary Queries the details of a table asset inventory. Release version: v6.3.2.
 *
 * @param request GetTableRequest
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const GetTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableWithOptions(request, runtime);
}

/**
 * @summary Queries table column lineage information.
 *
 * @param tmpReq GetTableColumnLineageByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnLineageByTaskIdResponse
 */
GetTableColumnLineageByTaskIdResponse Client::getTableColumnLineageByTaskIdWithOptions(const GetTableColumnLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTableColumnLineageByTaskIdShrinkRequest request = GetTableColumnLineageByTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableColumnLineageByTaskIdQuery()) {
    request.setTableColumnLineageByTaskIdQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableColumnLineageByTaskIdQuery(), "TableColumnLineageByTaskIdQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasTableColumnLineageByTaskIdQueryShrink()) {
    body["TableColumnLineageByTaskIdQuery"] = request.getTableColumnLineageByTaskIdQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTableColumnLineageByTaskId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnLineageByTaskIdResponse>();
}

/**
 * @summary Queries table column lineage information.
 *
 * @param request GetTableColumnLineageByTaskIdRequest
 * @return GetTableColumnLineageByTaskIdResponse
 */
GetTableColumnLineageByTaskIdResponse Client::getTableColumnLineageByTaskId(const GetTableColumnLineageByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableColumnLineageByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Queries the column-level data lineage of an asset table.
 * Online version: v5.4.2.
 *
 * @param tmpReq GetTableColumnLineagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnLineagesResponse
 */
GetTableColumnLineagesResponse Client::getTableColumnLineagesWithOptions(const GetTableColumnLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTableColumnLineagesShrinkRequest request = GetTableColumnLineagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterQuery()) {
    request.setFilterQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterQuery(), "FilterQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  json body = {};
  if (!!request.hasFilterQueryShrink()) {
    body["FilterQuery"] = request.getFilterQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTableColumnLineages"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnLineagesResponse>();
}

/**
 * @summary Queries the column-level data lineage of an asset table.
 * Online version: v5.4.2.
 *
 * @param request GetTableColumnLineagesRequest
 * @return GetTableColumnLineagesResponse
 */
GetTableColumnLineagesResponse Client::getTableColumnLineages(const GetTableColumnLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableColumnLineagesWithOptions(request, runtime);
}

/**
 * @summary Queries the fields of Dataphin tables in the asset inventory. Supported table types include logical dimension tables, logical fact tables, logical aggregate tables, logical tag tables, logical table views, physical tables, physical views, and materialized views. Released in version 5.4.2.
 *
 * @param request GetTableColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumnsWithOptions(const GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalog()) {
    query["Catalog"] = request.getCatalog();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableColumns"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnsResponse>();
}

/**
 * @summary Queries the fields of Dataphin tables in the asset inventory. Supported table types include logical dimension tables, logical fact tables, logical aggregate tables, logical tag tables, logical table views, physical tables, physical views, and materialized views. Released in version 5.4.2.
 *
 * @param request GetTableColumnsRequest
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumns(const GetTableColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries table lineage information.
 *
 * @param tmpReq GetTableLineageByTaskIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableLineageByTaskIdResponse
 */
GetTableLineageByTaskIdResponse Client::getTableLineageByTaskIdWithOptions(const GetTableLineageByTaskIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTableLineageByTaskIdShrinkRequest request = GetTableLineageByTaskIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableLineageByTaskIdQuery()) {
    request.setTableLineageByTaskIdQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableLineageByTaskIdQuery(), "TableLineageByTaskIdQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasTableLineageByTaskIdQueryShrink()) {
    body["TableLineageByTaskIdQuery"] = request.getTableLineageByTaskIdQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTableLineageByTaskId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableLineageByTaskIdResponse>();
}

/**
 * @summary Queries table lineage information.
 *
 * @param request GetTableLineageByTaskIdRequest
 * @return GetTableLineageByTaskIdResponse
 */
GetTableLineageByTaskIdResponse Client::getTableLineageByTaskId(const GetTableLineageByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableLineageByTaskIdWithOptions(request, runtime);
}

/**
 * @summary Queries lineage information of an asset table.
 * Release version: v5.4.2.
 *
 * @param tmpReq GetTableLineagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableLineagesResponse
 */
GetTableLineagesResponse Client::getTableLineagesWithOptions(const GetTableLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTableLineagesShrinkRequest request = GetTableLineagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilterQuery()) {
    request.setFilterQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilterQuery(), "FilterQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.getTableGuid();
  }

  json body = {};
  if (!!request.hasFilterQueryShrink()) {
    body["FilterQuery"] = request.getFilterQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetTableLineages"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableLineagesResponse>();
}

/**
 * @summary Queries lineage information of an asset table.
 * Release version: v5.4.2.
 *
 * @param request GetTableLineagesRequest
 * @return GetTableLineagesResponse
 */
GetTableLineagesResponse Client::getTableLineages(const GetTableLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableLineagesWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of a transfer task by transfer task ID.
 *
 * @param request GetTransferInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTransferInfoResponse
 */
GetTransferInfoResponse Client::getTransferInfoWithOptions(const GetTransferInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProposalId()) {
    query["ProposalId"] = request.getProposalId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransferInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransferInfoResponse>();
}

/**
 * @summary Queries the progress of a transfer task by transfer task ID.
 *
 * @param request GetTransferInfoRequest
 * @return GetTransferInfoResponse
 */
GetTransferInfoResponse Client::getTransferInfo(const GetTransferInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransferInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a user-defined function.
 *
 * @param request GetUdfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUdfResponse
 */
GetUdfResponse Client::getUdfWithOptions(const GetUdfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUdf"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUdfResponse>();
}

/**
 * @summary Retrieves the details of a user-defined function.
 *
 * @param request GetUdfRequest
 * @return GetUdfResponse
 */
GetUdfResponse Client::getUdf(const GetUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUdfWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom function version.
 *
 * @param request GetUdfByVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUdfByVersionResponse
 */
GetUdfByVersionResponse Client::getUdfByVersionWithOptions(const GetUdfByVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUdfByVersion"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUdfByVersionResponse>();
}

/**
 * @summary Queries the details of a custom function version.
 *
 * @param request GetUdfByVersionRequest
 * @return GetUdfByVersionResponse
 */
GetUdfByVersionResponse Client::getUdfByVersion(const GetUdfByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUdfByVersionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the current user information based on the AK/SK used for request signing. Available since version v6.3.0.
 *
 * @param request GetUserByAccessKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserByAccessKeyResponse
 */
GetUserByAccessKeyResponse Client::getUserByAccessKeyWithOptions(const GetUserByAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserByAccessKey"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserByAccessKeyResponse>();
}

/**
 * @summary Retrieves the current user information based on the AK/SK used for request signing. Available since version v6.3.0.
 *
 * @param request GetUserByAccessKeyRequest
 * @return GetUserByAccessKeyResponse
 */
GetUserByAccessKeyResponse Client::getUserByAccessKey(const GetUserByAccessKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserByAccessKeyWithOptions(request, runtime);
}

/**
 * @summary Retrieves user details by the original user ID.
 *
 * @param request GetUserBySourceIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserBySourceIdResponse
 */
GetUserBySourceIdResponse Client::getUserBySourceIdWithOptions(const GetUserBySourceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserBySourceId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserBySourceIdResponse>();
}

/**
 * @summary Retrieves user details by the original user ID.
 *
 * @param request GetUserBySourceIdRequest
 * @return GetUserBySourceIdResponse
 */
GetUserBySourceIdResponse Client::getUserBySourceId(const GetUserBySourceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserBySourceIdWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a user group.
 *
 * @param request GetUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroupWithOptions(const GetUserGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserGroupResponse>();
}

/**
 * @summary Retrieves the details of a user group.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves user information in batches by user ID.
 *
 * @param tmpReq GetUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUsersResponse
 */
GetUsersResponse Client::getUsersWithOptions(const GetUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUsersShrinkRequest request = GetUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIdList(), "UserIdList", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUserIdListShrink()) {
    body["UserIdList"] = request.getUserIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUsers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUsersResponse>();
}

/**
 * @summary Retrieves user information in batches by user ID.
 *
 * @param request GetUsersRequest
 * @return GetUsersResponse
 */
GetUsersResponse Client::getUsers(const GetUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUsersWithOptions(request, runtime);
}

/**
 * @summary Grants permissions for an API.
 *
 * @param tmpReq GrantDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantDataServiceApiResponse
 */
GrantDataServiceApiResponse Client::grantDataServiceApiWithOptions(const GrantDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantDataServiceApiShrinkRequest request = GrantDataServiceApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGrantCommand()) {
    request.setGrantCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGrantCommand(), "GrantCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasGrantCommandShrink()) {
    body["GrantCommand"] = request.getGrantCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantDataServiceApi"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantDataServiceApiResponse>();
}

/**
 * @summary Grants permissions for an API.
 *
 * @param request GrantDataServiceApiRequest
 * @return GrantDataServiceApiResponse
 */
GrantDataServiceApiResponse Client::grantDataServiceApi(const GrantDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Grants resource permissions to users.
 *
 * @param tmpReq GrantResourcePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantResourcePermissionResponse
 */
GrantResourcePermissionResponse Client::grantResourcePermissionWithOptions(const GrantResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantResourcePermissionShrinkRequest request = GrantResourcePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasGrantCommand()) {
    request.setGrantCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGrantCommand(), "GrantCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasGrantCommandShrink()) {
    body["GrantCommand"] = request.getGrantCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GrantResourcePermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantResourcePermissionResponse>();
}

/**
 * @summary Grants resource permissions to users.
 *
 * @param request GrantResourcePermissionRequest
 * @return GrantResourcePermissionResponse
 */
GrantResourcePermissionResponse Client::grantResourcePermission(const GrantResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary Imports the knowledge graph model definition. Release version: v6.1.1.
 *
 * @param tmpReq ImportKgSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportKgSchemaResponse
 */
ImportKgSchemaResponse Client::importKgSchemaWithOptions(const ImportKgSchemaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ImportKgSchemaShrinkRequest request = ImportKgSchemaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImportCommand()) {
    request.setImportCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImportCommand(), "ImportCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasImportCommandShrink()) {
    body["ImportCommand"] = request.getImportCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ImportKgSchema"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportKgSchemaResponse>();
}

/**
 * @summary Imports the knowledge graph model definition. Release version: v6.1.1.
 *
 * @param request ImportKgSchemaRequest
 * @return ImportKgSchemaResponse
 */
ImportKgSchemaResponse Client::importKgSchema(const ImportKgSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importKgSchemaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the global roles that can be assigned to tenant members. Only built-in global roles are supported. Custom global roles are not supported.
 *
 * @param request ListAddableRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddableRolesResponse
 */
ListAddableRolesResponse Client::listAddableRolesWithOptions(const ListAddableRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddableRoles"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddableRolesResponse>();
}

/**
 * @summary Retrieves the global roles that can be assigned to tenant members. Only built-in global roles are supported. Custom global roles are not supported.
 *
 * @param request ListAddableRolesRequest
 * @return ListAddableRolesResponse
 */
ListAddableRolesResponse Client::listAddableRoles(const ListAddableRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddableRolesWithOptions(request, runtime);
}

/**
 * @summary Queries the users that can be added to a tenant. Only super administrators and system administrators can invoke this operation. The users must be added to the member list of the Dataphin instance but have not yet been added to the tenant member list.
 *
 * @param tmpReq ListAddableUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddableUsersResponse
 */
ListAddableUsersResponse Client::listAddableUsersWithOptions(const ListAddableUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAddableUsersShrinkRequest request = ListAddableUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAddableUsers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddableUsersResponse>();
}

/**
 * @summary Queries the users that can be added to a tenant. Only super administrators and system administrators can invoke this operation. The users must be added to the member list of the Dataphin instance but have not yet been added to the tenant member list.
 *
 * @param request ListAddableUsersRequest
 * @return ListAddableUsersResponse
 */
ListAddableUsersResponse Client::listAddableUsers(const ListAddableUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddableUsersWithOptions(request, runtime);
}

/**
 * @summary Performs a conditional query to list multiple alerting events.
 *
 * @param tmpReq ListAlertEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertEventsResponse
 */
ListAlertEventsResponse Client::listAlertEventsWithOptions(const ListAlertEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertEventsShrinkRequest request = ListAlertEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAlertEvents"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertEventsResponse>();
}

/**
 * @summary Performs a conditional query to list multiple alerting events.
 *
 * @param request ListAlertEventsRequest
 * @return ListAlertEventsResponse
 */
ListAlertEventsResponse Client::listAlertEvents(const ListAlertEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertEventsWithOptions(request, runtime);
}

/**
 * @summary Performs a conditional query to list multiple push records.
 *
 * @param tmpReq ListAlertNotificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertNotificationsResponse
 */
ListAlertNotificationsResponse Client::listAlertNotificationsWithOptions(const ListAlertNotificationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertNotificationsShrinkRequest request = ListAlertNotificationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAlertNotifications"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertNotificationsResponse>();
}

/**
 * @summary Performs a conditional query to list multiple push records.
 *
 * @param request ListAlertNotificationsRequest
 * @return ListAlertNotificationsResponse
 */
ListAlertNotificationsResponse Client::listAlertNotifications(const ListAlertNotificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertNotificationsWithOptions(request, runtime);
}

/**
 * @summary Queries the API list for an application.
 *
 * @description Queries the details of published APIs by AppKey.
 *
 * @param tmpReq ListApiByAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiByAppResponse
 */
ListApiByAppResponse Client::listApiByAppWithOptions(const ListApiByAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListApiByAppShrinkRequest request = ListApiByAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPageQuery()) {
    request.setPageQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPageQuery(), "PageQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPageQueryShrink()) {
    body["PageQuery"] = request.getPageQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListApiByApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiByAppResponse>();
}

/**
 * @summary Queries the API list for an application.
 *
 * @description Queries the details of published APIs by AppKey.
 *
 * @param request ListApiByAppRequest
 * @return ListApiByAppResponse
 */
ListApiByAppResponse Client::listApiByApp(const ListApiByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiByAppWithOptions(request, runtime);
}

/**
 * @summary Queries a paging list of approval nodes based on the relationship between the current user and the approval nodes. Online version number: v6.3.0.
 *
 * @param tmpReq ListApprovalTasksByUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApprovalTasksByUserResponse
 */
ListApprovalTasksByUserResponse Client::listApprovalTasksByUserWithOptions(const ListApprovalTasksByUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListApprovalTasksByUserShrinkRequest request = ListApprovalTasksByUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListApprovalTasksByUser"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApprovalTasksByUserResponse>();
}

/**
 * @summary Queries a paging list of approval nodes based on the relationship between the current user and the approval nodes. Online version number: v6.3.0.
 *
 * @param request ListApprovalTasksByUserRequest
 * @return ListApprovalTasksByUserResponse
 */
ListApprovalTasksByUserResponse Client::listApprovalTasksByUser(const ListApprovalTasksByUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApprovalTasksByUserWithOptions(request, runtime);
}

/**
 * @summary Queries the published folder list under a specified asset topic. Online version: v6.3.0.
 *
 * @param tmpReq ListAssetDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssetDirectoriesResponse
 */
ListAssetDirectoriesResponse Client::listAssetDirectoriesWithOptions(const ListAssetDirectoriesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAssetDirectoriesShrinkRequest request = ListAssetDirectoriesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAssetDirectories"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssetDirectoriesResponse>();
}

/**
 * @summary Queries the published folder list under a specified asset topic. Online version: v6.3.0.
 *
 * @param request ListAssetDirectoriesRequest
 * @return ListAssetDirectoriesResponse
 */
ListAssetDirectoriesResponse Client::listAssetDirectories(const ListAssetDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssetDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of published asset listing topics. Online version: v6.3.0.
 *
 * @param tmpReq ListAssetTopicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAssetTopicsResponse
 */
ListAssetTopicsResponse Client::listAssetTopicsWithOptions(const ListAssetTopicsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAssetTopicsShrinkRequest request = ListAssetTopicsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAssetTopics"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAssetTopicsResponse>();
}

/**
 * @summary Queries the list of published asset listing topics. Online version: v6.3.0.
 *
 * @param request ListAssetTopicsRequest
 * @return ListAssetTopicsResponse
 */
ListAssetTopicsResponse Client::listAssetTopics(const ListAssetTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAssetTopicsWithOptions(request, runtime);
}

/**
 * @summary Queries the specific field list of the APIs that an application has applied for.
 *
 * @description ## Request description
 * This API allows you to query the APIs authorized to an application by providing the tenant ID, the AppKey of the data service application, or a keyword of the application name. Pagination is supported. The returned data includes the API ID, name, project, authorization validity period (for development and production environments), permission type, and field lists for production and development environments (including field or parameter name, parameter type, description, example value, and authorization status). Note that pagination parameters are required.
 *
 * @param tmpReq ListAuthorizedDataServiceApiDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizedDataServiceApiDetailsResponse
 */
ListAuthorizedDataServiceApiDetailsResponse Client::listAuthorizedDataServiceApiDetailsWithOptions(const ListAuthorizedDataServiceApiDetailsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAuthorizedDataServiceApiDetailsShrinkRequest request = ListAuthorizedDataServiceApiDetailsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAuthorizedDataServiceApiDetails"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizedDataServiceApiDetailsResponse>();
}

/**
 * @summary Queries the specific field list of the APIs that an application has applied for.
 *
 * @description ## Request description
 * This API allows you to query the APIs authorized to an application by providing the tenant ID, the AppKey of the data service application, or a keyword of the application name. Pagination is supported. The returned data includes the API ID, name, project, authorization validity period (for development and production environments), permission type, and field lists for production and development environments (including field or parameter name, parameter type, description, example value, and authorization status). Note that pagination parameters are required.
 *
 * @param request ListAuthorizedDataServiceApiDetailsRequest
 * @return ListAuthorizedDataServiceApiDetailsResponse
 */
ListAuthorizedDataServiceApiDetailsResponse Client::listAuthorizedDataServiceApiDetails(const ListAuthorizedDataServiceApiDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedDataServiceApiDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of offline computing tasks. Supports fuzzy search by task name and exact matching by output table name to locate the task that generates the table and retrieve its file ID. Available since version 6.3.2.
 *
 * @param tmpReq ListBatchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBatchTasksResponse
 */
ListBatchTasksResponse Client::listBatchTasksWithOptions(const ListBatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListBatchTasksShrinkRequest request = ListBatchTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBatchTaskQuery()) {
    request.setBatchTaskQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBatchTaskQuery(), "BatchTaskQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasBatchTaskQueryShrink()) {
    body["BatchTaskQuery"] = request.getBatchTaskQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBatchTasks"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBatchTasksResponse>();
}

/**
 * @summary Queries a list of offline computing tasks. Supports fuzzy search by task name and exact matching by output table name to locate the task that generates the table and retrieve its file ID. Available since version 6.3.2.
 *
 * @param request ListBatchTasksRequest
 * @return ListBatchTasksResponse
 */
ListBatchTasksResponse Client::listBatchTasks(const ListBatchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBatchTasksWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on offline computing templates. Released in version v6.2.0.
 *
 * @param tmpReq ListBatchTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBatchTemplatesResponse
 */
ListBatchTemplatesResponse Client::listBatchTemplatesWithOptions(const ListBatchTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListBatchTemplatesShrinkRequest request = ListBatchTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBatchTemplates"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBatchTemplatesResponse>();
}

/**
 * @summary Performs a paging query on offline computing templates. Released in version v6.2.0.
 *
 * @param request ListBatchTemplatesRequest
 * @return ListBatchTemplatesResponse
 */
ListBatchTemplatesResponse Client::listBatchTemplates(const ListBatchTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBatchTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of business entities.
 *
 * @param tmpReq ListBizEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBizEntitiesResponse
 */
ListBizEntitiesResponse Client::listBizEntitiesWithOptions(const ListBizEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListBizEntitiesShrinkRequest request = ListBizEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListBizEntities"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBizEntitiesResponse>();
}

/**
 * @summary Queries a list of business entities.
 *
 * @param request ListBizEntitiesRequest
 * @return ListBizEntitiesResponse
 */
ListBizEntitiesResponse Client::listBizEntities(const ListBizEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries all business units under the current tenant.
 *
 * @param request ListBizUnitsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBizUnitsResponse
 */
ListBizUnitsResponse Client::listBizUnitsWithOptions(const ListBizUnitsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBizUnits"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBizUnitsResponse>();
}

/**
 * @summary Queries all business units under the current tenant.
 *
 * @param request ListBizUnitsRequest
 * @return ListBizUnitsResponse
 */
ListBizUnitsResponse Client::listBizUnits(const ListBizUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizUnitsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of asset catalog entries. Online version: v6.1.0.
 *
 * @param tmpReq ListCatalogAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCatalogAssetsResponse
 */
ListCatalogAssetsResponse Client::listCatalogAssetsWithOptions(const ListCatalogAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCatalogAssetsShrinkRequest request = ListCatalogAssetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListCatalogAssetsQuery()) {
    request.setListCatalogAssetsQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListCatalogAssetsQuery(), "ListCatalogAssetsQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListCatalogAssetsQueryShrink()) {
    body["ListCatalogAssetsQuery"] = request.getListCatalogAssetsQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCatalogAssets"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCatalogAssetsResponse>();
}

/**
 * @summary Queries the list of asset catalog entries. Online version: v6.1.0.
 *
 * @param request ListCatalogAssetsRequest
 * @return ListCatalogAssetsResponse
 */
ListCatalogAssetsResponse Client::listCatalogAssets(const ListCatalogAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCatalogAssetsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of clusters. Release version: v6.3.0.
 *
 * @description Retrieves the list of clusters.
 *
 * @param tmpReq ListComputeClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeClustersResponse
 */
ListComputeClustersResponse Client::listComputeClustersWithOptions(const ListComputeClustersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListComputeClustersShrinkRequest request = ListComputeClustersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListComputeClusters"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeClustersResponse>();
}

/**
 * @summary Queries the list of clusters. Release version: v6.3.0.
 *
 * @description Retrieves the list of clusters.
 *
 * @param request ListComputeClustersRequest
 * @return ListComputeClustersResponse
 */
ListComputeClustersResponse Client::listComputeClusters(const ListComputeClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeClustersWithOptions(request, runtime);
}

/**
 * @summary Query the list of compute sources.
 *
 * @param tmpReq ListComputeSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeSourcesResponse
 */
ListComputeSourcesResponse Client::listComputeSourcesWithOptions(const ListComputeSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListComputeSourcesShrinkRequest request = ListComputeSourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListComputeSources"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeSourcesResponse>();
}

/**
 * @summary Query the list of compute sources.
 *
 * @param request ListComputeSourcesRequest
 * @return ListComputeSourcesResponse
 */
ListComputeSourcesResponse Client::listComputeSources(const ListComputeSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeSourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data domains.
 *
 * @param tmpReq ListDataDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataDomainsResponse
 */
ListDataDomainsResponse Client::listDataDomainsWithOptions(const ListDataDomainsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataDomainsShrinkRequest request = ListDataDomainsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataDomains"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataDomainsResponse>();
}

/**
 * @summary Retrieves a list of data domains.
 *
 * @param request ListDataDomainsRequest
 * @return ListDataDomainsResponse
 */
ListDataDomainsResponse Client::listDataDomains(const ListDataDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries API invoke statistics information for O&M analysis.
 *
 * @param tmpReq ListDataServiceApiCallStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApiCallStatisticsResponse
 */
ListDataServiceApiCallStatisticsResponse Client::listDataServiceApiCallStatisticsWithOptions(const ListDataServiceApiCallStatisticsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceApiCallStatisticsShrinkRequest request = ListDataServiceApiCallStatisticsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceApiCallStatistics"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApiCallStatisticsResponse>();
}

/**
 * @summary Queries API invoke statistics information for O&M analysis.
 *
 * @param request ListDataServiceApiCallStatisticsRequest
 * @return ListDataServiceApiCallStatisticsResponse
 */
ListDataServiceApiCallStatisticsResponse Client::listDataServiceApiCallStatistics(const ListDataServiceApiCallStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiCallStatisticsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on data service invoke logs.
 *
 * @param tmpReq ListDataServiceApiCallsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApiCallsResponse
 */
ListDataServiceApiCallsResponse Client::listDataServiceApiCallsWithOptions(const ListDataServiceApiCallsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceApiCallsShrinkRequest request = ListDataServiceApiCallsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceApiCalls"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApiCallsResponse>();
}

/**
 * @summary Performs a paging query on data service invoke logs.
 *
 * @param request ListDataServiceApiCallsRequest
 * @return ListDataServiceApiCallsResponse
 */
ListDataServiceApiCallsResponse Client::listDataServiceApiCalls(const ListDataServiceApiCallsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiCallsWithOptions(request, runtime);
}

/**
 * @summary Operations analysis: analyzes the impact of abnormal API calls.
 *
 * @param tmpReq ListDataServiceApiImpactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApiImpactsResponse
 */
ListDataServiceApiImpactsResponse Client::listDataServiceApiImpactsWithOptions(const ListDataServiceApiImpactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceApiImpactsShrinkRequest request = ListDataServiceApiImpactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceApiImpacts"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApiImpactsResponse>();
}

/**
 * @summary Operations analysis: analyzes the impact of abnormal API calls.
 *
 * @param request ListDataServiceApiImpactsRequest
 * @return ListDataServiceApiImpactsResponse
 */
ListDataServiceApiImpactsResponse Client::listDataServiceApiImpacts(const ListDataServiceApiImpactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiImpactsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of all applications under a data service tenant. All tenant members can perform this operation.
 * Release version: v6.0.0.
 *
 * @param tmpReq ListDataServiceAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceAppsResponse
 */
ListDataServiceAppsResponse Client::listDataServiceAppsWithOptions(const ListDataServiceAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceAppsShrinkRequest request = ListDataServiceAppsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceApps"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceAppsResponse>();
}

/**
 * @summary Queries the list of all applications under a data service tenant. All tenant members can perform this operation.
 * Release version: v6.0.0.
 *
 * @param request ListDataServiceAppsRequest
 * @return ListDataServiceAppsResponse
 */
ListDataServiceAppsResponse Client::listDataServiceApps(const ListDataServiceAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of applications that the current user has permissions to access.
 *
 * @param tmpReq ListDataServiceAuthorizedAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceAuthorizedAppsResponse
 */
ListDataServiceAuthorizedAppsResponse Client::listDataServiceAuthorizedAppsWithOptions(const ListDataServiceAuthorizedAppsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceAuthorizedAppsShrinkRequest request = ListDataServiceAuthorizedAppsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceAuthorizedApps"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceAuthorizedAppsResponse>();
}

/**
 * @summary Queries the list of applications that the current user has permissions to access.
 *
 * @param request ListDataServiceAuthorizedAppsRequest
 * @return ListDataServiceAuthorizedAppsResponse
 */
ListDataServiceAuthorizedAppsResponse Client::listDataServiceAuthorizedApps(const ListDataServiceAuthorizedAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceAuthorizedAppsWithOptions(request, runtime);
}

/**
 * @summary Obtain the list of API permissions managed by me.
 *
 * @param tmpReq ListDataServiceMyApiPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceMyApiPermissionsResponse
 */
ListDataServiceMyApiPermissionsResponse Client::listDataServiceMyApiPermissionsWithOptions(const ListDataServiceMyApiPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceMyApiPermissionsShrinkRequest request = ListDataServiceMyApiPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceMyApiPermissions"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceMyApiPermissionsResponse>();
}

/**
 * @summary Obtain the list of API permissions managed by me.
 *
 * @param request ListDataServiceMyApiPermissionsRequest
 * @return ListDataServiceMyApiPermissionsResponse
 */
ListDataServiceMyApiPermissionsResponse Client::listDataServiceMyApiPermissions(const ListDataServiceMyApiPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceMyApiPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries the applications that the current user has permissions to access.
 *
 * @param tmpReq ListDataServiceMyAppPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceMyAppPermissionsResponse
 */
ListDataServiceMyAppPermissionsResponse Client::listDataServiceMyAppPermissionsWithOptions(const ListDataServiceMyAppPermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServiceMyAppPermissionsShrinkRequest request = ListDataServiceMyAppPermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceMyAppPermissions"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceMyAppPermissionsResponse>();
}

/**
 * @summary Queries the applications that the current user has permissions to access.
 *
 * @param request ListDataServiceMyAppPermissionsRequest
 * @return ListDataServiceMyAppPermissionsResponse
 */
ListDataServiceMyAppPermissionsResponse Client::listDataServiceMyAppPermissions(const ListDataServiceMyAppPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceMyAppPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of published APIs by page.
 *
 * @param tmpReq ListDataServicePublishedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServicePublishedApisResponse
 */
ListDataServicePublishedApisResponse Client::listDataServicePublishedApisWithOptions(const ListDataServicePublishedApisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataServicePublishedApisShrinkRequest request = ListDataServicePublishedApisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServicePublishedApis"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServicePublishedApisResponse>();
}

/**
 * @summary Queries the list of published APIs by page.
 *
 * @param request ListDataServicePublishedApisRequest
 * @return ListDataServicePublishedApisResponse
 */
ListDataServicePublishedApisResponse Client::listDataServicePublishedApis(const ListDataServicePublishedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

/**
 * @summary Searches for data sources and returns results that include datasource config items.
 *
 * @param tmpReq ListDataSourceWithConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceWithConfigResponse
 */
ListDataSourceWithConfigResponse Client::listDataSourceWithConfigWithOptions(const ListDataSourceWithConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSourceWithConfigShrinkRequest request = ListDataSourceWithConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataSourceWithConfig"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceWithConfigResponse>();
}

/**
 * @summary Searches for data sources and returns results that include datasource config items.
 *
 * @param request ListDataSourceWithConfigRequest
 * @return ListDataSourceWithConfigResponse
 */
ListDataSourceWithConfigResponse Client::listDataSourceWithConfig(const ListDataSourceWithConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceWithConfigWithOptions(request, runtime);
}

/**
 * @summary Performs a conditional query to retrieve a list of datasets in a project. Online version: v6.2.0.
 *
 * @description ## Request description
 * This API allows you to retrieve dataset information for a specific project by providing the tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported for paged query, and the returned packet includes the basic information of the datasets and their version details. Note that ProjectId is required, while other parameters are options that you can configure in Settings as needed to filter the results.
 *
 * @param tmpReq ListDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDatasetsShrinkRequest request = ListDatasetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatasetQuery()) {
    request.setDatasetQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDatasetQuery(), "DatasetQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasDatasetQueryShrink()) {
    body["DatasetQuery"] = request.getDatasetQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary Performs a conditional query to retrieve a list of datasets in a project. Online version: v6.2.0.
 *
 * @description ## Request description
 * This API allows you to retrieve dataset information for a specific project by providing the tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported for paged query, and the returned packet includes the basic information of the datasets and their version details. Note that ProjectId is required, while other parameters are options that you can configure in Settings as needed to filter the results.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetsWithOptions(request, runtime);
}

/**
 * @summary Query the directory tree file list.
 *
 * @param tmpReq ListFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFilesWithOptions(const ListFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListFilesShrinkRequest request = ListFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListFiles"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFilesResponse>();
}

/**
 * @summary Query the directory tree file list.
 *
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of governance objects based on governance type and filter conditions. Released in v6.3.0.
 *
 * @description ## Operation description
 * This API operation allows you to retrieve dataset information under a specific project by providing a tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported. The returned data includes basic dataset information and version details. Note that `ProjectId` is required, while other parameters are options that can be configured as needed to filter results.
 *
 * @param tmpReq ListGovernObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGovernObjectsResponse
 */
ListGovernObjectsResponse Client::listGovernObjectsWithOptions(const ListGovernObjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListGovernObjectsShrinkRequest request = ListGovernObjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListGovernObjects"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGovernObjectsResponse>();
}

/**
 * @summary Queries the list of governance objects based on governance type and filter conditions. Released in v6.3.0.
 *
 * @description ## Operation description
 * This API operation allows you to retrieve dataset information under a specific project by providing a tenant ID, project ID, and other optional parameters such as keywords and type lists. Paging is supported. The returned data includes basic dataset information and version details. Note that `ProjectId` is required, while other parameters are options that can be configured as needed to filter results.
 *
 * @param request ListGovernObjectsRequest
 * @return ListGovernObjectsResponse
 */
ListGovernObjectsResponse Client::listGovernObjects(const ListGovernObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listGovernObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries instances by paging.
 *
 * @param tmpReq ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListInstancesShrinkRequest request = ListInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries instances by paging.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of custom Kubernetes resource groups under a tenant. Released in version 6.4.0.
 *
 * @param request ListK8SResourceGroupIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListK8SResourceGroupIdsResponse
 */
ListK8SResourceGroupIdsResponse Client::listK8SResourceGroupIdsWithOptions(const ListK8SResourceGroupIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListK8SResourceGroupIds"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListK8SResourceGroupIdsResponse>();
}

/**
 * @summary Retrieves the list of custom Kubernetes resource groups under a tenant. Released in version 6.4.0.
 *
 * @param request ListK8SResourceGroupIdsRequest
 * @return ListK8SResourceGroupIdsResponse
 */
ListK8SResourceGroupIdsResponse Client::listK8SResourceGroupIds(const ListK8SResourceGroupIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listK8SResourceGroupIdsWithOptions(request, runtime);
}

/**
 * @summary Queries knowledge graph entity records with paging. Online version: v6.1.1.
 *
 * @param tmpReq ListKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKgEntityResponse
 */
ListKgEntityResponse Client::listKgEntityWithOptions(const ListKgEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListKgEntityShrinkRequest request = ListKgEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKgEntityResponse>();
}

/**
 * @summary Queries knowledge graph entity records with paging. Online version: v6.1.1.
 *
 * @param request ListKgEntityRequest
 * @return ListKgEntityResponse
 */
ListKgEntityResponse Client::listKgEntity(const ListKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKgEntityWithOptions(request, runtime);
}

/**
 * @summary Queries knowledge graph relationship records by paging. Online version: v6.1.1.
 *
 * @param tmpReq ListKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKgRelationResponse
 */
ListKgRelationResponse Client::listKgRelationWithOptions(const ListKgRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListKgRelationShrinkRequest request = ListKgRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasRelationType()) {
    query["RelationType"] = request.getRelationType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKgRelationResponse>();
}

/**
 * @summary Queries knowledge graph relationship records by paging. Online version: v6.1.1.
 *
 * @param request ListKgRelationRequest
 * @return ListKgRelationResponse
 */
ListKgRelationResponse Client::listKgRelation(const ListKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKgRelationWithOptions(request, runtime);
}

/**
 * @summary Queries the downstream of a node. The query results can be used as a data reference when you create a data backfill workflow.
 *
 * @param tmpReq ListNodeDownStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeDownStreamResponse
 */
ListNodeDownStreamResponse Client::listNodeDownStreamWithOptions(const ListNodeDownStreamRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNodeDownStreamShrinkRequest request = ListNodeDownStreamShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListNodeDownStream"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeDownStreamResponse>();
}

/**
 * @summary Queries the downstream of a node. The query results can be used as a data reference when you create a data backfill workflow.
 *
 * @param request ListNodeDownStreamRequest
 * @return ListNodeDownStreamResponse
 */
ListNodeDownStreamResponse Client::listNodeDownStream(const ListNodeDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeDownStreamWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of scheduled nodes.
 *
 * @param tmpReq ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListNodesShrinkRequest request = ListNodesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Retrieves a list of scheduled nodes.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the list of execution records. Online version: v6.2.0.
 *
 * @param tmpReq ListOperationRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOperationRecordResponse
 */
ListOperationRecordResponse Client::listOperationRecordWithOptions(const ListOperationRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListOperationRecordShrinkRequest request = ListOperationRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListCommand()) {
    request.setListCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListCommand(), "ListCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListCommandShrink()) {
    body["ListCommand"] = request.getListCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListOperationRecord"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOperationRecordResponse>();
}

/**
 * @summary Performs a paging query on the list of execution records. Online version: v6.2.0.
 *
 * @param request ListOperationRecordRequest
 * @return ListOperationRecordResponse
 */
ListOperationRecordResponse Client::listOperationRecord(const ListOperationRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOperationRecordWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tasks, including offline integration, real-time integration, and unstructured workflows (data ingestion, offline workflows, and real-time workflows). Supports multi-dimensional filtering by directory, keyword, task type, submit status, schedule type, owner, tag, and creator, and returns paginated results.
 *
 * @param tmpReq ListPipelinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const ListPipelinesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPipelinesShrinkRequest request = ListPipelinesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasListCommand()) {
    request.setListCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListCommand(), "ListCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasListCommandShrink()) {
    body["ListCommand"] = request.getListCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary Queries a list of tasks, including offline integration, real-time integration, and unstructured workflows (data ingestion, offline workflows, and real-time workflows). Supports multi-dimensional filtering by directory, keyword, task type, submit status, schedule type, owner, tag, and creator, and returns paginated results.
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPipelinesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of project members.
 *
 * @param tmpReq ListProjectMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembersWithOptions(const ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectMembersShrinkRequest request = ListProjectMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListProjectMembers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectMembersResponse>();
}

/**
 * @summary Queries the list of project members.
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectMembersWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of project roles. Release version: v6.3.2.
 *
 * @description Retrieves the list of project roles for a specified project type under a tenant. The roleType field in the returned role list indicates the role type:
 * - BUILD_IN: built-in role.
 * - CUSTOM: custom role.
 * The ProjectType request parameter is required. Valid values:
 * - BASIC: basic mode project.
 * - DEV: development environment project.
 * - PROD: production environment project.
 * - TAG: tag platform project.
 *
 * @param request ListProjectRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRolesWithOptions(const ListProjectRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.getProjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectRoles"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectRolesResponse>();
}

/**
 * @summary Retrieves a list of project roles. Release version: v6.3.2.
 *
 * @description Retrieves the list of project roles for a specified project type under a tenant. The roleType field in the returned role list indicates the role type:
 * - BUILD_IN: built-in role.
 * - CUSTOM: custom role.
 * The ProjectType request parameter is required. Valid values:
 * - BASIC: basic mode project.
 * - DEV: development environment project.
 * - PROD: production environment project.
 * - TAG: tag platform project.
 *
 * @param request ListProjectRolesRequest
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRoles(const ListProjectRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectRolesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of projects.
 *
 * @param tmpReq ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Retrieves a list of projects.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of publish records.
 *
 * @param tmpReq ListPublishRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublishRecordsResponse
 */
ListPublishRecordsResponse Client::listPublishRecordsWithOptions(const ListPublishRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPublishRecordsShrinkRequest request = ListPublishRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPublishRecords"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPublishRecordsResponse>();
}

/**
 * @summary Retrieves a paginated list of publish records.
 *
 * @param request ListPublishRecordsRequest
 * @return ListPublishRecordsResponse
 */
ListPublishRecordsResponse Client::listPublishRecords(const ListPublishRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishRecordsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query on Python third-party packages with paging. Online version: v6.4.0.
 *
 * @param tmpReq ListPythonModulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPythonModulesResponse
 */
ListPythonModulesResponse Client::listPythonModulesWithOptions(const ListPythonModulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPythonModulesShrinkRequest request = ListPythonModulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPythonModules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPythonModulesResponse>();
}

/**
 * @summary Performs a paged query on Python third-party packages with paging. Online version: v6.4.0.
 *
 * @param request ListPythonModulesRequest
 * @return ListPythonModulesResponse
 */
ListPythonModulesResponse Client::listPythonModules(const ListPythonModulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPythonModulesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of anomaly archived tables under a specified monitored object. Online version: v6.3.0.
 *
 * @param tmpReq ListQualityArchiveTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityArchiveTablesResponse
 */
ListQualityArchiveTablesResponse Client::listQualityArchiveTablesWithOptions(const ListQualityArchiveTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityArchiveTablesShrinkRequest request = ListQualityArchiveTablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityArchiveTables"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityArchiveTablesResponse>();
}

/**
 * @summary Queries the list of anomaly archived tables under a specified monitored object. Online version: v6.3.0.
 *
 * @param request ListQualityArchiveTablesRequest
 * @return ListQualityArchiveTablesResponse
 */
ListQualityArchiveTablesResponse Client::listQualityArchiveTables(const ListQualityArchiveTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityArchiveTablesWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query of quality rule nodes. Online version: v5.4.2.
 *
 * @param tmpReq ListQualityRuleTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityRuleTasksResponse
 */
ListQualityRuleTasksResponse Client::listQualityRuleTasksWithOptions(const ListQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityRuleTasksShrinkRequest request = ListQualityRuleTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityRuleTasks"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityRuleTasksResponse>();
}

/**
 * @summary Performs a paging query of quality rule nodes. Online version: v5.4.2.
 *
 * @param request ListQualityRuleTasksRequest
 * @return ListQualityRuleTasksResponse
 */
ListQualityRuleTasksResponse Client::listQualityRuleTasks(const ListQualityRuleTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityRuleTasksWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query of quality rules. Supports paging. Available online in version 5.4.2.
 *
 * @param tmpReq ListQualityRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityRulesResponse
 */
ListQualityRulesResponse Client::listQualityRulesWithOptions(const ListQualityRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityRulesShrinkRequest request = ListQualityRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityRules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityRulesResponse>();
}

/**
 * @summary Performs a paged query of quality rules. Supports paging. Available online in version 5.4.2.
 *
 * @param request ListQualityRulesRequest
 * @return ListQualityRulesResponse
 */
ListQualityRulesResponse Client::listQualityRules(const ListQualityRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityRulesWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on quality templates. Online version: v5.4.2.
 *
 * @param tmpReq ListQualityTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityTemplatesResponse
 */
ListQualityTemplatesResponse Client::listQualityTemplatesWithOptions(const ListQualityTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityTemplatesShrinkRequest request = ListQualityTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityTemplates"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityTemplatesResponse>();
}

/**
 * @summary Performs a paging query on quality templates. Online version: v5.4.2.
 *
 * @param request ListQualityTemplatesRequest
 * @return ListQualityTemplatesResponse
 */
ListQualityTemplatesResponse Client::listQualityTemplates(const ListQualityTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries quality monitoring nodes by paging.
 * Online version: v5.4.2.
 *
 * @param tmpReq ListQualityWatchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityWatchTasksResponse
 */
ListQualityWatchTasksResponse Client::listQualityWatchTasksWithOptions(const ListQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityWatchTasksShrinkRequest request = ListQualityWatchTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityWatchTasks"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityWatchTasksResponse>();
}

/**
 * @summary Queries quality monitoring nodes by paging.
 * Online version: v5.4.2.
 *
 * @param request ListQualityWatchTasksRequest
 * @return ListQualityWatchTasksResponse
 */
ListQualityWatchTasksResponse Client::listQualityWatchTasks(const ListQualityWatchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityWatchTasksWithOptions(request, runtime);
}

/**
 * @summary Queries quality monitoring objects by using a paging query. Online version: v5.4.2.
 *
 * @param tmpReq ListQualityWatchesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityWatchesResponse
 */
ListQualityWatchesResponse Client::listQualityWatchesWithOptions(const ListQualityWatchesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListQualityWatchesShrinkRequest request = ListQualityWatchesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListQualityWatches"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityWatchesResponse>();
}

/**
 * @summary Queries quality monitoring objects by using a paging query. Online version: v5.4.2.
 *
 * @param request ListQualityWatchesRequest
 * @return ListQualityWatchesResponse
 */
ListQualityWatchesResponse Client::listQualityWatches(const ListQualityWatchesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityWatchesWithOptions(request, runtime);
}

/**
 * @summary Queries quality rectification processes. Released in version v6.4.0.
 *
 * @param tmpReq ListRectifyFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRectifyFlowResponse
 */
ListRectifyFlowResponse Client::listRectifyFlowWithOptions(const ListRectifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRectifyFlowShrinkRequest request = ListRectifyFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRectifyFlow"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRectifyFlowResponse>();
}

/**
 * @summary Queries quality rectification processes. Released in version v6.4.0.
 *
 * @param request ListRectifyFlowRequest
 * @return ListRectifyFlowResponse
 */
ListRectifyFlowResponse Client::listRectifyFlow(const ListRectifyFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRectifyFlowWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of permission operation logs.
 *
 * @param tmpReq ListResourcePermissionOperationLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcePermissionOperationLogResponse
 */
ListResourcePermissionOperationLogResponse Client::listResourcePermissionOperationLogWithOptions(const ListResourcePermissionOperationLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourcePermissionOperationLogShrinkRequest request = ListResourcePermissionOperationLogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListResourcePermissionOperationLog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcePermissionOperationLogResponse>();
}

/**
 * @summary Retrieves a paginated list of permission operation logs.
 *
 * @param request ListResourcePermissionOperationLogRequest
 * @return ListResourcePermissionOperationLogResponse
 */
ListResourcePermissionOperationLogResponse Client::listResourcePermissionOperationLog(const ListResourcePermissionOperationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcePermissionOperationLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves permission authorization records by page.
 *
 * @param tmpReq ListResourcePermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcePermissionsResponse
 */
ListResourcePermissionsResponse Client::listResourcePermissionsWithOptions(const ListResourcePermissionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourcePermissionsShrinkRequest request = ListResourcePermissionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListResourcePermissions"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcePermissionsResponse>();
}

/**
 * @summary Retrieves permission authorization records by page.
 *
 * @param request ListResourcePermissionsRequest
 * @return ListResourcePermissionsResponse
 */
ListResourcePermissionsResponse Client::listResourcePermissions(const ListResourcePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcePermissionsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on row-level permissions.
 *
 * @param tmpReq ListRowPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRowPermissionResponse
 */
ListRowPermissionResponse Client::listRowPermissionWithOptions(const ListRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRowPermissionShrinkRequest request = ListRowPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPageRowPermissionQuery()) {
    request.setPageRowPermissionQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPageRowPermissionQuery(), "PageRowPermissionQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPageRowPermissionQueryShrink()) {
    body["PageRowPermissionQuery"] = request.getPageRowPermissionQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRowPermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRowPermissionResponse>();
}

/**
 * @summary Performs a paging query on row-level permissions.
 *
 * @param request ListRowPermissionRequest
 * @return ListRowPermissionResponse
 */
ListRowPermissionResponse Client::listRowPermission(const ListRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRowPermissionWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the row-level permissions of a specified user.
 *
 * @param tmpReq ListRowPermissionByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRowPermissionByUserIdResponse
 */
ListRowPermissionByUserIdResponse Client::listRowPermissionByUserIdWithOptions(const ListRowPermissionByUserIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRowPermissionByUserIdShrinkRequest request = ListRowPermissionByUserIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListRowPermissionByUserIdQuery()) {
    request.setListRowPermissionByUserIdQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListRowPermissionByUserIdQuery(), "ListRowPermissionByUserIdQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListRowPermissionByUserIdQueryShrink()) {
    body["ListRowPermissionByUserIdQuery"] = request.getListRowPermissionByUserIdQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRowPermissionByUserId"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRowPermissionByUserIdResponse>();
}

/**
 * @summary Performs a paging query on the row-level permissions of a specified user.
 *
 * @param request ListRowPermissionByUserIdRequest
 * @return ListRowPermissionByUserIdResponse
 */
ListRowPermissionByUserIdResponse Client::listRowPermissionByUserId(const ListRowPermissionByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRowPermissionByUserIdWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query on the scheduling monitoring and alerting configuration list. Supports filtering by project, monitored object type, alerting cause, notification method, recipient, creator, on-call schedule, logical table or field, and keyword. Online version: v6.4.0.
 *
 * @param tmpReq ListScheduleMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduleMonitorResponse
 */
ListScheduleMonitorResponse Client::listScheduleMonitorWithOptions(const ListScheduleMonitorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScheduleMonitorShrinkRequest request = ListScheduleMonitorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListScheduleMonitor"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduleMonitorResponse>();
}

/**
 * @summary Performs a paged query on the scheduling monitoring and alerting configuration list. Supports filtering by project, monitored object type, alerting cause, notification method, recipient, creator, on-call schedule, logical table or field, and keyword. Online version: v6.4.0.
 *
 * @param request ListScheduleMonitorRequest
 * @return ListScheduleMonitorResponse
 */
ListScheduleMonitorResponse Client::listScheduleMonitor(const ListScheduleMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduleMonitorWithOptions(request, runtime);
}

/**
 * @summary Queries a list of scheduling templates. Supports fuzzy search by template name and pagination, and is used to select a scheduling template when updating a task. Release version: v6.3.2.
 *
 * @param tmpReq ListScheduleTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduleTemplatesResponse
 */
ListScheduleTemplatesResponse Client::listScheduleTemplatesWithOptions(const ListScheduleTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScheduleTemplatesShrinkRequest request = ListScheduleTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListScheduleTemplatesCommand()) {
    request.setListScheduleTemplatesCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListScheduleTemplatesCommand(), "ListScheduleTemplatesCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListScheduleTemplatesCommandShrink()) {
    body["ListScheduleTemplatesCommand"] = request.getListScheduleTemplatesCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListScheduleTemplates"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduleTemplatesResponse>();
}

/**
 * @summary Queries a list of scheduling templates. Supports fuzzy search by template name and pagination, and is used to select a scheduling template when updating a task. Release version: v6.3.2.
 *
 * @param request ListScheduleTemplatesRequest
 * @return ListScheduleTemplatesResponse
 */
ListScheduleTemplatesResponse Client::listScheduleTemplates(const ListScheduleTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduleTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the data classification list by paging.
 *
 * @param tmpReq ListSecurityClassifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityClassifyResponse
 */
ListSecurityClassifyResponse Client::listSecurityClassifyWithOptions(const ListSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSecurityClassifyShrinkRequest request = ListSecurityClassifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSecurityClassify"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityClassifyResponse>();
}

/**
 * @summary Queries the data classification list by paging.
 *
 * @param request ListSecurityClassifyRequest
 * @return ListSecurityClassifyResponse
 */
ListSecurityClassifyResponse Client::listSecurityClassify(const ListSecurityClassifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityClassifyWithOptions(request, runtime);
}

/**
 * @summary Queries identification records of security identification results by using paging.
 * Online version: v5.4.2.
 *
 * @param tmpReq ListSecurityIdentifyRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityIdentifyRecordsResponse
 */
ListSecurityIdentifyRecordsResponse Client::listSecurityIdentifyRecordsWithOptions(const ListSecurityIdentifyRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSecurityIdentifyRecordsShrinkRequest request = ListSecurityIdentifyRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSecurityIdentifyRecords"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityIdentifyRecordsResponse>();
}

/**
 * @summary Queries identification records of security identification results by using paging.
 * Online version: v5.4.2.
 *
 * @param request ListSecurityIdentifyRecordsRequest
 * @return ListSecurityIdentifyRecordsResponse
 */
ListSecurityIdentifyRecordsResponse Client::listSecurityIdentifyRecords(const ListSecurityIdentifyRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityIdentifyRecordsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query on security identification results with paging. The online version is v5.4.2.
 *
 * @param tmpReq ListSecurityIdentifyResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityIdentifyResultsResponse
 */
ListSecurityIdentifyResultsResponse Client::listSecurityIdentifyResultsWithOptions(const ListSecurityIdentifyResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSecurityIdentifyResultsShrinkRequest request = ListSecurityIdentifyResultsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSecurityIdentifyResults"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityIdentifyResultsResponse>();
}

/**
 * @summary Performs a paged query on security identification results with paging. The online version is v5.4.2.
 *
 * @param request ListSecurityIdentifyResultsRequest
 * @return ListSecurityIdentifyResultsResponse
 */
ListSecurityIdentifyResultsResponse Client::listSecurityIdentifyResults(const ListSecurityIdentifyResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityIdentifyResultsWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the standard list. Released in version v5.4.2.
 *
 * @param tmpReq ListStandardsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStandardsResponse
 */
ListStandardsResponse Client::listStandardsWithOptions(const ListStandardsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListStandardsShrinkRequest request = ListStandardsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListStandards"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStandardsResponse>();
}

/**
 * @summary Performs a paging query on the standard list. Released in version v5.4.2.
 *
 * @param request ListStandardsRequest
 * @return ListStandardsResponse
 */
ListStandardsResponse Client::listStandards(const ListStandardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStandardsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of historical running instances for a real-time task. Available since v6.4.0.
 *
 * @description Retrieves the list of historical running instances for a real-time task in the production environment.
 *
 * @param request ListStreamInstanceRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamInstanceRecordsResponse
 */
ListStreamInstanceRecordsResponse Client::listStreamInstanceRecordsWithOptions(const ListStreamInstanceRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamInstanceRecords"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamInstanceRecordsResponse>();
}

/**
 * @summary Retrieves a list of historical running instances for a real-time task. Available since v6.4.0.
 *
 * @description Retrieves the list of historical running instances for a real-time task in the production environment.
 *
 * @param request ListStreamInstanceRecordsRequest
 * @return ListStreamInstanceRecordsResponse
 */
ListStreamInstanceRecordsResponse Client::listStreamInstanceRecords(const ListStreamInstanceRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamInstanceRecordsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of JobManager log files for a real-time task. Available since version 6.4.0.
 *
 * @description Retrieves the list of JobManager log files for a real-time task in the production environment.
 *
 * @param request ListStreamJobManagerLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamJobManagerLogsResponse
 */
ListStreamJobManagerLogsResponse Client::listStreamJobManagerLogsWithOptions(const ListStreamJobManagerLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentInstanceId()) {
    query["DeploymentInstanceId"] = request.getDeploymentInstanceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamJobManagerLogs"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamJobManagerLogsResponse>();
}

/**
 * @summary Retrieves the list of JobManager log files for a real-time task. Available since version 6.4.0.
 *
 * @description Retrieves the list of JobManager log files for a real-time task in the production environment.
 *
 * @param request ListStreamJobManagerLogsRequest
 * @return ListStreamJobManagerLogsResponse
 */
ListStreamJobManagerLogsResponse Client::listStreamJobManagerLogs(const ListStreamJobManagerLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamJobManagerLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the start and stop operation records of real-time tasks. Available since v6.4.0.
 *
 * @description Retrieves the start and stop operation records of real-time tasks in the production environment.
 *
 * @param request ListStreamOpsRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamOpsRecordsResponse
 */
ListStreamOpsRecordsResponse Client::listStreamOpsRecordsWithOptions(const ListStreamOpsRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamOpsRecords"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamOpsRecordsResponse>();
}

/**
 * @summary Queries the start and stop operation records of real-time tasks. Available since v6.4.0.
 *
 * @description Retrieves the start and stop operation records of real-time tasks in the production environment.
 *
 * @param request ListStreamOpsRecordsRequest
 * @return ListStreamOpsRecordsResponse
 */
ListStreamOpsRecordsResponse Client::listStreamOpsRecords(const ListStreamOpsRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamOpsRecordsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of log files for a specified TaskManager. Available since v6.4.0.
 *
 * @description Retrieves the list of log files for a specified TaskManager in the production environment.
 *
 * @param request ListStreamTaskManagerLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamTaskManagerLogsResponse
 */
ListStreamTaskManagerLogsResponse Client::listStreamTaskManagerLogsWithOptions(const ListStreamTaskManagerLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentInstanceId()) {
    query["DeploymentInstanceId"] = request.getDeploymentInstanceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskmanagerId()) {
    query["TaskmanagerId"] = request.getTaskmanagerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamTaskManagerLogs"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamTaskManagerLogsResponse>();
}

/**
 * @summary Retrieves the list of log files for a specified TaskManager. Available since v6.4.0.
 *
 * @description Retrieves the list of log files for a specified TaskManager in the production environment.
 *
 * @param request ListStreamTaskManagerLogsRequest
 * @return ListStreamTaskManagerLogsResponse
 */
ListStreamTaskManagerLogsResponse Client::listStreamTaskManagerLogs(const ListStreamTaskManagerLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamTaskManagerLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of TaskManagers for a real-time task. Available since v6.4.0.
 *
 * @description Retrieves the list of TaskManagers for a real-time task in the production environment.
 *
 * @param request ListStreamTaskManagersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListStreamTaskManagersResponse
 */
ListStreamTaskManagersResponse Client::listStreamTaskManagersWithOptions(const ListStreamTaskManagersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeploymentInstanceId()) {
    query["DeploymentInstanceId"] = request.getDeploymentInstanceId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListStreamTaskManagers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListStreamTaskManagersResponse>();
}

/**
 * @summary Retrieves the list of TaskManagers for a real-time task. Available since v6.4.0.
 *
 * @description Retrieves the list of TaskManagers for a real-time task in the production environment.
 *
 * @param request ListStreamTaskManagersRequest
 * @return ListStreamTaskManagersResponse
 */
ListStreamTaskManagersResponse Client::listStreamTaskManagers(const ListStreamTaskManagersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listStreamTaskManagersWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of pending release records.
 *
 * @param tmpReq ListSubmitRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubmitRecordsResponse
 */
ListSubmitRecordsResponse Client::listSubmitRecordsWithOptions(const ListSubmitRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSubmitRecordsShrinkRequest request = ListSubmitRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSubmitRecords"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubmitRecordsResponse>();
}

/**
 * @summary Retrieves a paginated list of pending release records.
 *
 * @param request ListSubmitRecordsRequest
 * @return ListSubmitRecordsResponse
 */
ListSubmitRecordsResponse Client::listSubmitRecords(const ListSubmitRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubmitRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of asset tables by page.
 * Available in version v5.4.2.
 *
 * @param tmpReq ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTablesShrinkRequest request = ListTablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries the metadata of asset tables by page.
 * Available in version v5.4.2.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of tenant members.
 *
 * @param tmpReq ListTenantMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantMembersResponse
 */
ListTenantMembersResponse Client::listTenantMembersWithOptions(const ListTenantMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTenantMembersShrinkRequest request = ListTenantMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListTenantMembers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantMembersResponse>();
}

/**
 * @summary Retrieves a list of tenant members.
 *
 * @param request ListTenantMembersRequest
 * @return ListTenantMembersResponse
 */
ListTenantMembersResponse Client::listTenantMembers(const ListTenantMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantMembersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of tenant roles. Release version: v6.3.2.
 *
 * @description Retrieves the list of tenant roles. The roleType field in the returned role list indicates the role type:
 * - BUILD_IN: built-in role
 * - CUSTOM: custom role (created by the tenant)
 * This operation does not require additional business request parameters. The tenantId parameter is automatically injected by the POP gateway context.
 *
 * @param request ListTenantRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTenantRolesResponse
 */
ListTenantRolesResponse Client::listTenantRolesWithOptions(const ListTenantRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTenantRoles"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTenantRolesResponse>();
}

/**
 * @summary Retrieves the list of tenant roles. Release version: v6.3.2.
 *
 * @description Retrieves the list of tenant roles. The roleType field in the returned role list indicates the role type:
 * - BUILD_IN: built-in role
 * - CUSTOM: custom role (created by the tenant)
 * This operation does not require additional business request parameters. The tenantId parameter is automatically injected by the POP gateway context.
 *
 * @param request ListTenantRolesRequest
 * @return ListTenantRolesResponse
 */
ListTenantRolesResponse Client::listTenantRoles(const ListTenantRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantRolesWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the members of a user group.
 *
 * @param tmpReq ListUserGroupMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupMembersResponse
 */
ListUserGroupMembersResponse Client::listUserGroupMembersWithOptions(const ListUserGroupMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserGroupMembersShrinkRequest request = ListUserGroupMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserGroupMembers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupMembersResponse>();
}

/**
 * @summary Performs a paging query on the members of a user group.
 *
 * @param request ListUserGroupMembersRequest
 * @return ListUserGroupMembersResponse
 */
ListUserGroupMembersResponse Client::listUserGroupMembers(const ListUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupMembersWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the user group list.
 *
 * @param tmpReq ListUserGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroupsWithOptions(const ListUserGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserGroupsShrinkRequest request = ListUserGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserGroups"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserGroupsResponse>();
}

/**
 * @summary Performs a paging query on the user group list.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of projects that a specified user participates in. Released in version v6.4.0.
 *
 * @param tmpReq ListUserProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserProjectsResponse
 */
ListUserProjectsResponse Client::listUserProjectsWithOptions(const ListUserProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserProjectsShrinkRequest request = ListUserProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUserProjects"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserProjectsResponse>();
}

/**
 * @summary Queries the list of projects that a specified user participates in. Released in version v6.4.0.
 *
 * @param request ListUserProjectsRequest
 * @return ListUserProjectsResponse
 */
ListUserProjectsResponse Client::listUserProjects(const ListUserProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserProjectsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query for paging the user list. Online version: v6.4.0.
 *
 * @param tmpReq ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUsersShrinkRequest request = ListUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasListQuery()) {
    request.setListQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getListQuery(), "ListQuery", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasListQueryShrink()) {
    body["ListQuery"] = request.getListQueryShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Performs a paged query for paging the user list. Online version: v6.4.0.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Takes an offline computing task offline.
 *
 * @param request OfflineBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineBatchTaskResponse
 */
OfflineBatchTaskResponse Client::offlineBatchTaskWithOptions(const OfflineBatchTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OfflineBatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineBatchTaskResponse>();
}

/**
 * @summary Takes an offline computing task offline.
 *
 * @param request OfflineBatchTaskRequest
 * @return OfflineBatchTaskResponse
 */
OfflineBatchTaskResponse Client::offlineBatchTask(const OfflineBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Offline a business entity.
 *
 * @param tmpReq OfflineBizEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineBizEntityResponse
 */
OfflineBizEntityResponse Client::offlineBizEntityWithOptions(const OfflineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflineBizEntityShrinkRequest request = OfflineBizEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOfflineCommand()) {
    request.setOfflineCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOfflineCommand(), "OfflineCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasOfflineCommandShrink()) {
    body["OfflineCommand"] = request.getOfflineCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineBizEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineBizEntityResponse>();
}

/**
 * @summary Offline a business entity.
 *
 * @param request OfflineBizEntityRequest
 * @return OfflineBizEntityResponse
 */
OfflineBizEntityResponse Client::offlineBizEntity(const OfflineBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineBizEntityWithOptions(request, runtime);
}

/**
 * @summary Takes an integration pipeline task offline.
 *
 * @param tmpReq OfflinePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflinePipelineResponse
 */
OfflinePipelineResponse Client::offlinePipelineWithOptions(const OfflinePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflinePipelineShrinkRequest request = OfflinePipelineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasOfflineCommand()) {
    request.setOfflineCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOfflineCommand(), "OfflineCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasOfflineCommandShrink()) {
    body["OfflineCommand"] = request.getOfflineCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflinePipeline"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflinePipelineResponse>();
}

/**
 * @summary Takes an integration pipeline task offline.
 *
 * @param request OfflinePipelineRequest
 * @return OfflinePipelineResponse
 */
OfflinePipelineResponse Client::offlinePipeline(const OfflinePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlinePipelineWithOptions(request, runtime);
}

/**
 * @summary Asynchronously takes an integration pipeline task offline.
 *
 * @param tmpReq OfflinePipelineByAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflinePipelineByAsyncResponse
 */
OfflinePipelineByAsyncResponse Client::offlinePipelineByAsyncWithOptions(const OfflinePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflinePipelineByAsyncShrinkRequest request = OfflinePipelineByAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasOfflineCommand()) {
    request.setOfflineCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOfflineCommand(), "OfflineCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasOfflineCommandShrink()) {
    body["OfflineCommand"] = request.getOfflineCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflinePipelineByAsync"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflinePipelineByAsyncResponse>();
}

/**
 * @summary Asynchronously takes an integration pipeline task offline.
 *
 * @param request OfflinePipelineByAsyncRequest
 * @return OfflinePipelineByAsyncResponse
 */
OfflinePipelineByAsyncResponse Client::offlinePipelineByAsync(const OfflinePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlinePipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary Takes a standard offline. Introduced in version v5.4.2.
 *
 * @param tmpReq OfflineStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineStandardResponse
 */
OfflineStandardResponse Client::offlineStandardWithOptions(const OfflineStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OfflineStandardShrinkRequest request = OfflineStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOfflineCommand()) {
    request.setOfflineCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOfflineCommand(), "OfflineCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasOfflineCommandShrink()) {
    body["OfflineCommand"] = request.getOfflineCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OfflineStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineStandardResponse>();
}

/**
 * @summary Takes a standard offline. Introduced in version v5.4.2.
 *
 * @param request OfflineStandardRequest
 * @return OfflineStandardResponse
 */
OfflineStandardResponse Client::offlineStandard(const OfflineStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineStandardWithOptions(request, runtime);
}

/**
 * @summary Brings a business entity online.
 *
 * @param tmpReq OnlineBizEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OnlineBizEntityResponse
 */
OnlineBizEntityResponse Client::onlineBizEntityWithOptions(const OnlineBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OnlineBizEntityShrinkRequest request = OnlineBizEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOnlineCommand()) {
    request.setOnlineCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOnlineCommand(), "OnlineCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasOnlineCommandShrink()) {
    body["OnlineCommand"] = request.getOnlineCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OnlineBizEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OnlineBizEntityResponse>();
}

/**
 * @summary Brings a business entity online.
 *
 * @param request OnlineBizEntityRequest
 * @return OnlineBizEntityResponse
 */
OnlineBizEntityResponse Client::onlineBizEntity(const OnlineBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineBizEntityWithOptions(request, runtime);
}

/**
 * @summary Performs batch O&M operations on instances, supporting physical instances and logical table instances.
 *
 * @param tmpReq OperateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateInstanceResponse
 */
OperateInstanceResponse Client::operateInstanceWithOptions(const OperateInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  OperateInstanceShrinkRequest request = OperateInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperateCommand()) {
    request.setOperateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOperateCommand(), "OperateCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasOperateCommandShrink()) {
    body["OperateCommand"] = request.getOperateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OperateInstance"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateInstanceResponse>();
}

/**
 * @summary Performs batch O&M operations on instances, supporting physical instances and logical table instances.
 *
 * @param request OperateInstanceRequest
 * @return OperateInstanceResponse
 */
OperateInstanceResponse Client::operateInstance(const OperateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateInstanceWithOptions(request, runtime);
}

/**
 * @summary Parses the logical table dependencies of an offline compute node. The parsing result may contain self-dependent nodes in the upstream dependency information, where the upstream node ID is the same as the node ID of the parsed code. You must handle such cases on your own.
 *
 * @param tmpReq ParseBatchTaskDependencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ParseBatchTaskDependencyResponse
 */
ParseBatchTaskDependencyResponse Client::parseBatchTaskDependencyWithOptions(const ParseBatchTaskDependencyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ParseBatchTaskDependencyShrinkRequest request = ParseBatchTaskDependencyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParseCommand()) {
    request.setParseCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParseCommand(), "ParseCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasParseCommandShrink()) {
    body["ParseCommand"] = request.getParseCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ParseBatchTaskDependency"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ParseBatchTaskDependencyResponse>();
}

/**
 * @summary Parses the logical table dependencies of an offline compute node. The parsing result may contain self-dependent nodes in the upstream dependency information, where the upstream node ID is the same as the node ID of the parsed code. You must handle such cases on your own.
 *
 * @param request ParseBatchTaskDependencyRequest
 * @return ParseBatchTaskDependencyResponse
 */
ParseBatchTaskDependencyResponse Client::parseBatchTaskDependency(const ParseBatchTaskDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return parseBatchTaskDependencyWithOptions(request, runtime);
}

/**
 * @summary Pauses the scheduling of physical nodes. This stops the scheduling of nodes, and downstream nodes cannot be triggered. Currently, only offline code nodes and integration nodes are supported.
 *
 * @param tmpReq PausePhysicalNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PausePhysicalNodeResponse
 */
PausePhysicalNodeResponse Client::pausePhysicalNodeWithOptions(const PausePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PausePhysicalNodeShrinkRequest request = PausePhysicalNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPauseCommand()) {
    request.setPauseCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPauseCommand(), "PauseCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPauseCommandShrink()) {
    body["PauseCommand"] = request.getPauseCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PausePhysicalNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PausePhysicalNodeResponse>();
}

/**
 * @summary Pauses the scheduling of physical nodes. This stops the scheduling of nodes, and downstream nodes cannot be triggered. Currently, only offline code nodes and integration nodes are supported.
 *
 * @param request PausePhysicalNodeRequest
 * @return PausePhysicalNodeResponse
 */
PausePhysicalNodeResponse Client::pausePhysicalNode(const PausePhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pausePhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary Publishes a data service API to the production environment.
 *
 * @param request PublishDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishDataServiceApiResponse
 */
PublishDataServiceApiResponse Client::publishDataServiceApiWithOptions(const PublishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.getApiId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishDataServiceApi"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishDataServiceApiResponse>();
}

/**
 * @summary Publishes a data service API to the production environment.
 *
 * @param request PublishDataServiceApiRequest
 * @return PublishDataServiceApiResponse
 */
PublishDataServiceApiResponse Client::publishDataServiceApi(const PublishDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Publishes a graph model. The online version is v6.2.0.
 *
 * @param tmpReq PublishKgSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishKgSchemaResponse
 */
PublishKgSchemaResponse Client::publishKgSchemaWithOptions(const PublishKgSchemaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishKgSchemaShrinkRequest request = PublishKgSchemaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPublishCommand()) {
    request.setPublishCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPublishCommand(), "PublishCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasPublishCommandShrink()) {
    body["PublishCommand"] = request.getPublishCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishKgSchema"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishKgSchemaResponse>();
}

/**
 * @summary Publishes a graph model. The online version is v6.2.0.
 *
 * @param request PublishKgSchemaRequest
 * @return PublishKgSchemaResponse
 */
PublishKgSchemaResponse Client::publishKgSchema(const PublishKgSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishKgSchemaWithOptions(request, runtime);
}

/**
 * @summary Publishes objects in batches.
 *
 * @param tmpReq PublishObjectListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishObjectListResponse
 */
PublishObjectListResponse Client::publishObjectListWithOptions(const PublishObjectListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishObjectListShrinkRequest request = PublishObjectListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPublishCommand()) {
    request.setPublishCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPublishCommand(), "PublishCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPublishCommandShrink()) {
    body["PublishCommand"] = request.getPublishCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishObjectList"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishObjectListResponse>();
}

/**
 * @summary Publishes objects in batches.
 *
 * @param request PublishObjectListRequest
 * @return PublishObjectListResponse
 */
PublishObjectListResponse Client::publishObjectList(const PublishObjectListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishObjectListWithOptions(request, runtime);
}

/**
 * @summary Publishes a standard.
 * Release version: v5.4.2.
 *
 * @param tmpReq PublishStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishStandardResponse
 */
PublishStandardResponse Client::publishStandardWithOptions(const PublishStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishStandardShrinkRequest request = PublishStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPublishCommand()) {
    request.setPublishCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPublishCommand(), "PublishCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPublishCommandShrink()) {
    body["PublishCommand"] = request.getPublishCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishStandardResponse>();
}

/**
 * @summary Publishes a standard.
 * Release version: v5.4.2.
 *
 * @param request PublishStandardRequest
 * @return PublishStandardResponse
 */
PublishStandardResponse Client::publishStandard(const PublishStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishStandardWithOptions(request, runtime);
}

/**
 * @summary Queries the submit result of a real-time integration task based on the submit detail ID. Available since v6.4.0.
 *
 * @param tmpReq QueryPipelineSubmitResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPipelineSubmitResultResponse
 */
QueryPipelineSubmitResultResponse Client::queryPipelineSubmitResultWithOptions(const QueryPipelineSubmitResultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryPipelineSubmitResultShrinkRequest request = QueryPipelineSubmitResultShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasSubmitId()) {
    query["SubmitId"] = request.getSubmitId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryPipelineSubmitResult"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPipelineSubmitResultResponse>();
}

/**
 * @summary Queries the submit result of a real-time integration task based on the submit detail ID. Available since v6.4.0.
 *
 * @param request QueryPipelineSubmitResultRequest
 * @return QueryPipelineSubmitResultResponse
 */
QueryPipelineSubmitResultResponse Client::queryPipelineSubmitResult(const QueryPipelineSubmitResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPipelineSubmitResultWithOptions(request, runtime);
}

/**
 * @summary Remove regular members from a data service application. Only the application owner can perform this operation.
 * Released version: v6.0.0.
 *
 * @param tmpReq RemoveDataServiceAppMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDataServiceAppMemberResponse
 */
RemoveDataServiceAppMemberResponse Client::removeDataServiceAppMemberWithOptions(const RemoveDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveDataServiceAppMemberShrinkRequest request = RemoveDataServiceAppMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveDataServiceAppMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDataServiceAppMemberResponse>();
}

/**
 * @summary Remove regular members from a data service application. Only the application owner can perform this operation.
 * Released version: v6.0.0.
 *
 * @param request RemoveDataServiceAppMemberRequest
 * @return RemoveDataServiceAppMemberResponse
 */
RemoveDataServiceAppMemberResponse Client::removeDataServiceAppMember(const RemoveDataServiceAppMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeDataServiceAppMemberWithOptions(request, runtime);
}

/**
 * @summary Removes a project member.
 *
 * @param tmpReq RemoveProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveProjectMemberResponse
 */
RemoveProjectMemberResponse Client::removeProjectMemberWithOptions(const RemoveProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveProjectMemberShrinkRequest request = RemoveProjectMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveProjectMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveProjectMemberResponse>();
}

/**
 * @summary Removes a project member.
 *
 * @param request RemoveProjectMemberRequest
 * @return RemoveProjectMemberResponse
 */
RemoveProjectMemberResponse Client::removeProjectMember(const RemoveProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Deletes the bindings between quality rules and schedules in batches.
 * Release version: v5.4.2.
 *
 * @param tmpReq RemoveQualityRuleSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveQualityRuleSchedulesResponse
 */
RemoveQualityRuleSchedulesResponse Client::removeQualityRuleSchedulesWithOptions(const RemoveQualityRuleSchedulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveQualityRuleSchedulesShrinkRequest request = RemoveQualityRuleSchedulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveQualityRuleSchedules"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveQualityRuleSchedulesResponse>();
}

/**
 * @summary Deletes the bindings between quality rules and schedules in batches.
 * Release version: v5.4.2.
 *
 * @param request RemoveQualityRuleSchedulesRequest
 * @return RemoveQualityRuleSchedulesResponse
 */
RemoveQualityRuleSchedulesResponse Client::removeQualityRuleSchedules(const RemoveQualityRuleSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeQualityRuleSchedulesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more scheduling monitoring alert configurations. Available since v6.4.0.
 *
 * @param tmpReq RemoveScheduleMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveScheduleMonitorResponse
 */
RemoveScheduleMonitorResponse Client::removeScheduleMonitorWithOptions(const RemoveScheduleMonitorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveScheduleMonitorShrinkRequest request = RemoveScheduleMonitorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveScheduleMonitor"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveScheduleMonitorResponse>();
}

/**
 * @summary Deletes one or more scheduling monitoring alert configurations. Available since v6.4.0.
 *
 * @param request RemoveScheduleMonitorRequest
 * @return RemoveScheduleMonitorResponse
 */
RemoveScheduleMonitorResponse Client::removeScheduleMonitor(const RemoveScheduleMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeScheduleMonitorWithOptions(request, runtime);
}

/**
 * @summary Removes a tenant member. Only super administrators and system administrators can invoke this API operation.
 *
 * @param tmpReq RemoveTenantMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTenantMemberResponse
 */
RemoveTenantMemberResponse Client::removeTenantMemberWithOptions(const RemoveTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveTenantMemberShrinkRequest request = RemoveTenantMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveTenantMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTenantMemberResponse>();
}

/**
 * @summary Removes a tenant member. Only super administrators and system administrators can invoke this API operation.
 *
 * @param request RemoveTenantMemberRequest
 * @return RemoveTenantMemberResponse
 */
RemoveTenantMemberResponse Client::removeTenantMember(const RemoveTenantMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTenantMemberWithOptions(request, runtime);
}

/**
 * @summary Removes members from a user group.
 *
 * @param tmpReq RemoveUserGroupMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUserGroupMemberResponse
 */
RemoveUserGroupMemberResponse Client::removeUserGroupMemberWithOptions(const RemoveUserGroupMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveUserGroupMemberShrinkRequest request = RemoveUserGroupMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveCommand()) {
    request.setRemoveCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRemoveCommand(), "RemoveCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRemoveCommandShrink()) {
    body["RemoveCommand"] = request.getRemoveCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveUserGroupMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUserGroupMemberResponse>();
}

/**
 * @summary Removes members from a user group.
 *
 * @param request RemoveUserGroupMemberRequest
 * @return RemoveUserGroupMemberResponse
 */
RemoveUserGroupMemberResponse Client::removeUserGroupMember(const RemoveUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary Updates the whitelist of a project.
 *
 * @param tmpReq ReplaceProjectWhiteListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceProjectWhiteListsResponse
 */
ReplaceProjectWhiteListsResponse Client::replaceProjectWhiteListsWithOptions(const ReplaceProjectWhiteListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceProjectWhiteListsShrinkRequest request = ReplaceProjectWhiteListsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReplaceCommand()) {
    request.setReplaceCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReplaceCommand(), "ReplaceCommand", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasReplaceCommandShrink()) {
    body["ReplaceCommand"] = request.getReplaceCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReplaceProjectWhiteLists"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceProjectWhiteListsResponse>();
}

/**
 * @summary Updates the whitelist of a project.
 *
 * @param request ReplaceProjectWhiteListsRequest
 * @return ReplaceProjectWhiteListsResponse
 */
ReplaceProjectWhiteListsResponse Client::replaceProjectWhiteLists(const ReplaceProjectWhiteListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceProjectWhiteListsWithOptions(request, runtime);
}

/**
 * @summary Resets the application key of a data service. Only the application owner can perform this operation. Released in v6.0.0.
 *
 * @param tmpReq ResetDataServiceAppSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDataServiceAppSecretResponse
 */
ResetDataServiceAppSecretResponse Client::resetDataServiceAppSecretWithOptions(const ResetDataServiceAppSecretRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResetDataServiceAppSecretShrinkRequest request = ResetDataServiceAppSecretShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResetDataServiceAppSecret"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDataServiceAppSecretResponse>();
}

/**
 * @summary Resets the application key of a data service. Only the application owner can perform this operation. Released in v6.0.0.
 *
 * @param request ResetDataServiceAppSecretRequest
 * @return ResetDataServiceAppSecretResponse
 */
ResetDataServiceAppSecretResponse Client::resetDataServiceAppSecret(const ResetDataServiceAppSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDataServiceAppSecretWithOptions(request, runtime);
}

/**
 * @summary Resumes the scheduling of physical nodes.
 *
 * @param tmpReq ResumePhysicalNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumePhysicalNodeResponse
 */
ResumePhysicalNodeResponse Client::resumePhysicalNodeWithOptions(const ResumePhysicalNodeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResumePhysicalNodeShrinkRequest request = ResumePhysicalNodeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResumeCommand()) {
    request.setResumeCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResumeCommand(), "ResumeCommand", "json"));
  }

  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasResumeCommandShrink()) {
    body["ResumeCommand"] = request.getResumeCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ResumePhysicalNode"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumePhysicalNodeResponse>();
}

/**
 * @summary Resumes the scheduling of physical nodes.
 *
 * @param request ResumePhysicalNodeRequest
 * @return ResumePhysicalNodeResponse
 */
ResumePhysicalNodeResponse Client::resumePhysicalNode(const ResumePhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumePhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary Retransfers a failed transfer task.
 *
 * @param tmpReq RetryTransferOwnershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryTransferOwnershipResponse
 */
RetryTransferOwnershipResponse Client::retryTransferOwnershipWithOptions(const RetryTransferOwnershipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RetryTransferOwnershipShrinkRequest request = RetryTransferOwnershipShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPrivilegeTransferRecord()) {
    request.setPrivilegeTransferRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPrivilegeTransferRecord(), "PrivilegeTransferRecord", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPrivilegeTransferRecordShrink()) {
    body["PrivilegeTransferRecord"] = request.getPrivilegeTransferRecordShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RetryTransferOwnership"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryTransferOwnershipResponse>();
}

/**
 * @summary Retransfers a failed transfer task.
 *
 * @param request RetryTransferOwnershipRequest
 * @return RetryTransferOwnershipResponse
 */
RetryTransferOwnershipResponse Client::retryTransferOwnership(const RetryTransferOwnershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryTransferOwnershipWithOptions(request, runtime);
}

/**
 * @summary Reviews the quality rectification process. Release version: v6.4.0.
 *
 * @param tmpReq ReviewRectifyFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReviewRectifyFlowResponse
 */
ReviewRectifyFlowResponse Client::reviewRectifyFlowWithOptions(const ReviewRectifyFlowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReviewRectifyFlowShrinkRequest request = ReviewRectifyFlowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReviewCommand()) {
    request.setReviewCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReviewCommand(), "ReviewCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasReviewCommandShrink()) {
    body["ReviewCommand"] = request.getReviewCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ReviewRectifyFlow"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReviewRectifyFlowResponse>();
}

/**
 * @summary Reviews the quality rectification process. Release version: v6.4.0.
 *
 * @param request ReviewRectifyFlowRequest
 * @return ReviewRectifyFlowResponse
 */
ReviewRectifyFlowResponse Client::reviewRectifyFlow(const ReviewRectifyFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reviewRectifyFlowWithOptions(request, runtime);
}

/**
 * @summary Revokes API authorization.
 *
 * @param tmpReq RevokeDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeDataServiceApiResponse
 */
RevokeDataServiceApiResponse Client::revokeDataServiceApiWithOptions(const RevokeDataServiceApiRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeDataServiceApiShrinkRequest request = RevokeDataServiceApiShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRevokeCommand()) {
    request.setRevokeCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRevokeCommand(), "RevokeCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasRevokeCommandShrink()) {
    body["RevokeCommand"] = request.getRevokeCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeDataServiceApi"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeDataServiceApiResponse>();
}

/**
 * @summary Revokes API authorization.
 *
 * @param request RevokeDataServiceApiRequest
 * @return RevokeDataServiceApiResponse
 */
RevokeDataServiceApiResponse Client::revokeDataServiceApi(const RevokeDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Revokes resource authorization from a user.
 *
 * @param tmpReq RevokeResourcePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeResourcePermissionResponse
 */
RevokeResourcePermissionResponse Client::revokeResourcePermissionWithOptions(const RevokeResourcePermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeResourcePermissionShrinkRequest request = RevokeResourcePermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRevokeCommand()) {
    request.setRevokeCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRevokeCommand(), "RevokeCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasRevokeCommandShrink()) {
    body["RevokeCommand"] = request.getRevokeCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RevokeResourcePermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeResourcePermissionResponse>();
}

/**
 * @summary Revokes resource authorization from a user.
 *
 * @param request RevokeResourcePermissionRequest
 * @return RevokeResourcePermissionResponse
 */
RevokeResourcePermissionResponse Client::revokeResourcePermission(const RevokeResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary Retrieves knowledge graph entity or relationship records through semantic search.
 *
 * @param tmpReq SearchKgBySemanticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchKgBySemanticResponse
 */
SearchKgBySemanticResponse Client::searchKgBySemanticWithOptions(const SearchKgBySemanticRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchKgBySemanticShrinkRequest request = SearchKgBySemanticShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSearchCommand()) {
    request.setSearchCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSearchCommand(), "SearchCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasSearchCommandShrink()) {
    body["SearchCommand"] = request.getSearchCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchKgBySemantic"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchKgBySemanticResponse>();
}

/**
 * @summary Retrieves knowledge graph entity or relationship records through semantic search.
 *
 * @param request SearchKgBySemanticRequest
 * @return SearchKgBySemanticResponse
 */
SearchKgBySemanticResponse Client::searchKgBySemantic(const SearchKgBySemanticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchKgBySemanticWithOptions(request, runtime);
}

/**
 * @summary Starts an integrated full and incremental instance. Release version: v6.3.2.
 *
 * @param tmpReq StartPipelineIntegratedTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartPipelineIntegratedTaskResponse
 */
StartPipelineIntegratedTaskResponse Client::startPipelineIntegratedTaskWithOptions(const StartPipelineIntegratedTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartPipelineIntegratedTaskShrinkRequest request = StartPipelineIntegratedTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasStartCommand()) {
    request.setStartCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStartCommand(), "StartCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasStartCommandShrink()) {
    body["StartCommand"] = request.getStartCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartPipelineIntegratedTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartPipelineIntegratedTaskResponse>();
}

/**
 * @summary Starts an integrated full and incremental instance. Release version: v6.3.2.
 *
 * @param request StartPipelineIntegratedTaskRequest
 * @return StartPipelineIntegratedTaskResponse
 */
StartPipelineIntegratedTaskResponse Client::startPipelineIntegratedTask(const StartPipelineIntegratedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startPipelineIntegratedTaskWithOptions(request, runtime);
}

/**
 * @summary Stops an ad hoc query task.
 *
 * @param request StopAdHocTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAdHocTaskResponse
 */
StopAdHocTaskResponse Client::stopAdHocTaskWithOptions(const StopAdHocTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAdHocTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAdHocTaskResponse>();
}

/**
 * @summary Stops an ad hoc query task.
 *
 * @param request StopAdHocTaskRequest
 * @return StopAdHocTaskResponse
 */
StopAdHocTaskResponse Client::stopAdHocTask(const StopAdHocTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAdHocTaskWithOptions(request, runtime);
}

/**
 * @summary Stops multiple integrated incremental and full instances. Available since version v6.3.2.
 *
 * @param tmpReq StopPipelineIntegratedTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopPipelineIntegratedTaskResponse
 */
StopPipelineIntegratedTaskResponse Client::stopPipelineIntegratedTaskWithOptions(const StopPipelineIntegratedTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopPipelineIntegratedTaskShrinkRequest request = StopPipelineIntegratedTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasStopCommand()) {
    request.setStopCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStopCommand(), "StopCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasStopCommandShrink()) {
    body["StopCommand"] = request.getStopCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopPipelineIntegratedTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopPipelineIntegratedTaskResponse>();
}

/**
 * @summary Stops multiple integrated incremental and full instances. Available since version v6.3.2.
 *
 * @param request StopPipelineIntegratedTaskRequest
 * @return StopPipelineIntegratedTaskResponse
 */
StopPipelineIntegratedTaskResponse Client::stopPipelineIntegratedTask(const StopPipelineIntegratedTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopPipelineIntegratedTaskWithOptions(request, runtime);
}

/**
 * @summary Submits asset delisting. Online version: v6.3.0.
 *
 * @param tmpReq SubmitAssetsOffShelveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAssetsOffShelveResponse
 */
SubmitAssetsOffShelveResponse Client::submitAssetsOffShelveWithOptions(const SubmitAssetsOffShelveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAssetsOffShelveShrinkRequest request = SubmitAssetsOffShelveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitAssetsOffShelve"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAssetsOffShelveResponse>();
}

/**
 * @summary Submits asset delisting. Online version: v6.3.0.
 *
 * @param request SubmitAssetsOffShelveRequest
 * @return SubmitAssetsOffShelveResponse
 */
SubmitAssetsOffShelveResponse Client::submitAssetsOffShelve(const SubmitAssetsOffShelveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAssetsOffShelveWithOptions(request, runtime);
}

/**
 * @summary Submits assets for listing. Online version: v6.3.0.
 *
 * @param tmpReq SubmitAssetsOnShelveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAssetsOnShelveResponse
 */
SubmitAssetsOnShelveResponse Client::submitAssetsOnShelveWithOptions(const SubmitAssetsOnShelveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAssetsOnShelveShrinkRequest request = SubmitAssetsOnShelveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitAssetsOnShelve"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAssetsOnShelveResponse>();
}

/**
 * @summary Submits assets for listing. Online version: v6.3.0.
 *
 * @param request SubmitAssetsOnShelveRequest
 * @return SubmitAssetsOnShelveResponse
 */
SubmitAssetsOnShelveResponse Client::submitAssetsOnShelve(const SubmitAssetsOnShelveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAssetsOnShelveWithOptions(request, runtime);
}

/**
 * @summary Submits an offline computing task.
 *
 * @param tmpReq SubmitBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchTaskResponse
 */
SubmitBatchTaskResponse Client::submitBatchTaskWithOptions(const SubmitBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitBatchTaskShrinkRequest request = SubmitBatchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitBatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitBatchTaskResponse>();
}

/**
 * @summary Submits an offline computing task.
 *
 * @param request SubmitBatchTaskRequest
 * @return SubmitBatchTaskResponse
 */
SubmitBatchTaskResponse Client::submitBatchTask(const SubmitBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Submits an offline computing template. Available since v6.4.0.
 *
 * @param tmpReq SubmitBatchTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchTemplateResponse
 */
SubmitBatchTemplateResponse Client::submitBatchTemplateWithOptions(const SubmitBatchTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitBatchTemplateShrinkRequest request = SubmitBatchTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitBatchTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitBatchTemplateResponse>();
}

/**
 * @summary Submits an offline computing template. Available since v6.4.0.
 *
 * @param request SubmitBatchTemplateRequest
 * @return SubmitBatchTemplateResponse
 */
SubmitBatchTemplateResponse Client::submitBatchTemplate(const SubmitBatchTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchTemplateWithOptions(request, runtime);
}

/**
 * @summary Performs an asynchronous commit of a real-time integration pipeline task based on the OAQueryId. Online version: v6.4.0.
 *
 * @param tmpReq SubmitPipelineAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPipelineAsyncResponse
 */
SubmitPipelineAsyncResponse Client::submitPipelineAsyncWithOptions(const SubmitPipelineAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitPipelineAsyncShrinkRequest request = SubmitPipelineAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasQueryId()) {
    request.setQueryIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryId(), "QueryId", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasQueryIdShrink()) {
    body["QueryId"] = request.getQueryIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitPipelineAsync"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPipelineAsyncResponse>();
}

/**
 * @summary Performs an asynchronous commit of a real-time integration pipeline task based on the OAQueryId. Online version: v6.4.0.
 *
 * @param request SubmitPipelineAsyncRequest
 * @return SubmitPipelineAsyncResponse
 */
SubmitPipelineAsyncResponse Client::submitPipelineAsync(const SubmitPipelineAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPipelineAsyncWithOptions(request, runtime);
}

/**
 * @summary Submits an integration pipeline task by OAQueryId.
 *
 * @param tmpReq SubmitPipelineByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPipelineByIdResponse
 */
SubmitPipelineByIdResponse Client::submitPipelineByIdWithOptions(const SubmitPipelineByIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitPipelineByIdShrinkRequest request = SubmitPipelineByIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasQueryId()) {
    request.setQueryIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryId(), "QueryId", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasQueryIdShrink()) {
    body["QueryId"] = request.getQueryIdShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitPipelineById"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPipelineByIdResponse>();
}

/**
 * @summary Submits an integration pipeline task by OAQueryId.
 *
 * @param request SubmitPipelineByIdRequest
 * @return SubmitPipelineByIdResponse
 */
SubmitPipelineByIdResponse Client::submitPipelineById(const SubmitPipelineByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPipelineByIdWithOptions(request, runtime);
}

/**
 * @summary Submits rule tasks in batches and supports test runs. Available since version 5.4.2.
 *
 * @param tmpReq SubmitQualityRuleTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitQualityRuleTasksResponse
 */
SubmitQualityRuleTasksResponse Client::submitQualityRuleTasksWithOptions(const SubmitQualityRuleTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitQualityRuleTasksShrinkRequest request = SubmitQualityRuleTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitQualityRuleTasks"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitQualityRuleTasksResponse>();
}

/**
 * @summary Submits rule tasks in batches and supports test runs. Available since version 5.4.2.
 *
 * @param request SubmitQualityRuleTasksRequest
 * @return SubmitQualityRuleTasksResponse
 */
SubmitQualityRuleTasksResponse Client::submitQualityRuleTasks(const SubmitQualityRuleTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitQualityRuleTasksWithOptions(request, runtime);
}

/**
 * @summary Submits multiple monitoring object check nodes in batches. Released in version v5.4.2.
 *
 * @param tmpReq SubmitQualityWatchTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitQualityWatchTasksResponse
 */
SubmitQualityWatchTasksResponse Client::submitQualityWatchTasksWithOptions(const SubmitQualityWatchTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitQualityWatchTasksShrinkRequest request = SubmitQualityWatchTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitQualityWatchTasks"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitQualityWatchTasksResponse>();
}

/**
 * @summary Submits multiple monitoring object check nodes in batches. Released in version v5.4.2.
 *
 * @param request SubmitQualityWatchTasksRequest
 * @return SubmitQualityWatchTasksResponse
 */
SubmitQualityWatchTasksResponse Client::submitQualityWatchTasks(const SubmitQualityWatchTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitQualityWatchTasksWithOptions(request, runtime);
}

/**
 * @summary Submits a quality rectification process for review. Released in v6.4.0.
 *
 * @param tmpReq SubmitRectifyFlowForReviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitRectifyFlowForReviewResponse
 */
SubmitRectifyFlowForReviewResponse Client::submitRectifyFlowForReviewWithOptions(const SubmitRectifyFlowForReviewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitRectifyFlowForReviewShrinkRequest request = SubmitRectifyFlowForReviewShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubmitCommand()) {
    request.setSubmitCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubmitCommand(), "SubmitCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSubmitCommandShrink()) {
    body["SubmitCommand"] = request.getSubmitCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitRectifyFlowForReview"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitRectifyFlowForReviewResponse>();
}

/**
 * @summary Submits a quality rectification process for review. Released in v6.4.0.
 *
 * @param request SubmitRectifyFlowForReviewRequest
 * @return SubmitRectifyFlowForReviewResponse
 */
SubmitRectifyFlowForReviewResponse Client::submitRectifyFlowForReview(const SubmitRectifyFlowForReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitRectifyFlowForReviewWithOptions(request, runtime);
}

/**
 * @summary Synchronizes department information.
 *
 * @description Queries the details of a published API operation by AppKey.
 *
 * @param tmpReq SyncDepartmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDepartmentResponse
 */
SyncDepartmentResponse Client::syncDepartmentWithOptions(const SyncDepartmentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncDepartmentShrinkRequest request = SyncDepartmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSyncDepartmentCommand()) {
    request.setSyncDepartmentCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncDepartmentCommand(), "SyncDepartmentCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSyncDepartmentCommandShrink()) {
    body["SyncDepartmentCommand"] = request.getSyncDepartmentCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncDepartment"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDepartmentResponse>();
}

/**
 * @summary Synchronizes department information.
 *
 * @description Queries the details of a published API operation by AppKey.
 *
 * @param request SyncDepartmentRequest
 * @return SyncDepartmentResponse
 */
SyncDepartmentResponse Client::syncDepartment(const SyncDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDepartmentWithOptions(request, runtime);
}

/**
 * @summary Synchronizes department member information.
 *
 * @description Synchronizes the department mapping relationships of users. You can set departments for a specified user or clear all departments set for the user by passing an empty list for departmentIdList.
 * Usage notes:
 * - If departmentIdList is null (not passed): An error is returned directly to prevent the caller from accidentally clearing the data.
 * - If departmentIdList is an empty list []: All department mappings corresponding to the sourceUserId are explicitly cleared.
 * - If departmentIdList is a non-empty list: A full overwrite is performed. All old department mappings of the user are deleted first, and then the departments in the new list are inserted.
 *
 * @param tmpReq SyncDepartmentUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncDepartmentUserResponse
 */
SyncDepartmentUserResponse Client::syncDepartmentUserWithOptions(const SyncDepartmentUserRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncDepartmentUserShrinkRequest request = SyncDepartmentUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSyncDepartmentUserCommand()) {
    request.setSyncDepartmentUserCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSyncDepartmentUserCommand(), "SyncDepartmentUserCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasSyncDepartmentUserCommandShrink()) {
    body["SyncDepartmentUserCommand"] = request.getSyncDepartmentUserCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncDepartmentUser"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncDepartmentUserResponse>();
}

/**
 * @summary Synchronizes department member information.
 *
 * @description Synchronizes the department mapping relationships of users. You can set departments for a specified user or clear all departments set for the user by passing an empty list for departmentIdList.
 * Usage notes:
 * - If departmentIdList is null (not passed): An error is returned directly to prevent the caller from accidentally clearing the data.
 * - If departmentIdList is an empty list []: All department mappings corresponding to the sourceUserId are explicitly cleared.
 * - If departmentIdList is a non-empty list: A full overwrite is performed. All old department mappings of the user are deleted first, and then the departments in the new list are inserted.
 *
 * @param request SyncDepartmentUserRequest
 * @return SyncDepartmentUserResponse
 */
SyncDepartmentUserResponse Client::syncDepartmentUser(const SyncDepartmentUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDepartmentUserWithOptions(request, runtime);
}

/**
 * @summary Transfers the ownership with one click.
 *
 * @param tmpReq TransferOwnershipForAllObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferOwnershipForAllObjectResponse
 */
TransferOwnershipForAllObjectResponse Client::transferOwnershipForAllObjectWithOptions(const TransferOwnershipForAllObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TransferOwnershipForAllObjectShrinkRequest request = TransferOwnershipForAllObjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPrivilegeTransferRecord()) {
    request.setPrivilegeTransferRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPrivilegeTransferRecord(), "PrivilegeTransferRecord", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasPrivilegeTransferRecordShrink()) {
    body["PrivilegeTransferRecord"] = request.getPrivilegeTransferRecordShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TransferOwnershipForAllObject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferOwnershipForAllObjectResponse>();
}

/**
 * @summary Transfers the ownership with one click.
 *
 * @param request TransferOwnershipForAllObjectRequest
 * @return TransferOwnershipForAllObjectResponse
 */
TransferOwnershipForAllObjectResponse Client::transferOwnershipForAllObject(const TransferOwnershipForAllObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferOwnershipForAllObjectWithOptions(request, runtime);
}

/**
 * @summary Modifies an ad hoc query file.
 *
 * @param tmpReq UpdateAdHocFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdHocFileResponse
 */
UpdateAdHocFileResponse Client::updateAdHocFileWithOptions(const UpdateAdHocFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAdHocFileShrinkRequest request = UpdateAdHocFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAdHocFile"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdHocFileResponse>();
}

/**
 * @summary Modifies an ad hoc query file.
 *
 * @param request UpdateAdHocFileRequest
 * @return UpdateAdHocFileResponse
 */
UpdateAdHocFileResponse Client::updateAdHocFile(const UpdateAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAdHocFileWithOptions(request, runtime);
}

/**
 * @summary Updates asset property values. Online version: v6.3.0.
 *
 * @param tmpReq UpdateAssetAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAssetAttributesResponse
 */
UpdateAssetAttributesResponse Client::updateAssetAttributesWithOptions(const UpdateAssetAttributesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAssetAttributesShrinkRequest request = UpdateAssetAttributesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAssetAttributes"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAssetAttributesResponse>();
}

/**
 * @summary Updates asset property values. Online version: v6.3.0.
 *
 * @param request UpdateAssetAttributesRequest
 * @return UpdateAssetAttributesResponse
 */
UpdateAssetAttributesResponse Client::updateAssetAttributes(const UpdateAssetAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAssetAttributesWithOptions(request, runtime);
}

/**
 * @summary Updates a Basic (single-environment) project. The project name cannot be modified. You must specify the current project name.
 *
 * @param tmpReq UpdateBasicProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBasicProjectResponse
 */
UpdateBasicProjectResponse Client::updateBasicProjectWithOptions(const UpdateBasicProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBasicProjectShrinkRequest request = UpdateBasicProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBasicProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBasicProjectResponse>();
}

/**
 * @summary Updates a Basic (single-environment) project. The project name cannot be modified. You must specify the current project name.
 *
 * @param request UpdateBasicProjectRequest
 * @return UpdateBasicProjectResponse
 */
UpdateBasicProjectResponse Client::updateBasicProject(const UpdateBasicProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBasicProjectWithOptions(request, runtime);
}

/**
 * @summary Updates an offline computing task.
 *
 * @param tmpReq UpdateBatchTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBatchTaskResponse
 */
UpdateBatchTaskResponse Client::updateBatchTaskWithOptions(const UpdateBatchTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBatchTaskShrinkRequest request = UpdateBatchTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBatchTask"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBatchTaskResponse>();
}

/**
 * @summary Updates an offline computing task.
 *
 * @param request UpdateBatchTaskRequest
 * @return UpdateBatchTaskResponse
 */
UpdateBatchTaskResponse Client::updateBatchTask(const UpdateBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchTaskWithOptions(request, runtime);
}

/**
 * @summary Edits the custom data lineage of a batch task.
 *
 * @param tmpReq UpdateBatchTaskUdfLineagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBatchTaskUdfLineagesResponse
 */
UpdateBatchTaskUdfLineagesResponse Client::updateBatchTaskUdfLineagesWithOptions(const UpdateBatchTaskUdfLineagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBatchTaskUdfLineagesShrinkRequest request = UpdateBatchTaskUdfLineagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBatchTaskUdfLineages"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBatchTaskUdfLineagesResponse>();
}

/**
 * @summary Edits the custom data lineage of a batch task.
 *
 * @param request UpdateBatchTaskUdfLineagesRequest
 * @return UpdateBatchTaskUdfLineagesResponse
 */
UpdateBatchTaskUdfLineagesResponse Client::updateBatchTaskUdfLineages(const UpdateBatchTaskUdfLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchTaskUdfLineagesWithOptions(request, runtime);
}

/**
 * @summary Modifies an offline computing template. Available since v6.4.0.
 *
 * @param tmpReq UpdateBatchTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBatchTemplateResponse
 */
UpdateBatchTemplateResponse Client::updateBatchTemplateWithOptions(const UpdateBatchTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBatchTemplateShrinkRequest request = UpdateBatchTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBatchTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBatchTemplateResponse>();
}

/**
 * @summary Modifies an offline computing template. Available since v6.4.0.
 *
 * @param request UpdateBatchTemplateRequest
 * @return UpdateBatchTemplateResponse
 */
UpdateBatchTemplateResponse Client::updateBatchTemplate(const UpdateBatchTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a business entity.
 *
 * @param tmpReq UpdateBizEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBizEntityResponse
 */
UpdateBizEntityResponse Client::updateBizEntityWithOptions(const UpdateBizEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBizEntityShrinkRequest request = UpdateBizEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBizEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBizEntityResponse>();
}

/**
 * @summary Updates a business entity.
 *
 * @param request UpdateBizEntityRequest
 * @return UpdateBizEntityResponse
 */
UpdateBizEntityResponse Client::updateBizEntity(const UpdateBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizEntityWithOptions(request, runtime);
}

/**
 * @summary Updates a business metric. Release version: v5.5.0.
 *
 * @param tmpReq UpdateBizMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBizMetricResponse
 */
UpdateBizMetricResponse Client::updateBizMetricWithOptions(const UpdateBizMetricRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBizMetricShrinkRequest request = UpdateBizMetricShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateBizMetricCommand()) {
    request.setUpdateBizMetricCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateBizMetricCommand(), "UpdateBizMetricCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateBizMetricCommandShrink()) {
    body["UpdateBizMetricCommand"] = request.getUpdateBizMetricCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBizMetric"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBizMetricResponse>();
}

/**
 * @summary Updates a business metric. Release version: v5.5.0.
 *
 * @param request UpdateBizMetricRequest
 * @return UpdateBizMetricResponse
 */
UpdateBizMetricResponse Client::updateBizMetric(const UpdateBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizMetricWithOptions(request, runtime);
}

/**
 * @summary Updates a business unit.
 *
 * @param tmpReq UpdateBizUnitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBizUnitResponse
 */
UpdateBizUnitResponse Client::updateBizUnitWithOptions(const UpdateBizUnitRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBizUnitShrinkRequest request = UpdateBizUnitShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBizUnit"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBizUnitResponse>();
}

/**
 * @summary Updates a business unit.
 *
 * @param request UpdateBizUnitRequest
 * @return UpdateBizUnitResponse
 */
UpdateBizUnitResponse Client::updateBizUnit(const UpdateBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizUnitWithOptions(request, runtime);
}

/**
 * @summary Modifies a cluster. Online version: v6.3.0.
 *
 * @param tmpReq UpdateComputeClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeClusterResponse
 */
UpdateComputeClusterResponse Client::updateComputeClusterWithOptions(const UpdateComputeClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateComputeClusterShrinkRequest request = UpdateComputeClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasClusterConfig()) {
    request.setClusterConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getClusterConfig(), "ClusterConfig", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasClusterConfigShrink()) {
    body["ClusterConfig"] = request.getClusterConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeCluster"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeClusterResponse>();
}

/**
 * @summary Modifies a cluster. Online version: v6.3.0.
 *
 * @param request UpdateComputeClusterRequest
 * @return UpdateComputeClusterResponse
 */
UpdateComputeClusterResponse Client::updateComputeCluster(const UpdateComputeClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeClusterWithOptions(request, runtime);
}

/**
 * @summary Updates a compute source. Only business unit administrators and project administrators have the permissions to perform this operation.
 *
 * @param tmpReq UpdateComputeSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeSourceResponse
 */
UpdateComputeSourceResponse Client::updateComputeSourceWithOptions(const UpdateComputeSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateComputeSourceShrinkRequest request = UpdateComputeSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComputeSource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeSourceResponse>();
}

/**
 * @summary Updates a compute source. Only business unit administrators and project administrators have the permissions to perform this operation.
 *
 * @param request UpdateComputeSourceRequest
 * @return UpdateComputeSourceResponse
 */
UpdateComputeSourceResponse Client::updateComputeSource(const UpdateComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeSourceWithOptions(request, runtime);
}

/**
 * @summary Batch updates the status of issue checklist objects by governance item ID. Online since v6.3.0.
 *
 * @description ## Operation description
 * - This API operation updates the status of existing issue checklists under a specific project.
 *
 * @param tmpReq UpdateDataAssetsGovernObjectStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataAssetsGovernObjectStatusResponse
 */
UpdateDataAssetsGovernObjectStatusResponse Client::updateDataAssetsGovernObjectStatusWithOptions(const UpdateDataAssetsGovernObjectStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataAssetsGovernObjectStatusShrinkRequest request = UpdateDataAssetsGovernObjectStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataAssetsGovernObjectStatus"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataAssetsGovernObjectStatusResponse>();
}

/**
 * @summary Batch updates the status of issue checklist objects by governance item ID. Online since v6.3.0.
 *
 * @description ## Operation description
 * - This API operation updates the status of existing issue checklists under a specific project.
 *
 * @param request UpdateDataAssetsGovernObjectStatusRequest
 * @return UpdateDataAssetsGovernObjectStatusResponse
 */
UpdateDataAssetsGovernObjectStatusResponse Client::updateDataAssetsGovernObjectStatus(const UpdateDataAssetsGovernObjectStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAssetsGovernObjectStatusWithOptions(request, runtime);
}

/**
 * @summary Updates a data domain.
 *
 * @param tmpReq UpdateDataDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataDomainResponse
 */
UpdateDataDomainResponse Client::updateDataDomainWithOptions(const UpdateDataDomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataDomainShrinkRequest request = UpdateDataDomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataDomain"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataDomainResponse>();
}

/**
 * @summary Updates a data domain.
 *
 * @param request UpdateDataDomainRequest
 * @return UpdateDataDomainResponse
 */
UpdateDataDomainResponse Client::updateDataDomain(const UpdateDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataDomainWithOptions(request, runtime);
}

/**
 * @summary Updates a data service application. Only super administrators, system administrators, and application owners can perform this operation.
 * Release version: v6.0.0.
 *
 * @param tmpReq UpdateDataServiceAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataServiceAppResponse
 */
UpdateDataServiceAppResponse Client::updateDataServiceAppWithOptions(const UpdateDataServiceAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataServiceAppShrinkRequest request = UpdateDataServiceAppShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataServiceApp"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataServiceAppResponse>();
}

/**
 * @summary Updates a data service application. Only super administrators, system administrators, and application owners can perform this operation.
 * Release version: v6.0.0.
 *
 * @param request UpdateDataServiceAppRequest
 * @return UpdateDataServiceAppResponse
 */
UpdateDataServiceAppResponse Client::updateDataServiceApp(const UpdateDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary Updates an application group for the data service. Only super administrators and system administrators can perform this operation. Online version: v6.0.0.
 *
 * @param tmpReq UpdateDataServiceAppGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataServiceAppGroupResponse
 */
UpdateDataServiceAppGroupResponse Client::updateDataServiceAppGroupWithOptions(const UpdateDataServiceAppGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataServiceAppGroupShrinkRequest request = UpdateDataServiceAppGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataServiceAppGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataServiceAppGroupResponse>();
}

/**
 * @summary Updates an application group for the data service. Only super administrators and system administrators can perform this operation. Online version: v6.0.0.
 *
 * @param request UpdateDataServiceAppGroupRequest
 * @return UpdateDataServiceAppGroupResponse
 */
UpdateDataServiceAppGroupResponse Client::updateDataServiceAppGroup(const UpdateDataServiceAppGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataServiceAppGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the regular members of a data service application. Only the application owner can perform this operation.
 * Online version: v6.0.0.
 *
 * @param tmpReq UpdateDataServiceAppMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataServiceAppMemberResponse
 */
UpdateDataServiceAppMemberResponse Client::updateDataServiceAppMemberWithOptions(const UpdateDataServiceAppMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataServiceAppMemberShrinkRequest request = UpdateDataServiceAppMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataServiceAppMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataServiceAppMemberResponse>();
}

/**
 * @summary Updates the regular members of a data service application. Only the application owner can perform this operation.
 * Online version: v6.0.0.
 *
 * @param request UpdateDataServiceAppMemberRequest
 * @return UpdateDataServiceAppMemberResponse
 */
UpdateDataServiceAppMemberResponse Client::updateDataServiceAppMember(const UpdateDataServiceAppMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataServiceAppMemberWithOptions(request, runtime);
}

/**
 * @summary Edits the basic information of a data source. Tenant administrators, data administrators, business segment administrators, project administrators, and operations administrators have permissions to perform this operation.
 *
 * @param tmpReq UpdateDataSourceBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceBasicInfoResponse
 */
UpdateDataSourceBasicInfoResponse Client::updateDataSourceBasicInfoWithOptions(const UpdateDataSourceBasicInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataSourceBasicInfoShrinkRequest request = UpdateDataSourceBasicInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataSourceBasicInfo"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceBasicInfoResponse>();
}

/**
 * @summary Edits the basic information of a data source. Tenant administrators, data administrators, business segment administrators, project administrators, and operations administrators have permissions to perform this operation.
 *
 * @param request UpdateDataSourceBasicInfoRequest
 * @return UpdateDataSourceBasicInfoResponse
 */
UpdateDataSourceBasicInfoResponse Client::updateDataSourceBasicInfo(const UpdateDataSourceBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection configuration items of a datasource. Only tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators are authorized to perform this operation.
 *
 * @param tmpReq UpdateDataSourceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceConfigResponse
 */
UpdateDataSourceConfigResponse Client::updateDataSourceConfigWithOptions(const UpdateDataSourceConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataSourceConfigShrinkRequest request = UpdateDataSourceConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataSourceConfig"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceConfigResponse>();
}

/**
 * @summary Modifies the connection configuration items of a datasource. Only tenant administrators, data administrators, business unit administrators, project administrators, and operations administrators are authorized to perform this operation.
 *
 * @param request UpdateDataSourceConfigRequest
 * @return UpdateDataSourceConfigResponse
 */
UpdateDataSourceConfigResponse Client::updateDataSourceConfig(const UpdateDataSourceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a dataset in a specified project. Available since version 6.2.0.
 *
 * @description ## Request description
 * - This API operation updates the details of an existing dataset in a specific project.
 * - You must specify the `ProjectId` and `UpdateCommand` parameters. The `UpdateCommand` parameter contains the specific fields of the dataset to be updated.
 * - The `Id` field in `UpdateCommand` is required to identify the dataset to be updated.
 * - Other fields such as `Name`, `Type`, and `DataCellId` are optional. Specify them based on your actual requirements.
 * - Version configuration (`VersionConfig`) and real-time metatable configuration (`RealtimeMetaTableConfig`) provide more detailed setting options, including storage paths and table schemas. These are also optional.
 * - Make sure that all provided ID values, such as `ProjectId`, `Id`, and `DataSourceId`, are valid and correctly associated in the system.
 *
 * @param tmpReq UpdateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const UpdateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDatasetShrinkRequest request = UpdateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary Updates the information of a dataset in a specified project. Available since version 6.2.0.
 *
 * @description ## Request description
 * - This API operation updates the details of an existing dataset in a specific project.
 * - You must specify the `ProjectId` and `UpdateCommand` parameters. The `UpdateCommand` parameter contains the specific fields of the dataset to be updated.
 * - The `Id` field in `UpdateCommand` is required to identify the dataset to be updated.
 * - Other fields such as `Name`, `Type`, and `DataCellId` are optional. Specify them based on your actual requirements.
 * - Version configuration (`VersionConfig`) and real-time metatable configuration (`RealtimeMetaTableConfig`) provide more detailed setting options, including storage paths and table schemas. These are also optional.
 * - Make sure that all provided ID values, such as `ProjectId`, `Id`, and `DataSourceId`, are valid and correctly associated in the system.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetWithOptions(request, runtime);
}

/**
 * @summary Modifies a Dev-Prod (dual-environment) project.
 *
 * @param tmpReq UpdateDevProdProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDevProdProjectResponse
 */
UpdateDevProdProjectResponse Client::updateDevProdProjectWithOptions(const UpdateDevProdProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDevProdProjectShrinkRequest request = UpdateDevProdProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDevProdProject"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDevProdProjectResponse>();
}

/**
 * @summary Modifies a Dev-Prod (dual-environment) project.
 *
 * @param request UpdateDevProdProjectRequest
 * @return UpdateDevProdProjectResponse
 */
UpdateDevProdProjectResponse Client::updateDevProdProject(const UpdateDevProdProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDevProdProjectWithOptions(request, runtime);
}

/**
 * @summary Moves the file position in the menu tree.
 *
 * @param request UpdateFileDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileDirectoryResponse
 */
UpdateFileDirectoryResponse Client::updateFileDirectoryWithOptions(const UpdateFileDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirectory()) {
    query["Directory"] = request.getDirectory();
  }

  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFileDirectory"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileDirectoryResponse>();
}

/**
 * @summary Moves the file position in the menu tree.
 *
 * @param request UpdateFileDirectoryRequest
 * @return UpdateFileDirectoryResponse
 */
UpdateFileDirectoryResponse Client::updateFileDirectory(const UpdateFileDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileDirectoryWithOptions(request, runtime);
}

/**
 * @summary Updates a file name.
 *
 * @param request UpdateFileNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileNameResponse
 */
UpdateFileNameResponse Client::updateFileNameWithOptions(const UpdateFileNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFileName"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileNameResponse>();
}

/**
 * @summary Updates a file name.
 *
 * @param request UpdateFileNameRequest
 * @return UpdateFileNameResponse
 */
UpdateFileNameResponse Client::updateFileName(const UpdateFileNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileNameWithOptions(request, runtime);
}

/**
 * @summary Edits a knowledge graph entity record. Online version: v6.1.1.
 *
 * @param tmpReq UpdateKgEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKgEntityResponse
 */
UpdateKgEntityResponse Client::updateKgEntityWithOptions(const UpdateKgEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateKgEntityShrinkRequest request = UpdateKgEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKgEntity"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKgEntityResponse>();
}

/**
 * @summary Edits a knowledge graph entity record. Online version: v6.1.1.
 *
 * @param request UpdateKgEntityRequest
 * @return UpdateKgEntityResponse
 */
UpdateKgEntityResponse Client::updateKgEntity(const UpdateKgEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateKgEntityWithOptions(request, runtime);
}

/**
 * @summary Edits a knowledge graph relationship record. Online version: v6.1.1.
 *
 * @param tmpReq UpdateKgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateKgRelationResponse
 */
UpdateKgRelationResponse Client::updateKgRelationWithOptions(const UpdateKgRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateKgRelationShrinkRequest request = UpdateKgRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateKgRelation"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateKgRelationResponse>();
}

/**
 * @summary Edits a knowledge graph relationship record. Online version: v6.1.1.
 *
 * @param request UpdateKgRelationRequest
 * @return UpdateKgRelationResponse
 */
UpdateKgRelationResponse Client::updateKgRelation(const UpdateKgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateKgRelationWithOptions(request, runtime);
}

/**
 * @summary Updates O&M owners in batches. This is an OpenAPI wrapper for the "Change Owner" page feature and only supports offline nodes: compute nodes, integration nodes, and logical tables. Real-time nodes are not supported. Available since v6.3.0.
 *
 * @param tmpReq UpdateNodeOpsOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeOpsOwnerResponse
 */
UpdateNodeOpsOwnerResponse Client::updateNodeOpsOwnerWithOptions(const UpdateNodeOpsOwnerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateNodeOpsOwnerShrinkRequest request = UpdateNodeOpsOwnerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCommand()) {
    request.setCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCommand(), "Command", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasCommandShrink()) {
    body["Command"] = request.getCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateNodeOpsOwner"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeOpsOwnerResponse>();
}

/**
 * @summary Updates O&M owners in batches. This is an OpenAPI wrapper for the "Change Owner" page feature and only supports offline nodes: compute nodes, integration nodes, and logical tables. Real-time nodes are not supported. Available since v6.3.0.
 *
 * @param request UpdateNodeOpsOwnerRequest
 * @return UpdateNodeOpsOwnerResponse
 */
UpdateNodeOpsOwnerResponse Client::updateNodeOpsOwner(const UpdateNodeOpsOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeOpsOwnerWithOptions(request, runtime);
}

/**
 * @summary Updates an integration pipeline or unstructured workflow node.
 *
 * @param tmpReq UpdatePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const UpdatePipelineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePipelineShrinkRequest request = UpdatePipelineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineResponse>();
}

/**
 * @summary Updates an integration pipeline or unstructured workflow node.
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineWithOptions(request, runtime);
}

/**
 * @summary Asynchronously updates a pipeline or unstructured workflow task.
 *
 * @param tmpReq UpdatePipelineByAsyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineByAsyncResponse
 */
UpdatePipelineByAsyncResponse Client::updatePipelineByAsyncWithOptions(const UpdatePipelineByAsyncRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePipelineByAsyncShrinkRequest request = UpdatePipelineByAsyncShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContext()) {
    request.setContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContext(), "Context", "json"));
  }

  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasContextShrink()) {
    body["Context"] = request.getContextShrink();
  }

  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipelineByAsync"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineByAsyncResponse>();
}

/**
 * @summary Asynchronously updates a pipeline or unstructured workflow task.
 *
 * @param request UpdatePipelineByAsyncRequest
 * @return UpdatePipelineByAsyncResponse
 */
UpdatePipelineByAsyncResponse Client::updatePipelineByAsync(const UpdatePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary Modifies the members of a project.
 *
 * @param tmpReq UpdateProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectMemberResponse
 */
UpdateProjectMemberResponse Client::updateProjectMemberWithOptions(const UpdateProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProjectMemberShrinkRequest request = UpdateProjectMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectMemberResponse>();
}

/**
 * @summary Modifies the members of a project.
 *
 * @param request UpdateProjectMemberRequest
 * @return UpdateProjectMemberResponse
 */
UpdateProjectMemberResponse Client::updateProjectMember(const UpdateProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Enables or disables quality rules in batches. Release version: v5.4.2.
 *
 * @param tmpReq UpdateQualityRuleSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityRuleSwitchResponse
 */
UpdateQualityRuleSwitchResponse Client::updateQualityRuleSwitchWithOptions(const UpdateQualityRuleSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateQualityRuleSwitchShrinkRequest request = UpdateQualityRuleSwitchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateQualityRuleSwitch"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityRuleSwitchResponse>();
}

/**
 * @summary Enables or disables quality rules in batches. Release version: v5.4.2.
 *
 * @param request UpdateQualityRuleSwitchRequest
 * @return UpdateQualityRuleSwitchResponse
 */
UpdateQualityRuleSwitchResponse Client::updateQualityRuleSwitch(const UpdateQualityRuleSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityRuleSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables or disables quality monitored objects in batches. Release version: v5.4.2.
 *
 * @param tmpReq UpdateQualityWatchSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityWatchSwitchResponse
 */
UpdateQualityWatchSwitchResponse Client::updateQualityWatchSwitchWithOptions(const UpdateQualityWatchSwitchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateQualityWatchSwitchShrinkRequest request = UpdateQualityWatchSwitchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateQualityWatchSwitch"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityWatchSwitchResponse>();
}

/**
 * @summary Enables or disables quality monitored objects in batches. Release version: v5.4.2.
 *
 * @param request UpdateQualityWatchSwitchRequest
 * @return UpdateQualityWatchSwitchResponse
 */
UpdateQualityWatchSwitchResponse Client::updateQualityWatchSwitch(const UpdateQualityWatchSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityWatchSwitchWithOptions(request, runtime);
}

/**
 * @summary Updates a resource file.
 *
 * @param tmpReq UpdateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResourceWithOptions(const UpdateResourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateResourceShrinkRequest request = UpdateResourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateResource"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceResponse>();
}

/**
 * @summary Updates a resource file.
 *
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceWithOptions(request, runtime);
}

/**
 * @summary Updates row-level permissions.
 *
 * @param tmpReq UpdateRowPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRowPermissionResponse
 */
UpdateRowPermissionResponse Client::updateRowPermissionWithOptions(const UpdateRowPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRowPermissionShrinkRequest request = UpdateRowPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateRowPermissionCommand()) {
    request.setUpdateRowPermissionCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateRowPermissionCommand(), "UpdateRowPermissionCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateRowPermissionCommandShrink()) {
    body["UpdateRowPermissionCommand"] = request.getUpdateRowPermissionCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRowPermission"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRowPermissionResponse>();
}

/**
 * @summary Updates row-level permissions.
 *
 * @param request UpdateRowPermissionRequest
 * @return UpdateRowPermissionResponse
 */
UpdateRowPermissionResponse Client::updateRowPermission(const UpdateRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRowPermissionWithOptions(request, runtime);
}

/**
 * @summary Updates existing scheduling monitoring and alert configurations by modifying monitored objects or alert rules. Available since version 6.4.0.
 *
 * @param tmpReq UpdateScheduleMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduleMonitorResponse
 */
UpdateScheduleMonitorResponse Client::updateScheduleMonitorWithOptions(const UpdateScheduleMonitorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScheduleMonitorShrinkRequest request = UpdateScheduleMonitorShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduleMonitor"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduleMonitorResponse>();
}

/**
 * @summary Updates existing scheduling monitoring and alert configurations by modifying monitored objects or alert rules. Available since version 6.4.0.
 *
 * @param request UpdateScheduleMonitorRequest
 * @return UpdateScheduleMonitorResponse
 */
UpdateScheduleMonitorResponse Client::updateScheduleMonitor(const UpdateScheduleMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScheduleMonitorWithOptions(request, runtime);
}

/**
 * @summary Updates a data classification.
 * Release version: v5.4.2.
 *
 * @param tmpReq UpdateSecurityClassifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityClassifyResponse
 */
UpdateSecurityClassifyResponse Client::updateSecurityClassifyWithOptions(const UpdateSecurityClassifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecurityClassifyShrinkRequest request = UpdateSecurityClassifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSecurityClassify"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityClassifyResponse>();
}

/**
 * @summary Updates a data classification.
 * Release version: v5.4.2.
 *
 * @param request UpdateSecurityClassifyRequest
 * @return UpdateSecurityClassifyResponse
 */
UpdateSecurityClassifyResponse Client::updateSecurityClassify(const UpdateSecurityClassifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityClassifyWithOptions(request, runtime);
}

/**
 * @summary Updates a data classification folder. Release version: v5.4.2.
 *
 * @param tmpReq UpdateSecurityClassifyCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityClassifyCatalogResponse
 */
UpdateSecurityClassifyCatalogResponse Client::updateSecurityClassifyCatalogWithOptions(const UpdateSecurityClassifyCatalogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecurityClassifyCatalogShrinkRequest request = UpdateSecurityClassifyCatalogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSecurityClassifyCatalog"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityClassifyCatalogResponse>();
}

/**
 * @summary Updates a data classification folder. Release version: v5.4.2.
 *
 * @param request UpdateSecurityClassifyCatalogRequest
 * @return UpdateSecurityClassifyCatalogResponse
 */
UpdateSecurityClassifyCatalogResponse Client::updateSecurityClassifyCatalog(const UpdateSecurityClassifyCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityClassifyCatalogWithOptions(request, runtime);
}

/**
 * @summary Updates the effective status of security identification results. Released in version 5.4.2.
 *
 * @param tmpReq UpdateSecurityIdentifyResultStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityIdentifyResultStatusResponse
 */
UpdateSecurityIdentifyResultStatusResponse Client::updateSecurityIdentifyResultStatusWithOptions(const UpdateSecurityIdentifyResultStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecurityIdentifyResultStatusShrinkRequest request = UpdateSecurityIdentifyResultStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSecurityIdentifyResultStatus"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityIdentifyResultStatusResponse>();
}

/**
 * @summary Updates the effective status of security identification results. Released in version 5.4.2.
 *
 * @param request UpdateSecurityIdentifyResultStatusRequest
 * @return UpdateSecurityIdentifyResultStatusResponse
 */
UpdateSecurityIdentifyResultStatusResponse Client::updateSecurityIdentifyResultStatus(const UpdateSecurityIdentifyResultStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityIdentifyResultStatusWithOptions(request, runtime);
}

/**
 * @summary Updates data classification.
 * Online version: v5.4.2.
 *
 * @param tmpReq UpdateSecurityLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityLevelResponse
 */
UpdateSecurityLevelResponse Client::updateSecurityLevelWithOptions(const UpdateSecurityLevelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecurityLevelShrinkRequest request = UpdateSecurityLevelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSecurityLevel"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityLevelResponse>();
}

/**
 * @summary Updates data classification.
 * Online version: v5.4.2.
 *
 * @param request UpdateSecurityLevelRequest
 * @return UpdateSecurityLevelResponse
 */
UpdateSecurityLevelResponse Client::updateSecurityLevel(const UpdateSecurityLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityLevelWithOptions(request, runtime);
}

/**
 * @summary Updates a standard. Release version: v5.4.2.
 *
 * @param tmpReq UpdateStandardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardResponse
 */
UpdateStandardResponse Client::updateStandardWithOptions(const UpdateStandardRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardShrinkRequest request = UpdateStandardShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandard"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardResponse>();
}

/**
 * @summary Updates a standard. Release version: v5.4.2.
 *
 * @param request UpdateStandardRequest
 * @return UpdateStandardResponse
 */
UpdateStandardResponse Client::updateStandard(const UpdateStandardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardWithOptions(request, runtime);
}

/**
 * @summary Updates a data standard lookup table. Release version: v5.4.2.
 *
 * @param tmpReq UpdateStandardLookupTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardLookupTableResponse
 */
UpdateStandardLookupTableResponse Client::updateStandardLookupTableWithOptions(const UpdateStandardLookupTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardLookupTableShrinkRequest request = UpdateStandardLookupTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandardLookupTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardLookupTableResponse>();
}

/**
 * @summary Updates a data standard lookup table. Release version: v5.4.2.
 *
 * @param request UpdateStandardLookupTableRequest
 * @return UpdateStandardLookupTableResponse
 */
UpdateStandardLookupTableResponse Client::updateStandardLookupTable(const UpdateStandardLookupTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardLookupTableWithOptions(request, runtime);
}

/**
 * @summary Invalidates standard mapping relationships. Released in version 5.4.2.
 *
 * @param tmpReq UpdateStandardMappingToInvalidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardMappingToInvalidResponse
 */
UpdateStandardMappingToInvalidResponse Client::updateStandardMappingToInvalidWithOptions(const UpdateStandardMappingToInvalidRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardMappingToInvalidShrinkRequest request = UpdateStandardMappingToInvalidShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandardMappingToInvalid"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardMappingToInvalidResponse>();
}

/**
 * @summary Invalidates standard mapping relationships. Released in version 5.4.2.
 *
 * @param request UpdateStandardMappingToInvalidRequest
 * @return UpdateStandardMappingToInvalidResponse
 */
UpdateStandardMappingToInvalidResponse Client::updateStandardMappingToInvalid(const UpdateStandardMappingToInvalidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardMappingToInvalidWithOptions(request, runtime);
}

/**
 * @summary Update standard set.
 * Release version: v5.4.2.
 *
 * @param tmpReq UpdateStandardSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardSetResponse
 */
UpdateStandardSetResponse Client::updateStandardSetWithOptions(const UpdateStandardSetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardSetShrinkRequest request = UpdateStandardSetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandardSet"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardSetResponse>();
}

/**
 * @summary Update standard set.
 * Release version: v5.4.2.
 *
 * @param request UpdateStandardSetRequest
 * @return UpdateStandardSetResponse
 */
UpdateStandardSetResponse Client::updateStandardSet(const UpdateStandardSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardSetWithOptions(request, runtime);
}

/**
 * @summary Updates a data standard template.
 * Release version: v5.4.2.
 *
 * @param tmpReq UpdateStandardTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardTemplateResponse
 */
UpdateStandardTemplateResponse Client::updateStandardTemplateWithOptions(const UpdateStandardTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardTemplateShrinkRequest request = UpdateStandardTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandardTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardTemplateResponse>();
}

/**
 * @summary Updates a data standard template.
 * Release version: v5.4.2.
 *
 * @param request UpdateStandardTemplateRequest
 * @return UpdateStandardTemplateResponse
 */
UpdateStandardTemplateResponse Client::updateStandardTemplate(const UpdateStandardTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a data standard root word.
 * Online version: v5.4.2.
 *
 * @param tmpReq UpdateStandardWordRootRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStandardWordRootResponse
 */
UpdateStandardWordRootResponse Client::updateStandardWordRootWithOptions(const UpdateStandardWordRootRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStandardWordRootShrinkRequest request = UpdateStandardWordRootShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateStandardWordRoot"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStandardWordRootResponse>();
}

/**
 * @summary Updates a data standard root word.
 * Online version: v5.4.2.
 *
 * @param request UpdateStandardWordRootRequest
 * @return UpdateStandardWordRootResponse
 */
UpdateStandardWordRootResponse Client::updateStandardWordRoot(const UpdateStandardWordRootRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStandardWordRootWithOptions(request, runtime);
}

/**
 * @summary Modifies the computing settings of a tenant.
 *
 * @param tmpReq UpdateTenantComputeEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTenantComputeEngineResponse
 */
UpdateTenantComputeEngineResponse Client::updateTenantComputeEngineWithOptions(const UpdateTenantComputeEngineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTenantComputeEngineShrinkRequest request = UpdateTenantComputeEngineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTenantComputeEngine"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTenantComputeEngineResponse>();
}

/**
 * @summary Modifies the computing settings of a tenant.
 *
 * @param request UpdateTenantComputeEngineRequest
 * @return UpdateTenantComputeEngineResponse
 */
UpdateTenantComputeEngineResponse Client::updateTenantComputeEngine(const UpdateTenantComputeEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTenantComputeEngineWithOptions(request, runtime);
}

/**
 * @summary Modifies tenant members.
 *
 * @param tmpReq UpdateTenantMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTenantMemberResponse
 */
UpdateTenantMemberResponse Client::updateTenantMemberWithOptions(const UpdateTenantMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTenantMemberShrinkRequest request = UpdateTenantMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTenantMember"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTenantMemberResponse>();
}

/**
 * @summary Modifies tenant members.
 *
 * @param request UpdateTenantMemberRequest
 * @return UpdateTenantMemberResponse
 */
UpdateTenantMemberResponse Client::updateTenantMember(const UpdateTenantMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTenantMemberWithOptions(request, runtime);
}

/**
 * @summary Edits a user-defined function.
 *
 * @param tmpReq UpdateUdfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUdfResponse
 */
UpdateUdfResponse Client::updateUdfWithOptions(const UpdateUdfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUdfShrinkRequest request = UpdateUdfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUdf"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUdfResponse>();
}

/**
 * @summary Edits a user-defined function.
 *
 * @param request UpdateUdfRequest
 * @return UpdateUdfResponse
 */
UpdateUdfResponse Client::updateUdf(const UpdateUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUdfWithOptions(request, runtime);
}

/**
 * @summary Edits a user group.
 *
 * @param tmpReq UpdateUserGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroupWithOptions(const UpdateUserGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserGroupShrinkRequest request = UpdateUserGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpdateCommand()) {
    request.setUpdateCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateCommand(), "UpdateCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpdateCommandShrink()) {
    body["UpdateCommand"] = request.getUpdateCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserGroup"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserGroupResponse>();
}

/**
 * @summary Edits a user group.
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the enabled status of a user group.
 *
 * @param request UpdateUserGroupSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserGroupSwitchResponse
 */
UpdateUserGroupSwitchResponse Client::updateUserGroupSwitchWithOptions(const UpdateUserGroupSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActive()) {
    query["Active"] = request.getActive();
  }

  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  if (!!request.hasUserGroupId()) {
    query["UserGroupId"] = request.getUserGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserGroupSwitch"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserGroupSwitchResponse>();
}

/**
 * @summary Updates the enabled status of a user group.
 *
 * @param request UpdateUserGroupSwitchRequest
 * @return UpdateUserGroupSwitchResponse
 */
UpdateUserGroupSwitchResponse Client::updateUserGroupSwitch(const UpdateUserGroupSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupSwitchWithOptions(request, runtime);
}

/**
 * @summary Uploads a datasource authentication file. Available since v6.3.0.
 *
 * @param tmpReq UploadDataSourceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadDataSourceFileResponse
 */
UploadDataSourceFileResponse Client::uploadDataSourceFileWithOptions(const UploadDataSourceFileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UploadDataSourceFileShrinkRequest request = UploadDataSourceFileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUploadCommand()) {
    request.setUploadCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUploadCommand(), "UploadCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUploadCommandShrink()) {
    body["UploadCommand"] = request.getUploadCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadDataSourceFile"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadDataSourceFileResponse>();
}

/**
 * @summary Uploads a datasource authentication file. Available since v6.3.0.
 *
 * @param request UploadDataSourceFileRequest
 * @return UploadDataSourceFileResponse
 */
UploadDataSourceFileResponse Client::uploadDataSourceFile(const UploadDataSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadDataSourceFileWithOptions(request, runtime);
}

/**
 * @summary Creates or updates an exception archived table for a monitored object. Online version: v6.3.0.
 *
 * @param tmpReq UpsertQualityArchiveTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityArchiveTableResponse
 */
UpsertQualityArchiveTableResponse Client::upsertQualityArchiveTableWithOptions(const UpsertQualityArchiveTableRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityArchiveTableShrinkRequest request = UpsertQualityArchiveTableShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualityArchiveTable"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityArchiveTableResponse>();
}

/**
 * @summary Creates or updates an exception archived table for a monitored object. Online version: v6.3.0.
 *
 * @param request UpsertQualityArchiveTableRequest
 * @return UpsertQualityArchiveTableResponse
 */
UpsertQualityArchiveTableResponse Client::upsertQualityArchiveTable(const UpsertQualityArchiveTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityArchiveTableWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a quality rule.
 * Release version: v5.4.2.
 *
 * @param tmpReq UpsertQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityRuleResponse
 */
UpsertQualityRuleResponse Client::upsertQualityRuleWithOptions(const UpsertQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityRuleShrinkRequest request = UpsertQualityRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualityRule"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityRuleResponse>();
}

/**
 * @summary Creates or updates a quality rule.
 * Release version: v5.4.2.
 *
 * @param request UpsertQualityRuleRequest
 * @return UpsertQualityRuleResponse
 */
UpsertQualityRuleResponse Client::upsertQualityRule(const UpsertQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies scheduling settings. Released in version 5.4.2.
 *
 * @param tmpReq UpsertQualityScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityScheduleResponse
 */
UpsertQualityScheduleResponse Client::upsertQualityScheduleWithOptions(const UpsertQualityScheduleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityScheduleShrinkRequest request = UpsertQualityScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualitySchedule"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityScheduleResponse>();
}

/**
 * @summary Creates or modifies scheduling settings. Released in version 5.4.2.
 *
 * @param request UpsertQualityScheduleRequest
 * @return UpsertQualityScheduleResponse
 */
UpsertQualityScheduleResponse Client::upsertQualitySchedule(const UpsertQualityScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityScheduleWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a quality template. Released in version 5.4.2.
 *
 * @param tmpReq UpsertQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityTemplateResponse
 */
UpsertQualityTemplateResponse Client::upsertQualityTemplateWithOptions(const UpsertQualityTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityTemplateShrinkRequest request = UpsertQualityTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualityTemplate"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityTemplateResponse>();
}

/**
 * @summary Creates or updates a quality template. Released in version 5.4.2.
 *
 * @param request UpsertQualityTemplateRequest
 * @return UpsertQualityTemplateResponse
 */
UpsertQualityTemplateResponse Client::upsertQualityTemplate(const UpsertQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a quality monitored object. You can add multiple types of quality monitored objects, including Dataphin tables, global tables, data sources, metrics, and real-time metatables. Release version: v5.4.2.
 *
 * @param tmpReq UpsertQualityWatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityWatchResponse
 */
UpsertQualityWatchResponse Client::upsertQualityWatchWithOptions(const UpsertQualityWatchRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityWatchShrinkRequest request = UpsertQualityWatchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualityWatch"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityWatchResponse>();
}

/**
 * @summary Creates or updates a quality monitored object. You can add multiple types of quality monitored objects, including Dataphin tables, global tables, data sources, metrics, and real-time metatables. Release version: v5.4.2.
 *
 * @param request UpsertQualityWatchRequest
 * @return UpsertQualityWatchResponse
 */
UpsertQualityWatchResponse Client::upsertQualityWatch(const UpsertQualityWatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityWatchWithOptions(request, runtime);
}

/**
 * @summary Creates or updates alert settings for a monitored object.
 * Release version: v5.4.2.
 *
 * @param tmpReq UpsertQualityWatchAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertQualityWatchAlertResponse
 */
UpsertQualityWatchAlertResponse Client::upsertQualityWatchAlertWithOptions(const UpsertQualityWatchAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpsertQualityWatchAlertShrinkRequest request = UpsertQualityWatchAlertShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpsertCommand()) {
    request.setUpsertCommandShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpsertCommand(), "UpsertCommand", "json"));
  }

  json query = {};
  if (!!request.hasOpTenantId()) {
    query["OpTenantId"] = request.getOpTenantId();
  }

  if (!!request.hasOpUserId()) {
    query["OpUserId"] = request.getOpUserId();
  }

  json body = {};
  if (!!request.hasUpsertCommandShrink()) {
    body["UpsertCommand"] = request.getUpsertCommandShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertQualityWatchAlert"},
    {"version" , "2023-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertQualityWatchAlertResponse>();
}

/**
 * @summary Creates or updates alert settings for a monitored object.
 * Release version: v5.4.2.
 *
 * @param request UpsertQualityWatchAlertRequest
 * @return UpsertQualityWatchAlertResponse
 */
UpsertQualityWatchAlertResponse Client::upsertQualityWatchAlert(const UpsertQualityWatchAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upsertQualityWatchAlertWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630