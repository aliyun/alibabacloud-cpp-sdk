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
  this->_endpointRule = "";
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
 * @summary 添加数据服务项目用户并设置角色。
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
 * @summary 添加数据服务项目用户并设置角色。
 *
 * @param request AddDataServiceProjectMemberRequest
 * @return AddDataServiceProjectMemberResponse
 */
AddDataServiceProjectMemberResponse Client::addDataServiceProjectMember(const AddDataServiceProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDataServiceProjectMemberWithOptions(request, runtime);
}

/**
 * @summary 增加项目成员。
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
 * @summary 增加项目成员。
 *
 * @param request AddProjectMemberRequest
 * @return AddProjectMemberResponse
 */
AddProjectMemberResponse Client::addProjectMember(const AddProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addProjectMemberWithOptions(request, runtime);
}

/**
 * @summary 新增注册血缘。
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
 * @summary 新增注册血缘。
 *
 * @param request AddRegisterLineageRequest
 * @return AddRegisterLineageResponse
 */
AddRegisterLineageResponse Client::addRegisterLineage(const AddRegisterLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRegisterLineageWithOptions(request, runtime);
}

/**
 * @summary 新增租户成员
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
 * @summary 新增租户成员
 *
 * @param request AddTenantMembersRequest
 * @return AddTenantMembersResponse
 */
AddTenantMembersResponse Client::addTenantMembers(const AddTenantMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTenantMembersWithOptions(request, runtime);
}

/**
 * @summary 通过原始用户添加租户成员.
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
 * @summary 通过原始用户添加租户成员.
 *
 * @param request AddTenantMembersBySourceUserRequest
 * @return AddTenantMembersBySourceUserResponse
 */
AddTenantMembersBySourceUserResponse Client::addTenantMembersBySourceUser(const AddTenantMembersBySourceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTenantMembersBySourceUserWithOptions(request, runtime);
}

/**
 * @summary 添加用户组成员.
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
 * @summary 添加用户组成员.
 *
 * @param request AddUserGroupMemberRequest
 * @return AddUserGroupMemberResponse
 */
AddUserGroupMemberResponse Client::addUserGroupMember(const AddUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary 申请API权限。
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
 * @summary 申请API权限。
 *
 * @param request ApplyDataServiceApiRequest
 * @return ApplyDataServiceApiResponse
 */
ApplyDataServiceApiResponse Client::applyDataServiceApi(const ApplyDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary 申请应用权限。
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
 * @summary 申请应用权限。
 *
 * @param request ApplyDataServiceAppRequest
 * @return ApplyDataServiceAppResponse
 */
ApplyDataServiceAppResponse Client::applyDataServiceApp(const ApplyDataServiceAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyDataServiceAppWithOptions(request, runtime);
}

/**
 * @summary 项目计算源连通性检查。
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
 * @summary 项目计算源连通性检查。
 *
 * @param request CheckComputeSourceConnectivityRequest
 * @return CheckComputeSourceConnectivityResponse
 */
CheckComputeSourceConnectivityResponse Client::checkComputeSourceConnectivity(const CheckComputeSourceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComputeSourceConnectivityWithOptions(request, runtime);
}

/**
 * @summary 计算源连通性检查。
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
 * @summary 计算源连通性检查。
 *
 * @param request CheckComputeSourceConnectivityByIdRequest
 * @return CheckComputeSourceConnectivityByIdResponse
 */
CheckComputeSourceConnectivityByIdResponse Client::checkComputeSourceConnectivityById(const CheckComputeSourceConnectivityByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkComputeSourceConnectivityByIdWithOptions(request, runtime);
}

/**
 * @summary 检查数据源连通性
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
 * @summary 检查数据源连通性
 *
 * @param request CheckDataSourceConnectivityRequest
 * @return CheckDataSourceConnectivityResponse
 */
CheckDataSourceConnectivityResponse Client::checkDataSourceConnectivity(const CheckDataSourceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataSourceConnectivityWithOptions(request, runtime);
}

/**
 * @summary 检查已创建的数据源是否正常连通
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
 * @summary 检查已创建的数据源是否正常连通
 *
 * @param request CheckDataSourceConnectivityByIdRequest
 * @return CheckDataSourceConnectivityByIdResponse
 */
CheckDataSourceConnectivityByIdResponse Client::checkDataSourceConnectivityById(const CheckDataSourceConnectivityByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDataSourceConnectivityByIdWithOptions(request, runtime);
}

/**
 * @summary 检查项目是否存在依赖。
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
 * @summary 检查项目是否存在依赖。
 *
 * @param request CheckProjectHasDependencyRequest
 * @return CheckProjectHasDependencyResponse
 */
CheckProjectHasDependencyResponse Client::checkProjectHasDependency(const CheckProjectHasDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkProjectHasDependencyWithOptions(request, runtime);
}

/**
 * @summary 校验用户是否有指定资源权限点.
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
 * @summary 校验用户是否有指定资源权限点.
 *
 * @param request CheckResourcePermissionRequest
 * @return CheckResourcePermissionResponse
 */
CheckResourcePermissionResponse Client::checkResourcePermission(const CheckResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary 创建即席查询文件
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
 * @summary 创建即席查询文件
 *
 * @param request CreateAdHocFileRequest
 * @return CreateAdHocFileResponse
 */
CreateAdHocFileResponse Client::createAdHocFile(const CreateAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAdHocFileWithOptions(request, runtime);
}

/**
 * @summary 创建离线计算任务。
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
 * @summary 创建离线计算任务。
 *
 * @param request CreateBatchTaskRequest
 * @return CreateBatchTaskResponse
 */
CreateBatchTaskResponse Client::createBatchTask(const CreateBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBatchTaskWithOptions(request, runtime);
}

/**
 * @summary 创建业务实体。
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
 * @summary 创建业务实体。
 *
 * @param request CreateBizEntityRequest
 * @return CreateBizEntityResponse
 */
CreateBizEntityResponse Client::createBizEntity(const CreateBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizEntityWithOptions(request, runtime);
}

/**
 * @summary 新建业务指标
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
 * @summary 新建业务指标
 *
 * @param request CreateBizMetricRequest
 * @return CreateBizMetricResponse
 */
CreateBizMetricResponse Client::createBizMetric(const CreateBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizMetricWithOptions(request, runtime);
}

/**
 * @summary 创建数据板块。
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
 * @summary 创建数据板块。
 *
 * @param request CreateBizUnitRequest
 * @return CreateBizUnitResponse
 */
CreateBizUnitResponse Client::createBizUnit(const CreateBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBizUnitWithOptions(request, runtime);
}

/**
 * @summary 创建计算源。
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
 * @summary 创建计算源。
 *
 * @param request CreateComputeSourceRequest
 * @return CreateComputeSourceResponse
 */
CreateComputeSourceResponse Client::createComputeSource(const CreateComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeSourceWithOptions(request, runtime);
}

/**
 * @summary 创建主题域。
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
 * @summary 创建主题域。
 *
 * @param request CreateDataDomainRequest
 * @return CreateDataDomainResponse
 */
CreateDataDomainResponse Client::createDataDomain(const CreateDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataDomainWithOptions(request, runtime);
}

/**
 * @summary 创建新的数据服务API并提交。
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
 * @summary 创建新的数据服务API并提交。
 *
 * @param request CreateDataServiceApiRequest
 * @return CreateDataServiceApiResponse
 */
CreateDataServiceApiResponse Client::createDataServiceApi(const CreateDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary 新建数据源
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
 * @summary 新建数据源
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary 创建菜单树文件目录
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
 * @summary 创建菜单树文件目录
 *
 * @param request CreateDirectoryRequest
 * @return CreateDirectoryResponse
 */
CreateDirectoryResponse Client::createDirectory(const CreateDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDirectoryWithOptions(request, runtime);
}

/**
 * @summary 通用补数据接口 1.会生成补数据实例运行：影响相关产产出表数据 2.会进行任务运行：造成计算的费用以及存储的费用
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
 * @summary 通用补数据接口 1.会生成补数据实例运行：影响相关产产出表数据 2.会进行任务运行：造成计算的费用以及存储的费用
 *
 * @param request CreateNodeSupplementRequest
 * @return CreateNodeSupplementResponse
 */
CreateNodeSupplementResponse Client::createNodeSupplement(const CreateNodeSupplementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeSupplementWithOptions(request, runtime);
}

/**
 * @summary 创建集成管道任务。
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
 * @summary 创建集成管道任务。
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineWithOptions(request, runtime);
}

/**
 * @summary 异步创建集成管道任务。
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
 * @summary 异步创建集成管道任务。
 *
 * @param request CreatePipelineByAsyncRequest
 * @return CreatePipelineByAsyncResponse
 */
CreatePipelineByAsyncResponse Client::createPipelineByAsync(const CreatePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary 创建数据集成任务。
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
 * @summary 创建数据集成任务。
 *
 * @param request CreatePipelineNodeRequest
 * @return CreatePipelineNodeResponse
 */
CreatePipelineNodeResponse Client::createPipelineNode(const CreatePipelineNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineNodeWithOptions(request, runtime);
}

/**
 * @summary 创建资源文件。
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
 * @summary 创建资源文件。
 *
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceWithOptions(request, runtime);
}

/**
 * @summary 创建行级权限
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
 * @summary 创建行级权限
 *
 * @param request CreateRowPermissionRequest
 * @return CreateRowPermissionResponse
 */
CreateRowPermissionResponse Client::createRowPermission(const CreateRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRowPermissionWithOptions(request, runtime);
}

/**
 * @summary 创建流批一体任务
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
 * @summary 创建流批一体任务
 *
 * @param request CreateStreamBatchJobMappingRequest
 * @return CreateStreamBatchJobMappingResponse
 */
CreateStreamBatchJobMappingResponse Client::createStreamBatchJobMapping(const CreateStreamBatchJobMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamBatchJobMappingWithOptions(request, runtime);
}

/**
 * @summary 创建自定义函数。
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
 * @summary 创建自定义函数。
 *
 * @param request CreateUdfRequest
 * @return CreateUdfResponse
 */
CreateUdfResponse Client::createUdf(const CreateUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUdfWithOptions(request, runtime);
}

/**
 * @summary 新建用户组.
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
 * @summary 新建用户组.
 *
 * @param request CreateUserGroupRequest
 * @return CreateUserGroupResponse
 */
CreateUserGroupResponse Client::createUserGroup(const CreateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserGroupWithOptions(request, runtime);
}

/**
 * @summary 删除菜单树即席查询文件
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
 * @summary 删除菜单树即席查询文件
 *
 * @param request DeleteAdHocFileRequest
 * @return DeleteAdHocFileResponse
 */
DeleteAdHocFileResponse Client::deleteAdHocFile(const DeleteAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdHocFileWithOptions(request, runtime);
}

/**
 * @summary 删除离线计算任务，如果任务还没下线需要先下线再删除。
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
 * @summary 删除离线计算任务，如果任务还没下线需要先下线再删除。
 *
 * @param request DeleteBatchTaskRequest
 * @return DeleteBatchTaskResponse
 */
DeleteBatchTaskResponse Client::deleteBatchTask(const DeleteBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBatchTaskWithOptions(request, runtime);
}

/**
 * @summary 删除业务实体。
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
 * @summary 删除业务实体。
 *
 * @param request DeleteBizEntityRequest
 * @return DeleteBizEntityResponse
 */
DeleteBizEntityResponse Client::deleteBizEntity(const DeleteBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizEntityWithOptions(request, runtime);
}

/**
 * @summary 删除业务指标
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
 * @summary 删除业务指标
 *
 * @param request DeleteBizMetricRequest
 * @return DeleteBizMetricResponse
 */
DeleteBizMetricResponse Client::deleteBizMetric(const DeleteBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizMetricWithOptions(request, runtime);
}

/**
 * @summary 删除数据板块。
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
 * @summary 删除数据板块。
 *
 * @param request DeleteBizUnitRequest
 * @return DeleteBizUnitResponse
 */
DeleteBizUnitResponse Client::deleteBizUnit(const DeleteBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBizUnitWithOptions(request, runtime);
}

/**
 * @summary 删除计算源。
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
 * @summary 删除计算源。
 *
 * @param request DeleteComputeSourceRequest
 * @return DeleteComputeSourceResponse
 */
DeleteComputeSourceResponse Client::deleteComputeSource(const DeleteComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeSourceWithOptions(request, runtime);
}

/**
 * @summary 删除主题域。
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
 * @summary 删除主题域。
 *
 * @param request DeleteDataDomainRequest
 * @return DeleteDataDomainResponse
 */
DeleteDataDomainResponse Client::deleteDataDomain(const DeleteDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataDomainWithOptions(request, runtime);
}

/**
 * @summary 删除数据源
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
 * @summary 删除数据源
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary 删除菜单树文件目录
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
 * @summary 删除菜单树文件目录
 *
 * @param request DeleteDirectoryRequest
 * @return DeleteDirectoryResponse
 */
DeleteDirectoryResponse Client::deleteDirectory(const DeleteDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDirectoryWithOptions(request, runtime);
}

/**
 * @summary 删除注册血缘。
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
 * @summary 删除注册血缘。
 *
 * @param request DeleteRegisterLineageRequest
 * @return DeleteRegisterLineageResponse
 */
DeleteRegisterLineageResponse Client::deleteRegisterLineage(const DeleteRegisterLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRegisterLineageWithOptions(request, runtime);
}

/**
 * @summary 删除资源文件。
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
 * @summary 删除资源文件。
 *
 * @param request DeleteResourceRequest
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const DeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceWithOptions(request, runtime);
}

/**
 * @summary 删除行级权限
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
 * @summary 删除行级权限
 *
 * @param request DeleteRowPermissionRequest
 * @return DeleteRowPermissionResponse
 */
DeleteRowPermissionResponse Client::deleteRowPermission(const DeleteRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRowPermissionWithOptions(request, runtime);
}

/**
 * @summary 删除自定义函数。
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
 * @summary 删除自定义函数。
 *
 * @param request DeleteUdfRequest
 * @return DeleteUdfResponse
 */
DeleteUdfResponse Client::deleteUdf(const DeleteUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUdfWithOptions(request, runtime);
}

/**
 * @summary 删除用户组.
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
 * @summary 删除用户组.
 *
 * @param request DeleteUserGroupRequest
 * @return DeleteUserGroupResponse
 */
DeleteUserGroupResponse Client::deleteUserGroup(const DeleteUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserGroupWithOptions(request, runtime);
}

/**
 * @summary 执行即席查询任务。
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
 * @summary 执行即席查询任务。
 *
 * @param request ExecuteAdHocTaskRequest
 * @return ExecuteAdHocTaskResponse
 */
ExecuteAdHocTaskResponse Client::executeAdHocTask(const ExecuteAdHocTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeAdHocTaskWithOptions(request, runtime);
}

/**
 * @summary 运行手动调度节点。
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
 * @summary 运行手动调度节点。
 *
 * @param request ExecuteManualNodeRequest
 * @return ExecuteManualNodeResponse
 */
ExecuteManualNodeResponse Client::executeManualNode(const ExecuteManualNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeManualNodeWithOptions(request, runtime);
}

/**
 * @summary 重跑下游(修复链路数据), 支持强制重跑下游。影响范围: 1. 会产生计算成本；2. 会影响数据产出
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
 * @summary 重跑下游(修复链路数据), 支持强制重跑下游。影响范围: 1. 会产生计算成本；2. 会影响数据产出
 *
 * @param request FixDataRequest
 * @return FixDataResponse
 */
FixDataResponse Client::fixData(const FixDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fixDataWithOptions(request, runtime);
}

/**
 * @summary 根据行级权限ID获取某一行级权限下的所有授权账号
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
 * @summary 根据行级权限ID获取某一行级权限下的所有授权账号
 *
 * @param request GetAccountByRowPermissionIdRequest
 * @return GetAccountByRowPermissionIdResponse
 */
GetAccountByRowPermissionIdResponse Client::getAccountByRowPermissionId(const GetAccountByRowPermissionIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccountByRowPermissionIdWithOptions(request, runtime);
}

/**
 * @summary 查询即席查询文件。
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
 * @summary 查询即席查询文件。
 *
 * @param request GetAdHocFileRequest
 * @return GetAdHocFileResponse
 */
GetAdHocFileResponse Client::getAdHocFile(const GetAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocFileWithOptions(request, runtime);
}

/**
 * @summary 获取即席查询任务运行日志。
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
 * @summary 获取即席查询任务运行日志。
 *
 * @param request GetAdHocTaskLogRequest
 * @return GetAdHocTaskLogResponse
 */
GetAdHocTaskLogResponse Client::getAdHocTaskLog(const GetAdHocTaskLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocTaskLogWithOptions(request, runtime);
}

/**
 * @summary 获取即席查询的任务运行结果。
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
 * @summary 获取即席查询的任务运行结果。
 *
 * @param request GetAdHocTaskResultRequest
 * @return GetAdHocTaskResultResponse
 */
GetAdHocTaskResultResponse Client::getAdHocTaskResult(const GetAdHocTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdHocTaskResultWithOptions(request, runtime);
}

/**
 * @summary 获取告警事件详情
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
 * @summary 获取告警事件详情
 *
 * @param request GetAlertEventRequest
 * @return GetAlertEventResponse
 */
GetAlertEventResponse Client::getAlertEvent(const GetAlertEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertEventWithOptions(request, runtime);
}

/**
 * @summary 获取离线计算任务详情。
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
 * @summary 获取离线计算任务详情。
 *
 * @param request GetBatchTaskInfoRequest
 * @return GetBatchTaskInfoResponse
 */
GetBatchTaskInfoResponse Client::getBatchTaskInfo(const GetBatchTaskInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskInfoWithOptions(request, runtime);
}

/**
 * @summary 获取离线计算任务指定版本任务详情。
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
 * @summary 获取离线计算任务指定版本任务详情。
 *
 * @param request GetBatchTaskInfoByVersionRequest
 * @return GetBatchTaskInfoByVersionResponse
 */
GetBatchTaskInfoByVersionResponse Client::getBatchTaskInfoByVersion(const GetBatchTaskInfoByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskInfoByVersionWithOptions(request, runtime);
}

/**
 * @summary 获取离线任务自定义血缘。
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
 * @summary 获取离线任务自定义血缘。
 *
 * @param request GetBatchTaskUdfLineagesRequest
 * @return GetBatchTaskUdfLineagesResponse
 */
GetBatchTaskUdfLineagesResponse Client::getBatchTaskUdfLineages(const GetBatchTaskUdfLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskUdfLineagesWithOptions(request, runtime);
}

/**
 * @summary 获取离线计算任务版本列表。
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
 * @summary 获取离线计算任务版本列表。
 *
 * @param request GetBatchTaskVersionsRequest
 * @return GetBatchTaskVersionsResponse
 */
GetBatchTaskVersionsResponse Client::getBatchTaskVersions(const GetBatchTaskVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchTaskVersionsWithOptions(request, runtime);
}

/**
 * @summary 获取业务实体详情。
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
 * @summary 获取业务实体详情。
 *
 * @param request GetBizEntityInfoRequest
 * @return GetBizEntityInfoResponse
 */
GetBizEntityInfoResponse Client::getBizEntityInfo(const GetBizEntityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizEntityInfoWithOptions(request, runtime);
}

/**
 * @summary 查询指定版本的业务实体的详情。
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
 * @summary 查询指定版本的业务实体的详情。
 *
 * @param request GetBizEntityInfoByVersionRequest
 * @return GetBizEntityInfoByVersionResponse
 */
GetBizEntityInfoByVersionResponse Client::getBizEntityInfoByVersion(const GetBizEntityInfoByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizEntityInfoByVersionWithOptions(request, runtime);
}

/**
 * @summary 查询业务指标详情
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
 * @summary 查询业务指标详情
 *
 * @param request GetBizMetricByNameRequest
 * @return GetBizMetricByNameResponse
 */
GetBizMetricByNameResponse Client::getBizMetricByName(const GetBizMetricByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizMetricByNameWithOptions(request, runtime);
}

/**
 * @summary 获取数据板块详情。
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
 * @summary 获取数据板块详情。
 *
 * @param request GetBizUnitInfoRequest
 * @return GetBizUnitInfoResponse
 */
GetBizUnitInfoResponse Client::getBizUnitInfo(const GetBizUnitInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBizUnitInfoWithOptions(request, runtime);
}

/**
 * @summary 查询数据源连通性检查任务。
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
 * @summary 查询数据源连通性检查任务。
 *
 * @param request GetCheckConnectivityJobsRequest
 * @return GetCheckConnectivityJobsResponse
 */
GetCheckConnectivityJobsResponse Client::getCheckConnectivityJobs(const GetCheckConnectivityJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCheckConnectivityJobsWithOptions(request, runtime);
}

/**
 * @summary 根据环境获取集群信息
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
 * @summary 根据环境获取集群信息
 *
 * @param request GetClusterQueueInfoByEnvRequest
 * @return GetClusterQueueInfoByEnvResponse
 */
GetClusterQueueInfoByEnvResponse Client::getClusterQueueInfoByEnv(const GetClusterQueueInfoByEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterQueueInfoByEnvWithOptions(request, runtime);
}

/**
 * @summary 获取计算源详情。
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
 * @summary 获取计算源详情。
 *
 * @param request GetComputeSourceRequest
 * @return GetComputeSourceResponse
 */
GetComputeSourceResponse Client::getComputeSource(const GetComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeSourceWithOptions(request, runtime);
}

/**
 * @summary 获取主题域详情。
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
 * @summary 获取主题域详情。
 *
 * @param request GetDataDomainInfoRequest
 * @return GetDataDomainInfoResponse
 */
GetDataDomainInfoResponse Client::getDataDomainInfo(const GetDataDomainInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataDomainInfoWithOptions(request, runtime);
}

/**
 * @summary 运维监控Api调用汇总统计。
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
 * @summary 运维监控Api调用汇总统计。
 *
 * @param request GetDataServiceApiCallSummaryRequest
 * @return GetDataServiceApiCallSummaryResponse
 */
GetDataServiceApiCallSummaryResponse Client::getDataServiceApiCallSummary(const GetDataServiceApiCallSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiCallSummaryWithOptions(request, runtime);
}

/**
 * @summary 运维监控Api访问趋势分析。
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
 * @summary 运维监控Api访问趋势分析。
 *
 * @param request GetDataServiceApiCallTrendRequest
 * @return GetDataServiceApiCallTrendResponse
 */
GetDataServiceApiCallTrendResponse Client::getDataServiceApiCallTrend(const GetDataServiceApiCallTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiCallTrendWithOptions(request, runtime);
}

/**
 * @summary 获取API文档。
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
 * @summary 获取API文档。
 *
 * @param request GetDataServiceApiDocumentRequest
 * @return GetDataServiceApiDocumentResponse
 */
GetDataServiceApiDocumentResponse Client::getDataServiceApiDocument(const GetDataServiceApiDocumentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiDocumentWithOptions(request, runtime);
}

/**
 * @summary 获取API异常影响汇总。
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
 * @summary 获取API异常影响汇总。
 *
 * @param request GetDataServiceApiErrorImpactRequest
 * @return GetDataServiceApiErrorImpactResponse
 */
GetDataServiceApiErrorImpactResponse Client::getDataServiceApiErrorImpact(const GetDataServiceApiErrorImpactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiErrorImpactWithOptions(request, runtime);
}

/**
 * @summary 查询数据服务API分组列表。
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
 * @summary 查询数据服务API分组列表。
 *
 * @param request GetDataServiceApiGroupsRequest
 * @return GetDataServiceApiGroupsResponse
 */
GetDataServiceApiGroupsResponse Client::getDataServiceApiGroups(const GetDataServiceApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiGroupsWithOptions(request, runtime);
}

/**
 * @summary 获取应用有权限的用户列表。
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
 * @summary 获取应用有权限的用户列表。
 *
 * @param request GetDataServiceAppAuthorizedUsersRequest
 * @return GetDataServiceAppAuthorizedUsersResponse
 */
GetDataServiceAppAuthorizedUsersResponse Client::getDataServiceAppAuthorizedUsers(const GetDataServiceAppAuthorizedUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppAuthorizedUsersWithOptions(request, runtime);
}

/**
 * @summary 查询数据服务项目的应用分组列表。
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
 * @summary 查询数据服务项目的应用分组列表。
 *
 * @param request GetDataServiceAppGroupsRequest
 * @return GetDataServiceAppGroupsResponse
 */
GetDataServiceAppGroupsResponse Client::getDataServiceAppGroups(const GetDataServiceAppGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppGroupsWithOptions(request, runtime);
}

/**
 * @summary 查询分组下应用列表。
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
 * @summary 查询分组下应用列表。
 *
 * @param request GetDataServiceAppsByGroupIdRequest
 * @return GetDataServiceAppsByGroupIdResponse
 */
GetDataServiceAppsByGroupIdResponse Client::getDataServiceAppsByGroupId(const GetDataServiceAppsByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAppsByGroupIdWithOptions(request, runtime);
}

/**
 * @summary 根据App分组Id查询账号有权限的应用列表。
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
 * @summary 根据App分组Id查询账号有权限的应用列表。
 *
 * @param request GetDataServiceAuthorizedAppsByGroupIdRequest
 * @return GetDataServiceAuthorizedAppsByGroupIdResponse
 */
GetDataServiceAuthorizedAppsByGroupIdResponse Client::getDataServiceAuthorizedAppsByGroupId(const GetDataServiceAuthorizedAppsByGroupIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAuthorizedAppsByGroupIdWithOptions(request, runtime);
}

/**
 * @summary 查询有权限的项目列表。
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
 * @summary 查询有权限的项目列表。
 *
 * @param request GetDataServiceAuthorizedProjectsRequest
 * @return GetDataServiceAuthorizedProjectsResponse
 */
GetDataServiceAuthorizedProjectsResponse Client::getDataServiceAuthorizedProjects(const GetDataServiceAuthorizedProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceAuthorizedProjectsWithOptions(request, runtime);
}

/**
 * @summary 当前登录当前用户作为负责人的项目列表。
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
 * @summary 当前登录当前用户作为负责人的项目列表。
 *
 * @param request GetDataServiceMyProjectsRequest
 * @return GetDataServiceMyProjectsResponse
 */
GetDataServiceMyProjectsResponse Client::getDataServiceMyProjects(const GetDataServiceMyProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceMyProjectsWithOptions(request, runtime);
}

/**
 * @summary 获取可添加到项目成员的用户列表。
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
 * @summary 获取可添加到项目成员的用户列表。
 *
 * @param request GetDataServiceProjectAddableUsersRequest
 * @return GetDataServiceProjectAddableUsersResponse
 */
GetDataServiceProjectAddableUsersResponse Client::getDataServiceProjectAddableUsers(const GetDataServiceProjectAddableUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceProjectAddableUsersWithOptions(request, runtime);
}

/**
 * @summary 查询数据源变更影响的集成任务及数据库SQL任务。
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
 * @summary 查询数据源变更影响的集成任务及数据库SQL任务。
 *
 * @param request GetDataSourceDependenciesRequest
 * @return GetDataSourceDependenciesResponse
 */
GetDataSourceDependenciesResponse Client::getDataSourceDependencies(const GetDataSourceDependenciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceDependenciesWithOptions(request, runtime);
}

/**
 * @summary 查询开发态对象上游依赖。
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
 * @summary 查询开发态对象上游依赖。
 *
 * @param request GetDevObjectDependencyRequest
 * @return GetDevObjectDependencyResponse
 */
GetDevObjectDependencyResponse Client::getDevObjectDependency(const GetDevObjectDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDevObjectDependencyWithOptions(request, runtime);
}

/**
 * @summary 获取文件夹目录树
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
 * @summary 获取文件夹目录树
 *
 * @param request GetDirectoryTreeRequest
 * @return GetDirectoryTreeResponse
 */
GetDirectoryTreeResponse Client::getDirectoryTree(const GetDirectoryTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDirectoryTreeWithOptions(request, runtime);
}

/**
 * @summary 获取文件存储临时读写授权。
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
 * @summary 获取文件存储临时读写授权。
 *
 * @param request GetFileStorageCredentialRequest
 * @return GetFileStorageCredentialResponse
 */
GetFileStorageCredentialResponse Client::getFileStorageCredential(const GetFileStorageCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileStorageCredentialWithOptions(request, runtime);
}

/**
 * @summary 根据起始的实例查询该实例的下游
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
 * @summary 根据起始的实例查询该实例的下游
 *
 * @param request GetInstanceDownStreamRequest
 * @return GetInstanceDownStreamResponse
 */
GetInstanceDownStreamResponse Client::getInstanceDownStream(const GetInstanceDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceDownStreamWithOptions(request, runtime);
}

/**
 * @summary 查询实例的上下游，支持逻辑表和代码任务。
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
 * @summary 查询实例的上下游，支持逻辑表和代码任务。
 *
 * @param request GetInstanceUpDownStreamRequest
 * @return GetInstanceUpDownStreamResponse
 */
GetInstanceUpDownStreamResponse Client::getInstanceUpDownStream(const GetInstanceUpDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceUpDownStreamWithOptions(request, runtime);
}

/**
 * @summary 获取最新的待发布记录详情
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
 * @summary 获取最新的待发布记录详情
 *
 * @param request GetLatestSubmitDetailRequest
 * @return GetLatestSubmitDetailResponse
 */
GetLatestSubmitDetailResponse Client::getLatestSubmitDetail(const GetLatestSubmitDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLatestSubmitDetailWithOptions(request, runtime);
}

/**
 * @summary 获取用户角色列表
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
 * @summary 获取用户角色列表
 *
 * @param request GetMyRolesRequest
 * @return GetMyRolesResponse
 */
GetMyRolesResponse Client::getMyRoles(const GetMyRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMyRolesWithOptions(request, runtime);
}

/**
 * @summary 获取当前用户归属租户.
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
 * @summary 获取当前用户归属租户.
 *
 * @param request GetMyTenantsRequest
 * @return GetMyTenantsResponse
 */
GetMyTenantsResponse Client::getMyTenants(const GetMyTenantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMyTenantsWithOptions(request, runtime);
}

/**
 * @summary 通用查询节点上下游接口
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
 * @summary 通用查询节点上下游接口
 *
 * @param request GetNodeUpDownStreamRequest
 * @return GetNodeUpDownStreamResponse
 */
GetNodeUpDownStreamResponse Client::getNodeUpDownStream(const GetNodeUpDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeUpDownStreamWithOptions(request, runtime);
}

/**
 * @summary 查询补数据提交的状态
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
 * @summary 查询补数据提交的状态
 *
 * @param request GetOperationSubmitStatusRequest
 * @return GetOperationSubmitStatusResponse
 */
GetOperationSubmitStatusResponse Client::getOperationSubmitStatus(const GetOperationSubmitStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationSubmitStatusWithOptions(request, runtime);
}

/**
 * @summary 查询脚本的实例信息, 包括实例状态、运行时间等信息.
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
 * @summary 查询脚本的实例信息, 包括实例状态、运行时间等信息.
 *
 * @param request GetPhysicalInstanceRequest
 * @return GetPhysicalInstanceResponse
 */
GetPhysicalInstanceResponse Client::getPhysicalInstance(const GetPhysicalInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalInstanceWithOptions(request, runtime);
}

/**
 * @summary 获取实例执行的日志，如果实例重跑了多次，则会有多条日志
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
 * @summary 获取实例执行的日志，如果实例重跑了多次，则会有多条日志
 *
 * @param request GetPhysicalInstanceLogRequest
 * @return GetPhysicalInstanceLogResponse
 */
GetPhysicalInstanceLogResponse Client::getPhysicalInstanceLog(const GetPhysicalInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalInstanceLogWithOptions(request, runtime);
}

/**
 * @summary 查询物理调度节点。
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
 * @summary 查询物理调度节点。
 *
 * @param request GetPhysicalNodeRequest
 * @return GetPhysicalNodeResponse
 */
GetPhysicalNodeResponse Client::getPhysicalNode(const GetPhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary 根据输出名查询对应的物理节点。
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
 * @summary 根据输出名查询对应的物理节点。
 *
 * @param request GetPhysicalNodeByOutputNameRequest
 * @return GetPhysicalNodeByOutputNameResponse
 */
GetPhysicalNodeByOutputNameResponse Client::getPhysicalNodeByOutputName(const GetPhysicalNodeByOutputNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeByOutputNameWithOptions(request, runtime);
}

/**
 * @summary 查询调度节点代码内容。
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
 * @summary 查询调度节点代码内容。
 *
 * @param request GetPhysicalNodeContentRequest
 * @return GetPhysicalNodeContentResponse
 */
GetPhysicalNodeContentResponse Client::getPhysicalNodeContent(const GetPhysicalNodeContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeContentWithOptions(request, runtime);
}

/**
 * @summary 查询节点的操作日志。
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
 * @summary 查询节点的操作日志。
 *
 * @param request GetPhysicalNodeOperationLogRequest
 * @return GetPhysicalNodeOperationLogResponse
 */
GetPhysicalNodeOperationLogResponse Client::getPhysicalNodeOperationLog(const GetPhysicalNodeOperationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhysicalNodeOperationLogWithOptions(request, runtime);
}

/**
 * @summary 查询异步操作管道任务的执行结果。
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
 * @summary 查询异步操作管道任务的执行结果。
 *
 * @param request GetPipelineAsyncResultRequest
 * @return GetPipelineAsyncResultResponse
 */
GetPipelineAsyncResultResponse Client::getPipelineAsyncResult(const GetPipelineAsyncResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineAsyncResultWithOptions(request, runtime);
}

/**
 * @summary 根据管道任务id查询管道任务。
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
 * @summary 根据管道任务id查询管道任务。
 *
 * @param request GetPipelineByIdRequest
 * @return GetPipelineByIdResponse
 */
GetPipelineByIdResponse Client::getPipelineById(const GetPipelineByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineByIdWithOptions(request, runtime);
}

/**
 * @summary 获取项目详情。
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
 * @summary 获取项目详情。
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary 通过项目名获取项目详情。
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
 * @summary 通过项目名获取项目详情。
 *
 * @param request GetProjectByNameRequest
 * @return GetProjectByNameResponse
 */
GetProjectByNameResponse Client::getProjectByName(const GetProjectByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectByNameWithOptions(request, runtime);
}

/**
 * @summary 获取项目生产账号
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
 * @summary 获取项目生产账号
 *
 * @param request GetProjectProduceUserRequest
 * @return GetProjectProduceUserResponse
 */
GetProjectProduceUserResponse Client::getProjectProduceUser(const GetProjectProduceUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectProduceUserWithOptions(request, runtime);
}

/**
 * @summary 获取项目白名单。
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
 * @summary 获取项目白名单。
 *
 * @param request GetProjectWhiteListsRequest
 * @return GetProjectWhiteListsResponse
 */
GetProjectWhiteListsResponse Client::getProjectWhiteLists(const GetProjectWhiteListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWhiteListsWithOptions(request, runtime);
}

/**
 * @summary 根据集群ID获取集群版本
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
 * @summary 根据集群ID获取集群版本
 *
 * @param request GetQueueEngineVersionByEnvRequest
 * @return GetQueueEngineVersionByEnvResponse
 */
GetQueueEngineVersionByEnvResponse Client::getQueueEngineVersionByEnv(const GetQueueEngineVersionByEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQueueEngineVersionByEnvWithOptions(request, runtime);
}

/**
 * @summary 获取资源文件详情。
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
 * @summary 获取资源文件详情。
 *
 * @param request GetResourceRequest
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResource(const GetResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceWithOptions(request, runtime);
}

/**
 * @summary 获取资源文件指定版本详情。
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
 * @summary 获取资源文件指定版本详情。
 *
 * @param request GetResourceByVersionRequest
 * @return GetResourceByVersionResponse
 */
GetResourceByVersionResponse Client::getResourceByVersion(const GetResourceByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceByVersionWithOptions(request, runtime);
}

/**
 * @summary 获取计算源对应集群的spark客户信息
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
 * @summary 获取计算源对应集群的spark客户信息
 *
 * @param request GetSparkLocalClientInfoRequest
 * @return GetSparkLocalClientInfoResponse
 */
GetSparkLocalClientInfoResponse Client::getSparkLocalClientInfo(const GetSparkLocalClientInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkLocalClientInfoWithOptions(request, runtime);
}

/**
 * @summary 获取dataphin实时研发任务集合
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
 * @summary 获取dataphin实时研发任务集合
 *
 * @param request GetStreamJobsRequest
 * @return GetStreamJobsResponse
 */
GetStreamJobsResponse Client::getStreamJobs(const GetStreamJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamJobsWithOptions(request, runtime);
}

/**
 * @summary 获取补数据工作流所有业务日期的Dagrun信息。
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
 * @summary 获取补数据工作流所有业务日期的Dagrun信息。
 *
 * @param request GetSupplementDagrunRequest
 * @return GetSupplementDagrunResponse
 */
GetSupplementDagrunResponse Client::getSupplementDagrun(const GetSupplementDagrunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplementDagrunWithOptions(request, runtime);
}

/**
 * @summary 列出补数据工作流下具体一个业务日期的所有节点的实例。
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
 * @summary 列出补数据工作流下具体一个业务日期的所有节点的实例。
 *
 * @param request GetSupplementDagrunInstanceRequest
 * @return GetSupplementDagrunInstanceResponse
 */
GetSupplementDagrunInstanceResponse Client::getSupplementDagrunInstance(const GetSupplementDagrunInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSupplementDagrunInstanceWithOptions(request, runtime);
}

/**
 * @summary 查询表字段血缘信息
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
 * @summary 查询表字段血缘信息
 *
 * @param request GetTableColumnLineageByTaskIdRequest
 * @return GetTableColumnLineageByTaskIdResponse
 */
GetTableColumnLineageByTaskIdResponse Client::getTableColumnLineageByTaskId(const GetTableColumnLineageByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableColumnLineageByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 查询表血缘信息
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
 * @summary 查询表血缘信息
 *
 * @param request GetTableLineageByTaskIdRequest
 * @return GetTableLineageByTaskIdResponse
 */
GetTableLineageByTaskIdResponse Client::getTableLineageByTaskId(const GetTableLineageByTaskIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableLineageByTaskIdWithOptions(request, runtime);
}

/**
 * @summary 根据转交任务ID查询转交任务的进度
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
 * @summary 根据转交任务ID查询转交任务的进度
 *
 * @param request GetTransferInfoRequest
 * @return GetTransferInfoResponse
 */
GetTransferInfoResponse Client::getTransferInfo(const GetTransferInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransferInfoWithOptions(request, runtime);
}

/**
 * @summary 获取自定义函数详情。
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
 * @summary 获取自定义函数详情。
 *
 * @param request GetUdfRequest
 * @return GetUdfResponse
 */
GetUdfResponse Client::getUdf(const GetUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUdfWithOptions(request, runtime);
}

/**
 * @summary 查询自定义函数版本详情。
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
 * @summary 查询自定义函数版本详情。
 *
 * @param request GetUdfByVersionRequest
 * @return GetUdfByVersionResponse
 */
GetUdfByVersionResponse Client::getUdfByVersion(const GetUdfByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUdfByVersionWithOptions(request, runtime);
}

/**
 * @summary 通过用户原始Id（如阿里云Id）获取用户详情
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

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
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
 * @summary 通过用户原始Id（如阿里云Id）获取用户详情
 *
 * @param request GetUserBySourceIdRequest
 * @return GetUserBySourceIdResponse
 */
GetUserBySourceIdResponse Client::getUserBySourceId(const GetUserBySourceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserBySourceIdWithOptions(request, runtime);
}

/**
 * @summary 获取用户组详情.
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
 * @summary 获取用户组详情.
 *
 * @param request GetUserGroupRequest
 * @return GetUserGroupResponse
 */
GetUserGroupResponse Client::getUserGroup(const GetUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserGroupWithOptions(request, runtime);
}

/**
 * @summary 获取用户详情
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
 * @summary 获取用户详情
 *
 * @param request GetUsersRequest
 * @return GetUsersResponse
 */
GetUsersResponse Client::getUsers(const GetUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUsersWithOptions(request, runtime);
}

/**
 * @summary API授权。
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
 * @summary API授权。
 *
 * @param request GrantDataServiceApiRequest
 * @return GrantDataServiceApiResponse
 */
GrantDataServiceApiResponse Client::grantDataServiceApi(const GrantDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary 通过资源点对用户授权
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
 * @summary 通过资源点对用户授权
 *
 * @param request GrantResourcePermissionRequest
 * @return GrantResourcePermissionResponse
 */
GrantResourcePermissionResponse Client::grantResourcePermission(const GrantResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary 获取用户角色列表
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
 * @summary 获取用户角色列表
 *
 * @param request ListAddableRolesRequest
 * @return ListAddableRolesResponse
 */
ListAddableRolesResponse Client::listAddableRoles(const ListAddableRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddableRolesWithOptions(request, runtime);
}

/**
 * @summary 获取可加入租户成员列表的用户
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
 * @summary 获取可加入租户成员列表的用户
 *
 * @param request ListAddableUsersRequest
 * @return ListAddableUsersResponse
 */
ListAddableUsersResponse Client::listAddableUsers(const ListAddableUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAddableUsersWithOptions(request, runtime);
}

/**
 * @summary 根据条件查询多个告警事件
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
 * @summary 根据条件查询多个告警事件
 *
 * @param request ListAlertEventsRequest
 * @return ListAlertEventsResponse
 */
ListAlertEventsResponse Client::listAlertEvents(const ListAlertEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertEventsWithOptions(request, runtime);
}

/**
 * @summary 根据条件查询多个推送记录
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
 * @summary 根据条件查询多个推送记录
 *
 * @param request ListAlertNotificationsRequest
 * @return ListAlertNotificationsResponse
 */
ListAlertNotificationsResponse Client::listAlertNotifications(const ListAlertNotificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertNotificationsWithOptions(request, runtime);
}

/**
 * @summary 根据app查询api列表
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
 * @summary 根据app查询api列表
 *
 * @param request ListApiByAppRequest
 * @return ListApiByAppResponse
 */
ListApiByAppResponse Client::listApiByApp(const ListApiByAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiByAppWithOptions(request, runtime);
}

/**
 * @summary 查询应用已申请的API的具体的字段列表
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
 * @summary 查询应用已申请的API的具体的字段列表
 *
 * @param request ListAuthorizedDataServiceApiDetailsRequest
 * @return ListAuthorizedDataServiceApiDetailsResponse
 */
ListAuthorizedDataServiceApiDetailsResponse Client::listAuthorizedDataServiceApiDetails(const ListAuthorizedDataServiceApiDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuthorizedDataServiceApiDetailsWithOptions(request, runtime);
}

/**
 * @summary 查询业务实体列表。
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
 * @summary 查询业务实体列表。
 *
 * @param request ListBizEntitiesRequest
 * @return ListBizEntitiesResponse
 */
ListBizEntitiesResponse Client::listBizEntities(const ListBizEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizEntitiesWithOptions(request, runtime);
}

/**
 * @summary 获取当前租户下的所有数据板块
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
 * @summary 获取当前租户下的所有数据板块
 *
 * @param request ListBizUnitsRequest
 * @return ListBizUnitsResponse
 */
ListBizUnitsResponse Client::listBizUnits(const ListBizUnitsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBizUnitsWithOptions(request, runtime);
}

/**
 * @summary 查询计算源列表。
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
 * @summary 查询计算源列表。
 *
 * @param request ListComputeSourcesRequest
 * @return ListComputeSourcesResponse
 */
ListComputeSourcesResponse Client::listComputeSources(const ListComputeSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeSourcesWithOptions(request, runtime);
}

/**
 * @summary 获取主题域列表。
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
 * @summary 获取主题域列表。
 *
 * @param request ListDataDomainsRequest
 * @return ListDataDomainsResponse
 */
ListDataDomainsResponse Client::listDataDomains(const ListDataDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataDomainsWithOptions(request, runtime);
}

/**
 * @summary 查询API运维统计信息。
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
 * @summary 查询API运维统计信息。
 *
 * @param request ListDataServiceApiCallStatisticsRequest
 * @return ListDataServiceApiCallStatisticsResponse
 */
ListDataServiceApiCallStatisticsResponse Client::listDataServiceApiCallStatistics(const ListDataServiceApiCallStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiCallStatisticsWithOptions(request, runtime);
}

/**
 * @summary 分页查询数据服务调用日志。
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
 * @summary 分页查询数据服务调用日志。
 *
 * @param request ListDataServiceApiCallsRequest
 * @return ListDataServiceApiCallsResponse
 */
ListDataServiceApiCallsResponse Client::listDataServiceApiCalls(const ListDataServiceApiCallsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiCallsWithOptions(request, runtime);
}

/**
 * @summary API影响分析列表。
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
 * @summary API影响分析列表。
 *
 * @param request ListDataServiceApiImpactsRequest
 * @return ListDataServiceApiImpactsResponse
 */
ListDataServiceApiImpactsResponse Client::listDataServiceApiImpacts(const ListDataServiceApiImpactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiImpactsWithOptions(request, runtime);
}

/**
 * @summary 查询当前用户有权限的应用列表。
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
 * @summary 查询当前用户有权限的应用列表。
 *
 * @param request ListDataServiceAuthorizedAppsRequest
 * @return ListDataServiceAuthorizedAppsResponse
 */
ListDataServiceAuthorizedAppsResponse Client::listDataServiceAuthorizedApps(const ListDataServiceAuthorizedAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceAuthorizedAppsWithOptions(request, runtime);
}

/**
 * @summary 获取我管理的API权限列表。
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
 * @summary 获取我管理的API权限列表。
 *
 * @param request ListDataServiceMyApiPermissionsRequest
 * @return ListDataServiceMyApiPermissionsResponse
 */
ListDataServiceMyApiPermissionsResponse Client::listDataServiceMyApiPermissions(const ListDataServiceMyApiPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceMyApiPermissionsWithOptions(request, runtime);
}

/**
 * @summary 查询当前用户有权限的应用。
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
 * @summary 查询当前用户有权限的应用。
 *
 * @param request ListDataServiceMyAppPermissionsRequest
 * @return ListDataServiceMyAppPermissionsResponse
 */
ListDataServiceMyAppPermissionsResponse Client::listDataServiceMyAppPermissions(const ListDataServiceMyAppPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceMyAppPermissionsWithOptions(request, runtime);
}

/**
 * @summary 分页查询已发布的API列表。
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
 * @summary 分页查询已发布的API列表。
 *
 * @param request ListDataServicePublishedApisRequest
 * @return ListDataServicePublishedApisResponse
 */
ListDataServicePublishedApisResponse Client::listDataServicePublishedApis(const ListDataServicePublishedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

/**
 * @summary 搜索数据源，所属结果包含数据源配置项
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
 * @summary 搜索数据源，所属结果包含数据源配置项
 *
 * @param request ListDataSourceWithConfigRequest
 * @return ListDataSourceWithConfigResponse
 */
ListDataSourceWithConfigResponse Client::listDataSourceWithConfig(const ListDataSourceWithConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceWithConfigWithOptions(request, runtime);
}

/**
 * @summary 遍历菜单树目录文件。
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
 * @summary 遍历菜单树目录文件。
 *
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
 * @summary 分页查询实例。
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
 * @summary 分页查询实例。
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询节点下游，创建补数据工作流时可以作为数据参考
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
 * @summary 查询节点下游，创建补数据工作流时可以作为数据参考
 *
 * @param request ListNodeDownStreamRequest
 * @return ListNodeDownStreamResponse
 */
ListNodeDownStreamResponse Client::listNodeDownStream(const ListNodeDownStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeDownStreamWithOptions(request, runtime);
}

/**
 * @summary 查询调度节点列表。
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
 * @summary 查询调度节点列表。
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary 获取项目成员列表。
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
 * @summary 获取项目成员列表。
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectMembersWithOptions(request, runtime);
}

/**
 * @summary 获取项目列表。
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
 * @summary 获取项目列表。
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary 分页获取发布记录列表
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
 * @summary 分页获取发布记录列表
 *
 * @param request ListPublishRecordsRequest
 * @return ListPublishRecordsResponse
 */
ListPublishRecordsResponse Client::listPublishRecords(const ListPublishRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublishRecordsWithOptions(request, runtime);
}

/**
 * @summary 分页获取权限操作列表
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
 * @summary 分页获取权限操作列表
 *
 * @param request ListResourcePermissionOperationLogRequest
 * @return ListResourcePermissionOperationLogResponse
 */
ListResourcePermissionOperationLogResponse Client::listResourcePermissionOperationLog(const ListResourcePermissionOperationLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcePermissionOperationLogWithOptions(request, runtime);
}

/**
 * @summary 分页获取权限记录列表
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
 * @summary 分页获取权限记录列表
 *
 * @param request ListResourcePermissionsRequest
 * @return ListResourcePermissionsResponse
 */
ListResourcePermissionsResponse Client::listResourcePermissions(const ListResourcePermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcePermissionsWithOptions(request, runtime);
}

/**
 * @summary 分页查询行级权限
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
 * @summary 分页查询行级权限
 *
 * @param request ListRowPermissionRequest
 * @return ListRowPermissionResponse
 */
ListRowPermissionResponse Client::listRowPermission(const ListRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRowPermissionWithOptions(request, runtime);
}

/**
 * @summary 分页查询指定用户行级权限
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
 * @summary 分页查询指定用户行级权限
 *
 * @param request ListRowPermissionByUserIdRequest
 * @return ListRowPermissionByUserIdResponse
 */
ListRowPermissionByUserIdResponse Client::listRowPermissionByUserId(const ListRowPermissionByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRowPermissionByUserIdWithOptions(request, runtime);
}

/**
 * @summary 分页获取待发布记录列表
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
 * @summary 分页获取待发布记录列表
 *
 * @param request ListSubmitRecordsRequest
 * @return ListSubmitRecordsResponse
 */
ListSubmitRecordsResponse Client::listSubmitRecords(const ListSubmitRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubmitRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询租户成员列表
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
 * @summary 查询租户成员列表
 *
 * @param request ListTenantMembersRequest
 * @return ListTenantMembersResponse
 */
ListTenantMembersResponse Client::listTenantMembers(const ListTenantMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTenantMembersWithOptions(request, runtime);
}

/**
 * @summary 用户组成员列表分页查询.
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
 * @summary 用户组成员列表分页查询.
 *
 * @param request ListUserGroupMembersRequest
 * @return ListUserGroupMembersResponse
 */
ListUserGroupMembersResponse Client::listUserGroupMembers(const ListUserGroupMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupMembersWithOptions(request, runtime);
}

/**
 * @summary 用户组列表分页查询.
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
 * @summary 用户组列表分页查询.
 *
 * @param request ListUserGroupsRequest
 * @return ListUserGroupsResponse
 */
ListUserGroupsResponse Client::listUserGroups(const ListUserGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserGroupsWithOptions(request, runtime);
}

/**
 * @summary 下线离线计算任务。
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
 * @summary 下线离线计算任务。
 *
 * @param request OfflineBatchTaskRequest
 * @return OfflineBatchTaskResponse
 */
OfflineBatchTaskResponse Client::offlineBatchTask(const OfflineBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineBatchTaskWithOptions(request, runtime);
}

/**
 * @summary 下线业务实体、
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
 * @summary 下线业务实体、
 *
 * @param request OfflineBizEntityRequest
 * @return OfflineBizEntityResponse
 */
OfflineBizEntityResponse Client::offlineBizEntity(const OfflineBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineBizEntityWithOptions(request, runtime);
}

/**
 * @summary 下线集成管道任务。
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
 * @summary 下线集成管道任务。
 *
 * @param request OfflinePipelineRequest
 * @return OfflinePipelineResponse
 */
OfflinePipelineResponse Client::offlinePipeline(const OfflinePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlinePipelineWithOptions(request, runtime);
}

/**
 * @summary 异步下线集成管道任务。
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
 * @summary 异步下线集成管道任务。
 *
 * @param request OfflinePipelineByAsyncRequest
 * @return OfflinePipelineByAsyncResponse
 */
OfflinePipelineByAsyncResponse Client::offlinePipelineByAsync(const OfflinePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlinePipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary 上线业务实体。
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
 * @summary 上线业务实体。
 *
 * @param request OnlineBizEntityRequest
 * @return OnlineBizEntityResponse
 */
OnlineBizEntityResponse Client::onlineBizEntity(const OnlineBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return onlineBizEntityWithOptions(request, runtime);
}

/**
 * @summary 运维实例。
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
 * @summary 运维实例。
 *
 * @param request OperateInstanceRequest
 * @return OperateInstanceResponse
 */
OperateInstanceResponse Client::operateInstance(const OperateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateInstanceWithOptions(request, runtime);
}

/**
 * @summary 解析离线计算任务的逻辑表依赖，注意解析结果上游依赖信息中可能包含自依赖节点（上游节点ID和解析代码的任务节点ID相同）需要用户自己进行处理。
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
 * @summary 解析离线计算任务的逻辑表依赖，注意解析结果上游依赖信息中可能包含自依赖节点（上游节点ID和解析代码的任务节点ID相同）需要用户自己进行处理。
 *
 * @param request ParseBatchTaskDependencyRequest
 * @return ParseBatchTaskDependencyResponse
 */
ParseBatchTaskDependencyResponse Client::parseBatchTaskDependency(const ParseBatchTaskDependencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return parseBatchTaskDependencyWithOptions(request, runtime);
}

/**
 * @summary 暂停物理节点调度。
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
 * @summary 暂停物理节点调度。
 *
 * @param request PausePhysicalNodeRequest
 * @return PausePhysicalNodeResponse
 */
PausePhysicalNodeResponse Client::pausePhysicalNode(const PausePhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pausePhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary 发布数据服务API到生产环境。
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
 * @summary 发布数据服务API到生产环境。
 *
 * @param request PublishDataServiceApiRequest
 * @return PublishDataServiceApiResponse
 */
PublishDataServiceApiResponse Client::publishDataServiceApi(const PublishDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary 批量发布对象
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
 * @summary 批量发布对象
 *
 * @param request PublishObjectListRequest
 * @return PublishObjectListResponse
 */
PublishObjectListResponse Client::publishObjectList(const PublishObjectListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishObjectListWithOptions(request, runtime);
}

/**
 * @summary 删除项目成员。
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
 * @summary 删除项目成员。
 *
 * @param request RemoveProjectMemberRequest
 * @return RemoveProjectMemberResponse
 */
RemoveProjectMemberResponse Client::removeProjectMember(const RemoveProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeProjectMemberWithOptions(request, runtime);
}

/**
 * @summary 删除租户成员
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
 * @summary 删除租户成员
 *
 * @param request RemoveTenantMemberRequest
 * @return RemoveTenantMemberResponse
 */
RemoveTenantMemberResponse Client::removeTenantMember(const RemoveTenantMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTenantMemberWithOptions(request, runtime);
}

/**
 * @summary 移除用户组成员.
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
 * @summary 移除用户组成员.
 *
 * @param request RemoveUserGroupMemberRequest
 * @return RemoveUserGroupMemberResponse
 */
RemoveUserGroupMemberResponse Client::removeUserGroupMember(const RemoveUserGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUserGroupMemberWithOptions(request, runtime);
}

/**
 * @summary 更新项目白名单。
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
 * @summary 更新项目白名单。
 *
 * @param request ReplaceProjectWhiteListsRequest
 * @return ReplaceProjectWhiteListsResponse
 */
ReplaceProjectWhiteListsResponse Client::replaceProjectWhiteLists(const ReplaceProjectWhiteListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceProjectWhiteListsWithOptions(request, runtime);
}

/**
 * @summary 恢复物理节点调度。
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
 * @summary 恢复物理节点调度。
 *
 * @param request ResumePhysicalNodeRequest
 * @return ResumePhysicalNodeResponse
 */
ResumePhysicalNodeResponse Client::resumePhysicalNode(const ResumePhysicalNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumePhysicalNodeWithOptions(request, runtime);
}

/**
 * @summary 重新转交运行失败的转交任务
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
 * @summary 重新转交运行失败的转交任务
 *
 * @param request RetryTransferOwnershipRequest
 * @return RetryTransferOwnershipResponse
 */
RetryTransferOwnershipResponse Client::retryTransferOwnership(const RetryTransferOwnershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryTransferOwnershipWithOptions(request, runtime);
}

/**
 * @summary 回收API授权。
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
 * @summary 回收API授权。
 *
 * @param request RevokeDataServiceApiRequest
 * @return RevokeDataServiceApiResponse
 */
RevokeDataServiceApiResponse Client::revokeDataServiceApi(const RevokeDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary 回收用户资源授权
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
 * @summary 回收用户资源授权
 *
 * @param request RevokeResourcePermissionRequest
 * @return RevokeResourcePermissionResponse
 */
RevokeResourcePermissionResponse Client::revokeResourcePermission(const RevokeResourcePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeResourcePermissionWithOptions(request, runtime);
}

/**
 * @summary 终止即席查询任务。
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
 * @summary 终止即席查询任务。
 *
 * @param request StopAdHocTaskRequest
 * @return StopAdHocTaskResponse
 */
StopAdHocTaskResponse Client::stopAdHocTask(const StopAdHocTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAdHocTaskWithOptions(request, runtime);
}

/**
 * @summary 提交离线计算任务。
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
 * @summary 提交离线计算任务。
 *
 * @param request SubmitBatchTaskRequest
 * @return SubmitBatchTaskResponse
 */
SubmitBatchTaskResponse Client::submitBatchTask(const SubmitBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchTaskWithOptions(request, runtime);
}

/**
 * @summary 同步部门信息。
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
 * @summary 同步部门信息。
 *
 * @param request SyncDepartmentRequest
 * @return SyncDepartmentResponse
 */
SyncDepartmentResponse Client::syncDepartment(const SyncDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDepartmentWithOptions(request, runtime);
}

/**
 * @summary 同步部门成员信息
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
 * @summary 同步部门成员信息
 *
 * @param request SyncDepartmentUserRequest
 * @return SyncDepartmentUserResponse
 */
SyncDepartmentUserResponse Client::syncDepartmentUser(const SyncDepartmentUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncDepartmentUserWithOptions(request, runtime);
}

/**
 * @summary 一键转交负责人
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
 * @summary 一键转交负责人
 *
 * @param request TransferOwnershipForAllObjectRequest
 * @return TransferOwnershipForAllObjectResponse
 */
TransferOwnershipForAllObjectResponse Client::transferOwnershipForAllObject(const TransferOwnershipForAllObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferOwnershipForAllObjectWithOptions(request, runtime);
}

/**
 * @summary 编辑即席查询文件。
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
 * @summary 编辑即席查询文件。
 *
 * @param request UpdateAdHocFileRequest
 * @return UpdateAdHocFileResponse
 */
UpdateAdHocFileResponse Client::updateAdHocFile(const UpdateAdHocFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAdHocFileWithOptions(request, runtime);
}

/**
 * @summary 编辑离线计算任务。
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
 * @summary 编辑离线计算任务。
 *
 * @param request UpdateBatchTaskRequest
 * @return UpdateBatchTaskResponse
 */
UpdateBatchTaskResponse Client::updateBatchTask(const UpdateBatchTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchTaskWithOptions(request, runtime);
}

/**
 * @summary 编辑离线计算任务自定义血缘。
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
 * @summary 编辑离线计算任务自定义血缘。
 *
 * @param request UpdateBatchTaskUdfLineagesRequest
 * @return UpdateBatchTaskUdfLineagesResponse
 */
UpdateBatchTaskUdfLineagesResponse Client::updateBatchTaskUdfLineages(const UpdateBatchTaskUdfLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBatchTaskUdfLineagesWithOptions(request, runtime);
}

/**
 * @summary 更新业务实体、
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
 * @summary 更新业务实体、
 *
 * @param request UpdateBizEntityRequest
 * @return UpdateBizEntityResponse
 */
UpdateBizEntityResponse Client::updateBizEntity(const UpdateBizEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizEntityWithOptions(request, runtime);
}

/**
 * @summary 更新业务指标
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
 * @summary 更新业务指标
 *
 * @param request UpdateBizMetricRequest
 * @return UpdateBizMetricResponse
 */
UpdateBizMetricResponse Client::updateBizMetric(const UpdateBizMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizMetricWithOptions(request, runtime);
}

/**
 * @summary 更新数据板块。
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
 * @summary 更新数据板块。
 *
 * @param request UpdateBizUnitRequest
 * @return UpdateBizUnitResponse
 */
UpdateBizUnitResponse Client::updateBizUnit(const UpdateBizUnitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBizUnitWithOptions(request, runtime);
}

/**
 * @summary 修改计算源。
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
 * @summary 修改计算源。
 *
 * @param request UpdateComputeSourceRequest
 * @return UpdateComputeSourceResponse
 */
UpdateComputeSourceResponse Client::updateComputeSource(const UpdateComputeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeSourceWithOptions(request, runtime);
}

/**
 * @summary 更新主题域。
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
 * @summary 更新主题域。
 *
 * @param request UpdateDataDomainRequest
 * @return UpdateDataDomainResponse
 */
UpdateDataDomainResponse Client::updateDataDomain(const UpdateDataDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataDomainWithOptions(request, runtime);
}

/**
 * @summary 编辑数据源基本信息
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
 * @summary 编辑数据源基本信息
 *
 * @param request UpdateDataSourceBasicInfoRequest
 * @return UpdateDataSourceBasicInfoResponse
 */
UpdateDataSourceBasicInfoResponse Client::updateDataSourceBasicInfo(const UpdateDataSourceBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceBasicInfoWithOptions(request, runtime);
}

/**
 * @summary 编辑数据源连接配置项
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
 * @summary 编辑数据源连接配置项
 *
 * @param request UpdateDataSourceConfigRequest
 * @return UpdateDataSourceConfigResponse
 */
UpdateDataSourceConfigResponse Client::updateDataSourceConfig(const UpdateDataSourceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceConfigWithOptions(request, runtime);
}

/**
 * @summary 修改菜单树文件所在目录
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
 * @summary 修改菜单树文件所在目录
 *
 * @param request UpdateFileDirectoryRequest
 * @return UpdateFileDirectoryResponse
 */
UpdateFileDirectoryResponse Client::updateFileDirectory(const UpdateFileDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileDirectoryWithOptions(request, runtime);
}

/**
 * @summary 修改菜单树文件名称
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
 * @summary 修改菜单树文件名称
 *
 * @param request UpdateFileNameRequest
 * @return UpdateFileNameResponse
 */
UpdateFileNameResponse Client::updateFileName(const UpdateFileNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileNameWithOptions(request, runtime);
}

/**
 * @summary 更新集成管道任务。
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
 * @summary 更新集成管道任务。
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineWithOptions(request, runtime);
}

/**
 * @summary 异步更新集成管道任务。
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
 * @summary 异步更新集成管道任务。
 *
 * @param request UpdatePipelineByAsyncRequest
 * @return UpdatePipelineByAsyncResponse
 */
UpdatePipelineByAsyncResponse Client::updatePipelineByAsync(const UpdatePipelineByAsyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineByAsyncWithOptions(request, runtime);
}

/**
 * @summary 增加项目成员。
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
 * @summary 增加项目成员。
 *
 * @param request UpdateProjectMemberRequest
 * @return UpdateProjectMemberResponse
 */
UpdateProjectMemberResponse Client::updateProjectMember(const UpdateProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectMemberWithOptions(request, runtime);
}

/**
 * @summary 编辑资源文件。
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
 * @summary 编辑资源文件。
 *
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceWithOptions(request, runtime);
}

/**
 * @summary 更新行级权限
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
 * @summary 更新行级权限
 *
 * @param request UpdateRowPermissionRequest
 * @return UpdateRowPermissionResponse
 */
UpdateRowPermissionResponse Client::updateRowPermission(const UpdateRowPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRowPermissionWithOptions(request, runtime);
}

/**
 * @summary 修改租户计算设置。
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
 * @summary 修改租户计算设置。
 *
 * @param request UpdateTenantComputeEngineRequest
 * @return UpdateTenantComputeEngineResponse
 */
UpdateTenantComputeEngineResponse Client::updateTenantComputeEngine(const UpdateTenantComputeEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTenantComputeEngineWithOptions(request, runtime);
}

/**
 * @summary 编辑租户成员
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
 * @summary 编辑租户成员
 *
 * @param request UpdateTenantMemberRequest
 * @return UpdateTenantMemberResponse
 */
UpdateTenantMemberResponse Client::updateTenantMember(const UpdateTenantMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTenantMemberWithOptions(request, runtime);
}

/**
 * @summary 编辑自定义函数。
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
 * @summary 编辑自定义函数。
 *
 * @param request UpdateUdfRequest
 * @return UpdateUdfResponse
 */
UpdateUdfResponse Client::updateUdf(const UpdateUdfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUdfWithOptions(request, runtime);
}

/**
 * @summary 编辑用户组.
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
 * @summary 编辑用户组.
 *
 * @param request UpdateUserGroupRequest
 * @return UpdateUserGroupResponse
 */
UpdateUserGroupResponse Client::updateUserGroup(const UpdateUserGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupWithOptions(request, runtime);
}

/**
 * @summary 编辑用户组启用开关.
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
 * @summary 编辑用户组启用开关.
 *
 * @param request UpdateUserGroupSwitchRequest
 * @return UpdateUserGroupSwitchResponse
 */
UpdateUserGroupSwitchResponse Client::updateUserGroupSwitch(const UpdateUserGroupSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserGroupSwitchWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630