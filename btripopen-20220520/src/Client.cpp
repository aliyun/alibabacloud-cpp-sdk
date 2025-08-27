#include <darabonba/Core.hpp>
#include <alibabacloud/BtripOpen20220520.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::BtripOpen20220520::Models;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{

AlibabaCloud::BtripOpen20220520::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("btripopen", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 换取accessToken接口
 *
 * @param request AccessTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccessTokenResponse
 */
AccessTokenResponse Client::accessTokenWithOptions(const AccessTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSecret()) {
    query["app_secret"] = request.appSecret();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AccessToken"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/btrip-open-auth/v1/access-token/action/take")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccessTokenResponse>();
}

/**
 * @summary 换取accessToken接口
 *
 * @param request AccessTokenRequest
 * @return AccessTokenResponse
 */
AccessTokenResponse Client::accessToken(const AccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return accessTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 创建企业部门
 *
 * @param tmpReq AddDepartmentRequest
 * @param headers AddDepartmentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDepartmentResponse
 */
AddDepartmentResponse Client::addDepartmentWithOptions(const AddDepartmentRequest &tmpReq, const AddDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddDepartmentShrinkRequest request = AddDepartmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasManagerEmployeeIdList()) {
    request.setManagerEmployeeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managerEmployeeIdList(), "manager_employee_id_list", "json"));
  }

  json body = {};
  if (!!request.hasDeptName()) {
    body["dept_name"] = request.deptName();
  }

  if (!!request.hasManagerEmployeeIdListShrink()) {
    body["manager_employee_id_list"] = request.managerEmployeeIdListShrink();
  }

  if (!!request.hasOutDeptId()) {
    body["out_dept_id"] = request.outDeptId();
  }

  if (!!request.hasOutDeptPid()) {
    body["out_dept_pid"] = request.outDeptPid();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddDepartment"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/department/v2/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDepartmentResponse>();
}

/**
 * @summary 创建企业部门
 *
 * @param request AddDepartmentRequest
 * @return AddDepartmentResponse
 */
AddDepartmentResponse Client::addDepartment(const AddDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddDepartmentHeaders headers = AddDepartmentHeaders();
  return addDepartmentWithOptions(request, headers, runtime);
}

/**
 * @summary 添加员工
 *
 * @param tmpReq AddEmployeeRequest
 * @param headers AddEmployeeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEmployeeResponse
 */
AddEmployeeResponse Client::addEmployeeWithOptions(const AddEmployeeRequest &tmpReq, const AddEmployeeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddEmployeeShrinkRequest request = AddEmployeeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBaseCityCodeList()) {
    request.setBaseCityCodeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.baseCityCodeList(), "base_city_code_list", "json"));
  }

  if (!!tmpReq.hasBaseLocationList()) {
    request.setBaseLocationListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.baseLocationList(), "base_location_list", "json"));
  }

  if (!!tmpReq.hasCertList()) {
    request.setCertListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certList(), "cert_list", "json"));
  }

  if (!!tmpReq.hasCustomRoleCodeList()) {
    request.setCustomRoleCodeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customRoleCodeList(), "custom_role_code_list", "json"));
  }

  if (!!tmpReq.hasOutDeptIdList()) {
    request.setOutDeptIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outDeptIdList(), "out_dept_id_list", "json"));
  }

  json body = {};
  if (!!request.hasAccountEmail()) {
    body["account_email"] = request.accountEmail();
  }

  if (!!request.hasAccountPhone()) {
    body["account_phone"] = request.accountPhone();
  }

  if (!!request.hasAttribute()) {
    body["attribute"] = request.attribute();
  }

  if (!!request.hasAvatar()) {
    body["avatar"] = request.avatar();
  }

  if (!!request.hasBaseCityCodeListShrink()) {
    body["base_city_code_list"] = request.baseCityCodeListShrink();
  }

  if (!!request.hasBaseLocationListShrink()) {
    body["base_location_list"] = request.baseLocationListShrink();
  }

  if (!!request.hasBirthday()) {
    body["birthday"] = request.birthday();
  }

  if (!!request.hasCertListShrink()) {
    body["cert_list"] = request.certListShrink();
  }

  if (!!request.hasCustomRoleCodeListShrink()) {
    body["custom_role_code_list"] = request.customRoleCodeListShrink();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.email();
  }

  if (!!request.hasGender()) {
    body["gender"] = request.gender();
  }

  if (!!request.hasIsAdmin()) {
    body["is_admin"] = request.isAdmin();
  }

  if (!!request.hasIsBoss()) {
    body["is_boss"] = request.isBoss();
  }

  if (!!request.hasIsDeptLeader()) {
    body["is_dept_leader"] = request.isDeptLeader();
  }

  if (!!request.hasJobNo()) {
    body["job_no"] = request.jobNo();
  }

  if (!!request.hasManagerUserId()) {
    body["manager_user_id"] = request.managerUserId();
  }

  if (!!request.hasOutDeptIdListShrink()) {
    body["out_dept_id_list"] = request.outDeptIdListShrink();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasPositionLevel()) {
    body["position_level"] = request.positionLevel();
  }

  if (!!request.hasRealName()) {
    body["real_name"] = request.realName();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  if (!!request.hasUnionId()) {
    body["union_id"] = request.unionId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserNick()) {
    body["user_nick"] = request.userNick();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddEmployee"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/employee/v2/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEmployeeResponse>();
}

/**
 * @summary 添加员工
 *
 * @param request AddEmployeeRequest
 * @return AddEmployeeResponse
 */
AddEmployeeResponse Client::addEmployee(const AddEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddEmployeeHeaders headers = AddEmployeeHeaders();
  return addEmployeeWithOptions(request, headers, runtime);
}

/**
 * @summary 批量新增企业自定义角色下人员
 *
 * @param tmpReq AddEmployeesToCustomRoleRequest
 * @param headers AddEmployeesToCustomRoleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEmployeesToCustomRoleResponse
 */
AddEmployeesToCustomRoleResponse Client::addEmployeesToCustomRoleWithOptions(const AddEmployeesToCustomRoleRequest &tmpReq, const AddEmployeesToCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddEmployeesToCustomRoleShrinkRequest request = AddEmployeesToCustomRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdList(), "user_id_list", "json"));
  }

  json body = {};
  if (!!request.hasRoleId()) {
    body["role_id"] = request.roleId();
  }

  if (!!request.hasUserIdListShrink()) {
    body["user_id_list"] = request.userIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddEmployeesToCustomRole"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/role/v1/customRoleEmployees/add")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEmployeesToCustomRoleResponse>();
}

/**
 * @summary 批量新增企业自定义角色下人员
 *
 * @param request AddEmployeesToCustomRoleRequest
 * @return AddEmployeesToCustomRoleResponse
 */
AddEmployeesToCustomRoleResponse Client::addEmployeesToCustomRole(const AddEmployeesToCustomRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddEmployeesToCustomRoleHeaders headers = AddEmployeesToCustomRoleHeaders();
  return addEmployeesToCustomRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 新增发票抬头适用人员
 *
 * @param tmpReq AddInvoiceEntityRequest
 * @param headers AddInvoiceEntityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddInvoiceEntityResponse
 */
AddInvoiceEntityResponse Client::addInvoiceEntityWithOptions(const AddInvoiceEntityRequest &tmpReq, const AddInvoiceEntityHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddInvoiceEntityShrinkRequest request = AddInvoiceEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entities(), "entities", "json"));
  }

  json body = {};
  if (!!request.hasEntitiesShrink()) {
    body["entities"] = request.entitiesShrink();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddInvoiceEntity"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/entities")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddInvoiceEntityResponse>();
}

/**
 * @summary 新增发票抬头适用人员
 *
 * @param request AddInvoiceEntityRequest
 * @return AddInvoiceEntityResponse
 */
AddInvoiceEntityResponse Client::addInvoiceEntity(const AddInvoiceEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddInvoiceEntityHeaders headers = AddInvoiceEntityHeaders();
  return addInvoiceEntityWithOptions(request, headers, runtime);
}

/**
 * @summary 商旅功能页跳转
 *
 * @param request AddressGetRequest
 * @param headers AddressGetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddressGetResponse
 */
AddressGetResponse Client::addressGetWithOptions(const AddressGetRequest &request, const AddressGetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["action_type"] = request.actionType();
  }

  if (!!request.hasArrCityCode()) {
    query["arr_city_code"] = request.arrCityCode();
  }

  if (!!request.hasArrCityName()) {
    query["arr_city_name"] = request.arrCityName();
  }

  if (!!request.hasCarScenesCode()) {
    query["car_scenes_code"] = request.carScenesCode();
  }

  if (!!request.hasDepCityCode()) {
    query["dep_city_code"] = request.depCityCode();
  }

  if (!!request.hasDepCityName()) {
    query["dep_city_name"] = request.depCityName();
  }

  if (!!request.hasDepDate()) {
    query["dep_date"] = request.depDate();
  }

  if (!!request.hasItineraryId()) {
    query["itinerary_id"] = request.itineraryId();
  }

  if (!!request.hasMiddlePage()) {
    query["middle_page"] = request.middlePage();
  }

  if (!!request.hasOrderId()) {
    query["order_Id"] = request.orderId();
  }

  if (!!request.hasPhone()) {
    query["phone"] = request.phone();
  }

  if (!!request.hasSessionParameters()) {
    query["session_parameters"] = request.sessionParameters();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasTaobaoCallbackUrl()) {
    query["taobao_callback_url"] = request.taobaoCallbackUrl();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasTravelerId()) {
    query["traveler_id"] = request.travelerId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  if (!!request.hasUseBookingProxy()) {
    query["use_booking_proxy"] = request.useBookingProxy();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddressGet"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v1/address")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddressGetResponse>();
}

/**
 * @summary 商旅功能页跳转
 *
 * @param request AddressGetRequest
 * @return AddressGetResponse
 */
AddressGetResponse Client::addressGet(const AddressGetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddressGetHeaders headers = AddressGetHeaders();
  return addressGetWithOptions(request, headers, runtime);
}

/**
 * @summary 查询机场数据
 *
 * @param request AirportSearchRequest
 * @param headers AirportSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AirportSearchResponse
 */
AirportSearchResponse Client::airportSearchWithOptions(const AirportSearchRequest &request, const AirportSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AirportSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/city/v1/airport")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AirportSearchResponse>();
}

/**
 * @summary 查询机场数据
 *
 * @param request AirportSearchRequest
 * @return AirportSearchResponse
 */
AirportSearchResponse Client::airportSearch(const AirportSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AirportSearchHeaders headers = AirportSearchHeaders();
  return airportSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 全量查询商旅城市行政区划编码信息
 *
 * @param headers AllBaseCityInfoQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllBaseCityInfoQueryResponse
 */
AllBaseCityInfoQueryResponse Client::allBaseCityInfoQueryWithOptions(const AllBaseCityInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripAccessToken()) {
    realHeaders["x-acs-btrip-access-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripAccessToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllBaseCityInfoQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/city/v1/code")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllBaseCityInfoQueryResponse>();
}

/**
 * @summary 全量查询商旅城市行政区划编码信息
 *
 * @return AllBaseCityInfoQueryResponse
 */
AllBaseCityInfoQueryResponse Client::allBaseCityInfoQuery() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AllBaseCityInfoQueryHeaders headers = AllBaseCityInfoQueryHeaders();
  return allBaseCityInfoQueryWithOptions(headers, runtime);
}

/**
 * @summary 新建出差审批单
 *
 * @param tmpReq ApplyAddRequest
 * @param headers ApplyAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAddResponse
 */
ApplyAddResponse Client::applyAddWithOptions(const ApplyAddRequest &tmpReq, const ApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyAddShrinkRequest request = ApplyAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCarRule()) {
    request.setCarRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.carRule(), "car_rule", "json"));
  }

  if (!!tmpReq.hasDefaultStandard()) {
    request.setDefaultStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultStandard(), "default_standard", "json"));
  }

  if (!!tmpReq.hasExternalTravelerList()) {
    request.setExternalTravelerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalTravelerList(), "external_traveler_list", "json"));
  }

  if (!!tmpReq.hasExternalTravelerStandard()) {
    request.setExternalTravelerStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalTravelerStandard(), "external_traveler_standard", "json"));
  }

  if (!!tmpReq.hasHotelShare()) {
    request.setHotelShareShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotelShare(), "hotel_share", "json"));
  }

  if (!!tmpReq.hasItineraryList()) {
    request.setItineraryListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.itineraryList(), "itinerary_list", "json"));
  }

  if (!!tmpReq.hasItinerarySetList()) {
    request.setItinerarySetListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.itinerarySetList(), "itinerary_set_list", "json"));
  }

  if (!!tmpReq.hasTravelerList()) {
    request.setTravelerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerList(), "traveler_list", "json"));
  }

  if (!!tmpReq.hasTravelerStandard()) {
    request.setTravelerStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerStandard(), "traveler_standard", "json"));
  }

  json body = {};
  if (!!request.hasBudget()) {
    body["budget"] = request.budget();
  }

  if (!!request.hasBudgetMerge()) {
    body["budget_merge"] = request.budgetMerge();
  }

  if (!!request.hasCarRuleShrink()) {
    body["car_rule"] = request.carRuleShrink();
  }

  if (!!request.hasCorpName()) {
    body["corp_name"] = request.corpName();
  }

  if (!!request.hasDefaultStandardShrink()) {
    body["default_standard"] = request.defaultStandardShrink();
  }

  if (!!request.hasDepartId()) {
    body["depart_id"] = request.departId();
  }

  if (!!request.hasDepartName()) {
    body["depart_name"] = request.departName();
  }

  if (!!request.hasExtendField()) {
    body["extend_field"] = request.extendField();
  }

  if (!!request.hasExternalTravelerListShrink()) {
    body["external_traveler_list"] = request.externalTravelerListShrink();
  }

  if (!!request.hasExternalTravelerStandardShrink()) {
    body["external_traveler_standard"] = request.externalTravelerStandardShrink();
  }

  if (!!request.hasFlightBudget()) {
    body["flight_budget"] = request.flightBudget();
  }

  if (!!request.hasHotelBudget()) {
    body["hotel_budget"] = request.hotelBudget();
  }

  if (!!request.hasHotelShareShrink()) {
    body["hotel_share"] = request.hotelShareShrink();
  }

  if (!!request.hasInternationalFlightCabins()) {
    body["international_flight_cabins"] = request.internationalFlightCabins();
  }

  if (!!request.hasIntlFlightBudget()) {
    body["intl_flight_budget"] = request.intlFlightBudget();
  }

  if (!!request.hasIntlHotelBudget()) {
    body["intl_hotel_budget"] = request.intlHotelBudget();
  }

  if (!!request.hasItineraryListShrink()) {
    body["itinerary_list"] = request.itineraryListShrink();
  }

  if (!!request.hasItineraryRule()) {
    body["itinerary_rule"] = request.itineraryRule();
  }

  if (!!request.hasItinerarySetListShrink()) {
    body["itinerary_set_list"] = request.itinerarySetListShrink();
  }

  if (!!request.hasLimitTraveler()) {
    body["limit_traveler"] = request.limitTraveler();
  }

  if (!!request.hasMealBudget()) {
    body["meal_budget"] = request.mealBudget();
  }

  if (!!request.hasPaymentDepartmentId()) {
    body["payment_department_id"] = request.paymentDepartmentId();
  }

  if (!!request.hasPaymentDepartmentName()) {
    body["payment_department_name"] = request.paymentDepartmentName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasSubCorpId()) {
    body["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasThirdpartApplyId()) {
    body["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasThirdpartBusinessId()) {
    body["thirdpart_business_id"] = request.thirdpartBusinessId();
  }

  if (!!request.hasThirdpartDepartId()) {
    body["thirdpart_depart_id"] = request.thirdpartDepartId();
  }

  if (!!request.hasTogetherBookRule()) {
    body["together_book_rule"] = request.togetherBookRule();
  }

  if (!!request.hasTrainBudget()) {
    body["train_budget"] = request.trainBudget();
  }

  if (!!request.hasTravelerListShrink()) {
    body["traveler_list"] = request.travelerListShrink();
  }

  if (!!request.hasTravelerStandardShrink()) {
    body["traveler_standard"] = request.travelerStandardShrink();
  }

  if (!!request.hasTripCause()) {
    body["trip_cause"] = request.tripCause();
  }

  if (!!request.hasTripDay()) {
    body["trip_day"] = request.tripDay();
  }

  if (!!request.hasTripTitle()) {
    body["trip_title"] = request.tripTitle();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasUnionNo()) {
    body["union_no"] = request.unionNo();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  if (!!request.hasVehicleBudget()) {
    body["vehicle_budget"] = request.vehicleBudget();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/biz-trip")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAddResponse>();
}

/**
 * @summary 新建出差审批单
 *
 * @param request ApplyAddRequest
 * @return ApplyAddResponse
 */
ApplyAddResponse Client::applyAdd(const ApplyAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyAddHeaders headers = ApplyAddHeaders();
  return applyAddWithOptions(request, headers, runtime);
}

/**
 * @summary 更新出差审批单（状态）
 *
 * @param request ApplyApproveRequest
 * @param headers ApplyApproveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyApproveResponse
 */
ApplyApproveResponse Client::applyApproveWithOptions(const ApplyApproveRequest &request, const ApplyApproveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplyId()) {
    body["apply_id"] = request.applyId();
  }

  if (!!request.hasNote()) {
    body["note"] = request.note();
  }

  if (!!request.hasOperateTime()) {
    body["operate_time"] = request.operateTime();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasSubCorpId()) {
    body["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyApprove"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/biz-trip/action/approve")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyApproveResponse>();
}

/**
 * @summary 更新出差审批单（状态）
 *
 * @param request ApplyApproveRequest
 * @return ApplyApproveResponse
 */
ApplyApproveResponse Client::applyApprove(const ApplyApproveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyApproveHeaders headers = ApplyApproveHeaders();
  return applyApproveWithOptions(request, headers, runtime);
}

/**
 * @summary 外部审批节点状态同步
 *
 * @param tmpReq ApplyExternalNodeStatusUpdateRequest
 * @param headers ApplyExternalNodeStatusUpdateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyExternalNodeStatusUpdateResponse
 */
ApplyExternalNodeStatusUpdateResponse Client::applyExternalNodeStatusUpdateWithOptions(const ApplyExternalNodeStatusUpdateRequest &tmpReq, const ApplyExternalNodeStatusUpdateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyExternalNodeStatusUpdateShrinkRequest request = ApplyExternalNodeStatusUpdateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOperationRecords()) {
    request.setOperationRecordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.operationRecords(), "operation_records", "json"));
  }

  json body = {};
  if (!!request.hasNodeId()) {
    body["node_id"] = request.nodeId();
  }

  if (!!request.hasOperationRecordsShrink()) {
    body["operation_records"] = request.operationRecordsShrink();
  }

  if (!!request.hasProcessActionResult()) {
    body["process_action_result"] = request.processActionResult();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyExternalNodeStatusUpdate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/external-nodes/action/status-update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyExternalNodeStatusUpdateResponse>();
}

/**
 * @summary 外部审批节点状态同步
 *
 * @param request ApplyExternalNodeStatusUpdateRequest
 * @return ApplyExternalNodeStatusUpdateResponse
 */
ApplyExternalNodeStatusUpdateResponse Client::applyExternalNodeStatusUpdate(const ApplyExternalNodeStatusUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyExternalNodeStatusUpdateHeaders headers = ApplyExternalNodeStatusUpdateHeaders();
  return applyExternalNodeStatusUpdateWithOptions(request, headers, runtime);
}

/**
 * @summary 申请发票
 *
 * @param tmpReq ApplyInvoiceTaskRequest
 * @param headers ApplyInvoiceTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyInvoiceTaskResponse
 */
ApplyInvoiceTaskResponse Client::applyInvoiceTaskWithOptions(const ApplyInvoiceTaskRequest &tmpReq, const ApplyInvoiceTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyInvoiceTaskShrinkRequest request = ApplyInvoiceTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInvoiceTaskList()) {
    request.setInvoiceTaskListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.invoiceTaskList(), "invoice_task_list", "json"));
  }

  json body = {};
  if (!!request.hasBillDate()) {
    body["bill_date"] = request.billDate();
  }

  if (!!request.hasInvoiceTaskListShrink()) {
    body["invoice_task_list"] = request.invoiceTaskListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyInvoiceTask"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/apply-invoice-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyInvoiceTaskResponse>();
}

/**
 * @summary 申请发票
 *
 * @param request ApplyInvoiceTaskRequest
 * @return ApplyInvoiceTaskResponse
 */
ApplyInvoiceTaskResponse Client::applyInvoiceTask(const ApplyInvoiceTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyInvoiceTaskHeaders headers = ApplyInvoiceTaskHeaders();
  return applyInvoiceTaskWithOptions(request, headers, runtime);
}

/**
 * @summary 查询出差审批单列表
 *
 * @param request ApplyListQueryRequest
 * @param headers ApplyListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyListQueryResponse
 */
ApplyListQueryResponse Client::applyListQueryWithOptions(const ApplyListQueryRequest &request, const ApplyListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllApply()) {
    query["all_apply"] = request.allApply();
  }

  if (!!request.hasDepartId()) {
    query["depart_id"] = request.departId();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasGmtModified()) {
    query["gmt_modified"] = request.gmtModified();
  }

  if (!!request.hasOnlyShangLvApply()) {
    query["only_shang_lv_apply"] = request.onlyShangLvApply();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  if (!!request.hasUnionNo()) {
    query["union_no"] = request.unionNo();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/biz-trips")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyListQueryResponse>();
}

/**
 * @summary 查询出差审批单列表
 *
 * @param request ApplyListQueryRequest
 * @return ApplyListQueryResponse
 */
ApplyListQueryResponse Client::applyListQuery(const ApplyListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyListQueryHeaders headers = ApplyListQueryHeaders();
  return applyListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 更新出差审批单
 *
 * @param tmpReq ApplyModifyRequest
 * @param headers ApplyModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyModifyResponse
 */
ApplyModifyResponse Client::applyModifyWithOptions(const ApplyModifyRequest &tmpReq, const ApplyModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyModifyShrinkRequest request = ApplyModifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCarRule()) {
    request.setCarRuleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.carRule(), "car_rule", "json"));
  }

  if (!!tmpReq.hasDefaultStandard()) {
    request.setDefaultStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultStandard(), "default_standard", "json"));
  }

  if (!!tmpReq.hasExternalTravelerList()) {
    request.setExternalTravelerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalTravelerList(), "external_traveler_list", "json"));
  }

  if (!!tmpReq.hasExternalTravelerStandard()) {
    request.setExternalTravelerStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalTravelerStandard(), "external_traveler_standard", "json"));
  }

  if (!!tmpReq.hasHotelShare()) {
    request.setHotelShareShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotelShare(), "hotel_share", "json"));
  }

  if (!!tmpReq.hasItineraryList()) {
    request.setItineraryListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.itineraryList(), "itinerary_list", "json"));
  }

  if (!!tmpReq.hasItinerarySetList()) {
    request.setItinerarySetListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.itinerarySetList(), "itinerary_set_list", "json"));
  }

  if (!!tmpReq.hasTravelerList()) {
    request.setTravelerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerList(), "traveler_list", "json"));
  }

  if (!!tmpReq.hasTravelerStandard()) {
    request.setTravelerStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerStandard(), "traveler_standard", "json"));
  }

  json body = {};
  if (!!request.hasBudget()) {
    body["budget"] = request.budget();
  }

  if (!!request.hasBudgetMerge()) {
    body["budget_merge"] = request.budgetMerge();
  }

  if (!!request.hasCarRuleShrink()) {
    body["car_rule"] = request.carRuleShrink();
  }

  if (!!request.hasCorpName()) {
    body["corp_name"] = request.corpName();
  }

  if (!!request.hasDefaultStandardShrink()) {
    body["default_standard"] = request.defaultStandardShrink();
  }

  if (!!request.hasDepartId()) {
    body["depart_id"] = request.departId();
  }

  if (!!request.hasDepartName()) {
    body["depart_name"] = request.departName();
  }

  if (!!request.hasExtendField()) {
    body["extend_field"] = request.extendField();
  }

  if (!!request.hasExternalTravelerListShrink()) {
    body["external_traveler_list"] = request.externalTravelerListShrink();
  }

  if (!!request.hasExternalTravelerStandardShrink()) {
    body["external_traveler_standard"] = request.externalTravelerStandardShrink();
  }

  if (!!request.hasFlightBudget()) {
    body["flight_budget"] = request.flightBudget();
  }

  if (!!request.hasHotelBudget()) {
    body["hotel_budget"] = request.hotelBudget();
  }

  if (!!request.hasHotelShareShrink()) {
    body["hotel_share"] = request.hotelShareShrink();
  }

  if (!!request.hasIntlFlightBudget()) {
    body["intl_flight_budget"] = request.intlFlightBudget();
  }

  if (!!request.hasIntlHotelBudget()) {
    body["intl_hotel_budget"] = request.intlHotelBudget();
  }

  if (!!request.hasItineraryListShrink()) {
    body["itinerary_list"] = request.itineraryListShrink();
  }

  if (!!request.hasItineraryRule()) {
    body["itinerary_rule"] = request.itineraryRule();
  }

  if (!!request.hasItinerarySetListShrink()) {
    body["itinerary_set_list"] = request.itinerarySetListShrink();
  }

  if (!!request.hasLimitTraveler()) {
    body["limit_traveler"] = request.limitTraveler();
  }

  if (!!request.hasMealBudget()) {
    body["meal_budget"] = request.mealBudget();
  }

  if (!!request.hasPaymentDepartmentId()) {
    body["payment_department_id"] = request.paymentDepartmentId();
  }

  if (!!request.hasPaymentDepartmentName()) {
    body["payment_department_name"] = request.paymentDepartmentName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasSubCorpId()) {
    body["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasThirdpartApplyId()) {
    body["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasThirdpartBusinessId()) {
    body["thirdpart_business_id"] = request.thirdpartBusinessId();
  }

  if (!!request.hasThirdpartDepartId()) {
    body["thirdpart_depart_id"] = request.thirdpartDepartId();
  }

  if (!!request.hasTogetherBookRule()) {
    body["together_book_rule"] = request.togetherBookRule();
  }

  if (!!request.hasTrainBudget()) {
    body["train_budget"] = request.trainBudget();
  }

  if (!!request.hasTravelerListShrink()) {
    body["traveler_list"] = request.travelerListShrink();
  }

  if (!!request.hasTravelerStandardShrink()) {
    body["traveler_standard"] = request.travelerStandardShrink();
  }

  if (!!request.hasTripCause()) {
    body["trip_cause"] = request.tripCause();
  }

  if (!!request.hasTripDay()) {
    body["trip_day"] = request.tripDay();
  }

  if (!!request.hasTripTitle()) {
    body["trip_title"] = request.tripTitle();
  }

  if (!!request.hasUnionNo()) {
    body["union_no"] = request.unionNo();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  if (!!request.hasVehicleBudget()) {
    body["vehicle_budget"] = request.vehicleBudget();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyModify"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/biz-trip")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyModifyResponse>();
}

/**
 * @summary 更新出差审批单
 *
 * @param request ApplyModifyRequest
 * @return ApplyModifyResponse
 */
ApplyModifyResponse Client::applyModify(const ApplyModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyModifyHeaders headers = ApplyModifyHeaders();
  return applyModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询出差审批单详情
 *
 * @param request ApplyQueryRequest
 * @param headers ApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyQueryResponse
 */
ApplyQueryResponse Client::applyQueryWithOptions(const ApplyQueryRequest &request, const ApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasApplyShowId()) {
    query["apply_show_id"] = request.applyShowId();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/biz-trip")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyQueryResponse>();
}

/**
 * @summary 查询出差审批单详情
 *
 * @param request ApplyQueryRequest
 * @return ApplyQueryResponse
 */
ApplyQueryResponse Client::applyQuery(const ApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyQueryHeaders headers = ApplyQueryHeaders();
  return applyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 执行审批任务
 *
 * @param request ApplyTripTaskExecuteRequest
 * @param headers ApplyTripTaskExecuteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyTripTaskExecuteResponse
 */
ApplyTripTaskExecuteResponse Client::applyTripTaskExecuteWithOptions(const ApplyTripTaskExecuteRequest &request, const ApplyTripTaskExecuteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasActionFrom()) {
    body["action_from"] = request.actionFrom();
  }

  if (!!request.hasComment()) {
    body["comment"] = request.comment();
  }

  if (!!request.hasTaskAction()) {
    body["task_action"] = request.taskAction();
  }

  if (!!request.hasTaskId()) {
    body["task_id"] = request.taskId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyTripTaskExecute"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/trip-task/action/execute")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyTripTaskExecuteResponse>();
}

/**
 * @summary 执行审批任务
 *
 * @param request ApplyTripTaskExecuteRequest
 * @return ApplyTripTaskExecuteResponse
 */
ApplyTripTaskExecuteResponse Client::applyTripTaskExecute(const ApplyTripTaskExecuteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ApplyTripTaskExecuteHeaders headers = ApplyTripTaskExecuteHeaders();
  return applyTripTaskExecuteWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索国内/国际（港澳台）城市基础行政区划数据
 *
 * @param request BaseCityInfoSearchRequest
 * @param headers BaseCityInfoSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BaseCityInfoSearchResponse
 */
BaseCityInfoSearchResponse Client::baseCityInfoSearchWithOptions(const BaseCityInfoSearchRequest &request, const BaseCityInfoSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripAccessToken()) {
    realHeaders["x-acs-btrip-access-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripAccessToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BaseCityInfoSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/city/v1/cities/action/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BaseCityInfoSearchResponse>();
}

/**
 * @summary 搜索国内/国际（港澳台）城市基础行政区划数据
 *
 * @param request BaseCityInfoSearchRequest
 * @return BaseCityInfoSearchResponse
 */
BaseCityInfoSearchResponse Client::baseCityInfoSearch(const BaseCityInfoSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BaseCityInfoSearchHeaders headers = BaseCityInfoSearchHeaders();
  return baseCityInfoSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 商旅账单内容修改
 *
 * @param request BtripBillInfoAdjustRequest
 * @param headers BtripBillInfoAdjustHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return BtripBillInfoAdjustResponse
 */
BtripBillInfoAdjustResponse Client::btripBillInfoAdjustWithOptions(const BtripBillInfoAdjustRequest &request, const BtripBillInfoAdjustHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPrimaryId()) {
    body["primary_id"] = request.primaryId();
  }

  if (!!request.hasThirdPartCostCenterId()) {
    body["third_part_cost_center_id"] = request.thirdPartCostCenterId();
  }

  if (!!request.hasThirdPartDepartmentId()) {
    body["third_part_department_id"] = request.thirdPartDepartmentId();
  }

  if (!!request.hasThirdPartInvoiceId()) {
    body["third_part_invoice_id"] = request.thirdPartInvoiceId();
  }

  if (!!request.hasThirdPartProjectId()) {
    body["third_part_project_id"] = request.thirdPartProjectId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BtripBillInfoAdjust"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bill/v1/info/action/adjust")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BtripBillInfoAdjustResponse>();
}

/**
 * @summary 商旅账单内容修改
 *
 * @param request BtripBillInfoAdjustRequest
 * @return BtripBillInfoAdjustResponse
 */
BtripBillInfoAdjustResponse Client::btripBillInfoAdjust(const BtripBillInfoAdjustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  BtripBillInfoAdjustHeaders headers = BtripBillInfoAdjustHeaders();
  return btripBillInfoAdjustWithOptions(request, headers, runtime);
}

/**
 * @summary 同步市内用车审批单
 *
 * @param tmpReq CarApplyAddRequest
 * @param headers CarApplyAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarApplyAddResponse
 */
CarApplyAddResponse Client::carApplyAddWithOptions(const CarApplyAddRequest &tmpReq, const CarApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CarApplyAddShrinkRequest request = CarApplyAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTravelerStandard()) {
    request.setTravelerStandardShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerStandard(), "traveler_standard", "json"));
  }

  json body = {};
  if (!!request.hasCause()) {
    body["cause"] = request.cause();
  }

  if (!!request.hasCity()) {
    body["city"] = request.city();
  }

  if (!!request.hasCityCodeSet()) {
    body["city_code_set"] = request.cityCodeSet();
  }

  if (!!request.hasDate()) {
    body["date"] = request.date();
  }

  if (!!request.hasFinishedDate()) {
    body["finished_date"] = request.finishedDate();
  }

  if (!!request.hasProjectCode()) {
    body["project_code"] = request.projectCode();
  }

  if (!!request.hasProjectName()) {
    body["project_name"] = request.projectName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasThirdPartApplyId()) {
    body["third_part_apply_id"] = request.thirdPartApplyId();
  }

  if (!!request.hasThirdPartCostCenterId()) {
    body["third_part_cost_center_id"] = request.thirdPartCostCenterId();
  }

  if (!!request.hasThirdPartInvoiceId()) {
    body["third_part_invoice_id"] = request.thirdPartInvoiceId();
  }

  if (!!request.hasTimesTotal()) {
    body["times_total"] = request.timesTotal();
  }

  if (!!request.hasTimesType()) {
    body["times_type"] = request.timesType();
  }

  if (!!request.hasTimesUsed()) {
    body["times_used"] = request.timesUsed();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  if (!!request.hasTravelerStandardShrink()) {
    body["traveler_standard"] = request.travelerStandardShrink();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CarApplyAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/car")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarApplyAddResponse>();
}

/**
 * @summary 同步市内用车审批单
 *
 * @param request CarApplyAddRequest
 * @return CarApplyAddResponse
 */
CarApplyAddResponse Client::carApplyAdd(const CarApplyAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarApplyAddHeaders headers = CarApplyAddHeaders();
  return carApplyAddWithOptions(request, headers, runtime);
}

/**
 * @summary 更新市内用车审批单
 *
 * @param request CarApplyModifyRequest
 * @param headers CarApplyModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarApplyModifyResponse
 */
CarApplyModifyResponse Client::carApplyModifyWithOptions(const CarApplyModifyRequest &request, const CarApplyModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperateTime()) {
    body["operate_time"] = request.operateTime();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasThirdPartApplyId()) {
    body["third_part_apply_id"] = request.thirdPartApplyId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CarApplyModify"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/car")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarApplyModifyResponse>();
}

/**
 * @summary 更新市内用车审批单
 *
 * @param request CarApplyModifyRequest
 * @return CarApplyModifyResponse
 */
CarApplyModifyResponse Client::carApplyModify(const CarApplyModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarApplyModifyHeaders headers = CarApplyModifyHeaders();
  return carApplyModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询市内用车审批单
 *
 * @param request CarApplyQueryRequest
 * @param headers CarApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarApplyQueryResponse
 */
CarApplyQueryResponse Client::carApplyQueryWithOptions(const CarApplyQueryRequest &request, const CarApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreatedEndAt()) {
    query["created_end_at"] = request.createdEndAt();
  }

  if (!!request.hasCreatedStartAt()) {
    query["created_start_at"] = request.createdStartAt();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasThirdPartApplyId()) {
    query["third_part_apply_id"] = request.thirdPartApplyId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CarApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/car")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarApplyQueryResponse>();
}

/**
 * @summary 查询市内用车审批单
 *
 * @param request CarApplyQueryRequest
 * @return CarApplyQueryResponse
 */
CarApplyQueryResponse Client::carApplyQuery(const CarApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarApplyQueryHeaders headers = CarApplyQueryHeaders();
  return carApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用车记账数据
 *
 * @param request CarBillSettlementQueryRequest
 * @param headers CarBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarBillSettlementQueryResponse
 */
CarBillSettlementQueryResponse Client::carBillSettlementQueryWithOptions(const CarBillSettlementQueryRequest &request, const CarBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CarBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/car/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarBillSettlementQueryResponse>();
}

/**
 * @summary 查询用车记账数据
 *
 * @param request CarBillSettlementQueryRequest
 * @return CarBillSettlementQueryResponse
 */
CarBillSettlementQueryResponse Client::carBillSettlementQuery(const CarBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarBillSettlementQueryHeaders headers = CarBillSettlementQueryHeaders();
  return carBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用车订单列表
 *
 * @param request CarOrderListQueryRequest
 * @param headers CarOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarOrderListQueryResponse
 */
CarOrderListQueryResponse Client::carOrderListQueryWithOptions(const CarOrderListQueryRequest &request, const CarOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllApply()) {
    query["all_apply"] = request.allApply();
  }

  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasDepartId()) {
    query["depart_id"] = request.departId();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasUpdateEndTime()) {
    query["update_end_time"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    query["update_start_time"] = request.updateStartTime();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CarOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/car/v1/order-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarOrderListQueryResponse>();
}

/**
 * @summary 查询用车订单列表
 *
 * @param request CarOrderListQueryRequest
 * @return CarOrderListQueryResponse
 */
CarOrderListQueryResponse Client::carOrderListQuery(const CarOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarOrderListQueryHeaders headers = CarOrderListQueryHeaders();
  return carOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 用车订单查询
 *
 * @param request CarOrderQueryRequest
 * @param headers CarOrderQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarOrderQueryResponse
 */
CarOrderQueryResponse Client::carOrderQueryWithOptions(const CarOrderQueryRequest &request, const CarOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasSubOrderId()) {
    query["sub_order_id"] = request.subOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CarOrderQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/car/v1/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarOrderQueryResponse>();
}

/**
 * @summary 用车订单查询
 *
 * @param request CarOrderQueryRequest
 * @return CarOrderQueryResponse
 */
CarOrderQueryResponse Client::carOrderQuery(const CarOrderQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarOrderQueryHeaders headers = CarOrderQueryHeaders();
  return carOrderQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业用车场景
 *
 * @param headers CarSceneQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CarSceneQueryResponse
 */
CarSceneQueryResponse Client::carSceneQueryWithOptions(const CarSceneQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CarSceneQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/car/v1/scenes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CarSceneQueryResponse>();
}

/**
 * @summary 查询企业用车场景
 *
 * @return CarSceneQueryResponse
 */
CarSceneQueryResponse Client::carSceneQuery() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CarSceneQueryHeaders headers = CarSceneQueryHeaders();
  return carSceneQueryWithOptions(headers, runtime);
}

/**
 * @summary 渠道商创建企业
 *
 * @param request ChannelCorpCreateRequest
 * @param headers ChannelCorpCreateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChannelCorpCreateResponse
 */
ChannelCorpCreateResponse Client::channelCorpCreateWithOptions(const ChannelCorpCreateRequest &request, const ChannelCorpCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdministratorName()) {
    body["administrator_name"] = request.administratorName();
  }

  if (!!request.hasAdministratorPhone()) {
    body["administrator_phone"] = request.administratorPhone();
  }

  if (!!request.hasCity()) {
    body["city"] = request.city();
  }

  if (!!request.hasCorpName()) {
    body["corp_name"] = request.corpName();
  }

  if (!!request.hasProvince()) {
    body["province"] = request.province();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasThirdCorpId()) {
    body["third_corp_id"] = request.thirdCorpId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChannelCorpCreate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/corp/v1/channelCorps")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChannelCorpCreateResponse>();
}

/**
 * @summary 渠道商创建企业
 *
 * @param request ChannelCorpCreateRequest
 * @return ChannelCorpCreateResponse
 */
ChannelCorpCreateResponse Client::channelCorpCreate(const ChannelCorpCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChannelCorpCreateHeaders headers = ChannelCorpCreateHeaders();
  return channelCorpCreateWithOptions(request, headers, runtime);
}

/**
 * @summary 查询行政区划（市，区）基础数据
 *
 * @param request CitySearchRequest
 * @param headers CitySearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CitySearchResponse
 */
CitySearchResponse Client::citySearchWithOptions(const CitySearchRequest &request, const CitySearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CitySearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/city/v1/city")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CitySearchResponse>();
}

/**
 * @summary 查询行政区划（市，区）基础数据
 *
 * @param request CitySearchRequest
 * @return CitySearchResponse
 */
CitySearchResponse Client::citySearch(const CitySearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CitySearchHeaders headers = CitySearchHeaders();
  return citySearchWithOptions(request, headers, runtime);
}

/**
 * @summary 查询退改审批信息
 *
 * @param request CommonApplyQueryRequest
 * @param headers CommonApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommonApplyQueryResponse
 */
CommonApplyQueryResponse Client::commonApplyQueryWithOptions(const CommonApplyQueryRequest &request, const CommonApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBizCategory()) {
    query["biz_category"] = request.bizCategory();
  }

  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CommonApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/common")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommonApplyQueryResponse>();
}

/**
 * @summary 查询退改审批信息
 *
 * @param request CommonApplyQueryRequest
 * @return CommonApplyQueryResponse
 */
CommonApplyQueryResponse Client::commonApplyQuery(const CommonApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CommonApplyQueryHeaders headers = CommonApplyQueryHeaders();
  return commonApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 退改审批结果同步
 *
 * @param request CommonApplySyncRequest
 * @param headers CommonApplySyncHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommonApplySyncResponse
 */
CommonApplySyncResponse Client::commonApplySyncWithOptions(const CommonApplySyncRequest &request, const CommonApplySyncHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBizCategory()) {
    query["biz_category"] = request.bizCategory();
  }

  if (!!request.hasRemark()) {
    query["remark"] = request.remark();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasThirdpartyFlowId()) {
    query["thirdparty_flow_id"] = request.thirdpartyFlowId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CommonApplySync"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/syn-common")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommonApplySyncResponse>();
}

/**
 * @summary 退改审批结果同步
 *
 * @param request CommonApplySyncRequest
 * @return CommonApplySyncResponse
 */
CommonApplySyncResponse Client::commonApplySync(const CommonApplySyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CommonApplySyncHeaders headers = CommonApplySyncHeaders();
  return commonApplySyncWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务商机票记账数据
 *
 * @param request CooperatorFlightBillSettlementQueryRequest
 * @param headers CooperatorFlightBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CooperatorFlightBillSettlementQueryResponse
 */
CooperatorFlightBillSettlementQueryResponse Client::cooperatorFlightBillSettlementQueryWithOptions(const CooperatorFlightBillSettlementQueryRequest &request, const CooperatorFlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasCooperatorId()) {
    query["cooperator_id"] = request.cooperatorId();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CooperatorFlightBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cooperator-flight/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CooperatorFlightBillSettlementQueryResponse>();
}

/**
 * @summary 查询服务商机票记账数据
 *
 * @param request CooperatorFlightBillSettlementQueryRequest
 * @return CooperatorFlightBillSettlementQueryResponse
 */
CooperatorFlightBillSettlementQueryResponse Client::cooperatorFlightBillSettlementQuery(const CooperatorFlightBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CooperatorFlightBillSettlementQueryHeaders headers = CooperatorFlightBillSettlementQueryHeaders();
  return cooperatorFlightBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务商酒店记账数据
 *
 * @param request CooperatorHotelBillSettlementQueryRequest
 * @param headers CooperatorHotelBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CooperatorHotelBillSettlementQueryResponse
 */
CooperatorHotelBillSettlementQueryResponse Client::cooperatorHotelBillSettlementQueryWithOptions(const CooperatorHotelBillSettlementQueryRequest &request, const CooperatorHotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasCooperatorId()) {
    query["cooperator_id"] = request.cooperatorId();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CooperatorHotelBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cooperator-hotel/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CooperatorHotelBillSettlementQueryResponse>();
}

/**
 * @summary 查询服务商酒店记账数据
 *
 * @param request CooperatorHotelBillSettlementQueryRequest
 * @return CooperatorHotelBillSettlementQueryResponse
 */
CooperatorHotelBillSettlementQueryResponse Client::cooperatorHotelBillSettlementQuery(const CooperatorHotelBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CooperatorHotelBillSettlementQueryHeaders headers = CooperatorHotelBillSettlementQueryHeaders();
  return cooperatorHotelBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单事件推送
 *
 * @param request CooperatorHotelEventPushRequest
 * @param headers CooperatorHotelEventPushHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CooperatorHotelEventPushResponse
 */
CooperatorHotelEventPushResponse Client::cooperatorHotelEventPushWithOptions(const CooperatorHotelEventPushRequest &request, const CooperatorHotelEventPushHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeOrderStatus()) {
    body["change_order_status"] = request.changeOrderStatus();
  }

  if (!!request.hasChangeOrderStatusDesc()) {
    body["change_order_status_desc"] = request.changeOrderStatusDesc();
  }

  if (!!request.hasCooperatorOrderId()) {
    body["cooperator_order_id"] = request.cooperatorOrderId();
  }

  if (!!request.hasEvent()) {
    body["event"] = request.event();
  }

  if (!!request.hasEventDesc()) {
    body["event_desc"] = request.eventDesc();
  }

  if (!!request.hasEventTime()) {
    body["event_time"] = request.eventTime();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CooperatorHotelEventPush"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/coop-hotel/v1/orders/events")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CooperatorHotelEventPushResponse>();
}

/**
 * @summary 酒店订单事件推送
 *
 * @param request CooperatorHotelEventPushRequest
 * @return CooperatorHotelEventPushResponse
 */
CooperatorHotelEventPushResponse Client::cooperatorHotelEventPush(const CooperatorHotelEventPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CooperatorHotelEventPushHeaders headers = CooperatorHotelEventPushHeaders();
  return cooperatorHotelEventPushWithOptions(request, headers, runtime);
}

/**
 * @summary 个人支付结果推送
 *
 * @param request CooperatorSyncPayStatusRequest
 * @param headers CooperatorSyncPayStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CooperatorSyncPayStatusResponse
 */
CooperatorSyncPayStatusResponse Client::cooperatorSyncPayStatusWithOptions(const CooperatorSyncPayStatusRequest &request, const CooperatorSyncPayStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCooperatorOrderId()) {
    body["cooperator_order_id"] = request.cooperatorOrderId();
  }

  if (!!request.hasCooperatorPayNo()) {
    body["cooperator_pay_no"] = request.cooperatorPayNo();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasPayStatus()) {
    body["pay_status"] = request.payStatus();
  }

  if (!!request.hasPayTime()) {
    body["pay_time"] = request.payTime();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CooperatorSyncPayStatus"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/coop-pay/v1/cashiers/status")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CooperatorSyncPayStatusResponse>();
}

/**
 * @summary 个人支付结果推送
 *
 * @param request CooperatorSyncPayStatusRequest
 * @return CooperatorSyncPayStatusResponse
 */
CooperatorSyncPayStatusResponse Client::cooperatorSyncPayStatus(const CooperatorSyncPayStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CooperatorSyncPayStatusHeaders headers = CooperatorSyncPayStatusHeaders();
  return cooperatorSyncPayStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 获取关联可调用企业接口
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CorpAuthLinkInfoQueryResponse
 */
CorpAuthLinkInfoQueryResponse Client::corpAuthLinkInfoQueryWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CorpAuthLinkInfoQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/corp-authority-link/v1/info")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CorpAuthLinkInfoQueryResponse>();
}

/**
 * @summary 获取关联可调用企业接口
 *
 * @return CorpAuthLinkInfoQueryResponse
 */
CorpAuthLinkInfoQueryResponse Client::corpAuthLinkInfoQuery() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return corpAuthLinkInfoQueryWithOptions(headers, runtime);
}

/**
 * @summary 换取CorpToken接口
 *
 * @param request CorpTokenRequest
 * @param headers CorpTokenHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CorpTokenResponse
 */
CorpTokenResponse Client::corpTokenWithOptions(const CorpTokenRequest &request, const CorpTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSecret()) {
    query["app_secret"] = request.appSecret();
  }

  if (!!request.hasCorpId()) {
    query["corp_id"] = request.corpId();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripAccessToken()) {
    realHeaders["x-acs-btrip-access-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripAccessToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CorpToken"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/btrip-open-auth/v1/corp-token/action/take")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CorpTokenResponse>();
}

/**
 * @summary 换取CorpToken接口
 *
 * @param request CorpTokenRequest
 * @return CorpTokenResponse
 */
CorpTokenResponse Client::corpToken(const CorpTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CorpTokenHeaders headers = CorpTokenHeaders();
  return corpTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 删除成本中心
 *
 * @param request CostCenterDeleteRequest
 * @param headers CostCenterDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CostCenterDeleteResponse
 */
CostCenterDeleteResponse Client::costCenterDeleteWithOptions(const CostCenterDeleteRequest &request, const CostCenterDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdpartId()) {
    query["thirdpart_id"] = request.thirdpartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CostCenterDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/delete-costcenter")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CostCenterDeleteResponse>();
}

/**
 * @summary 删除成本中心
 *
 * @param request CostCenterDeleteRequest
 * @return CostCenterDeleteResponse
 */
CostCenterDeleteResponse Client::costCenterDelete(const CostCenterDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CostCenterDeleteHeaders headers = CostCenterDeleteHeaders();
  return costCenterDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 修改成本中心
 *
 * @param request CostCenterModifyRequest
 * @param headers CostCenterModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CostCenterModifyResponse
 */
CostCenterModifyResponse Client::costCenterModifyWithOptions(const CostCenterModifyRequest &request, const CostCenterModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlipayNo()) {
    body["alipay_no"] = request.alipayNo();
  }

  if (!!request.hasDisable()) {
    body["disable"] = request.disable();
  }

  if (!!request.hasNumber()) {
    body["number"] = request.number();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasThirdpartId()) {
    body["thirdpart_id"] = request.thirdpartId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CostCenterModify"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/modify-costcenter")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CostCenterModifyResponse>();
}

/**
 * @summary 修改成本中心
 *
 * @param request CostCenterModifyRequest
 * @return CostCenterModifyResponse
 */
CostCenterModifyResponse Client::costCenterModify(const CostCenterModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CostCenterModifyHeaders headers = CostCenterModifyHeaders();
  return costCenterModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 查看成本中心
 *
 * @param request CostCenterQueryRequest
 * @param headers CostCenterQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CostCenterQueryResponse
 */
CostCenterQueryResponse Client::costCenterQueryWithOptions(const CostCenterQueryRequest &request, const CostCenterQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisable()) {
    query["disable"] = request.disable();
  }

  if (!!request.hasNeedOrgEntity()) {
    query["need_org_entity"] = request.needOrgEntity();
  }

  if (!!request.hasThirdpartId()) {
    query["thirdpart_id"] = request.thirdpartId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CostCenterQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/costcenter")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CostCenterQueryResponse>();
}

/**
 * @summary 查看成本中心
 *
 * @param request CostCenterQueryRequest
 * @return CostCenterQueryResponse
 */
CostCenterQueryResponse Client::costCenterQuery(const CostCenterQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CostCenterQueryHeaders headers = CostCenterQueryHeaders();
  return costCenterQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 保存成本中心
 *
 * @param request CostCenterSaveRequest
 * @param headers CostCenterSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CostCenterSaveResponse
 */
CostCenterSaveResponse Client::costCenterSaveWithOptions(const CostCenterSaveRequest &request, const CostCenterSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlipayNo()) {
    body["alipay_no"] = request.alipayNo();
  }

  if (!!request.hasDisable()) {
    body["disable"] = request.disable();
  }

  if (!!request.hasNumber()) {
    body["number"] = request.number();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasThirdpartId()) {
    body["thirdpart_id"] = request.thirdpartId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CostCenterSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/save-costcenter")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CostCenterSaveResponse>();
}

/**
 * @summary 保存成本中心
 *
 * @param request CostCenterSaveRequest
 * @return CostCenterSaveResponse
 */
CostCenterSaveResponse Client::costCenterSave(const CostCenterSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CostCenterSaveHeaders headers = CostCenterSaveHeaders();
  return costCenterSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 创建企业自定义角色
 *
 * @param request CreateCustomRoleRequest
 * @param headers CreateCustomRoleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomRoleResponse
 */
CreateCustomRoleResponse Client::createCustomRoleWithOptions(const CreateCustomRoleRequest &request, const CreateCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleId()) {
    body["role_id"] = request.roleId();
  }

  if (!!request.hasRoleName()) {
    body["role_name"] = request.roleName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCustomRole"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/role/v1/customRoles/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomRoleResponse>();
}

/**
 * @summary 创建企业自定义角色
 *
 * @param request CreateCustomRoleRequest
 * @return CreateCustomRoleResponse
 */
CreateCustomRoleResponse Client::createCustomRole(const CreateCustomRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateCustomRoleHeaders headers = CreateCustomRoleHeaders();
  return createCustomRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建子企业
 *
 * @param request CreateSubCorpRequest
 * @param headers CreateSubCorpHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCorpResponse
 */
CreateSubCorpResponse Client::createSubCorpWithOptions(const CreateSubCorpRequest &request, const CreateSubCorpHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOuterCorpId()) {
    body["outer_corp_id"] = request.outerCorpId();
  }

  if (!!request.hasOuterCorpName()) {
    body["outer_corp_name"] = request.outerCorpName();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSubCorp"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sub_corps/v1/corps")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubCorpResponse>();
}

/**
 * @summary 创建子企业
 *
 * @param request CreateSubCorpRequest
 * @return CreateSubCorpResponse
 */
CreateSubCorpResponse Client::createSubCorp(const CreateSubCorpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSubCorpHeaders headers = CreateSubCorpHeaders();
  return createSubCorpWithOptions(request, headers, runtime);
}

/**
 * @summary 删除企业自定义角色
 *
 * @param request DeleteCustomRoleRequest
 * @param headers DeleteCustomRoleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomRoleResponse
 */
DeleteCustomRoleResponse Client::deleteCustomRoleWithOptions(const DeleteCustomRoleRequest &request, const DeleteCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleId()) {
    body["role_id"] = request.roleId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteCustomRole"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/role/v1/customRoles/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomRoleResponse>();
}

/**
 * @summary 删除企业自定义角色
 *
 * @param request DeleteCustomRoleRequest
 * @return DeleteCustomRoleResponse
 */
DeleteCustomRoleResponse Client::deleteCustomRole(const DeleteCustomRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteCustomRoleHeaders headers = DeleteCustomRoleHeaders();
  return deleteCustomRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 删除企业部门
 *
 * @param request DeleteDepartmentRequest
 * @param headers DeleteDepartmentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartmentWithOptions(const DeleteDepartmentRequest &request, const DeleteDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOutDeptId()) {
    body["out_dept_id"] = request.outDeptId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteDepartment"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/department/v2/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDepartmentResponse>();
}

/**
 * @summary 删除企业部门
 *
 * @param request DeleteDepartmentRequest
 * @return DeleteDepartmentResponse
 */
DeleteDepartmentResponse Client::deleteDepartment(const DeleteDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteDepartmentHeaders headers = DeleteDepartmentHeaders();
  return deleteDepartmentWithOptions(request, headers, runtime);
}

/**
 * @summary 批量删除企业自定义角色下人员
 *
 * @param tmpReq DeleteEmployeesFromCustomRoleRequest
 * @param headers DeleteEmployeesFromCustomRoleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEmployeesFromCustomRoleResponse
 */
DeleteEmployeesFromCustomRoleResponse Client::deleteEmployeesFromCustomRoleWithOptions(const DeleteEmployeesFromCustomRoleRequest &tmpReq, const DeleteEmployeesFromCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteEmployeesFromCustomRoleShrinkRequest request = DeleteEmployeesFromCustomRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserIdList()) {
    request.setUserIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIdList(), "user_id_list", "json"));
  }

  json body = {};
  if (!!request.hasRoleId()) {
    body["role_id"] = request.roleId();
  }

  if (!!request.hasUserIdListShrink()) {
    body["user_id_list"] = request.userIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteEmployeesFromCustomRole"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/role/v1/customRoleEmployees/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEmployeesFromCustomRoleResponse>();
}

/**
 * @summary 批量删除企业自定义角色下人员
 *
 * @param request DeleteEmployeesFromCustomRoleRequest
 * @return DeleteEmployeesFromCustomRoleResponse
 */
DeleteEmployeesFromCustomRoleResponse Client::deleteEmployeesFromCustomRole(const DeleteEmployeesFromCustomRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteEmployeesFromCustomRoleHeaders headers = DeleteEmployeesFromCustomRoleHeaders();
  return deleteEmployeesFromCustomRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 删除发票抬头适用人员
 *
 * @param tmpReq DeleteInvoiceEntityRequest
 * @param headers DeleteInvoiceEntityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInvoiceEntityResponse
 */
DeleteInvoiceEntityResponse Client::deleteInvoiceEntityWithOptions(const DeleteInvoiceEntityRequest &tmpReq, const DeleteInvoiceEntityHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteInvoiceEntityShrinkRequest request = DeleteInvoiceEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entities(), "entities", "json"));
  }

  json query = {};
  if (!!request.hasDelAll()) {
    query["del_all"] = request.delAll();
  }

  if (!!request.hasEntitiesShrink()) {
    query["entities"] = request.entitiesShrink();
  }

  if (!!request.hasThirdPartId()) {
    query["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInvoiceEntity"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/entities")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInvoiceEntityResponse>();
}

/**
 * @summary 删除发票抬头适用人员
 *
 * @param request DeleteInvoiceEntityRequest
 * @return DeleteInvoiceEntityResponse
 */
DeleteInvoiceEntityResponse Client::deleteInvoiceEntity(const DeleteInvoiceEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteInvoiceEntityHeaders headers = DeleteInvoiceEntityHeaders();
  return deleteInvoiceEntityWithOptions(request, headers, runtime);
}

/**
 * @summary 同步外部平台部门信息至商旅内部
 *
 * @param tmpReq DepartmentSaveRequest
 * @param headers DepartmentSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DepartmentSaveResponse
 */
DepartmentSaveResponse Client::departmentSaveWithOptions(const DepartmentSaveRequest &tmpReq, const DepartmentSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DepartmentSaveShrinkRequest request = DepartmentSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDepartList()) {
    request.setDepartListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.departList(), "depart_list", "json"));
  }

  json body = {};
  if (!!request.hasDepartListShrink()) {
    body["depart_list"] = request.departListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DepartmentSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/department/v1/department")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DepartmentSaveResponse>();
}

/**
 * @summary 同步外部平台部门信息至商旅内部
 *
 * @param request DepartmentSaveRequest
 * @return DepartmentSaveResponse
 */
DepartmentSaveResponse Client::departmentSave(const DepartmentSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DepartmentSaveHeaders headers = DepartmentSaveHeaders();
  return departmentSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 批量申请电子行程单
 *
 * @param tmpReq ElectronicItineraryBatchApplyRequest
 * @param headers ElectronicItineraryBatchApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ElectronicItineraryBatchApplyResponse
 */
ElectronicItineraryBatchApplyResponse Client::electronicItineraryBatchApplyWithOptions(const ElectronicItineraryBatchApplyRequest &tmpReq, const ElectronicItineraryBatchApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ElectronicItineraryBatchApplyShrinkRequest request = ElectronicItineraryBatchApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyItineraryList()) {
    request.setApplyItineraryListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applyItineraryList(), "apply_itinerary_list", "json"));
  }

  json body = {};
  if (!!request.hasApplyItineraryListShrink()) {
    body["apply_itinerary_list"] = request.applyItineraryListShrink();
  }

  if (!!request.hasCanReprint()) {
    body["can_reprint"] = request.canReprint();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ElectronicItineraryBatchApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/apply-itinerary-batch-task")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ElectronicItineraryBatchApplyResponse>();
}

/**
 * @summary 批量申请电子行程单
 *
 * @param request ElectronicItineraryBatchApplyRequest
 * @return ElectronicItineraryBatchApplyResponse
 */
ElectronicItineraryBatchApplyResponse Client::electronicItineraryBatchApply(const ElectronicItineraryBatchApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ElectronicItineraryBatchApplyHeaders headers = ElectronicItineraryBatchApplyHeaders();
  return electronicItineraryBatchApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 获取电子行程单申请结果
 *
 * @param request ElectronicItineraryGetApplyResultRequest
 * @param headers ElectronicItineraryGetApplyResultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ElectronicItineraryGetApplyResultResponse
 */
ElectronicItineraryGetApplyResultResponse Client::electronicItineraryGetApplyResultWithOptions(const ElectronicItineraryGetApplyResultRequest &request, const ElectronicItineraryGetApplyResultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchApplyNo()) {
    query["batch_apply_no"] = request.batchApplyNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ElectronicItineraryGetApplyResult"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/get-itinerary-batch-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ElectronicItineraryGetApplyResultResponse>();
}

/**
 * @summary 获取电子行程单申请结果
 *
 * @param request ElectronicItineraryGetApplyResultRequest
 * @return ElectronicItineraryGetApplyResultResponse
 */
ElectronicItineraryGetApplyResultResponse Client::electronicItineraryGetApplyResult(const ElectronicItineraryGetApplyResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ElectronicItineraryGetApplyResultHeaders headers = ElectronicItineraryGetApplyResultHeaders();
  return electronicItineraryGetApplyResultWithOptions(request, headers, runtime);
}

/**
 * @summary 增加成本中心人员信息
 *
 * @param tmpReq EntityAddRequest
 * @param headers EntityAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntityAddResponse
 */
EntityAddResponse Client::entityAddWithOptions(const EntityAddRequest &tmpReq, const EntityAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EntityAddShrinkRequest request = EntityAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityDOList()) {
    request.setEntityDOListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entityDOList(), "entity_d_o_list", "json"));
  }

  json body = {};
  if (!!request.hasEntityDOListShrink()) {
    body["entity_d_o_list"] = request.entityDOListShrink();
  }

  if (!!request.hasThirdpartId()) {
    body["thirdpart_id"] = request.thirdpartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EntityAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/add-entity")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntityAddResponse>();
}

/**
 * @summary 增加成本中心人员信息
 *
 * @param request EntityAddRequest
 * @return EntityAddResponse
 */
EntityAddResponse Client::entityAdd(const EntityAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EntityAddHeaders headers = EntityAddHeaders();
  return entityAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除成本中心人员信息
 *
 * @param tmpReq EntityDeleteRequest
 * @param headers EntityDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntityDeleteResponse
 */
EntityDeleteResponse Client::entityDeleteWithOptions(const EntityDeleteRequest &tmpReq, const EntityDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EntityDeleteShrinkRequest request = EntityDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityDOList()) {
    request.setEntityDOListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entityDOList(), "entity_d_o_list", "json"));
  }

  json query = {};
  if (!!request.hasDelAll()) {
    query["del_all"] = request.delAll();
  }

  if (!!request.hasThirdpartId()) {
    query["thirdpart_id"] = request.thirdpartId();
  }

  json body = {};
  if (!!request.hasEntityDOListShrink()) {
    body["entity_d_o_list"] = request.entityDOListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EntityDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/entity/action/delete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntityDeleteResponse>();
}

/**
 * @summary 删除成本中心人员信息
 *
 * @param request EntityDeleteRequest
 * @return EntityDeleteResponse
 */
EntityDeleteResponse Client::entityDelete(const EntityDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EntityDeleteHeaders headers = EntityDeleteHeaders();
  return entityDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 设置成本中心人员信息
 *
 * @param tmpReq EntitySetRequest
 * @param headers EntitySetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EntitySetResponse
 */
EntitySetResponse Client::entitySetWithOptions(const EntitySetRequest &tmpReq, const EntitySetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EntitySetShrinkRequest request = EntitySetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityDOList()) {
    request.setEntityDOListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entityDOList(), "entity_d_o_list", "json"));
  }

  json body = {};
  if (!!request.hasEntityDOListShrink()) {
    body["entity_d_o_list"] = request.entityDOListShrink();
  }

  if (!!request.hasThirdpartId()) {
    body["thirdpart_id"] = request.thirdpartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EntitySet"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/set-entity")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EntitySetResponse>();
}

/**
 * @summary 设置成本中心人员信息
 *
 * @param request EntitySetRequest
 * @return EntitySetResponse
 */
EntitySetResponse Client::entitySet(const EntitySetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EntitySetHeaders headers = EntitySetHeaders();
  return entitySetWithOptions(request, headers, runtime);
}

/**
 * @summary 预估价格查询
 *
 * @param request EstimatedPriceQueryRequest
 * @param headers EstimatedPriceQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EstimatedPriceQueryResponse
 */
EstimatedPriceQueryResponse Client::estimatedPriceQueryWithOptions(const EstimatedPriceQueryRequest &request, const EstimatedPriceQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArrCity()) {
    query["arr_city"] = request.arrCity();
  }

  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasDepCity()) {
    query["dep_city"] = request.depCity();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasItineraryId()) {
    query["itinerary_id"] = request.itineraryId();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EstimatedPriceQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/costcenter/v1/estimated-price")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstimatedPriceQueryResponse>();
}

/**
 * @summary 预估价格查询
 *
 * @param request EstimatedPriceQueryRequest
 * @return EstimatedPriceQueryResponse
 */
EstimatedPriceQueryResponse Client::estimatedPriceQuery(const EstimatedPriceQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EstimatedPriceQueryHeaders headers = EstimatedPriceQueryHeaders();
  return estimatedPriceQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 超标审批结果同步
 *
 * @param request ExceedApplySyncRequest
 * @param headers ExceedApplySyncHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExceedApplySyncResponse
 */
ExceedApplySyncResponse Client::exceedApplySyncWithOptions(const ExceedApplySyncRequest &request, const ExceedApplySyncHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBizCategory()) {
    query["biz_category"] = request.bizCategory();
  }

  if (!!request.hasRemark()) {
    query["remark"] = request.remark();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasThirdpartyFlowId()) {
    query["thirdparty_flow_id"] = request.thirdpartyFlowId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExceedApplySync"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/syn-exceed")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExceedApplySyncResponse>();
}

/**
 * @summary 超标审批结果同步
 *
 * @param request ExceedApplySyncRequest
 * @return ExceedApplySyncResponse
 */
ExceedApplySyncResponse Client::exceedApplySync(const ExceedApplySyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExceedApplySyncHeaders headers = ExceedApplySyncHeaders();
  return exceedApplySyncWithOptions(request, headers, runtime);
}

/**
 * @summary 添加外部出行人与证件信息
 *
 * @param tmpReq ExternalUserAddRequest
 * @param headers ExternalUserAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExternalUserAddResponse
 */
ExternalUserAddResponse Client::externalUserAddWithOptions(const ExternalUserAddRequest &tmpReq, const ExternalUserAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExternalUserAddShrinkRequest request = ExternalUserAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCertRequestList()) {
    request.setCertRequestListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certRequestList(), "cert_request_list", "json"));
  }

  json body = {};
  if (!!request.hasBirthday()) {
    body["birthday"] = request.birthday();
  }

  if (!!request.hasCertRequestListShrink()) {
    body["cert_request_list"] = request.certRequestListShrink();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.email();
  }

  if (!!request.hasExternalUserId()) {
    body["external_user_id"] = request.externalUserId();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasRealName()) {
    body["real_name"] = request.realName();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  if (!!request.hasUserType()) {
    body["user_type"] = request.userType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExternalUserAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/externalUsers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExternalUserAddResponse>();
}

/**
 * @summary 添加外部出行人与证件信息
 *
 * @param request ExternalUserAddRequest
 * @return ExternalUserAddResponse
 */
ExternalUserAddResponse Client::externalUserAdd(const ExternalUserAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExternalUserAddHeaders headers = ExternalUserAddHeaders();
  return externalUserAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除外部出行人
 *
 * @param headers ExternalUserDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExternalUserDeleteResponse
 */
ExternalUserDeleteResponse Client::externalUserDeleteWithOptions(const string &externalUserId, const ExternalUserDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExternalUserDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/externalUsers/" , Darabonba::Http::URL::percentEncode(externalUserId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExternalUserDeleteResponse>();
}

/**
 * @summary 删除外部出行人
 *
 * @return ExternalUserDeleteResponse
 */
ExternalUserDeleteResponse Client::externalUserDelete(const string &externalUserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExternalUserDeleteHeaders headers = ExternalUserDeleteHeaders();
  return externalUserDeleteWithOptions(externalUserId, headers, runtime);
}

/**
 * @summary 查询外部出行人
 *
 * @param headers ExternalUserQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExternalUserQueryResponse
 */
ExternalUserQueryResponse Client::externalUserQueryWithOptions(const string &externalUserId, const ExternalUserQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExternalUserQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/externalUsers/" , Darabonba::Http::URL::percentEncode(externalUserId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExternalUserQueryResponse>();
}

/**
 * @summary 查询外部出行人
 *
 * @return ExternalUserQueryResponse
 */
ExternalUserQueryResponse Client::externalUserQuery(const string &externalUserId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExternalUserQueryHeaders headers = ExternalUserQueryHeaders();
  return externalUserQueryWithOptions(externalUserId, headers, runtime);
}

/**
 * @summary 修改外部出行人与证件信息
 *
 * @param tmpReq ExternalUserUpdateRequest
 * @param headers ExternalUserUpdateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExternalUserUpdateResponse
 */
ExternalUserUpdateResponse Client::externalUserUpdateWithOptions(const string &externalUserId, const ExternalUserUpdateRequest &tmpReq, const ExternalUserUpdateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExternalUserUpdateShrinkRequest request = ExternalUserUpdateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCertRequestList()) {
    request.setCertRequestListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certRequestList(), "cert_request_list", "json"));
  }

  json body = {};
  if (!!request.hasBirthday()) {
    body["birthday"] = request.birthday();
  }

  if (!!request.hasCertRequestListShrink()) {
    body["cert_request_list"] = request.certRequestListShrink();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.email();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasRealName()) {
    body["real_name"] = request.realName();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExternalUserUpdate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/externalUsers/" , Darabonba::Http::URL::percentEncode(externalUserId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExternalUserUpdateResponse>();
}

/**
 * @summary 修改外部出行人与证件信息
 *
 * @param request ExternalUserUpdateRequest
 * @return ExternalUserUpdateResponse
 */
ExternalUserUpdateResponse Client::externalUserUpdate(const string &externalUserId, const ExternalUserUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ExternalUserUpdateHeaders headers = ExternalUserUpdateHeaders();
  return externalUserUpdateWithOptions(externalUserId, request, headers, runtime);
}

/**
 * @summary 查询机票记账数据
 *
 * @param request FlightBillSettlementQueryRequest
 * @param headers FlightBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightBillSettlementQueryResponse
 */
FlightBillSettlementQueryResponse Client::flightBillSettlementQueryWithOptions(const FlightBillSettlementQueryRequest &request, const FlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/flight/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightBillSettlementQueryResponse>();
}

/**
 * @summary 查询机票记账数据
 *
 * @param request FlightBillSettlementQueryRequest
 * @return FlightBillSettlementQueryResponse
 */
FlightBillSettlementQueryResponse Client::flightBillSettlementQuery(const FlightBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightBillSettlementQueryHeaders headers = FlightBillSettlementQueryHeaders();
  return flightBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 航班订单取消
 *
 * @param request FlightCancelOrderRequest
 * @param headers FlightCancelOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightCancelOrderResponse
 */
FlightCancelOrderResponse Client::flightCancelOrderWithOptions(const FlightCancelOrderRequest &request, const FlightCancelOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightCancelOrder"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/order/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightCancelOrderResponse>();
}

/**
 * @summary 航班订单取消
 *
 * @param request FlightCancelOrderRequest
 * @return FlightCancelOrderResponse
 */
FlightCancelOrderResponse Client::flightCancelOrder(const FlightCancelOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightCancelOrderHeaders headers = FlightCancelOrderHeaders();
  return flightCancelOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 机票订单取消
 *
 * @param request FlightCancelOrderV2Request
 * @param headers FlightCancelOrderV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightCancelOrderV2Response
 */
FlightCancelOrderV2Response Client::flightCancelOrderV2WithOptions(const FlightCancelOrderV2Request &request, const FlightCancelOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightCancelOrderV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/order/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightCancelOrderV2Response>();
}

/**
 * @summary 机票订单取消
 *
 * @param request FlightCancelOrderV2Request
 * @return FlightCancelOrderV2Response
 */
FlightCancelOrderV2Response Client::flightCancelOrderV2(const FlightCancelOrderV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightCancelOrderV2Headers headers = FlightCancelOrderV2Headers();
  return flightCancelOrderV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班订单创建
 *
 * @param tmpReq FlightCreateOrderRequest
 * @param headers FlightCreateOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightCreateOrderResponse
 */
FlightCreateOrderResponse Client::flightCreateOrderWithOptions(const FlightCreateOrderRequest &tmpReq, const FlightCreateOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightCreateOrderShrinkRequest request = FlightCreateOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactInfo()) {
    request.setContactInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contactInfo(), "contact_info", "json"));
  }

  if (!!tmpReq.hasOrderAttr()) {
    request.setOrderAttrShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.orderAttr(), "order_attr", "json"));
  }

  if (!!tmpReq.hasTravelerInfoList()) {
    request.setTravelerInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerInfoList(), "traveler_info_list", "json"));
  }

  json body = {};
  if (!!request.hasArrAirportCode()) {
    body["arr_airport_code"] = request.arrAirportCode();
  }

  if (!!request.hasArrCityCode()) {
    body["arr_city_code"] = request.arrCityCode();
  }

  if (!!request.hasAutoPay()) {
    body["auto_pay"] = request.autoPay();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasBuyerUniqueKey()) {
    body["buyer_unique_key"] = request.buyerUniqueKey();
  }

  if (!!request.hasContactInfoShrink()) {
    body["contact_info"] = request.contactInfoShrink();
  }

  if (!!request.hasDepAirportCode()) {
    body["dep_airport_code"] = request.depAirportCode();
  }

  if (!!request.hasDepCityCode()) {
    body["dep_city_code"] = request.depCityCode();
  }

  if (!!request.hasDepDate()) {
    body["dep_date"] = request.depDate();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasOrderAttrShrink()) {
    body["order_attr"] = request.orderAttrShrink();
  }

  if (!!request.hasOrderParams()) {
    body["order_params"] = request.orderParams();
  }

  if (!!request.hasOtaItemId()) {
    body["ota_item_id"] = request.otaItemId();
  }

  if (!!request.hasPrice()) {
    body["price"] = request.price();
  }

  if (!!request.hasReceiptAddress()) {
    body["receipt_address"] = request.receiptAddress();
  }

  if (!!request.hasReceiptTarget()) {
    body["receipt_target"] = request.receiptTarget();
  }

  if (!!request.hasReceiptTitle()) {
    body["receipt_title"] = request.receiptTitle();
  }

  if (!!request.hasTravelerInfoListShrink()) {
    body["traveler_info_list"] = request.travelerInfoListShrink();
  }

  if (!!request.hasTripType()) {
    body["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightCreateOrder"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/order/action/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightCreateOrderResponse>();
}

/**
 * @summary 航班订单创建
 *
 * @param request FlightCreateOrderRequest
 * @return FlightCreateOrderResponse
 */
FlightCreateOrderResponse Client::flightCreateOrder(const FlightCreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightCreateOrderHeaders headers = FlightCreateOrderHeaders();
  return flightCreateOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 机票订单创建
 *
 * @param tmpReq FlightCreateOrderV2Request
 * @param headers FlightCreateOrderV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightCreateOrderV2Response
 */
FlightCreateOrderV2Response Client::flightCreateOrderV2WithOptions(const FlightCreateOrderV2Request &tmpReq, const FlightCreateOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightCreateOrderV2ShrinkRequest request = FlightCreateOrderV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactInfo()) {
    request.setContactInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contactInfo(), "contact_info", "json"));
  }

  if (!!tmpReq.hasTravelers()) {
    request.setTravelersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelers(), "travelers", "json"));
  }

  json body = {};
  if (!!request.hasAsyncCreateOrderKey()) {
    body["async_create_order_key"] = request.asyncCreateOrderKey();
  }

  if (!!request.hasAsyncCreateOrderMode()) {
    body["async_create_order_mode"] = request.asyncCreateOrderMode();
  }

  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasContactInfoShrink()) {
    body["contact_info"] = request.contactInfoShrink();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOtaItemId()) {
    body["ota_item_id"] = request.otaItemId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasTotalPriceCent()) {
    body["total_price_cent"] = request.totalPriceCent();
  }

  if (!!request.hasTravelersShrink()) {
    body["travelers"] = request.travelersShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightCreateOrderV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/order/action/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightCreateOrderV2Response>();
}

/**
 * @summary 机票订单创建
 *
 * @param request FlightCreateOrderV2Request
 * @return FlightCreateOrderV2Response
 */
FlightCreateOrderV2Response Client::flightCreateOrderV2(const FlightCreateOrderV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightCreateOrderV2Headers headers = FlightCreateOrderV2Headers();
  return flightCreateOrderV2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询飞机超标审批详情
 *
 * @param request FlightExceedApplyQueryRequest
 * @param headers FlightExceedApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightExceedApplyQueryResponse
 */
FlightExceedApplyQueryResponse Client::flightExceedApplyQueryWithOptions(const FlightExceedApplyQueryRequest &request, const FlightExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightExceedApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/flight-exceed")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightExceedApplyQueryResponse>();
}

/**
 * @summary 查询飞机超标审批详情
 *
 * @param request FlightExceedApplyQueryRequest
 * @return FlightExceedApplyQueryResponse
 */
FlightExceedApplyQueryResponse Client::flightExceedApplyQuery(const FlightExceedApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightExceedApplyQueryHeaders headers = FlightExceedApplyQueryHeaders();
  return flightExceedApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询机票行程单扫描件
 *
 * @param request FlightItineraryScanQueryRequest
 * @param headers FlightItineraryScanQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightItineraryScanQueryResponse
 */
FlightItineraryScanQueryResponse Client::flightItineraryScanQueryWithOptions(const FlightItineraryScanQueryRequest &request, const FlightItineraryScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillDate()) {
    query["bill_date"] = request.billDate();
  }

  if (!!request.hasBillId()) {
    query["bill_id"] = request.billId();
  }

  if (!!request.hasInvoiceSubTaskId()) {
    query["invoice_sub_task_id"] = request.invoiceSubTaskId();
  }

  if (!!request.hasItineraryNum()) {
    query["itinerary_num"] = request.itineraryNum();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasTicketNo()) {
    query["ticket_no"] = request.ticketNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightItineraryScanQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/scan/v1/flight-itinerary")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightItineraryScanQueryResponse>();
}

/**
 * @summary 查询机票行程单扫描件
 *
 * @param request FlightItineraryScanQueryRequest
 * @return FlightItineraryScanQueryResponse
 */
FlightItineraryScanQueryResponse Client::flightItineraryScanQuery(const FlightItineraryScanQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightItineraryScanQueryHeaders headers = FlightItineraryScanQueryHeaders();
  return flightItineraryScanQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 航班列表搜索
 *
 * @param request FlightListingSearchRequest
 * @param headers FlightListingSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightListingSearchResponse
 */
FlightListingSearchResponse Client::flightListingSearchWithOptions(const FlightListingSearchRequest &request, const FlightListingSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirlineCode()) {
    query["airline_code"] = request.airlineCode();
  }

  if (!!request.hasArrCityCode()) {
    query["arr_city_code"] = request.arrCityCode();
  }

  if (!!request.hasCabinClass()) {
    query["cabin_class"] = request.cabinClass();
  }

  if (!!request.hasDepCityCode()) {
    query["dep_city_code"] = request.depCityCode();
  }

  if (!!request.hasDepDate()) {
    query["dep_date"] = request.depDate();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightListingSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/flight/action/listing-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightListingSearchResponse>();
}

/**
 * @summary 航班列表搜索
 *
 * @param request FlightListingSearchRequest
 * @return FlightListingSearchResponse
 */
FlightListingSearchResponse Client::flightListingSearch(const FlightListingSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightListingSearchHeaders headers = FlightListingSearchHeaders();
  return flightListingSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 航班列表搜索
 *
 * @param tmpReq FlightListingSearchV2Request
 * @param headers FlightListingSearchV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightListingSearchV2Response
 */
FlightListingSearchV2Response Client::flightListingSearchV2WithOptions(const FlightListingSearchV2Request &tmpReq, const FlightListingSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightListingSearchV2ShrinkRequest request = FlightListingSearchV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCabinTypeList()) {
    request.setCabinTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cabinTypeList(), "cabin_type_list", "json"));
  }

  if (!!tmpReq.hasSearchJourneys()) {
    request.setSearchJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchJourneys(), "search_journeys", "json"));
  }

  json query = {};
  if (!!request.hasAirlineCode()) {
    query["airline_code"] = request.airlineCode();
  }

  if (!!request.hasCabinTypeListShrink()) {
    query["cabin_type_list"] = request.cabinTypeListShrink();
  }

  if (!!request.hasDirectOnly()) {
    query["direct_only"] = request.directOnly();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasNeedMultiClassPrice()) {
    query["need_multi_class_price"] = request.needMultiClassPrice();
  }

  if (!!request.hasNeedQueryServiceFee()) {
    query["need_query_service_fee"] = request.needQueryServiceFee();
  }

  if (!!request.hasNeedShareFlight()) {
    query["need_share_flight"] = request.needShareFlight();
  }

  if (!!request.hasNeedYCBestPrice()) {
    query["need_y_c_best_price"] = request.needYCBestPrice();
  }

  if (!!request.hasSearchJourneysShrink()) {
    query["search_journeys"] = request.searchJourneysShrink();
  }

  if (!!request.hasSearchMode()) {
    query["search_mode"] = request.searchMode();
  }

  if (!!request.hasTripType()) {
    query["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightListingSearchV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/flight/action/listing-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightListingSearchV2Response>();
}

/**
 * @summary 航班列表搜索
 *
 * @param request FlightListingSearchV2Request
 * @return FlightListingSearchV2Response
 */
FlightListingSearchV2Response Client::flightListingSearchV2(const FlightListingSearchV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightListingSearchV2Headers headers = FlightListingSearchV2Headers();
  return flightListingSearchV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签申请
 *
 * @param tmpReq FlightModifyApplyV2Request
 * @param headers FlightModifyApplyV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyApplyV2Response
 */
FlightModifyApplyV2Response Client::flightModifyApplyV2WithOptions(const FlightModifyApplyV2Request &tmpReq, const FlightModifyApplyV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightModifyApplyV2ShrinkRequest request = FlightModifyApplyV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPassengerSegmentRelations()) {
    request.setPassengerSegmentRelationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentRelations(), "passenger_segment_relations", "json"));
  }

  json body = {};
  if (!!request.hasCacheKey()) {
    body["cache_key"] = request.cacheKey();
  }

  if (!!request.hasContactPhone()) {
    body["contact_phone"] = request.contactPhone();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasItemId()) {
    body["item_id"] = request.itemId();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasPassengerSegmentRelationsShrink()) {
    body["passenger_segment_relations"] = request.passengerSegmentRelationsShrink();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  if (!!request.hasSessionId()) {
    body["session_id"] = request.sessionId();
  }

  if (!!request.hasVoluntary()) {
    body["voluntary"] = request.voluntary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightModifyApplyV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyApplyV2Response>();
}

/**
 * @summary 机票改签申请
 *
 * @param request FlightModifyApplyV2Request
 * @return FlightModifyApplyV2Response
 */
FlightModifyApplyV2Response Client::flightModifyApplyV2(const FlightModifyApplyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyApplyV2Headers headers = FlightModifyApplyV2Headers();
  return flightModifyApplyV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签取消
 *
 * @param request FlightModifyCancelV2Request
 * @param headers FlightModifyCancelV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyCancelV2Response
 */
FlightModifyCancelV2Response Client::flightModifyCancelV2WithOptions(const FlightModifyCancelV2Request &request, const FlightModifyCancelV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    query["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasSubOrderId()) {
    query["sub_order_id"] = request.subOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightModifyCancelV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyCancelV2Response>();
}

/**
 * @summary 机票改签取消
 *
 * @param request FlightModifyCancelV2Request
 * @return FlightModifyCancelV2Response
 */
FlightModifyCancelV2Response Client::flightModifyCancelV2(const FlightModifyCancelV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyCancelV2Headers headers = FlightModifyCancelV2Headers();
  return flightModifyCancelV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签列表搜索
 *
 * @param tmpReq FlightModifyListingSearchV2Request
 * @param headers FlightModifyListingSearchV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyListingSearchV2Response
 */
FlightModifyListingSearchV2Response Client::flightModifyListingSearchV2WithOptions(const FlightModifyListingSearchV2Request &tmpReq, const FlightModifyListingSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightModifyListingSearchV2ShrinkRequest request = FlightModifyListingSearchV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCabinClass()) {
    request.setCabinClassShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cabinClass(), "cabin_class", "json"));
  }

  if (!!tmpReq.hasDepDate()) {
    request.setDepDateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depDate(), "dep_date", "json"));
  }

  if (!!tmpReq.hasPassengerSegmentRelations()) {
    request.setPassengerSegmentRelationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentRelations(), "passenger_segment_relations", "json"));
  }

  if (!!tmpReq.hasSelectedSegments()) {
    request.setSelectedSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedSegments(), "selected_segments", "json"));
  }

  json query = {};
  if (!!request.hasCabinClassShrink()) {
    query["cabin_class"] = request.cabinClassShrink();
  }

  if (!!request.hasDepDateShrink()) {
    query["dep_date"] = request.depDateShrink();
  }

  if (!!request.hasInterfaceCallerIsSupportRetry()) {
    query["interface_caller_is_support_retry"] = request.interfaceCallerIsSupportRetry();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPassengerSegmentRelationsShrink()) {
    query["passenger_segment_relations"] = request.passengerSegmentRelationsShrink();
  }

  if (!!request.hasSearchMode()) {
    query["search_mode"] = request.searchMode();
  }

  if (!!request.hasSearchRetryToken()) {
    query["search_retry_token"] = request.searchRetryToken();
  }

  if (!!request.hasSelectedSegmentsShrink()) {
    query["selected_segments"] = request.selectedSegmentsShrink();
  }

  if (!!request.hasSessionId()) {
    query["session_id"] = request.sessionId();
  }

  if (!!request.hasVoluntary()) {
    query["voluntary"] = request.voluntary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightModifyListingSearchV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/listing-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyListingSearchV2Response>();
}

/**
 * @summary 机票改签列表搜索
 *
 * @param request FlightModifyListingSearchV2Request
 * @return FlightModifyListingSearchV2Response
 */
FlightModifyListingSearchV2Response Client::flightModifyListingSearchV2(const FlightModifyListingSearchV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyListingSearchV2Headers headers = FlightModifyListingSearchV2Headers();
  return flightModifyListingSearchV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签详情
 *
 * @param request FlightModifyOrderDetailV2Request
 * @param headers FlightModifyOrderDetailV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyOrderDetailV2Response
 */
FlightModifyOrderDetailV2Response Client::flightModifyOrderDetailV2WithOptions(const FlightModifyOrderDetailV2Request &request, const FlightModifyOrderDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasModifyApplyId()) {
    query["modify_apply_id"] = request.modifyApplyId();
  }

  if (!!request.hasNeedQueryServiceFee()) {
    query["need_query_service_fee"] = request.needQueryServiceFee();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutModifyApplyId()) {
    query["out_modify_apply_id"] = request.outModifyApplyId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightModifyOrderDetailV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyOrderDetailV2Response>();
}

/**
 * @summary 机票改签详情
 *
 * @param request FlightModifyOrderDetailV2Request
 * @return FlightModifyOrderDetailV2Response
 */
FlightModifyOrderDetailV2Response Client::flightModifyOrderDetailV2(const FlightModifyOrderDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyOrderDetailV2Headers headers = FlightModifyOrderDetailV2Headers();
  return flightModifyOrderDetailV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签报价搜索
 *
 * @param tmpReq FlightModifyOtaSearchV2Request
 * @param headers FlightModifyOtaSearchV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyOtaSearchV2Response
 */
FlightModifyOtaSearchV2Response Client::flightModifyOtaSearchV2WithOptions(const FlightModifyOtaSearchV2Request &tmpReq, const FlightModifyOtaSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightModifyOtaSearchV2ShrinkRequest request = FlightModifyOtaSearchV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCabinClass()) {
    request.setCabinClassShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cabinClass(), "cabin_class", "json"));
  }

  if (!!tmpReq.hasDepDate()) {
    request.setDepDateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.depDate(), "dep_date", "json"));
  }

  if (!!tmpReq.hasPassengerSegmentRelations()) {
    request.setPassengerSegmentRelationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentRelations(), "passenger_segment_relations", "json"));
  }

  if (!!tmpReq.hasSelectedSegments()) {
    request.setSelectedSegmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedSegments(), "selected_segments", "json"));
  }

  json query = {};
  if (!!request.hasCabinClassShrink()) {
    query["cabin_class"] = request.cabinClassShrink();
  }

  if (!!request.hasDepDateShrink()) {
    query["dep_date"] = request.depDateShrink();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPassengerSegmentRelationsShrink()) {
    query["passenger_segment_relations"] = request.passengerSegmentRelationsShrink();
  }

  if (!!request.hasSelectedSegmentsShrink()) {
    query["selected_segments"] = request.selectedSegmentsShrink();
  }

  if (!!request.hasSessionId()) {
    query["session_id"] = request.sessionId();
  }

  if (!!request.hasVoluntary()) {
    query["voluntary"] = request.voluntary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightModifyOtaSearchV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/ota-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyOtaSearchV2Response>();
}

/**
 * @summary 机票改签报价搜索
 *
 * @param request FlightModifyOtaSearchV2Request
 * @return FlightModifyOtaSearchV2Response
 */
FlightModifyOtaSearchV2Response Client::flightModifyOtaSearchV2(const FlightModifyOtaSearchV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyOtaSearchV2Headers headers = FlightModifyOtaSearchV2Headers();
  return flightModifyOtaSearchV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签支付
 *
 * @param tmpReq FlightModifyPayV2Request
 * @param headers FlightModifyPayV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightModifyPayV2Response
 */
FlightModifyPayV2Response Client::flightModifyPayV2WithOptions(const FlightModifyPayV2Request &tmpReq, const FlightModifyPayV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightModifyPayV2ShrinkRequest request = FlightModifyPayV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtParams()) {
    request.setExtParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extParams(), "ext_params", "json"));
  }

  json body = {};
  if (!!request.hasExtParamsShrink()) {
    body["ext_params"] = request.extParamsShrink();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasModifyPayAmount()) {
    body["modify_pay_amount"] = request.modifyPayAmount();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasSubOrderId()) {
    body["sub_order_id"] = request.subOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightModifyPayV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/modify/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightModifyPayV2Response>();
}

/**
 * @summary 机票改签支付
 *
 * @param request FlightModifyPayV2Request
 * @return FlightModifyPayV2Response
 */
FlightModifyPayV2Response Client::flightModifyPayV2(const FlightModifyPayV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightModifyPayV2Headers headers = FlightModifyPayV2Headers();
  return flightModifyPayV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班订单明细信息
 *
 * @param request FlightOrderDetailInfoRequest
 * @param headers FlightOrderDetailInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOrderDetailInfoResponse
 */
FlightOrderDetailInfoResponse Client::flightOrderDetailInfoWithOptions(const FlightOrderDetailInfoRequest &request, const FlightOrderDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOrderDetailInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/order/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOrderDetailInfoResponse>();
}

/**
 * @summary 航班订单明细信息
 *
 * @param request FlightOrderDetailInfoRequest
 * @return FlightOrderDetailInfoResponse
 */
FlightOrderDetailInfoResponse Client::flightOrderDetailInfo(const FlightOrderDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOrderDetailInfoHeaders headers = FlightOrderDetailInfoHeaders();
  return flightOrderDetailInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 机票订单详情
 *
 * @param request FlightOrderDetailV2Request
 * @param headers FlightOrderDetailV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOrderDetailV2Response
 */
FlightOrderDetailV2Response Client::flightOrderDetailV2WithOptions(const FlightOrderDetailV2Request &request, const FlightOrderDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOrderDetailV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/order/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOrderDetailV2Response>();
}

/**
 * @summary 机票订单详情
 *
 * @param request FlightOrderDetailV2Request
 * @return FlightOrderDetailV2Response
 */
FlightOrderDetailV2Response Client::flightOrderDetailV2(const FlightOrderDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOrderDetailV2Headers headers = FlightOrderDetailV2Headers();
  return flightOrderDetailV2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询机票订单列表
 *
 * @param request FlightOrderListQueryRequest
 * @param headers FlightOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOrderListQueryResponse
 */
FlightOrderListQueryResponse Client::flightOrderListQueryWithOptions(const FlightOrderListQueryRequest &request, const FlightOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllApply()) {
    query["all_apply"] = request.allApply();
  }

  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasDepartId()) {
    query["depart_id"] = request.departId();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasUpdateEndTime()) {
    query["update_end_time"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    query["update_start_time"] = request.updateStartTime();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/flight/v1/order-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOrderListQueryResponse>();
}

/**
 * @summary 查询机票订单列表
 *
 * @param request FlightOrderListQueryRequest
 * @return FlightOrderListQueryResponse
 */
FlightOrderListQueryResponse Client::flightOrderListQuery(const FlightOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOrderListQueryHeaders headers = FlightOrderListQueryHeaders();
  return flightOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 机票订单列表查询
 *
 * @param tmpReq FlightOrderListQueryV2Request
 * @param headers FlightOrderListQueryV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOrderListQueryV2Response
 */
FlightOrderListQueryV2Response Client::flightOrderListQueryV2WithOptions(const FlightOrderListQueryV2Request &tmpReq, const FlightOrderListQueryV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightOrderListQueryV2ShrinkRequest request = FlightOrderListQueryV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApproveId()) {
    request.setApproveIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.approveId(), "approve_id", "json"));
  }

  if (!!tmpReq.hasBookerId()) {
    request.setBookerIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bookerId(), "booker_id", "json"));
  }

  if (!!tmpReq.hasDepartId()) {
    request.setDepartIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.departId(), "depart_id", "json"));
  }

  if (!!tmpReq.hasSupplier()) {
    request.setSupplierShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.supplier(), "supplier", "json"));
  }

  if (!!tmpReq.hasThirdpartApproveId()) {
    request.setThirdpartApproveIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdpartApproveId(), "thirdpart_approve_id", "json"));
  }

  json query = {};
  if (!!request.hasApproveIdShrink()) {
    query["approve_id"] = request.approveIdShrink();
  }

  if (!!request.hasBookerIdShrink()) {
    query["booker_id"] = request.bookerIdShrink();
  }

  if (!!request.hasDepartIdShrink()) {
    query["depart_id"] = request.departIdShrink();
  }

  if (!!request.hasEndDate()) {
    query["end_date"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["page_Size"] = request.pageSize();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasStartDate()) {
    query["start_date"] = request.startDate();
  }

  if (!!request.hasSupplierShrink()) {
    query["supplier"] = request.supplierShrink();
  }

  if (!!request.hasThirdpartApproveIdShrink()) {
    query["thirdpart_approve_id"] = request.thirdpartApproveIdShrink();
  }

  if (!!request.hasUpdateEndDate()) {
    query["update_end_date"] = request.updateEndDate();
  }

  if (!!request.hasUpdateStartDate()) {
    query["update_start_date"] = request.updateStartDate();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOrderListQueryV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v2/Flight-order-list-query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOrderListQueryV2Response>();
}

/**
 * @summary 机票订单列表查询
 *
 * @param request FlightOrderListQueryV2Request
 * @return FlightOrderListQueryV2Response
 */
FlightOrderListQueryV2Response Client::flightOrderListQueryV2(const FlightOrderListQueryV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOrderListQueryV2Headers headers = FlightOrderListQueryV2Headers();
  return flightOrderListQueryV2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询机票订单详情（含票信息）
 *
 * @param request FlightOrderQueryRequest
 * @param headers FlightOrderQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOrderQueryResponse
 */
FlightOrderQueryResponse Client::flightOrderQueryWithOptions(const FlightOrderQueryRequest &request, const FlightOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOrderQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/flight/v1/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOrderQueryResponse>();
}

/**
 * @summary 查询机票订单详情（含票信息）
 *
 * @param request FlightOrderQueryRequest
 * @return FlightOrderQueryResponse
 */
FlightOrderQueryResponse Client::flightOrderQuery(const FlightOrderQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOrderQueryHeaders headers = FlightOrderQueryHeaders();
  return flightOrderQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询退改规则行李额
 *
 * @param request FlightOtaItemDetailRequest
 * @param headers FlightOtaItemDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOtaItemDetailResponse
 */
FlightOtaItemDetailResponse Client::flightOtaItemDetailWithOptions(const FlightOtaItemDetailRequest &request, const FlightOtaItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOtaItemId()) {
    query["ota_item_id"] = request.otaItemId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOtaItemDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/flight/action/ota-item-detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOtaItemDetailResponse>();
}

/**
 * @summary 查询退改规则行李额
 *
 * @param request FlightOtaItemDetailRequest
 * @return FlightOtaItemDetailResponse
 */
FlightOtaItemDetailResponse Client::flightOtaItemDetail(const FlightOtaItemDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOtaItemDetailHeaders headers = FlightOtaItemDetailHeaders();
  return flightOtaItemDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 航班最低价搜索
 *
 * @param request FlightOtaSearchRequest
 * @param headers FlightOtaSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOtaSearchResponse
 */
FlightOtaSearchResponse Client::flightOtaSearchWithOptions(const FlightOtaSearchRequest &request, const FlightOtaSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirlineCode()) {
    query["airline_code"] = request.airlineCode();
  }

  if (!!request.hasArrCityCode()) {
    query["arr_city_code"] = request.arrCityCode();
  }

  if (!!request.hasCabinClass()) {
    query["cabin_class"] = request.cabinClass();
  }

  if (!!request.hasCarrierFlightNo()) {
    query["carrier_flight_no"] = request.carrierFlightNo();
  }

  if (!!request.hasDepCityCode()) {
    query["dep_city_code"] = request.depCityCode();
  }

  if (!!request.hasDepDate()) {
    query["dep_date"] = request.depDate();
  }

  if (!!request.hasFlightNo()) {
    query["flight_no"] = request.flightNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOtaSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/flight/action/ota-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOtaSearchResponse>();
}

/**
 * @summary 航班最低价搜索
 *
 * @param request FlightOtaSearchRequest
 * @return FlightOtaSearchResponse
 */
FlightOtaSearchResponse Client::flightOtaSearch(const FlightOtaSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOtaSearchHeaders headers = FlightOtaSearchHeaders();
  return flightOtaSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 单航班报价搜索
 *
 * @param tmpReq FlightOtaSearchV2Request
 * @param headers FlightOtaSearchV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightOtaSearchV2Response
 */
FlightOtaSearchV2Response Client::flightOtaSearchV2WithOptions(const FlightOtaSearchV2Request &tmpReq, const FlightOtaSearchV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightOtaSearchV2ShrinkRequest request = FlightOtaSearchV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCabinTypeList()) {
    request.setCabinTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cabinTypeList(), "cabin_type_list", "json"));
  }

  if (!!tmpReq.hasSearchJourneys()) {
    request.setSearchJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchJourneys(), "search_journeys", "json"));
  }

  json query = {};
  if (!!request.hasCabinTypeListShrink()) {
    query["cabin_type_list"] = request.cabinTypeListShrink();
  }

  if (!!request.hasDirectOnly()) {
    query["direct_only"] = request.directOnly();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasNeedShareFlight()) {
    query["need_share_flight"] = request.needShareFlight();
  }

  if (!!request.hasSearchJourneysShrink()) {
    query["search_journeys"] = request.searchJourneysShrink();
  }

  if (!!request.hasSearchMode()) {
    query["search_mode"] = request.searchMode();
  }

  if (!!request.hasTripType()) {
    query["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightOtaSearchV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/flight/action/ota-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightOtaSearchV2Response>();
}

/**
 * @summary 单航班报价搜索
 *
 * @param request FlightOtaSearchV2Request
 * @return FlightOtaSearchV2Response
 */
FlightOtaSearchV2Response Client::flightOtaSearchV2(const FlightOtaSearchV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightOtaSearchV2Headers headers = FlightOtaSearchV2Headers();
  return flightOtaSearchV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班订单支付
 *
 * @param tmpReq FlightPayOrderRequest
 * @param headers FlightPayOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightPayOrderResponse
 */
FlightPayOrderResponse Client::flightPayOrderWithOptions(const FlightPayOrderRequest &tmpReq, const FlightPayOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightPayOrderShrinkRequest request = FlightPayOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "extra", "json"));
  }

  json body = {};
  if (!!request.hasCorpPayPrice()) {
    body["corp_pay_price"] = request.corpPayPrice();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasExtraShrink()) {
    body["extra"] = request.extraShrink();
  }

  if (!!request.hasPersonalPayPrice()) {
    body["personal_pay_price"] = request.personalPayPrice();
  }

  if (!!request.hasTotalPayPrice()) {
    body["total_pay_price"] = request.totalPayPrice();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightPayOrder"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/order/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightPayOrderResponse>();
}

/**
 * @summary 航班订单支付
 *
 * @param request FlightPayOrderRequest
 * @return FlightPayOrderResponse
 */
FlightPayOrderResponse Client::flightPayOrder(const FlightPayOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightPayOrderHeaders headers = FlightPayOrderHeaders();
  return flightPayOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 机票订单支付
 *
 * @param request FlightPayOrderV2Request
 * @param headers FlightPayOrderV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightPayOrderV2Response
 */
FlightPayOrderV2Response Client::flightPayOrderV2WithOptions(const FlightPayOrderV2Request &request, const FlightPayOrderV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasTotalPrice()) {
    body["total_price"] = request.totalPrice();
  }

  if (!!request.hasTotalServiceFeePrice()) {
    body["total_service_fee_price"] = request.totalServiceFeePrice();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightPayOrderV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/order/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightPayOrderV2Response>();
}

/**
 * @summary 机票订单支付
 *
 * @param request FlightPayOrderV2Request
 * @return FlightPayOrderV2Response
 */
FlightPayOrderV2Response Client::flightPayOrderV2(const FlightPayOrderV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightPayOrderV2Headers headers = FlightPayOrderV2Headers();
  return flightPayOrderV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班退票申请
 *
 * @param tmpReq FlightRefundApplyRequest
 * @param headers FlightRefundApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundApplyResponse
 */
FlightRefundApplyResponse Client::flightRefundApplyWithOptions(const FlightRefundApplyRequest &tmpReq, const FlightRefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightRefundApplyShrinkRequest request = FlightRefundApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "extra", "json"));
  }

  if (!!tmpReq.hasPassengerSegmentInfoList()) {
    request.setPassengerSegmentInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentInfoList(), "passenger_segment_info_list", "json"));
  }

  if (!!tmpReq.hasRefundVoucherInfo()) {
    request.setRefundVoucherInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundVoucherInfo(), "refund_voucher_info", "json"));
  }

  json body = {};
  if (!!request.hasCorpRefundPrice()) {
    body["corp_refund_price"] = request.corpRefundPrice();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    body["dis_sub_order_id"] = request.disSubOrderId();
  }

  if (!!request.hasDisplayRefundMoney()) {
    body["display_refund_money"] = request.displayRefundMoney();
  }

  if (!!request.hasExtraShrink()) {
    body["extra"] = request.extraShrink();
  }

  if (!!request.hasIsVoluntary()) {
    body["is_voluntary"] = request.isVoluntary();
  }

  if (!!request.hasItemUnitIds()) {
    body["item_unit_ids"] = request.itemUnitIds();
  }

  if (!!request.hasPassengerSegmentInfoListShrink()) {
    body["passenger_segment_info_list"] = request.passengerSegmentInfoListShrink();
  }

  if (!!request.hasPersonalRefundPrice()) {
    body["personal_refund_price"] = request.personalRefundPrice();
  }

  if (!!request.hasReasonDetail()) {
    body["reason_detail"] = request.reasonDetail();
  }

  if (!!request.hasReasonType()) {
    body["reason_type"] = request.reasonType();
  }

  if (!!request.hasRefundVoucherInfoShrink()) {
    body["refund_voucher_info"] = request.refundVoucherInfoShrink();
  }

  if (!!request.hasSessionId()) {
    body["session_id"] = request.sessionId();
  }

  if (!!request.hasTotalRefundPrice()) {
    body["total_refund_price"] = request.totalRefundPrice();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightRefundApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/refund/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundApplyResponse>();
}

/**
 * @summary 航班退票申请
 *
 * @param request FlightRefundApplyRequest
 * @return FlightRefundApplyResponse
 */
FlightRefundApplyResponse Client::flightRefundApply(const FlightRefundApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundApplyHeaders headers = FlightRefundApplyHeaders();
  return flightRefundApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 机票退票申请
 *
 * @param tmpReq FlightRefundApplyV2Request
 * @param headers FlightRefundApplyV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundApplyV2Response
 */
FlightRefundApplyV2Response Client::flightRefundApplyV2WithOptions(const FlightRefundApplyV2Request &tmpReq, const FlightRefundApplyV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightRefundApplyV2ShrinkRequest request = FlightRefundApplyV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPassengerSegmentRelations()) {
    request.setPassengerSegmentRelationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentRelations(), "passenger_segment_relations", "json"));
  }

  if (!!tmpReq.hasTicketNos()) {
    request.setTicketNosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketNos(), "ticket_nos", "json"));
  }

  json body = {};
  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasPassengerSegmentRelationsShrink()) {
    body["passenger_segment_relations"] = request.passengerSegmentRelationsShrink();
  }

  if (!!request.hasPreCalType()) {
    body["pre_cal_type"] = request.preCalType();
  }

  if (!!request.hasRefundReason()) {
    body["refund_reason"] = request.refundReason();
  }

  if (!!request.hasRefundReasonType()) {
    body["refund_reason_type"] = request.refundReasonType();
  }

  if (!!request.hasTicketNosShrink()) {
    body["ticket_nos"] = request.ticketNosShrink();
  }

  if (!!request.hasTotalRefundPrice()) {
    body["total_refund_price"] = request.totalRefundPrice();
  }

  if (!!request.hasUploadPictUrls()) {
    body["upload_pict_urls"] = request.uploadPictUrls();
  }

  if (!!request.hasVoluntary()) {
    body["voluntary"] = request.voluntary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FlightRefundApplyV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/refund/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundApplyV2Response>();
}

/**
 * @summary 机票退票申请
 *
 * @param request FlightRefundApplyV2Request
 * @return FlightRefundApplyV2Response
 */
FlightRefundApplyV2Response Client::flightRefundApplyV2(const FlightRefundApplyV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundApplyV2Headers headers = FlightRefundApplyV2Headers();
  return flightRefundApplyV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班退票详情
 *
 * @param request FlightRefundDetailRequest
 * @param headers FlightRefundDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundDetailResponse
 */
FlightRefundDetailResponse Client::flightRefundDetailWithOptions(const FlightRefundDetailRequest &request, const FlightRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    query["dis_sub_order_id"] = request.disSubOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightRefundDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/refund/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundDetailResponse>();
}

/**
 * @summary 航班退票详情
 *
 * @param request FlightRefundDetailRequest
 * @return FlightRefundDetailResponse
 */
FlightRefundDetailResponse Client::flightRefundDetail(const FlightRefundDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundDetailHeaders headers = FlightRefundDetailHeaders();
  return flightRefundDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 机票退票详情
 *
 * @param request FlightRefundDetailV2Request
 * @param headers FlightRefundDetailV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundDetailV2Response
 */
FlightRefundDetailV2Response Client::flightRefundDetailV2WithOptions(const FlightRefundDetailV2Request &request, const FlightRefundDetailV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutRefundApplyId()) {
    query["out_refund_apply_id"] = request.outRefundApplyId();
  }

  if (!!request.hasRefundApplyId()) {
    query["refund_apply_id"] = request.refundApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightRefundDetailV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/refund/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundDetailV2Response>();
}

/**
 * @summary 机票退票详情
 *
 * @param request FlightRefundDetailV2Request
 * @return FlightRefundDetailV2Response
 */
FlightRefundDetailV2Response Client::flightRefundDetailV2(const FlightRefundDetailV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundDetailV2Headers headers = FlightRefundDetailV2Headers();
  return flightRefundDetailV2WithOptions(request, headers, runtime);
}

/**
 * @summary 机票退票预计算
 *
 * @param tmpReq FlightRefundPreCalRequest
 * @param headers FlightRefundPreCalHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundPreCalResponse
 */
FlightRefundPreCalResponse Client::flightRefundPreCalWithOptions(const FlightRefundPreCalRequest &tmpReq, const FlightRefundPreCalHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightRefundPreCalShrinkRequest request = FlightRefundPreCalShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPassengerSegmentInfoList()) {
    request.setPassengerSegmentInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentInfoList(), "passenger_segment_info_list", "json"));
  }

  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasIsVoluntary()) {
    query["is_voluntary"] = request.isVoluntary();
  }

  if (!!request.hasPassengerSegmentInfoListShrink()) {
    query["passenger_segment_info_list"] = request.passengerSegmentInfoListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightRefundPreCal"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/refund/action/pre-cal")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundPreCalResponse>();
}

/**
 * @summary 机票退票预计算
 *
 * @param request FlightRefundPreCalRequest
 * @return FlightRefundPreCalResponse
 */
FlightRefundPreCalResponse Client::flightRefundPreCal(const FlightRefundPreCalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundPreCalHeaders headers = FlightRefundPreCalHeaders();
  return flightRefundPreCalWithOptions(request, headers, runtime);
}

/**
 * @summary 机票退票费用预计算
 *
 * @param tmpReq FlightRefundPreCalV2Request
 * @param headers FlightRefundPreCalV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightRefundPreCalV2Response
 */
FlightRefundPreCalV2Response Client::flightRefundPreCalV2WithOptions(const FlightRefundPreCalV2Request &tmpReq, const FlightRefundPreCalV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  FlightRefundPreCalV2ShrinkRequest request = FlightRefundPreCalV2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPassengerSegmentRelations()) {
    request.setPassengerSegmentRelationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerSegmentRelations(), "passenger_segment_relations", "json"));
  }

  if (!!tmpReq.hasTicketNos()) {
    request.setTicketNosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ticketNos(), "ticket_nos", "json"));
  }

  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPassengerSegmentRelationsShrink()) {
    query["passenger_segment_relations"] = request.passengerSegmentRelationsShrink();
  }

  if (!!request.hasPreCalType()) {
    query["pre_cal_type"] = request.preCalType();
  }

  if (!!request.hasTicketNosShrink()) {
    query["ticket_nos"] = request.ticketNosShrink();
  }

  if (!!request.hasVoluntary()) {
    query["voluntary"] = request.voluntary();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightRefundPreCalV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v2/refund/action/pre-cal")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightRefundPreCalV2Response>();
}

/**
 * @summary 机票退票费用预计算
 *
 * @param request FlightRefundPreCalV2Request
 * @return FlightRefundPreCalV2Response
 */
FlightRefundPreCalV2Response Client::flightRefundPreCalV2(const FlightRefundPreCalV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightRefundPreCalV2Headers headers = FlightRefundPreCalV2Headers();
  return flightRefundPreCalV2WithOptions(request, headers, runtime);
}

/**
 * @summary 航班列表搜索
 *
 * @param request FlightSearchListRequest
 * @param headers FlightSearchListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FlightSearchListResponse
 */
FlightSearchListResponse Client::flightSearchListWithOptions(const FlightSearchListRequest &request, const FlightSearchListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAirlineCode()) {
    query["airline_code"] = request.airlineCode();
  }

  if (!!request.hasArrCityCode()) {
    query["arr_city_code"] = request.arrCityCode();
  }

  if (!!request.hasArrCityName()) {
    query["arr_city_name"] = request.arrCityName();
  }

  if (!!request.hasArrDate()) {
    query["arr_date"] = request.arrDate();
  }

  if (!!request.hasCabinClass()) {
    query["cabin_class"] = request.cabinClass();
  }

  if (!!request.hasDepCityCode()) {
    query["dep_city_code"] = request.depCityCode();
  }

  if (!!request.hasDepCityName()) {
    query["dep_city_name"] = request.depCityName();
  }

  if (!!request.hasDepDate()) {
    query["dep_date"] = request.depDate();
  }

  if (!!request.hasFlightNo()) {
    query["flight_no"] = request.flightNo();
  }

  if (!!request.hasNeedMultiClassPrice()) {
    query["need_multi_class_price"] = request.needMultiClassPrice();
  }

  if (!!request.hasTransferCityCode()) {
    query["transfer_city_code"] = request.transferCityCode();
  }

  if (!!request.hasTransferFlightNo()) {
    query["transfer_flight_no"] = request.transferFlightNo();
  }

  if (!!request.hasTransferLeaveDate()) {
    query["transfer_leave_date"] = request.transferLeaveDate();
  }

  if (!!request.hasTripType()) {
    query["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FlightSearchList"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/huge/dtb-flight/v1/flight/action/search-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FlightSearchListResponse>();
}

/**
 * @summary 航班列表搜索
 *
 * @param request FlightSearchListRequest
 * @return FlightSearchListResponse
 */
FlightSearchListResponse Client::flightSearchList(const FlightSearchListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FlightSearchListHeaders headers = FlightSearchListHeaders();
  return flightSearchListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询福豆记账数据
 *
 * @param request FuPointBillSettlementQueryRequest
 * @param headers FuPointBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FuPointBillSettlementQueryResponse
 */
FuPointBillSettlementQueryResponse Client::fuPointBillSettlementQueryWithOptions(const FuPointBillSettlementQueryRequest &request, const FuPointBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasCooperatorId()) {
    query["cooperator_id"] = request.cooperatorId();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FuPointBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/fupoint/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FuPointBillSettlementQueryResponse>();
}

/**
 * @summary 查询福豆记账数据
 *
 * @param request FuPointBillSettlementQueryRequest
 * @return FuPointBillSettlementQueryResponse
 */
FuPointBillSettlementQueryResponse Client::fuPointBillSettlementQuery(const FuPointBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FuPointBillSettlementQueryHeaders headers = FuPointBillSettlementQueryHeaders();
  return fuPointBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 换取GroupCorpToken接口
 *
 * @param request GroupCorpTokenRequest
 * @param headers GroupCorpTokenHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GroupCorpTokenResponse
 */
GroupCorpTokenResponse Client::groupCorpTokenWithOptions(const GroupCorpTokenRequest &request, const GroupCorpTokenHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppSecret()) {
    query["app_secret"] = request.appSecret();
  }

  if (!!request.hasCorpId()) {
    query["corp_id"] = request.corpId();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripAccessToken()) {
    realHeaders["x-acs-btrip-access-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripAccessToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GroupCorpToken"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/btrip-open-auth/v1/group-corp-token/action/take")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GroupCorpTokenResponse>();
}

/**
 * @summary 换取GroupCorpToken接口
 *
 * @param request GroupCorpTokenRequest
 * @return GroupCorpTokenResponse
 */
GroupCorpTokenResponse Client::groupCorpToken(const GroupCorpTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GroupCorpTokenHeaders headers = GroupCorpTokenHeaders();
  return groupCorpTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 集团部门同步
 *
 * @param tmpReq GroupDepartSaveRequest
 * @param headers GroupDepartSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GroupDepartSaveResponse
 */
GroupDepartSaveResponse Client::groupDepartSaveWithOptions(const GroupDepartSaveRequest &tmpReq, const GroupDepartSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GroupDepartSaveShrinkRequest request = GroupDepartSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubCorpIdList()) {
    request.setSubCorpIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subCorpIdList(), "sub_corp_id_list", "json"));
  }

  json body = {};
  if (!!request.hasDeptName()) {
    body["dept_name"] = request.deptName();
  }

  if (!!request.hasManagerIds()) {
    body["manager_ids"] = request.managerIds();
  }

  if (!!request.hasOuterDeptId()) {
    body["outer_dept_id"] = request.outerDeptId();
  }

  if (!!request.hasOuterDeptPid()) {
    body["outer_dept_pid"] = request.outerDeptPid();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasSubCorpIdListShrink()) {
    body["sub_corp_id_list"] = request.subCorpIdListShrink();
  }

  if (!!request.hasSyncGroup()) {
    body["sync_group"] = request.syncGroup();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GroupDepartSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sub_corps/v1/departs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GroupDepartSaveResponse>();
}

/**
 * @summary 集团部门同步
 *
 * @param request GroupDepartSaveRequest
 * @return GroupDepartSaveResponse
 */
GroupDepartSaveResponse Client::groupDepartSave(const GroupDepartSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GroupDepartSaveHeaders headers = GroupDepartSaveHeaders();
  return groupDepartSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 集团人员同步
 *
 * @param tmpReq GroupUserSaveRequest
 * @param headers GroupUserSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GroupUserSaveResponse
 */
GroupUserSaveResponse Client::groupUserSaveWithOptions(const GroupUserSaveRequest &tmpReq, const GroupUserSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GroupUserSaveShrinkRequest request = GroupUserSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCertList()) {
    request.setCertListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certList(), "cert_list", "json"));
  }

  if (!!tmpReq.hasSubCorpIdList()) {
    request.setSubCorpIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subCorpIdList(), "sub_corp_id_list", "json"));
  }

  json body = {};
  if (!!request.hasBaseCityCode()) {
    body["base_city_code"] = request.baseCityCode();
  }

  if (!!request.hasBirthday()) {
    body["birthday"] = request.birthday();
  }

  if (!!request.hasCertListShrink()) {
    body["cert_list"] = request.certListShrink();
  }

  if (!!request.hasGender()) {
    body["gender"] = request.gender();
  }

  if (!!request.hasJobNo()) {
    body["job_no"] = request.jobNo();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  if (!!request.hasSubCorpIdListShrink()) {
    body["sub_corp_id_list"] = request.subCorpIdListShrink();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GroupUserSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sub_corps/v1/users")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GroupUserSaveResponse>();
}

/**
 * @summary 集团人员同步
 *
 * @param request GroupUserSaveRequest
 * @return GroupUserSaveResponse
 */
GroupUserSaveResponse Client::groupUserSave(const GroupUserSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GroupUserSaveHeaders headers = GroupUserSaveHeaders();
  return groupUserSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店起价
 *
 * @param tmpReq HotelAskingPriceRequest
 * @param headers HotelAskingPriceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelAskingPriceResponse
 */
HotelAskingPriceResponse Client::hotelAskingPriceWithOptions(const HotelAskingPriceRequest &tmpReq, const HotelAskingPriceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelAskingPriceShrinkRequest request = HotelAskingPriceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasShids()) {
    request.setShidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.shids(), "shids", "json"));
  }

  json query = {};
  if (!!request.hasAdultNum()) {
    query["adult_num"] = request.adultNum();
  }

  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckInDate()) {
    query["check_in_date"] = request.checkInDate();
  }

  if (!!request.hasCheckOutDate()) {
    query["check_out_date"] = request.checkOutDate();
  }

  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasCityName()) {
    query["city_name"] = request.cityName();
  }

  if (!!request.hasDir()) {
    query["dir"] = request.dir();
  }

  if (!!request.hasHotelStar()) {
    query["hotel_star"] = request.hotelStar();
  }

  if (!!request.hasIsProtocol()) {
    query["is_protocol"] = request.isProtocol();
  }

  if (!!request.hasPaymentType()) {
    query["payment_type"] = request.paymentType();
  }

  if (!!request.hasShidsShrink()) {
    query["shids"] = request.shidsShrink();
  }

  if (!!request.hasSortCode()) {
    query["sort_code"] = request.sortCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelAskingPrice"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/hotels/action/asking-price")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelAskingPriceResponse>();
}

/**
 * @summary 酒店起价
 *
 * @param request HotelAskingPriceRequest
 * @return HotelAskingPriceResponse
 */
HotelAskingPriceResponse Client::hotelAskingPrice(const HotelAskingPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelAskingPriceHeaders headers = HotelAskingPriceHeaders();
  return hotelAskingPriceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店记账数据
 *
 * @param request HotelBillSettlementQueryRequest
 * @param headers HotelBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelBillSettlementQueryResponse
 */
HotelBillSettlementQueryResponse Client::hotelBillSettlementQueryWithOptions(const HotelBillSettlementQueryRequest &request, const HotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/hotel/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelBillSettlementQueryResponse>();
}

/**
 * @summary 查询酒店记账数据
 *
 * @param request HotelBillSettlementQueryRequest
 * @return HotelBillSettlementQueryResponse
 */
HotelBillSettlementQueryResponse Client::hotelBillSettlementQuery(const HotelBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelBillSettlementQueryHeaders headers = HotelBillSettlementQueryHeaders();
  return hotelBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店城市列表
 *
 * @param request HotelCityCodeListRequest
 * @param headers HotelCityCodeListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelCityCodeListResponse
 */
HotelCityCodeListResponse Client::hotelCityCodeListWithOptions(const HotelCityCodeListRequest &request, const HotelCityCodeListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCountryCode()) {
    query["country_code"] = request.countryCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelCityCodeList"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/city-codes/action/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelCityCodeListResponse>();
}

/**
 * @summary 酒店城市列表
 *
 * @param request HotelCityCodeListRequest
 * @return HotelCityCodeListResponse
 */
HotelCityCodeListResponse Client::hotelCityCodeList(const HotelCityCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelCityCodeListHeaders headers = HotelCityCodeListHeaders();
  return hotelCityCodeListWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店超标审批详情
 *
 * @param request HotelExceedApplyQueryRequest
 * @param headers HotelExceedApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelExceedApplyQueryResponse
 */
HotelExceedApplyQueryResponse Client::hotelExceedApplyQueryWithOptions(const HotelExceedApplyQueryRequest &request, const HotelExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelExceedApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/hotel-exceed")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelExceedApplyQueryResponse>();
}

/**
 * @summary 查询酒店超标审批详情
 *
 * @param request HotelExceedApplyQueryRequest
 * @return HotelExceedApplyQueryResponse
 */
HotelExceedApplyQueryResponse Client::hotelExceedApplyQuery(const HotelExceedApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelExceedApplyQueryHeaders headers = HotelExceedApplyQueryHeaders();
  return hotelExceedApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店详情页报价接口(直连)
 *
 * @param request HotelGoodsQueryRequest
 * @param headers HotelGoodsQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelGoodsQueryResponse
 */
HotelGoodsQueryResponse Client::hotelGoodsQueryWithOptions(const HotelGoodsQueryRequest &request, const HotelGoodsQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdultNum()) {
    query["adult_num"] = request.adultNum();
  }

  if (!!request.hasAgreementPrice()) {
    query["agreement_price"] = request.agreementPrice();
  }

  if (!!request.hasBeginDate()) {
    query["begin_date"] = request.beginDate();
  }

  if (!!request.hasBreakfastIncluded()) {
    query["breakfast_included"] = request.breakfastIncluded();
  }

  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasEndDate()) {
    query["end_date"] = request.endDate();
  }

  if (!!request.hasHotelId()) {
    query["hotel_id"] = request.hotelId();
  }

  if (!!request.hasPayOverType()) {
    query["pay_over_type"] = request.payOverType();
  }

  if (!!request.hasPaymentType()) {
    query["payment_type"] = request.paymentType();
  }

  if (!!request.hasSpecialInvoice()) {
    query["special_invoice"] = request.specialInvoice();
  }

  if (!!request.hasSuperMan()) {
    query["super_man"] = request.superMan();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelGoodsQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/hotel-goods")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelGoodsQueryResponse>();
}

/**
 * @summary 酒店详情页报价接口(直连)
 *
 * @param request HotelGoodsQueryRequest
 * @return HotelGoodsQueryResponse
 */
HotelGoodsQueryResponse Client::hotelGoodsQuery(const HotelGoodsQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelGoodsQueryHeaders headers = HotelGoodsQueryHeaders();
  return hotelGoodsQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店清单
 *
 * @param request HotelIndexInfoRequest
 * @param headers HotelIndexInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelIndexInfoResponse
 */
HotelIndexInfoResponse Client::hotelIndexInfoWithOptions(const HotelIndexInfoRequest &request, const HotelIndexInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasHotelStatus()) {
    query["hotel_status"] = request.hotelStatus();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPageToken()) {
    query["page_token"] = request.pageToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelIndexInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/index-infos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelIndexInfoResponse>();
}

/**
 * @summary 获取酒店清单
 *
 * @param request HotelIndexInfoRequest
 * @return HotelIndexInfoResponse
 */
HotelIndexInfoResponse Client::hotelIndexInfo(const HotelIndexInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelIndexInfoHeaders headers = HotelIndexInfoHeaders();
  return hotelIndexInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单取消
 *
 * @param request HotelOrderCancelRequest
 * @param headers HotelOrderCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderCancelResponse
 */
HotelOrderCancelResponse Client::hotelOrderCancelWithOptions(const HotelOrderCancelRequest &request, const HotelOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripOrderId()) {
    query["btrip_order_id"] = request.btripOrderId();
  }

  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderCancelResponse>();
}

/**
 * @summary 酒店订单取消
 *
 * @param request HotelOrderCancelRequest
 * @return HotelOrderCancelResponse
 */
HotelOrderCancelResponse Client::hotelOrderCancel(const HotelOrderCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderCancelHeaders headers = HotelOrderCancelHeaders();
  return hotelOrderCancelWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单修改申请
 *
 * @param tmpReq HotelOrderChangeApplyRequest
 * @param headers HotelOrderChangeApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderChangeApplyResponse
 */
HotelOrderChangeApplyResponse Client::hotelOrderChangeApplyWithOptions(const HotelOrderChangeApplyRequest &tmpReq, const HotelOrderChangeApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelOrderChangeApplyShrinkRequest request = HotelOrderChangeApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoomInfoList()) {
    request.setRoomInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomInfoList(), "room_info_list", "json"));
  }

  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  if (!!request.hasRoomInfoListShrink()) {
    body["room_info_list"] = request.roomInfoListShrink();
  }

  if (!!request.hasSaleOrderId()) {
    body["sale_order_id"] = request.saleOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HotelOrderChangeApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/change/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderChangeApplyResponse>();
}

/**
 * @summary 酒店订单修改申请
 *
 * @param request HotelOrderChangeApplyRequest
 * @return HotelOrderChangeApplyResponse
 */
HotelOrderChangeApplyResponse Client::hotelOrderChangeApply(const HotelOrderChangeApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderChangeApplyHeaders headers = HotelOrderChangeApplyHeaders();
  return hotelOrderChangeApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单修改详情
 *
 * @param request HotelOrderChangeDetailRequest
 * @param headers HotelOrderChangeDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderChangeDetailResponse
 */
HotelOrderChangeDetailResponse Client::hotelOrderChangeDetailWithOptions(const HotelOrderChangeDetailRequest &request, const HotelOrderChangeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasChangeOrderId()) {
    body["change_order_id"] = request.changeOrderId();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasSaleOrderId()) {
    body["sale_order_id"] = request.saleOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HotelOrderChangeDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/change/detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderChangeDetailResponse>();
}

/**
 * @summary 酒店订单修改详情
 *
 * @param request HotelOrderChangeDetailRequest
 * @return HotelOrderChangeDetailResponse
 */
HotelOrderChangeDetailResponse Client::hotelOrderChangeDetail(const HotelOrderChangeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderChangeDetailHeaders headers = HotelOrderChangeDetailHeaders();
  return hotelOrderChangeDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单创建
 *
 * @param tmpReq HotelOrderCreateRequest
 * @param headers HotelOrderCreateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderCreateResponse
 */
HotelOrderCreateResponse Client::hotelOrderCreateWithOptions(const HotelOrderCreateRequest &tmpReq, const HotelOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelOrderCreateShrinkRequest request = HotelOrderCreateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInvoiceInfo()) {
    request.setInvoiceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.invoiceInfo(), "invoice_info", "json"));
  }

  if (!!tmpReq.hasOccupantInfoList()) {
    request.setOccupantInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.occupantInfoList(), "occupant_info_list", "json"));
  }

  if (!!tmpReq.hasPromotionInfo()) {
    request.setPromotionInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promotionInfo(), "promotion_info", "json"));
  }

  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckIn()) {
    body["check_in"] = request.checkIn();
  }

  if (!!request.hasCheckOut()) {
    body["check_out"] = request.checkOut();
  }

  if (!!request.hasContractEmail()) {
    body["contract_email"] = request.contractEmail();
  }

  if (!!request.hasContractName()) {
    body["contract_name"] = request.contractName();
  }

  if (!!request.hasContractPhone()) {
    body["contract_phone"] = request.contractPhone();
  }

  if (!!request.hasCorpPayPrice()) {
    body["corp_pay_price"] = request.corpPayPrice();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasExtra()) {
    body["extra"] = request.extra();
  }

  if (!!request.hasInvoiceInfoShrink()) {
    body["invoice_info"] = request.invoiceInfoShrink();
  }

  if (!!request.hasItemId()) {
    body["item_id"] = request.itemId();
  }

  if (!!request.hasItineraryNo()) {
    body["itinerary_no"] = request.itineraryNo();
  }

  if (!!request.hasOccupantInfoListShrink()) {
    body["occupant_info_list"] = request.occupantInfoListShrink();
  }

  if (!!request.hasPersonPayPrice()) {
    body["person_pay_price"] = request.personPayPrice();
  }

  if (!!request.hasPromotionInfoShrink()) {
    body["promotion_info"] = request.promotionInfoShrink();
  }

  if (!!request.hasRatePlanId()) {
    body["rate_plan_id"] = request.ratePlanId();
  }

  if (!!request.hasRoomId()) {
    body["room_id"] = request.roomId();
  }

  if (!!request.hasRoomNum()) {
    body["room_num"] = request.roomNum();
  }

  if (!!request.hasSellerId()) {
    body["seller_id"] = request.sellerId();
  }

  if (!!request.hasShid()) {
    body["shid"] = request.shid();
  }

  if (!!request.hasTotalOrderPrice()) {
    body["total_order_price"] = request.totalOrderPrice();
  }

  if (!!request.hasValidateResKey()) {
    body["validate_res_key"] = request.validateResKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HotelOrderCreate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderCreateResponse>();
}

/**
 * @summary 酒店订单创建
 *
 * @param request HotelOrderCreateRequest
 * @return HotelOrderCreateResponse
 */
HotelOrderCreateResponse Client::hotelOrderCreate(const HotelOrderCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderCreateHeaders headers = HotelOrderCreateHeaders();
  return hotelOrderCreateWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单明细信息
 *
 * @param request HotelOrderDetailInfoRequest
 * @param headers HotelOrderDetailInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderDetailInfoResponse
 */
HotelOrderDetailInfoResponse Client::hotelOrderDetailInfoWithOptions(const HotelOrderDetailInfoRequest &request, const HotelOrderDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripOrderId()) {
    query["btrip_order_id"] = request.btripOrderId();
  }

  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderDetailInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderDetailInfoResponse>();
}

/**
 * @summary 酒店订单明细信息
 *
 * @param request HotelOrderDetailInfoRequest
 * @return HotelOrderDetailInfoResponse
 */
HotelOrderDetailInfoResponse Client::hotelOrderDetailInfo(const HotelOrderDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderDetailInfoHeaders headers = HotelOrderDetailInfoHeaders();
  return hotelOrderDetailInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 自营酒店订单查询
 *
 * @param headers HotelOrderInfoQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderInfoQueryResponse
 */
HotelOrderInfoQueryResponse Client::hotelOrderInfoQueryWithOptions(const string &orderId, const HotelOrderInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderInfoQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/order/v1/hotelOrders/" , Darabonba::Http::URL::percentEncode(orderId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderInfoQueryResponse>();
}

/**
 * @summary 自营酒店订单查询
 *
 * @return HotelOrderInfoQueryResponse
 */
HotelOrderInfoQueryResponse Client::hotelOrderInfoQuery(const string &orderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderInfoQueryHeaders headers = HotelOrderInfoQueryHeaders();
  return hotelOrderInfoQueryWithOptions(orderId, headers, runtime);
}

/**
 * @summary 查询酒店订单列表
 *
 * @param request HotelOrderListQueryRequest
 * @param headers HotelOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderListQueryResponse
 */
HotelOrderListQueryResponse Client::hotelOrderListQueryWithOptions(const HotelOrderListQueryRequest &request, const HotelOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllApply()) {
    query["all_apply"] = request.allApply();
  }

  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasDepartId()) {
    query["depart_id"] = request.departId();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasUpdateEndTime()) {
    query["update_end_time"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    query["update_start_time"] = request.updateStartTime();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/hotel/v1/order-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderListQueryResponse>();
}

/**
 * @summary 查询酒店订单列表
 *
 * @param request HotelOrderListQueryRequest
 * @return HotelOrderListQueryResponse
 */
HotelOrderListQueryResponse Client::hotelOrderListQuery(const HotelOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderListQueryHeaders headers = HotelOrderListQueryHeaders();
  return hotelOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单支付
 *
 * @param request HotelOrderPayRequest
 * @param headers HotelOrderPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderPayResponse
 */
HotelOrderPayResponse Client::hotelOrderPayWithOptions(const HotelOrderPayRequest &request, const HotelOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripOrderId()) {
    body["btrip_order_id"] = request.btripOrderId();
  }

  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCompanyPayFee()) {
    body["company_pay_fee"] = request.companyPayFee();
  }

  if (!!request.hasPersonPayFee()) {
    body["person_pay_fee"] = request.personPayFee();
  }

  if (!!request.hasThirdPayAccount()) {
    body["third_pay_account"] = request.thirdPayAccount();
  }

  if (!!request.hasThirdTradeNo()) {
    body["third_trade_no"] = request.thirdTradeNo();
  }

  if (!!request.hasTotalPrice()) {
    body["total_price"] = request.totalPrice();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "HotelOrderPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderPayResponse>();
}

/**
 * @summary 酒店订单支付
 *
 * @param request HotelOrderPayRequest
 * @return HotelOrderPayResponse
 */
HotelOrderPayResponse Client::hotelOrderPay(const HotelOrderPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderPayHeaders headers = HotelOrderPayHeaders();
  return hotelOrderPayWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店下单前校验
 *
 * @param tmpReq HotelOrderPreValidateRequest
 * @param headers HotelOrderPreValidateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderPreValidateResponse
 */
HotelOrderPreValidateResponse Client::hotelOrderPreValidateWithOptions(const HotelOrderPreValidateRequest &tmpReq, const HotelOrderPreValidateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelOrderPreValidateShrinkRequest request = HotelOrderPreValidateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDailyList()) {
    request.setDailyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dailyList(), "daily_list", "json"));
  }

  if (!!tmpReq.hasOccupantInfoList()) {
    request.setOccupantInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.occupantInfoList(), "occupant_info_list", "json"));
  }

  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckIn()) {
    query["check_in"] = request.checkIn();
  }

  if (!!request.hasCheckOut()) {
    query["check_out"] = request.checkOut();
  }

  if (!!request.hasDailyListShrink()) {
    query["daily_list"] = request.dailyListShrink();
  }

  if (!!request.hasItemId()) {
    query["item_id"] = request.itemId();
  }

  if (!!request.hasNumberOfAdultsPerRoom()) {
    query["number_of_adults_per_room"] = request.numberOfAdultsPerRoom();
  }

  if (!!request.hasOccupantInfoListShrink()) {
    query["occupant_info_list"] = request.occupantInfoListShrink();
  }

  if (!!request.hasRatePlanId()) {
    query["rate_plan_id"] = request.ratePlanId();
  }

  if (!!request.hasRoomId()) {
    query["room_id"] = request.roomId();
  }

  if (!!request.hasRoomNum()) {
    query["room_num"] = request.roomNum();
  }

  if (!!request.hasSearchRoomPrice()) {
    query["search_room_price"] = request.searchRoomPrice();
  }

  if (!!request.hasSellerId()) {
    query["seller_id"] = request.sellerId();
  }

  if (!!request.hasShid()) {
    query["shid"] = request.shid();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderPreValidate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/orders/action/pre-validate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderPreValidateResponse>();
}

/**
 * @summary 酒店下单前校验
 *
 * @param request HotelOrderPreValidateRequest
 * @return HotelOrderPreValidateResponse
 */
HotelOrderPreValidateResponse Client::hotelOrderPreValidate(const HotelOrderPreValidateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderPreValidateHeaders headers = HotelOrderPreValidateHeaders();
  return hotelOrderPreValidateWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店订单查询
 *
 * @param request HotelOrderQueryRequest
 * @param headers HotelOrderQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelOrderQueryResponse
 */
HotelOrderQueryResponse Client::hotelOrderQueryWithOptions(const HotelOrderQueryRequest &request, const HotelOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelOrderQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/hotel/v1/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelOrderQueryResponse>();
}

/**
 * @summary 酒店订单查询
 *
 * @param request HotelOrderQueryRequest
 * @return HotelOrderQueryResponse
 */
HotelOrderQueryResponse Client::hotelOrderQuery(const HotelOrderQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelOrderQueryHeaders headers = HotelOrderQueryHeaders();
  return hotelOrderQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店拉动态拉取价格接口(落地)
 *
 * @param tmpReq HotelPricePullRequest
 * @param headers HotelPricePullHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelPricePullResponse
 */
HotelPricePullResponse Client::hotelPricePullWithOptions(const HotelPricePullRequest &tmpReq, const HotelPricePullHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelPricePullShrinkRequest request = HotelPricePullShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelIds()) {
    request.setHotelIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotelIds(), "hotel_ids", "json"));
  }

  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckIn()) {
    query["check_in"] = request.checkIn();
  }

  if (!!request.hasCheckOut()) {
    query["check_out"] = request.checkOut();
  }

  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasHotelIdsShrink()) {
    query["hotel_ids"] = request.hotelIdsShrink();
  }

  if (!!request.hasPaymentType()) {
    query["payment_type"] = request.paymentType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelPricePull"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/prices/action/pull")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelPricePullResponse>();
}

/**
 * @summary 酒店拉动态拉取价格接口(落地)
 *
 * @param request HotelPricePullRequest
 * @return HotelPricePullResponse
 */
HotelPricePullResponse Client::hotelPricePull(const HotelPricePullRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelPricePullHeaders headers = HotelPricePullHeaders();
  return hotelPricePullWithOptions(request, headers, runtime);
}

/**
 * @summary 获取酒店静态房型详情
 *
 * @param tmpReq HotelRoomInfoRequest
 * @param headers HotelRoomInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelRoomInfoResponse
 */
HotelRoomInfoResponse Client::hotelRoomInfoWithOptions(const HotelRoomInfoRequest &tmpReq, const HotelRoomInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelRoomInfoShrinkRequest request = HotelRoomInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoomIds()) {
    request.setRoomIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roomIds(), "room_ids", "json"));
  }

  json query = {};
  if (!!request.hasRoomIdsShrink()) {
    query["room_ids"] = request.roomIdsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelRoomInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/room-infos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelRoomInfoResponse>();
}

/**
 * @summary 获取酒店静态房型详情
 *
 * @param request HotelRoomInfoRequest
 * @return HotelRoomInfoResponse
 */
HotelRoomInfoResponse Client::hotelRoomInfo(const HotelRoomInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelRoomInfoHeaders headers = HotelRoomInfoHeaders();
  return hotelRoomInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店列表搜索接口(直连)
 *
 * @param tmpReq HotelSearchRequest
 * @param headers HotelSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelSearchResponse
 */
HotelSearchResponse Client::hotelSearchWithOptions(const HotelSearchRequest &tmpReq, const HotelSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelSearchShrinkRequest request = HotelSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBrandCode()) {
    request.setBrandCodeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.brandCode(), "brand_code", "json"));
  }

  if (!!tmpReq.hasShids()) {
    request.setShidsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.shids(), "shids", "json"));
  }

  json query = {};
  if (!!request.hasAdultNum()) {
    query["adult_num"] = request.adultNum();
  }

  if (!!request.hasBrandCodeShrink()) {
    query["brand_code"] = request.brandCodeShrink();
  }

  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckInDate()) {
    query["check_in_date"] = request.checkInDate();
  }

  if (!!request.hasCheckOutDate()) {
    query["check_out_date"] = request.checkOutDate();
  }

  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasDir()) {
    query["dir"] = request.dir();
  }

  if (!!request.hasDistance()) {
    query["distance"] = request.distance();
  }

  if (!!request.hasDistrictCode()) {
    query["district_code"] = request.districtCode();
  }

  if (!!request.hasHotelStar()) {
    query["hotel_star"] = request.hotelStar();
  }

  if (!!request.hasIsProtocol()) {
    query["is_protocol"] = request.isProtocol();
  }

  if (!!request.hasKeyWords()) {
    query["key_words"] = request.keyWords();
  }

  if (!!request.hasLocation()) {
    query["location"] = request.location();
  }

  if (!!request.hasMaxPrice()) {
    query["max_price"] = request.maxPrice();
  }

  if (!!request.hasMinPrice()) {
    query["min_price"] = request.minPrice();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPayOverType()) {
    query["pay_over_type"] = request.payOverType();
  }

  if (!!request.hasPaymentType()) {
    query["payment_type"] = request.paymentType();
  }

  if (!!request.hasShidsShrink()) {
    query["shids"] = request.shidsShrink();
  }

  if (!!request.hasSortCode()) {
    query["sort_code"] = request.sortCode();
  }

  if (!!request.hasSuperMan()) {
    query["super_man"] = request.superMan();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/hotels/action/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelSearchResponse>();
}

/**
 * @summary 酒店列表搜索接口(直连)
 *
 * @param request HotelSearchRequest
 * @return HotelSearchResponse
 */
HotelSearchResponse Client::hotelSearch(const HotelSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelSearchHeaders headers = HotelSearchHeaders();
  return hotelSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 查询酒店静态详情
 *
 * @param tmpReq HotelStaticInfoRequest
 * @param headers HotelStaticInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelStaticInfoResponse
 */
HotelStaticInfoResponse Client::hotelStaticInfoWithOptions(const HotelStaticInfoRequest &tmpReq, const HotelStaticInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  HotelStaticInfoShrinkRequest request = HotelStaticInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotelIds()) {
    request.setHotelIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotelIds(), "hotel_ids", "json"));
  }

  json query = {};
  if (!!request.hasHotelIdsShrink()) {
    query["hotel_ids"] = request.hotelIdsShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelStaticInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v1/static-infos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelStaticInfoResponse>();
}

/**
 * @summary 查询酒店静态详情
 *
 * @param request HotelStaticInfoRequest
 * @return HotelStaticInfoResponse
 */
HotelStaticInfoResponse Client::hotelStaticInfo(const HotelStaticInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelStaticInfoHeaders headers = HotelStaticInfoHeaders();
  return hotelStaticInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 酒店关键词搜索
 *
 * @param request HotelSuggestV2Request
 * @param headers HotelSuggestV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return HotelSuggestV2Response
 */
HotelSuggestV2Response Client::hotelSuggestV2WithOptions(const HotelSuggestV2Request &request, const HotelSuggestV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasCheckIn()) {
    query["check_in"] = request.checkIn();
  }

  if (!!request.hasCheckOut()) {
    query["check_out"] = request.checkOut();
  }

  if (!!request.hasCityCode()) {
    query["city_code"] = request.cityCode();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  if (!!request.hasSearchType()) {
    query["search_type"] = request.searchType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HotelSuggestV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-hotel/v2/suggest-infos")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HotelSuggestV2Response>();
}

/**
 * @summary 酒店关键词搜索
 *
 * @param request HotelSuggestV2Request
 * @return HotelSuggestV2Response
 */
HotelSuggestV2Response Client::hotelSuggestV2(const HotelSuggestV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  HotelSuggestV2Headers headers = HotelSuggestV2Headers();
  return hotelSuggestV2WithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单详情
 *
 * @param request IFlightOrderDetailQueryRequest
 * @param headers IFlightOrderDetailQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IFlightOrderDetailQueryResponse
 */
IFlightOrderDetailQueryResponse Client::iFlightOrderDetailQueryWithOptions(const IFlightOrderDetailQueryRequest &request, const IFlightOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IFlightOrderDetailQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v1/intlFlight-order-detail-query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IFlightOrderDetailQueryResponse>();
}

/**
 * @summary 国际机票订单详情
 *
 * @param request IFlightOrderDetailQueryRequest
 * @return IFlightOrderDetailQueryResponse
 */
IFlightOrderDetailQueryResponse Client::iFlightOrderDetailQuery(const IFlightOrderDetailQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IFlightOrderDetailQueryHeaders headers = IFlightOrderDetailQueryHeaders();
  return iFlightOrderDetailQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单列表
 *
 * @param tmpReq IFlightOrderListQueryRequest
 * @param headers IFlightOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IFlightOrderListQueryResponse
 */
IFlightOrderListQueryResponse Client::iFlightOrderListQueryWithOptions(const IFlightOrderListQueryRequest &tmpReq, const IFlightOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IFlightOrderListQueryShrinkRequest request = IFlightOrderListQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyIdList()) {
    request.setApplyIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applyIdList(), "apply_id_list", "json"));
  }

  if (!!tmpReq.hasBookTypeList()) {
    request.setBookTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bookTypeList(), "book_type_list", "json"));
  }

  if (!!tmpReq.hasBookerId()) {
    request.setBookerIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bookerId(), "booker_id", "json"));
  }

  if (!!tmpReq.hasThirdPartApplyIdList()) {
    request.setThirdPartApplyIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdPartApplyIdList(), "third_part_apply_id_list", "json"));
  }

  json query = {};
  if (!!request.hasApplyIdListShrink()) {
    query["apply_id_list"] = request.applyIdListShrink();
  }

  if (!!request.hasBookTypeListShrink()) {
    query["book_type_list"] = request.bookTypeListShrink();
  }

  if (!!request.hasBookerIdShrink()) {
    query["booker_id"] = request.bookerIdShrink();
  }

  if (!!request.hasEndDate()) {
    query["end_date"] = request.endDate();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasStartDate()) {
    query["start_date"] = request.startDate();
  }

  if (!!request.hasThirdPartApplyIdListShrink()) {
    query["third_part_apply_id_list"] = request.thirdPartApplyIdListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IFlightOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v1/intlFlight-order-list-query")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IFlightOrderListQueryResponse>();
}

/**
 * @summary 国际机票订单列表
 *
 * @param request IFlightOrderListQueryRequest
 * @return IFlightOrderListQueryResponse
 */
IFlightOrderListQueryResponse Client::iFlightOrderListQuery(const IFlightOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IFlightOrderListQueryHeaders headers = IFlightOrderListQueryHeaders();
  return iFlightOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询国际机票记账数据
 *
 * @param request IeFlightBillSettlementQueryRequest
 * @param headers IeFlightBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IeFlightBillSettlementQueryResponse
 */
IeFlightBillSettlementQueryResponse Client::ieFlightBillSettlementQueryWithOptions(const IeFlightBillSettlementQueryRequest &request, const IeFlightBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IeFlightBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ie-flight/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IeFlightBillSettlementQueryResponse>();
}

/**
 * @summary 查询国际机票记账数据
 *
 * @param request IeFlightBillSettlementQueryRequest
 * @return IeFlightBillSettlementQueryResponse
 */
IeFlightBillSettlementQueryResponse Client::ieFlightBillSettlementQuery(const IeFlightBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IeFlightBillSettlementQueryHeaders headers = IeFlightBillSettlementQueryHeaders();
  return ieFlightBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询国际/中国港澳台酒店记账数据
 *
 * @param request IeHotelBillSettlementQueryRequest
 * @param headers IeHotelBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IeHotelBillSettlementQueryResponse
 */
IeHotelBillSettlementQueryResponse Client::ieHotelBillSettlementQueryWithOptions(const IeHotelBillSettlementQueryRequest &request, const IeHotelBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasCategory()) {
    query["category"] = request.category();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IeHotelBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/ie-hotel/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IeHotelBillSettlementQueryResponse>();
}

/**
 * @summary 查询国际/中国港澳台酒店记账数据
 *
 * @param request IeHotelBillSettlementQueryRequest
 * @return IeHotelBillSettlementQueryResponse
 */
IeHotelBillSettlementQueryResponse Client::ieHotelBillSettlementQuery(const IeHotelBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IeHotelBillSettlementQueryHeaders headers = IeHotelBillSettlementQueryHeaders();
  return ieHotelBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询保险电子发票
 *
 * @param request InsInvoiceScanQueryRequest
 * @param headers InsInvoiceScanQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsInvoiceScanQueryResponse
 */
InsInvoiceScanQueryResponse Client::insInvoiceScanQueryWithOptions(const InsInvoiceScanQueryRequest &request, const InsInvoiceScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillDate()) {
    query["bill_date"] = request.billDate();
  }

  if (!!request.hasBillId()) {
    query["bill_id"] = request.billId();
  }

  if (!!request.hasInvoiceSubTaskId()) {
    query["invoice_sub_task_id"] = request.invoiceSubTaskId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsInvoiceScanQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/scan/v1/ins-invoice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsInvoiceScanQueryResponse>();
}

/**
 * @summary 查询保险电子发票
 *
 * @param request InsInvoiceScanQueryRequest
 * @return InsInvoiceScanQueryResponse
 */
InsInvoiceScanQueryResponse Client::insInvoiceScanQuery(const InsInvoiceScanQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsInvoiceScanQueryHeaders headers = InsInvoiceScanQueryHeaders();
  return insInvoiceScanQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 保险订单申请
 *
 * @param request InsureOrderApplyRequest
 * @param headers InsureOrderApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderApplyResponse
 */
InsureOrderApplyResponse Client::insureOrderApplyWithOptions(const InsureOrderApplyRequest &request, const InsureOrderApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasInsOrderId()) {
    body["ins_order_id"] = request.insOrderId();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasSupplierCode()) {
    body["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsureOrderApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderApplyResponse>();
}

/**
 * @summary 保险订单申请
 *
 * @param request InsureOrderApplyRequest
 * @return InsureOrderApplyResponse
 */
InsureOrderApplyResponse Client::insureOrderApply(const InsureOrderApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderApplyHeaders headers = InsureOrderApplyHeaders();
  return insureOrderApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 保险订单取消
 *
 * @param request InsureOrderCancelRequest
 * @param headers InsureOrderCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderCancelResponse
 */
InsureOrderCancelResponse Client::insureOrderCancelWithOptions(const string &insOrderId, const InsureOrderCancelRequest &request, const InsureOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasSupplierCode()) {
    query["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsureOrderCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/" , Darabonba::Http::URL::percentEncode(insOrderId) , "/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderCancelResponse>();
}

/**
 * @summary 保险订单取消
 *
 * @param request InsureOrderCancelRequest
 * @return InsureOrderCancelResponse
 */
InsureOrderCancelResponse Client::insureOrderCancel(const string &insOrderId, const InsureOrderCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderCancelHeaders headers = InsureOrderCancelHeaders();
  return insureOrderCancelWithOptions(insOrderId, request, headers, runtime);
}

/**
 * @summary 保险订单创建
 *
 * @param tmpReq InsureOrderCreateRequest
 * @param headers InsureOrderCreateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderCreateResponse
 */
InsureOrderCreateResponse Client::insureOrderCreateWithOptions(const InsureOrderCreateRequest &tmpReq, const InsureOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsureOrderCreateShrinkRequest request = InsureOrderCreateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicant()) {
    request.setApplicantShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applicant(), "applicant", "json"));
  }

  if (!!tmpReq.hasInsPersonAndSegmentList()) {
    request.setInsPersonAndSegmentListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.insPersonAndSegmentList(), "ins_person_and_segment_list", "json"));
  }

  json body = {};
  if (!!request.hasApplicantShrink()) {
    body["applicant"] = request.applicantShrink();
  }

  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasInsPersonAndSegmentListShrink()) {
    body["ins_person_and_segment_list"] = request.insPersonAndSegmentListShrink();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOutInsOrderId()) {
    body["out_ins_order_id"] = request.outInsOrderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasSupplierCode()) {
    body["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsureOrderCreate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/action/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderCreateResponse>();
}

/**
 * @summary 保险订单创建
 *
 * @param request InsureOrderCreateRequest
 * @return InsureOrderCreateResponse
 */
InsureOrderCreateResponse Client::insureOrderCreate(const InsureOrderCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderCreateHeaders headers = InsureOrderCreateHeaders();
  return insureOrderCreateWithOptions(request, headers, runtime);
}

/**
 * @summary 保险订单查询
 *
 * @param request InsureOrderDetailRequest
 * @param headers InsureOrderDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderDetailResponse
 */
InsureOrderDetailResponse Client::insureOrderDetailWithOptions(const InsureOrderDetailRequest &request, const InsureOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasInsOrderId()) {
    query["ins_order_id"] = request.insOrderId();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasSupplierCode()) {
    query["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsureOrderDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderDetailResponse>();
}

/**
 * @summary 保险订单查询
 *
 * @param request InsureOrderDetailRequest
 * @return InsureOrderDetailResponse
 */
InsureOrderDetailResponse Client::insureOrderDetail(const InsureOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderDetailHeaders headers = InsureOrderDetailHeaders();
  return insureOrderDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 保险订单支付
 *
 * @param request InsureOrderPayRequest
 * @param headers InsureOrderPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderPayResponse
 */
InsureOrderPayResponse Client::insureOrderPayWithOptions(const string &insOrderId, const InsureOrderPayRequest &request, const InsureOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutSubOrderId()) {
    body["out_sub_order_id"] = request.outSubOrderId();
  }

  if (!!request.hasPaymentAmount()) {
    body["payment_amount"] = request.paymentAmount();
  }

  if (!!request.hasSupplierCode()) {
    body["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsureOrderPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/" , Darabonba::Http::URL::percentEncode(insOrderId) , "/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderPayResponse>();
}

/**
 * @summary 保险订单支付
 *
 * @param request InsureOrderPayRequest
 * @return InsureOrderPayResponse
 */
InsureOrderPayResponse Client::insureOrderPay(const string &insOrderId, const InsureOrderPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderPayHeaders headers = InsureOrderPayHeaders();
  return insureOrderPayWithOptions(insOrderId, request, headers, runtime);
}

/**
 * @summary 保险订单退保
 *
 * @param tmpReq InsureOrderRefundRequest
 * @param headers InsureOrderRefundHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderRefundResponse
 */
InsureOrderRefundResponse Client::insureOrderRefundWithOptions(const string &insOrderId, const InsureOrderRefundRequest &tmpReq, const InsureOrderRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InsureOrderRefundShrinkRequest request = InsureOrderRefundShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPolicyNoList()) {
    request.setPolicyNoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.policyNoList(), "policy_no_list", "json"));
  }

  if (!!tmpReq.hasSubInsOrderIds()) {
    request.setSubInsOrderIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subInsOrderIds(), "sub_ins_order_ids", "json"));
  }

  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOutApplyId()) {
    body["out_apply_id"] = request.outApplyId();
  }

  if (!!request.hasPolicyNoListShrink()) {
    body["policy_no_list"] = request.policyNoListShrink();
  }

  if (!!request.hasSubInsOrderIdsShrink()) {
    body["sub_ins_order_ids"] = request.subInsOrderIdsShrink();
  }

  if (!!request.hasSupplierCode()) {
    body["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InsureOrderRefund"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/" , Darabonba::Http::URL::percentEncode(insOrderId) , "/action/refund")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderRefundResponse>();
}

/**
 * @summary 保险订单退保
 *
 * @param request InsureOrderRefundRequest
 * @return InsureOrderRefundResponse
 */
InsureOrderRefundResponse Client::insureOrderRefund(const string &insOrderId, const InsureOrderRefundRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderRefundHeaders headers = InsureOrderRefundHeaders();
  return insureOrderRefundWithOptions(insOrderId, request, headers, runtime);
}

/**
 * @summary 查询保单详情链接
 *
 * @param headers InsureOrderUrlDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureOrderUrlDetailResponse
 */
InsureOrderUrlDetailResponse Client::insureOrderUrlDetailWithOptions(const string &insOrderId, const InsureOrderUrlDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsureOrderUrlDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/" , Darabonba::Http::URL::percentEncode(insOrderId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureOrderUrlDetailResponse>();
}

/**
 * @summary 查询保单详情链接
 *
 * @return InsureOrderUrlDetailResponse
 */
InsureOrderUrlDetailResponse Client::insureOrderUrlDetail(const string &insOrderId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureOrderUrlDetailHeaders headers = InsureOrderUrlDetailHeaders();
  return insureOrderUrlDetailWithOptions(insOrderId, headers, runtime);
}

/**
 * @summary 退保详情查询
 *
 * @param request InsureRefundDetailRequest
 * @param headers InsureRefundDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsureRefundDetailResponse
 */
InsureRefundDetailResponse Client::insureRefundDetailWithOptions(const InsureRefundDetailRequest &request, const InsureRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasInsOrderId()) {
    query["ins_order_id"] = request.insOrderId();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOutApplyId()) {
    query["out_apply_id"] = request.outApplyId();
  }

  if (!!request.hasSupplierCode()) {
    query["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsureRefundDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/insurances/action/refund-detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsureRefundDetailResponse>();
}

/**
 * @summary 退保详情查询
 *
 * @param request InsureRefundDetailRequest
 * @return InsureRefundDetailResponse
 */
InsureRefundDetailResponse Client::insureRefundDetail(const InsureRefundDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InsureRefundDetailHeaders headers = InsureRefundDetailHeaders();
  return insureRefundDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票创建订单
 *
 * @param tmpReq IntlFlightCreateOrderRequest
 * @param headers IntlFlightCreateOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightCreateOrderResponse
 */
IntlFlightCreateOrderResponse Client::intlFlightCreateOrderWithOptions(const IntlFlightCreateOrderRequest &tmpReq, const IntlFlightCreateOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightCreateOrderShrinkRequest request = IntlFlightCreateOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactInfo()) {
    request.setContactInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contactInfo(), "contact_info", "json"));
  }

  if (!!tmpReq.hasExtraInfo()) {
    request.setExtraInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extraInfo(), "extra_info", "json"));
  }

  if (!!tmpReq.hasPassengerList()) {
    request.setPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerList(), "passenger_list", "json"));
  }

  json body = {};
  if (!!request.hasAsyncCreateOrderKey()) {
    body["async_create_order_key"] = request.asyncCreateOrderKey();
  }

  if (!!request.hasAsyncCreateOrderMode()) {
    body["async_create_order_mode"] = request.asyncCreateOrderMode();
  }

  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasContactInfoShrink()) {
    body["contact_info"] = request.contactInfoShrink();
  }

  if (!!request.hasExtraInfoShrink()) {
    body["extra_info"] = request.extraInfoShrink();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderPrice()) {
    body["order_price"] = request.orderPrice();
  }

  if (!!request.hasOtaItemId()) {
    body["ota_item_id"] = request.otaItemId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPassengerListShrink()) {
    body["passenger_list"] = request.passengerListShrink();
  }

  if (!!request.hasRenderKey()) {
    body["render_key"] = request.renderKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightCreateOrder"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/order/action/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightCreateOrderResponse>();
}

/**
 * @summary 国际机票创建订单
 *
 * @param request IntlFlightCreateOrderRequest
 * @return IntlFlightCreateOrderResponse
 */
IntlFlightCreateOrderResponse Client::intlFlightCreateOrder(const IntlFlightCreateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightCreateOrderHeaders headers = IntlFlightCreateOrderHeaders();
  return intlFlightCreateOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票验舱验价
 *
 * @param tmpReq IntlFlightInventoryPriceCheckRequest
 * @param headers IntlFlightInventoryPriceCheckHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightInventoryPriceCheckResponse
 */
IntlFlightInventoryPriceCheckResponse Client::intlFlightInventoryPriceCheckWithOptions(const IntlFlightInventoryPriceCheckRequest &tmpReq, const IntlFlightInventoryPriceCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightInventoryPriceCheckShrinkRequest request = IntlFlightInventoryPriceCheckShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPassengerList()) {
    request.setPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerList(), "passenger_list", "json"));
  }

  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderPrice()) {
    query["order_price"] = request.orderPrice();
  }

  if (!!request.hasOtaItemId()) {
    query["ota_item_id"] = request.otaItemId();
  }

  if (!!request.hasPassengerListShrink()) {
    query["passenger_list"] = request.passengerListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightInventoryPriceCheck"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/inventory-price-check")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightInventoryPriceCheckResponse>();
}

/**
 * @summary 国际机票验舱验价
 *
 * @param request IntlFlightInventoryPriceCheckRequest
 * @return IntlFlightInventoryPriceCheckResponse
 */
IntlFlightInventoryPriceCheckResponse Client::intlFlightInventoryPriceCheck(const IntlFlightInventoryPriceCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightInventoryPriceCheckHeaders headers = IntlFlightInventoryPriceCheckHeaders();
  return intlFlightInventoryPriceCheckWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票航班搜索
 *
 * @param tmpReq IntlFlightListingSearchRequest
 * @param headers IntlFlightListingSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightListingSearchResponse
 */
IntlFlightListingSearchResponse Client::intlFlightListingSearchWithOptions(const IntlFlightListingSearchRequest &tmpReq, const IntlFlightListingSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightListingSearchShrinkRequest request = IntlFlightListingSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSearchJourneys()) {
    request.setSearchJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchJourneys(), "search_journeys", "json"));
  }

  if (!!tmpReq.hasSearchPassengerList()) {
    request.setSearchPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchPassengerList(), "search_passenger_list", "json"));
  }

  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasCabinType()) {
    query["cabin_type"] = request.cabinType();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOutWheelSearch()) {
    query["out_wheel_search"] = request.outWheelSearch();
  }

  if (!!request.hasQueryRecordId()) {
    query["query_record_id"] = request.queryRecordId();
  }

  if (!!request.hasSearchJourneysShrink()) {
    query["search_journeys"] = request.searchJourneysShrink();
  }

  if (!!request.hasSearchMode()) {
    query["search_mode"] = request.searchMode();
  }

  if (!!request.hasSearchPassengerListShrink()) {
    query["search_passenger_list"] = request.searchPassengerListShrink();
  }

  if (!!request.hasToken()) {
    query["token"] = request.token();
  }

  if (!!request.hasTripType()) {
    query["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightListingSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/listing-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightListingSearchResponse>();
}

/**
 * @summary 国际机票航班搜索
 *
 * @param request IntlFlightListingSearchRequest
 * @return IntlFlightListingSearchResponse
 */
IntlFlightListingSearchResponse Client::intlFlightListingSearch(const IntlFlightListingSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightListingSearchHeaders headers = IntlFlightListingSearchHeaders();
  return intlFlightListingSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单取消
 *
 * @param request IntlFlightOrderCancelRequest
 * @param headers IntlFlightOrderCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOrderCancelResponse
 */
IntlFlightOrderCancelResponse Client::intlFlightOrderCancelWithOptions(const IntlFlightOrderCancelRequest &request, const IntlFlightOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightOrderCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/order/action/cancel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOrderCancelResponse>();
}

/**
 * @summary 国际机票订单取消
 *
 * @param request IntlFlightOrderCancelRequest
 * @return IntlFlightOrderCancelResponse
 */
IntlFlightOrderCancelResponse Client::intlFlightOrderCancel(const IntlFlightOrderCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOrderCancelHeaders headers = IntlFlightOrderCancelHeaders();
  return intlFlightOrderCancelWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单详情
 *
 * @param request IntlFlightOrderDetailRequest
 * @param headers IntlFlightOrderDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOrderDetailResponse
 */
IntlFlightOrderDetailResponse Client::intlFlightOrderDetailWithOptions(const IntlFlightOrderDetailRequest &request, const IntlFlightOrderDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightOrderDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/order/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOrderDetailResponse>();
}

/**
 * @summary 国际机票订单详情
 *
 * @param request IntlFlightOrderDetailRequest
 * @return IntlFlightOrderDetailResponse
 */
IntlFlightOrderDetailResponse Client::intlFlightOrderDetail(const IntlFlightOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOrderDetailHeaders headers = IntlFlightOrderDetailHeaders();
  return intlFlightOrderDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单支付
 *
 * @param request IntlFlightOrderPayRequest
 * @param headers IntlFlightOrderPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOrderPayResponse
 */
IntlFlightOrderPayResponse Client::intlFlightOrderPayWithOptions(const IntlFlightOrderPayRequest &request, const IntlFlightOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    body["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    body["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOrderPrice()) {
    body["order_price"] = request.orderPrice();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightOrderPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/order/action/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOrderPayResponse>();
}

/**
 * @summary 国际机票订单支付
 *
 * @param request IntlFlightOrderPayRequest
 * @return IntlFlightOrderPayResponse
 */
IntlFlightOrderPayResponse Client::intlFlightOrderPay(const IntlFlightOrderPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOrderPayHeaders headers = IntlFlightOrderPayHeaders();
  return intlFlightOrderPayWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票订单支付前校验
 *
 * @param request IntlFlightOrderPayCheckRequest
 * @param headers IntlFlightOrderPayCheckHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOrderPayCheckResponse
 */
IntlFlightOrderPayCheckResponse Client::intlFlightOrderPayCheckWithOptions(const IntlFlightOrderPayCheckRequest &request, const IntlFlightOrderPayCheckHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightOrderPayCheck"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/order/action/pay-check")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOrderPayCheckResponse>();
}

/**
 * @summary 国际机票订单支付前校验
 *
 * @param request IntlFlightOrderPayCheckRequest
 * @return IntlFlightOrderPayCheckResponse
 */
IntlFlightOrderPayCheckResponse Client::intlFlightOrderPayCheck(const IntlFlightOrderPayCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOrderPayCheckHeaders headers = IntlFlightOrderPayCheckHeaders();
  return intlFlightOrderPayCheckWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票报价商品详情
 *
 * @param request IntlFlightOtaItemDetailRequest
 * @param headers IntlFlightOtaItemDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOtaItemDetailResponse
 */
IntlFlightOtaItemDetailResponse Client::intlFlightOtaItemDetailWithOptions(const string &otaItemId, const IntlFlightOtaItemDetailRequest &request, const IntlFlightOtaItemDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.language();
  }

  if (!!request.hasSupplierCode()) {
    query["supplier_code"] = request.supplierCode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightOtaItemDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/items/" , Darabonba::Http::URL::percentEncode(otaItemId) , "/action/ota-get")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOtaItemDetailResponse>();
}

/**
 * @summary 国际机票报价商品详情
 *
 * @param request IntlFlightOtaItemDetailRequest
 * @return IntlFlightOtaItemDetailResponse
 */
IntlFlightOtaItemDetailResponse Client::intlFlightOtaItemDetail(const string &otaItemId, const IntlFlightOtaItemDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOtaItemDetailHeaders headers = IntlFlightOtaItemDetailHeaders();
  return intlFlightOtaItemDetailWithOptions(otaItemId, request, headers, runtime);
}

/**
 * @summary 国际机票航班报价查询
 *
 * @param tmpReq IntlFlightOtaSearchRequest
 * @param headers IntlFlightOtaSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightOtaSearchResponse
 */
IntlFlightOtaSearchResponse Client::intlFlightOtaSearchWithOptions(const IntlFlightOtaSearchRequest &tmpReq, const IntlFlightOtaSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightOtaSearchShrinkRequest request = IntlFlightOtaSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSearchJourneys()) {
    request.setSearchJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchJourneys(), "search_journeys", "json"));
  }

  if (!!tmpReq.hasSearchPassengerList()) {
    request.setSearchPassengerListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.searchPassengerList(), "search_passenger_list", "json"));
  }

  json query = {};
  if (!!request.hasBtripUserId()) {
    query["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBuyerName()) {
    query["buyer_name"] = request.buyerName();
  }

  if (!!request.hasCabinType()) {
    query["cabin_type"] = request.cabinType();
  }

  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasSearchJourneysShrink()) {
    query["search_journeys"] = request.searchJourneysShrink();
  }

  if (!!request.hasSearchPassengerListShrink()) {
    query["search_passenger_list"] = request.searchPassengerListShrink();
  }

  if (!!request.hasTripType()) {
    query["trip_type"] = request.tripType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightOtaSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/ota-search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightOtaSearchResponse>();
}

/**
 * @summary 国际机票航班报价查询
 *
 * @param request IntlFlightOtaSearchRequest
 * @return IntlFlightOtaSearchResponse
 */
IntlFlightOtaSearchResponse Client::intlFlightOtaSearch(const IntlFlightOtaSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightOtaSearchHeaders headers = IntlFlightOtaSearchHeaders();
  return intlFlightOtaSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票改签申请
 *
 * @param tmpReq IntlFlightReShopApplyRequest
 * @param headers IntlFlightReShopApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightReShopApplyResponse
 */
IntlFlightReShopApplyResponse Client::intlFlightReShopApplyWithOptions(const IntlFlightReShopApplyRequest &tmpReq, const IntlFlightReShopApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightReShopApplyShrinkRequest request = IntlFlightReShopApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSelectedJourneys()) {
    request.setSelectedJourneysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedJourneys(), "selected_journeys", "json"));
  }

  if (!!tmpReq.hasSelectedPassengers()) {
    request.setSelectedPassengersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedPassengers(), "selected_passengers", "json"));
  }

  json body = {};
  if (!!request.hasAsyncApplyKey()) {
    body["async_apply_key"] = request.asyncApplyKey();
  }

  if (!!request.hasAsyncApplyMode()) {
    body["async_apply_mode"] = request.asyncApplyMode();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutReShopApplyId()) {
    body["out_re_shop_apply_id"] = request.outReShopApplyId();
  }

  if (!!request.hasPassengerJourneyGroupKey()) {
    body["passenger_journey_group_key"] = request.passengerJourneyGroupKey();
  }

  if (!!request.hasReShopReasonCode()) {
    body["re_shop_reason_code"] = request.reShopReasonCode();
  }

  if (!!request.hasSelectedJourneysShrink()) {
    body["selected_journeys"] = request.selectedJourneysShrink();
  }

  if (!!request.hasSelectedPassengersShrink()) {
    body["selected_passengers"] = request.selectedPassengersShrink();
  }

  if (!!request.hasUserIntentionMemo()) {
    body["user_intention_memo"] = request.userIntentionMemo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightReShopApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/reshop/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightReShopApplyResponse>();
}

/**
 * @summary 国际机票改签申请
 *
 * @param request IntlFlightReShopApplyRequest
 * @return IntlFlightReShopApplyResponse
 */
IntlFlightReShopApplyResponse Client::intlFlightReShopApply(const IntlFlightReShopApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightReShopApplyHeaders headers = IntlFlightReShopApplyHeaders();
  return intlFlightReShopApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票改签取消
 *
 * @param request IntlFlightReShopCancelRequest
 * @param headers IntlFlightReShopCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightReShopCancelResponse
 */
IntlFlightReShopCancelResponse Client::intlFlightReShopCancelWithOptions(const IntlFlightReShopCancelRequest &request, const IntlFlightReShopCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutReShopApplyId()) {
    body["out_re_shop_apply_id"] = request.outReShopApplyId();
  }

  if (!!request.hasReShopApplyId()) {
    body["re_shop_apply_id"] = request.reShopApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightReShopCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/reshop/cancel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightReShopCancelResponse>();
}

/**
 * @summary 国际机票改签取消
 *
 * @param request IntlFlightReShopCancelRequest
 * @return IntlFlightReShopCancelResponse
 */
IntlFlightReShopCancelResponse Client::intlFlightReShopCancel(const IntlFlightReShopCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightReShopCancelHeaders headers = IntlFlightReShopCancelHeaders();
  return intlFlightReShopCancelWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票改签咨询
 *
 * @param request IntlFlightReShopConsultRequest
 * @param headers IntlFlightReShopConsultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightReShopConsultResponse
 */
IntlFlightReShopConsultResponse Client::intlFlightReShopConsultWithOptions(const IntlFlightReShopConsultRequest &request, const IntlFlightReShopConsultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightReShopConsult"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/reshop/consult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightReShopConsultResponse>();
}

/**
 * @summary 国际机票改签咨询
 *
 * @param request IntlFlightReShopConsultRequest
 * @return IntlFlightReShopConsultResponse
 */
IntlFlightReShopConsultResponse Client::intlFlightReShopConsult(const IntlFlightReShopConsultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightReShopConsultHeaders headers = IntlFlightReShopConsultHeaders();
  return intlFlightReShopConsultWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票改签详情
 *
 * @param request IntlFlightReShopDetailRequest
 * @param headers IntlFlightReShopDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightReShopDetailResponse
 */
IntlFlightReShopDetailResponse Client::intlFlightReShopDetailWithOptions(const IntlFlightReShopDetailRequest &request, const IntlFlightReShopDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutReShopApplyId()) {
    query["out_re_shop_apply_id"] = request.outReShopApplyId();
  }

  if (!!request.hasReShopApplyId()) {
    query["re_shop_apply_id"] = request.reShopApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightReShopDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/reshop/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightReShopDetailResponse>();
}

/**
 * @summary 国际机票改签详情
 *
 * @param request IntlFlightReShopDetailRequest
 * @return IntlFlightReShopDetailResponse
 */
IntlFlightReShopDetailResponse Client::intlFlightReShopDetail(const IntlFlightReShopDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightReShopDetailHeaders headers = IntlFlightReShopDetailHeaders();
  return intlFlightReShopDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票改签支付
 *
 * @param request IntlFlightReShopPayRequest
 * @param headers IntlFlightReShopPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightReShopPayResponse
 */
IntlFlightReShopPayResponse Client::intlFlightReShopPayWithOptions(const IntlFlightReShopPayRequest &request, const IntlFlightReShopPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutReShopApplyId()) {
    body["out_re_shop_apply_id"] = request.outReShopApplyId();
  }

  if (!!request.hasReShopApplyId()) {
    body["re_shop_apply_id"] = request.reShopApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightReShopPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/reshop/pay")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightReShopPayResponse>();
}

/**
 * @summary 国际机票改签支付
 *
 * @param request IntlFlightReShopPayRequest
 * @return IntlFlightReShopPayResponse
 */
IntlFlightReShopPayResponse Client::intlFlightReShopPay(const IntlFlightReShopPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightReShopPayHeaders headers = IntlFlightReShopPayHeaders();
  return intlFlightReShopPayWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票退票申请
 *
 * @param tmpReq IntlFlightRefundApplyRequest
 * @param headers IntlFlightRefundApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightRefundApplyResponse
 */
IntlFlightRefundApplyResponse Client::intlFlightRefundApplyWithOptions(const IntlFlightRefundApplyRequest &tmpReq, const IntlFlightRefundApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IntlFlightRefundApplyShrinkRequest request = IntlFlightRefundApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRefundSegmentList()) {
    request.setRefundSegmentListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundSegmentList(), "refund_segment_list", "json"));
  }

  if (!!tmpReq.hasSelectedPassengers()) {
    request.setSelectedPassengersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.selectedPassengers(), "selected_passengers", "json"));
  }

  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutRefundApplyId()) {
    body["out_refund_apply_id"] = request.outRefundApplyId();
  }

  if (!!request.hasPassengerJourneyGroupKey()) {
    body["passenger_journey_group_key"] = request.passengerJourneyGroupKey();
  }

  if (!!request.hasRefundReasonCode()) {
    body["refund_reason_code"] = request.refundReasonCode();
  }

  if (!!request.hasRefundSegmentListShrink()) {
    body["refund_segment_list"] = request.refundSegmentListShrink();
  }

  if (!!request.hasSelectedPassengersShrink()) {
    body["selected_passengers"] = request.selectedPassengersShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IntlFlightRefundApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/refund/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightRefundApplyResponse>();
}

/**
 * @summary 国际机票退票申请
 *
 * @param request IntlFlightRefundApplyRequest
 * @return IntlFlightRefundApplyResponse
 */
IntlFlightRefundApplyResponse Client::intlFlightRefundApply(const IntlFlightRefundApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightRefundApplyHeaders headers = IntlFlightRefundApplyHeaders();
  return intlFlightRefundApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票退票咨询
 *
 * @param request IntlFlightRefundConsultRequest
 * @param headers IntlFlightRefundConsultHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightRefundConsultResponse
 */
IntlFlightRefundConsultResponse Client::intlFlightRefundConsultWithOptions(const IntlFlightRefundConsultRequest &request, const IntlFlightRefundConsultHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightRefundConsult"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/refund/consult")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightRefundConsultResponse>();
}

/**
 * @summary 国际机票退票咨询
 *
 * @param request IntlFlightRefundConsultRequest
 * @return IntlFlightRefundConsultResponse
 */
IntlFlightRefundConsultResponse Client::intlFlightRefundConsult(const IntlFlightRefundConsultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightRefundConsultHeaders headers = IntlFlightRefundConsultHeaders();
  return intlFlightRefundConsultWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票退票详情
 *
 * @param request IntlFlightRefundDetailRequest
 * @param headers IntlFlightRefundDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightRefundDetailResponse
 */
IntlFlightRefundDetailResponse Client::intlFlightRefundDetailWithOptions(const IntlFlightRefundDetailRequest &request, const IntlFlightRefundDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    query["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutRefundApplyId()) {
    query["out_refund_apply_id"] = request.outRefundApplyId();
  }

  if (!!request.hasRefundApplyId()) {
    query["refund_apply_id"] = request.refundApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightRefundDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/flights/action/refund/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightRefundDetailResponse>();
}

/**
 * @summary 国际机票退票详情
 *
 * @param request IntlFlightRefundDetailRequest
 * @return IntlFlightRefundDetailResponse
 */
IntlFlightRefundDetailResponse Client::intlFlightRefundDetail(const IntlFlightRefundDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightRefundDetailHeaders headers = IntlFlightRefundDetailHeaders();
  return intlFlightRefundDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 国际机票航班可用证件查询
 *
 * @param request IntlFlightSegmentAvailableCertRequest
 * @param headers IntlFlightSegmentAvailableCertHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IntlFlightSegmentAvailableCertResponse
 */
IntlFlightSegmentAvailableCertResponse Client::intlFlightSegmentAvailableCertWithOptions(const string &otaItemId, const IntlFlightSegmentAvailableCertRequest &request, const IntlFlightSegmentAvailableCertHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIsvName()) {
    query["isv_name"] = request.isvName();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.language();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IntlFlightSegmentAvailableCert"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/intl-flight/v1/items/" , Darabonba::Http::URL::percentEncode(otaItemId) , "/action/segment-available-cert")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IntlFlightSegmentAvailableCertResponse>();
}

/**
 * @summary 国际机票航班可用证件查询
 *
 * @param request IntlFlightSegmentAvailableCertRequest
 * @return IntlFlightSegmentAvailableCertResponse
 */
IntlFlightSegmentAvailableCertResponse Client::intlFlightSegmentAvailableCert(const string &otaItemId, const IntlFlightSegmentAvailableCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IntlFlightSegmentAvailableCertHeaders headers = IntlFlightSegmentAvailableCertHeaders();
  return intlFlightSegmentAvailableCertWithOptions(otaItemId, request, headers, runtime);
}

/**
 * @summary 新增发票配置
 *
 * @param request InvoiceAddRequest
 * @param headers InvoiceAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceAddResponse
 */
InvoiceAddResponse Client::invoiceAddWithOptions(const InvoiceAddRequest &request, const InvoiceAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddress()) {
    body["address"] = request.address();
  }

  if (!!request.hasBankName()) {
    body["bank_name"] = request.bankName();
  }

  if (!!request.hasBankNo()) {
    body["bank_no"] = request.bankNo();
  }

  if (!!request.hasTaxNo()) {
    body["tax_no"] = request.taxNo();
  }

  if (!!request.hasTel()) {
    body["tel"] = request.tel();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasUnitType()) {
    body["unit_type"] = request.unitType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvoiceAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/add-invoice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceAddResponse>();
}

/**
 * @summary 新增发票配置
 *
 * @param request InvoiceAddRequest
 * @return InvoiceAddResponse
 */
InvoiceAddResponse Client::invoiceAdd(const InvoiceAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceAddHeaders headers = InvoiceAddHeaders();
  return invoiceAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除发票抬头
 *
 * @param request InvoiceDeleteRequest
 * @param headers InvoiceDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceDeleteResponse
 */
InvoiceDeleteResponse Client::invoiceDeleteWithOptions(const InvoiceDeleteRequest &request, const InvoiceDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdPartId()) {
    query["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvoiceDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceDeleteResponse>();
}

/**
 * @summary 删除发票抬头
 *
 * @param request InvoiceDeleteRequest
 * @return InvoiceDeleteResponse
 */
InvoiceDeleteResponse Client::invoiceDelete(const InvoiceDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceDeleteHeaders headers = InvoiceDeleteHeaders();
  return invoiceDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 修改发票配置
 *
 * @param request InvoiceModifyRequest
 * @param headers InvoiceModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceModifyResponse
 */
InvoiceModifyResponse Client::invoiceModifyWithOptions(const InvoiceModifyRequest &request, const InvoiceModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddress()) {
    body["address"] = request.address();
  }

  if (!!request.hasBankName()) {
    body["bank_name"] = request.bankName();
  }

  if (!!request.hasBankNo()) {
    body["bank_no"] = request.bankNo();
  }

  if (!!request.hasTaxNo()) {
    body["tax_no"] = request.taxNo();
  }

  if (!!request.hasTel()) {
    body["tel"] = request.tel();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.title();
  }

  if (!!request.hasType()) {
    body["type"] = request.type();
  }

  if (!!request.hasUnitType()) {
    body["unit_type"] = request.unitType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvoiceModify"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceModifyResponse>();
}

/**
 * @summary 修改发票配置
 *
 * @param request InvoiceModifyRequest
 * @return InvoiceModifyResponse
 */
InvoiceModifyResponse Client::invoiceModify(const InvoiceModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceModifyHeaders headers = InvoiceModifyHeaders();
  return invoiceModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 新增发票抬头可用员工
 *
 * @param tmpReq InvoiceRuleAddRequest
 * @param headers InvoiceRuleAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceRuleAddResponse
 */
InvoiceRuleAddResponse Client::invoiceRuleAddWithOptions(const InvoiceRuleAddRequest &tmpReq, const InvoiceRuleAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvoiceRuleAddShrinkRequest request = InvoiceRuleAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entities(), "entities", "json"));
  }

  json body = {};
  if (!!request.hasEntitiesShrink()) {
    body["entities"] = request.entitiesShrink();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvoiceRuleAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice-rule")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceRuleAddResponse>();
}

/**
 * @summary 新增发票抬头可用员工
 *
 * @param request InvoiceRuleAddRequest
 * @return InvoiceRuleAddResponse
 */
InvoiceRuleAddResponse Client::invoiceRuleAdd(const InvoiceRuleAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceRuleAddHeaders headers = InvoiceRuleAddHeaders();
  return invoiceRuleAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除发票抬头可用员工
 *
 * @param tmpReq InvoiceRuleDeleteRequest
 * @param headers InvoiceRuleDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceRuleDeleteResponse
 */
InvoiceRuleDeleteResponse Client::invoiceRuleDeleteWithOptions(const InvoiceRuleDeleteRequest &tmpReq, const InvoiceRuleDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvoiceRuleDeleteShrinkRequest request = InvoiceRuleDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entities(), "entities", "json"));
  }

  json query = {};
  if (!!request.hasDelAll()) {
    query["del_all"] = request.delAll();
  }

  if (!!request.hasEntitiesShrink()) {
    query["entities"] = request.entitiesShrink();
  }

  if (!!request.hasThirdPartId()) {
    query["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvoiceRuleDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice-rule")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceRuleDeleteResponse>();
}

/**
 * @summary 删除发票抬头可用员工
 *
 * @param request InvoiceRuleDeleteRequest
 * @return InvoiceRuleDeleteResponse
 */
InvoiceRuleDeleteResponse Client::invoiceRuleDelete(const InvoiceRuleDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceRuleDeleteHeaders headers = InvoiceRuleDeleteHeaders();
  return invoiceRuleDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 保存发票规则
 *
 * @param tmpReq InvoiceRuleSaveRequest
 * @param headers InvoiceRuleSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceRuleSaveResponse
 */
InvoiceRuleSaveResponse Client::invoiceRuleSaveWithOptions(const InvoiceRuleSaveRequest &tmpReq, const InvoiceRuleSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvoiceRuleSaveShrinkRequest request = InvoiceRuleSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.entities(), "entities", "json"));
  }

  json body = {};
  if (!!request.hasAllEmploye()) {
    body["all_employe"] = request.allEmploye();
  }

  if (!!request.hasEntitiesShrink()) {
    body["entities"] = request.entitiesShrink();
  }

  if (!!request.hasScope()) {
    body["scope"] = request.scope();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvoiceRuleSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice-rule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceRuleSaveResponse>();
}

/**
 * @summary 保存发票规则
 *
 * @param request InvoiceRuleSaveRequest
 * @return InvoiceRuleSaveResponse
 */
InvoiceRuleSaveResponse Client::invoiceRuleSave(const InvoiceRuleSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceRuleSaveHeaders headers = InvoiceRuleSaveHeaders();
  return invoiceRuleSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 搜索用户可用发票抬头
 *
 * @param request InvoiceSearchRequest
 * @param headers InvoiceSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvoiceSearchResponse
 */
InvoiceSearchResponse Client::invoiceSearchWithOptions(const InvoiceSearchRequest &request, const InvoiceSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdPartId()) {
    query["third_part_id"] = request.thirdPartId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.title();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvoiceSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/invoice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvoiceSearchResponse>();
}

/**
 * @summary 搜索用户可用发票抬头
 *
 * @param request InvoiceSearchRequest
 * @return InvoiceSearchResponse
 */
InvoiceSearchResponse Client::invoiceSearch(const InvoiceSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvoiceSearchHeaders headers = InvoiceSearchHeaders();
  return invoiceSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 员工特殊角色修改
 *
 * @param tmpReq IsvRuleSaveRequest
 * @param headers IsvRuleSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsvRuleSaveResponse
 */
IsvRuleSaveResponse Client::isvRuleSaveWithOptions(const IsvRuleSaveRequest &tmpReq, const IsvRuleSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IsvRuleSaveShrinkRequest request = IsvRuleSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBookuserList()) {
    request.setBookuserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bookuserList(), "bookuser_list", "json"));
  }

  json body = {};
  if (!!request.hasApplyNeed()) {
    body["apply_need"] = request.applyNeed();
  }

  if (!!request.hasBookType()) {
    body["book_type"] = request.bookType();
  }

  if (!!request.hasBookuserListShrink()) {
    body["bookuser_list"] = request.bookuserListShrink();
  }

  if (!!request.hasRuleNeed()) {
    body["rule_need"] = request.ruleNeed();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IsvRuleSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/rule")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IsvRuleSaveResponse>();
}

/**
 * @summary 员工特殊角色修改
 *
 * @param request IsvRuleSaveRequest
 * @return IsvRuleSaveResponse
 */
IsvRuleSaveResponse Client::isvRuleSave(const IsvRuleSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IsvRuleSaveHeaders headers = IsvRuleSaveHeaders();
  return isvRuleSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 用户同步
 *
 * @param tmpReq IsvUserSaveRequest
 * @param headers IsvUserSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IsvUserSaveResponse
 */
IsvUserSaveResponse Client::isvUserSaveWithOptions(const IsvUserSaveRequest &tmpReq, const IsvUserSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IsvUserSaveShrinkRequest request = IsvUserSaveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserList()) {
    request.setUserListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userList(), "user_list", "json"));
  }

  json body = {};
  if (!!request.hasUserListShrink()) {
    body["user_list"] = request.userListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IsvUserSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/isvuser/v1/isvuser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IsvUserSaveResponse>();
}

/**
 * @summary 用户同步
 *
 * @param request IsvUserSaveRequest
 * @return IsvUserSaveResponse
 */
IsvUserSaveResponse Client::isvUserSave(const IsvUserSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IsvUserSaveHeaders headers = IsvUserSaveHeaders();
  return isvUserSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 新增用餐申请单
 *
 * @param tmpReq MealApplyAddRequest
 * @param headers MealApplyAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealApplyAddResponse
 */
MealApplyAddResponse Client::mealApplyAddWithOptions(const MealApplyAddRequest &tmpReq, const MealApplyAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MealApplyAddShrinkRequest request = MealApplyAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyUser()) {
    request.setApplyUserShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applyUser(), "apply_user", "json"));
  }

  if (!!tmpReq.hasItineraryList()) {
    request.setItineraryListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.itineraryList(), "itinerary_list", "json"));
  }

  json body = {};
  if (!!request.hasApplyUserShrink()) {
    body["apply_user"] = request.applyUserShrink();
  }

  if (!!request.hasCostCenterId()) {
    body["cost_center_id"] = request.costCenterId();
  }

  if (!!request.hasInvoiceId()) {
    body["invoice_id"] = request.invoiceId();
  }

  if (!!request.hasItineraryListShrink()) {
    body["itinerary_list"] = request.itineraryListShrink();
  }

  if (!!request.hasMealAmount()) {
    body["meal_amount"] = request.mealAmount();
  }

  if (!!request.hasMealCause()) {
    body["meal_cause"] = request.mealCause();
  }

  if (!!request.hasProjectCode()) {
    body["project_code"] = request.projectCode();
  }

  if (!!request.hasProjectTitle()) {
    body["project_title"] = request.projectTitle();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasThirdPartApplyId()) {
    body["third_part_apply_id"] = request.thirdPartApplyId();
  }

  if (!!request.hasThirdPartCostCenterId()) {
    body["third_part_cost_center_id"] = request.thirdPartCostCenterId();
  }

  if (!!request.hasThirdPartInvoiceId()) {
    body["third_part_invoice_id"] = request.thirdPartInvoiceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MealApplyAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/meal")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealApplyAddResponse>();
}

/**
 * @summary 新增用餐申请单
 *
 * @param request MealApplyAddRequest
 * @return MealApplyAddResponse
 */
MealApplyAddResponse Client::mealApplyAdd(const MealApplyAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealApplyAddHeaders headers = MealApplyAddHeaders();
  return mealApplyAddWithOptions(request, headers, runtime);
}

/**
 * @summary 更新用餐申请单状态
 *
 * @param request MealApplyApproveRequest
 * @param headers MealApplyApproveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealApplyApproveResponse
 */
MealApplyApproveResponse Client::mealApplyApproveWithOptions(const MealApplyApproveRequest &request, const MealApplyApproveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOperateTime()) {
    body["operate_time"] = request.operateTime();
  }

  if (!!request.hasRemark()) {
    body["remark"] = request.remark();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasThirdPartApplyId()) {
    body["third_part_apply_id"] = request.thirdPartApplyId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MealApplyApprove"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/meal")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealApplyApproveResponse>();
}

/**
 * @summary 更新用餐申请单状态
 *
 * @param request MealApplyApproveRequest
 * @return MealApplyApproveResponse
 */
MealApplyApproveResponse Client::mealApplyApprove(const MealApplyApproveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealApplyApproveHeaders headers = MealApplyApproveHeaders();
  return mealApplyApproveWithOptions(request, headers, runtime);
}

/**
 * @summary 查询用餐申请单
 *
 * @param request MealApplyQueryRequest
 * @param headers MealApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealApplyQueryResponse
 */
MealApplyQueryResponse Client::mealApplyQueryWithOptions(const MealApplyQueryRequest &request, const MealApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdPartApplyId()) {
    query["third_part_apply_id"] = request.thirdPartApplyId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MealApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/meal")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealApplyQueryResponse>();
}

/**
 * @summary 查询用餐申请单
 *
 * @param request MealApplyQueryRequest
 * @return MealApplyQueryResponse
 */
MealApplyQueryResponse Client::mealApplyQuery(const MealApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealApplyQueryHeaders headers = MealApplyQueryHeaders();
  return mealApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询因公用餐记账数据
 *
 * @param request MealBillSettlementQueryRequest
 * @param headers MealBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealBillSettlementQueryResponse
 */
MealBillSettlementQueryResponse Client::mealBillSettlementQueryWithOptions(const MealBillSettlementQueryRequest &request, const MealBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MealBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/meal/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealBillSettlementQueryResponse>();
}

/**
 * @summary 查询因公用餐记账数据
 *
 * @param request MealBillSettlementQueryRequest
 * @return MealBillSettlementQueryResponse
 */
MealBillSettlementQueryResponse Client::mealBillSettlementQuery(const MealBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealBillSettlementQueryHeaders headers = MealBillSettlementQueryHeaders();
  return mealBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 获取用餐订单详情
 *
 * @param request MealOrderDetailQueryRequest
 * @param headers MealOrderDetailQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealOrderDetailQueryResponse
 */
MealOrderDetailQueryResponse Client::mealOrderDetailQueryWithOptions(const string &orderId, const MealOrderDetailQueryRequest &request, const MealOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MealOrderDetailQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/meal/v1/orders/" , Darabonba::Http::URL::percentEncode(orderId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealOrderDetailQueryResponse>();
}

/**
 * @summary 获取用餐订单详情
 *
 * @param request MealOrderDetailQueryRequest
 * @return MealOrderDetailQueryResponse
 */
MealOrderDetailQueryResponse Client::mealOrderDetailQuery(const string &orderId, const MealOrderDetailQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealOrderDetailQueryHeaders headers = MealOrderDetailQueryHeaders();
  return mealOrderDetailQueryWithOptions(orderId, request, headers, runtime);
}

/**
 * @summary 获取用餐订单列表
 *
 * @param request MealOrderListQueryRequest
 * @param headers MealOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MealOrderListQueryResponse
 */
MealOrderListQueryResponse Client::mealOrderListQueryWithOptions(const MealOrderListQueryRequest &request, const MealOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MealOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/meal/v1/orders")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MealOrderListQueryResponse>();
}

/**
 * @summary 获取用餐订单列表
 *
 * @param request MealOrderListQueryRequest
 * @return MealOrderListQueryResponse
 */
MealOrderListQueryResponse Client::mealOrderListQuery(const MealOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MealOrderListQueryHeaders headers = MealOrderListQueryHeaders();
  return mealOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 月账单确认
 *
 * @param request MonthBillConfirmRequest
 * @param headers MonthBillConfirmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MonthBillConfirmResponse
 */
MonthBillConfirmResponse Client::monthBillConfirmWithOptions(const MonthBillConfirmRequest &request, const MonthBillConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMailBillDate()) {
    body["mail_bill_date"] = request.mailBillDate();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "MonthBillConfirm"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bill/v1/status/action/confirm")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MonthBillConfirmResponse>();
}

/**
 * @summary 月账单确认
 *
 * @param request MonthBillConfirmRequest
 * @return MonthBillConfirmResponse
 */
MonthBillConfirmResponse Client::monthBillConfirm(const MonthBillConfirmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MonthBillConfirmHeaders headers = MonthBillConfirmHeaders();
  return monthBillConfirmWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业月账单
 *
 * @param request MonthBillGetRequest
 * @param headers MonthBillGetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MonthBillGetResponse
 */
MonthBillGetResponse Client::monthBillGetWithOptions(const MonthBillGetRequest &request, const MonthBillGetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasBillMonth()) {
    query["bill_month"] = request.billMonth();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MonthBillGet"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v1/month-bill")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MonthBillGetResponse>();
}

/**
 * @summary 查询企业月账单
 *
 * @param request MonthBillGetRequest
 * @return MonthBillGetResponse
 */
MonthBillGetResponse Client::monthBillGet(const MonthBillGetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MonthBillGetHeaders headers = MonthBillGetHeaders();
  return monthBillGetWithOptions(request, headers, runtime);
}

/**
 * @summary 查询拆分版企业月账单
 *
 * @param tmpReq MonthBillSplitGetRequest
 * @param headers MonthBillSplitGetHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MonthBillSplitGetResponse
 */
MonthBillSplitGetResponse Client::monthBillSplitGetWithOptions(const MonthBillSplitGetRequest &tmpReq, const MonthBillSplitGetHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MonthBillSplitGetShrinkRequest request = MonthBillSplitGetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBillSplitKeyList()) {
    request.setBillSplitKeyListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.billSplitKeyList(), "bill_split_key_list", "json"));
  }

  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasBillMonth()) {
    query["bill_month"] = request.billMonth();
  }

  if (!!request.hasBillSplitKeyListShrink()) {
    query["bill_split_key_list"] = request.billSplitKeyListShrink();
  }

  if (!!request.hasBillSplitMode()) {
    query["bill_split_mode"] = request.billSplitMode();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MonthBillSplitGet"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/open/v1/month-bill-split")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MonthBillSplitGetResponse>();
}

/**
 * @summary 查询拆分版企业月账单
 *
 * @param request MonthBillSplitGetRequest
 * @return MonthBillSplitGetResponse
 */
MonthBillSplitGetResponse Client::monthBillSplitGet(const MonthBillSplitGetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MonthBillSplitGetHeaders headers = MonthBillSplitGetHeaders();
  return monthBillSplitGetWithOptions(request, headers, runtime);
}

/**
 * @summary 查询订单退款明细
 *
 * @param request OrderRefundDetailQueryRequest
 * @param headers OrderRefundDetailQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OrderRefundDetailQueryResponse
 */
OrderRefundDetailQueryResponse Client::orderRefundDetailQueryWithOptions(const OrderRefundDetailQueryRequest &request, const OrderRefundDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCooperatorOrderId()) {
    body["cooperator_order_id"] = request.cooperatorOrderId();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OrderRefundDetailQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/coop-hotel/v1/refund/action/detail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OrderRefundDetailQueryResponse>();
}

/**
 * @summary 查询订单退款明细
 *
 * @param request OrderRefundDetailQueryRequest
 * @return OrderRefundDetailQueryResponse
 */
OrderRefundDetailQueryResponse Client::orderRefundDetailQuery(const OrderRefundDetailQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OrderRefundDetailQueryHeaders headers = OrderRefundDetailQueryHeaders();
  return orderRefundDetailQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 添加项目
 *
 * @param request ProjectAddRequest
 * @param headers ProjectAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProjectAddResponse
 */
ProjectAddResponse Client::projectAddWithOptions(const ProjectAddRequest &request, const ProjectAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasProjectName()) {
    body["project_name"] = request.projectName();
  }

  if (!!request.hasThirdPartCostCenterId()) {
    body["third_part_cost_center_id"] = request.thirdPartCostCenterId();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  if (!!request.hasThirdPartInvoiceId()) {
    body["third_part_invoice_id"] = request.thirdPartInvoiceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ProjectAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cost/v1/project")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProjectAddResponse>();
}

/**
 * @summary 添加项目
 *
 * @param request ProjectAddRequest
 * @return ProjectAddResponse
 */
ProjectAddResponse Client::projectAdd(const ProjectAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ProjectAddHeaders headers = ProjectAddHeaders();
  return projectAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除项目
 *
 * @param request ProjectDeleteRequest
 * @param headers ProjectDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProjectDeleteResponse
 */
ProjectDeleteResponse Client::projectDeleteWithOptions(const ProjectDeleteRequest &request, const ProjectDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasThirdPartId()) {
    query["third_part_id"] = request.thirdPartId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ProjectDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cost/v1/project")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProjectDeleteResponse>();
}

/**
 * @summary 删除项目
 *
 * @param request ProjectDeleteRequest
 * @return ProjectDeleteResponse
 */
ProjectDeleteResponse Client::projectDelete(const ProjectDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ProjectDeleteHeaders headers = ProjectDeleteHeaders();
  return projectDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 变更项目
 *
 * @param request ProjectModifyRequest
 * @param headers ProjectModifyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProjectModifyResponse
 */
ProjectModifyResponse Client::projectModifyWithOptions(const ProjectModifyRequest &request, const ProjectModifyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["code"] = request.code();
  }

  if (!!request.hasProjectName()) {
    body["project_name"] = request.projectName();
  }

  if (!!request.hasThirdPartCostCenterId()) {
    body["third_part_cost_center_id"] = request.thirdPartCostCenterId();
  }

  if (!!request.hasThirdPartId()) {
    body["third_part_id"] = request.thirdPartId();
  }

  if (!!request.hasThirdPartInvoiceId()) {
    body["third_part_invoice_id"] = request.thirdPartInvoiceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ProjectModify"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cost/v1/project")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProjectModifyResponse>();
}

/**
 * @summary 变更项目
 *
 * @param request ProjectModifyRequest
 * @return ProjectModifyResponse
 */
ProjectModifyResponse Client::projectModify(const ProjectModifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ProjectModifyHeaders headers = ProjectModifyHeaders();
  return projectModifyWithOptions(request, headers, runtime);
}

/**
 * @summary 查询企业信息详情
 *
 * @param request QueryCorpDetailInfoRequest
 * @param headers QueryCorpDetailInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCorpDetailInfoResponse
 */
QueryCorpDetailInfoResponse Client::queryCorpDetailInfoWithOptions(const QueryCorpDetailInfoRequest &request, const QueryCorpDetailInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["account_id"] = request.accountId();
  }

  if (!!request.hasTargetCorpId()) {
    query["target_corp_id"] = request.targetCorpId();
  }

  if (!!request.hasTargetThirdCorpId()) {
    query["target_third_corp_id"] = request.targetThirdCorpId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCorpDetailInfo"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/corps/v1/corps/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCorpDetailInfoResponse>();
}

/**
 * @summary 查询企业信息详情
 *
 * @param request QueryCorpDetailInfoRequest
 * @return QueryCorpDetailInfoResponse
 */
QueryCorpDetailInfoResponse Client::queryCorpDetailInfo(const QueryCorpDetailInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryCorpDetailInfoHeaders headers = QueryCorpDetailInfoHeaders();
  return queryCorpDetailInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 获取单个员工信息
 *
 * @param request QueryEmployeeDetailRequest
 * @param headers QueryEmployeeDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEmployeeDetailResponse
 */
QueryEmployeeDetailResponse Client::queryEmployeeDetailWithOptions(const QueryEmployeeDetailRequest &request, const QueryEmployeeDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutEmployeeId()) {
    query["out_employee_id"] = request.outEmployeeId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEmployeeDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/employeeDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEmployeeDetailResponse>();
}

/**
 * @summary 获取单个员工信息
 *
 * @param request QueryEmployeeDetailRequest
 * @return QueryEmployeeDetailResponse
 */
QueryEmployeeDetailResponse Client::queryEmployeeDetail(const QueryEmployeeDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryEmployeeDetailHeaders headers = QueryEmployeeDetailHeaders();
  return queryEmployeeDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 查询子企业列表
 *
 * @param request QueryGroupCorpListRequest
 * @param headers QueryGroupCorpListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGroupCorpListResponse
 */
QueryGroupCorpListResponse Client::queryGroupCorpListWithOptions(const QueryGroupCorpListRequest &request, const QueryGroupCorpListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryGroupCorpList"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/sub_corps/v1/corps/action/corpList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGroupCorpListResponse>();
}

/**
 * @summary 查询子企业列表
 *
 * @param request QueryGroupCorpListRequest
 * @return QueryGroupCorpListResponse
 */
QueryGroupCorpListResponse Client::queryGroupCorpList(const QueryGroupCorpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryGroupCorpListHeaders headers = QueryGroupCorpListHeaders();
  return queryGroupCorpListWithOptions(request, headers, runtime);
}

/**
 * @summary 报销单查询
 *
 * @param request QueryReimbursementOrderRequest
 * @param headers QueryReimbursementOrderHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryReimbursementOrderResponse
 */
QueryReimbursementOrderResponse Client::queryReimbursementOrderWithOptions(const QueryReimbursementOrderRequest &request, const QueryReimbursementOrderHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReimbOrderNo()) {
    query["reimb_order_no"] = request.reimbOrderNo();
  }

  if (!!request.hasSubCorpId()) {
    query["sub_corp_id"] = request.subCorpId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryReimbursementOrder"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/reimbursement/v1/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryReimbursementOrderResponse>();
}

/**
 * @summary 报销单查询
 *
 * @param request QueryReimbursementOrderRequest
 * @return QueryReimbursementOrderResponse
 */
QueryReimbursementOrderResponse Client::queryReimbursementOrder(const QueryReimbursementOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryReimbursementOrderHeaders headers = QueryReimbursementOrderHeaders();
  return queryReimbursementOrderWithOptions(request, headers, runtime);
}

/**
 * @summary 单个人员同步
 *
 * @param tmpReq SyncSingleUserRequest
 * @param headers SyncSingleUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncSingleUserResponse
 */
SyncSingleUserResponse Client::syncSingleUserWithOptions(const SyncSingleUserRequest &tmpReq, const SyncSingleUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SyncSingleUserShrinkRequest request = SyncSingleUserShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasThirdDepartIdList()) {
    request.setThirdDepartIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.thirdDepartIdList(), "third_depart_id_list", "json"));
  }

  json body = {};
  if (!!request.hasEmail()) {
    body["email"] = request.email();
  }

  if (!!request.hasJobNo()) {
    body["job_no"] = request.jobNo();
  }

  if (!!request.hasLeaveStatus()) {
    body["leave_status"] = request.leaveStatus();
  }

  if (!!request.hasManagerUserId()) {
    body["manager_user_id"] = request.managerUserId();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasPosition()) {
    body["position"] = request.position();
  }

  if (!!request.hasPositionLevel()) {
    body["position_level"] = request.positionLevel();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  if (!!request.hasThirdDepartIdListShrink()) {
    body["third_depart_id_list"] = request.thirdDepartIdListShrink();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    body["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncSingleUser"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/single-user/action/sync")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncSingleUserResponse>();
}

/**
 * @summary 单个人员同步
 *
 * @param request SyncSingleUserRequest
 * @return SyncSingleUserResponse
 */
SyncSingleUserResponse Client::syncSingleUser(const SyncSingleUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SyncSingleUserHeaders headers = SyncSingleUserHeaders();
  return syncSingleUserWithOptions(request, headers, runtime);
}

/**
 * @summary 同步三方用户映射关系
 *
 * @param request SyncThirdUserMappingRequest
 * @param headers SyncThirdUserMappingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncThirdUserMappingResponse
 */
SyncThirdUserMappingResponse Client::syncThirdUserMappingWithOptions(const SyncThirdUserMappingRequest &request, const SyncThirdUserMappingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasThirdChannelType()) {
    body["third_channel_type"] = request.thirdChannelType();
  }

  if (!!request.hasThirdUserId()) {
    body["third_user_id"] = request.thirdUserId();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncThirdUserMapping"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/third-users/action/mapping")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncThirdUserMappingResponse>();
}

/**
 * @summary 同步三方用户映射关系
 *
 * @param request SyncThirdUserMappingRequest
 * @return SyncThirdUserMappingResponse
 */
SyncThirdUserMappingResponse Client::syncThirdUserMapping(const SyncThirdUserMappingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SyncThirdUserMappingHeaders headers = SyncThirdUserMappingHeaders();
  return syncThirdUserMappingWithOptions(request, headers, runtime);
}

/**
 * @summary 查询淘宝账号信息
 *
 * @param headers TBAccountInfoQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TBAccountInfoQueryResponse
 */
TBAccountInfoQueryResponse Client::tBAccountInfoQueryWithOptions(const string &userId, const TBAccountInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TBAccountInfoQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/account/v1/tb-accounts/" , Darabonba::Http::URL::percentEncode(userId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TBAccountInfoQueryResponse>();
}

/**
 * @summary 查询淘宝账号信息
 *
 * @return TBAccountInfoQueryResponse
 */
TBAccountInfoQueryResponse Client::tBAccountInfoQuery(const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TBAccountInfoQueryHeaders headers = TBAccountInfoQueryHeaders();
  return tBAccountInfoQueryWithOptions(userId, headers, runtime);
}

/**
 * @summary 解绑淘宝账号
 *
 * @param headers TBAccountUnbindHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TBAccountUnbindResponse
 */
TBAccountUnbindResponse Client::tBAccountUnbindWithOptions(const string &userId, const TBAccountUnbindHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TBAccountUnbind"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/account/v1/tb-accounts/" , Darabonba::Http::URL::percentEncode(userId) , "/action/unbind")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TBAccountUnbindResponse>();
}

/**
 * @summary 解绑淘宝账号
 *
 * @return TBAccountUnbindResponse
 */
TBAccountUnbindResponse Client::tBAccountUnbind(const string &userId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TBAccountUnbindHeaders headers = TBAccountUnbindHeaders();
  return tBAccountUnbindWithOptions(userId, headers, runtime);
}

/**
 * @summary 机票改签申请
 *
 * @param tmpReq TicketChangingApplyRequest
 * @param headers TicketChangingApplyHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingApplyResponse
 */
TicketChangingApplyResponse Client::ticketChangingApplyWithOptions(const TicketChangingApplyRequest &tmpReq, const TicketChangingApplyHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TicketChangingApplyShrinkRequest request = TicketChangingApplyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModifyFlightInfoList()) {
    request.setModifyFlightInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modifyFlightInfoList(), "modify_flight_info_list", "json"));
  }

  json body = {};
  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    body["dis_sub_order_id"] = request.disSubOrderId();
  }

  if (!!request.hasIsVoluntary()) {
    body["is_voluntary"] = request.isVoluntary();
  }

  if (!!request.hasModifyFlightInfoListShrink()) {
    body["modify_flight_info_list"] = request.modifyFlightInfoListShrink();
  }

  if (!!request.hasOtaItemId()) {
    body["ota_item_id"] = request.otaItemId();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.reason();
  }

  if (!!request.hasSessionId()) {
    body["session_id"] = request.sessionId();
  }

  if (!!request.hasWhetherRetry()) {
    body["whether_retry"] = request.whetherRetry();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TicketChangingApply"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/ticket-changing/action/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingApplyResponse>();
}

/**
 * @summary 机票改签申请
 *
 * @param request TicketChangingApplyRequest
 * @return TicketChangingApplyResponse
 */
TicketChangingApplyResponse Client::ticketChangingApply(const TicketChangingApplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingApplyHeaders headers = TicketChangingApplyHeaders();
  return ticketChangingApplyWithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签取消
 *
 * @param request TicketChangingCancelRequest
 * @param headers TicketChangingCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingCancelResponse
 */
TicketChangingCancelResponse Client::ticketChangingCancelWithOptions(const TicketChangingCancelRequest &request, const TicketChangingCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    query["dis_sub_order_id"] = request.disSubOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TicketChangingCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/ticket-changing/action/cancel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingCancelResponse>();
}

/**
 * @summary 机票改签取消
 *
 * @param request TicketChangingCancelRequest
 * @return TicketChangingCancelResponse
 */
TicketChangingCancelResponse Client::ticketChangingCancel(const TicketChangingCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingCancelHeaders headers = TicketChangingCancelHeaders();
  return ticketChangingCancelWithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签详情
 *
 * @param request TicketChangingDetailRequest
 * @param headers TicketChangingDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingDetailResponse
 */
TicketChangingDetailResponse Client::ticketChangingDetailWithOptions(const TicketChangingDetailRequest &request, const TicketChangingDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    query["dis_sub_order_id"] = request.disSubOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TicketChangingDetail"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/ticket-changing/action/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingDetailResponse>();
}

/**
 * @summary 机票改签详情
 *
 * @param request TicketChangingDetailRequest
 * @return TicketChangingDetailResponse
 */
TicketChangingDetailResponse Client::ticketChangingDetail(const TicketChangingDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingDetailHeaders headers = TicketChangingDetailHeaders();
  return ticketChangingDetailWithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签询价
 *
 * @param request TicketChangingEnquiryRequest
 * @param headers TicketChangingEnquiryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingEnquiryResponse
 */
TicketChangingEnquiryResponse Client::ticketChangingEnquiryWithOptions(const TicketChangingEnquiryRequest &request, const TicketChangingEnquiryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArrCity()) {
    query["arr_city"] = request.arrCity();
  }

  if (!!request.hasDepCity()) {
    query["dep_city"] = request.depCity();
  }

  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasIsVoluntary()) {
    query["is_voluntary"] = request.isVoluntary();
  }

  if (!!request.hasModifyDepartDate()) {
    query["modify_depart_date"] = request.modifyDepartDate();
  }

  if (!!request.hasModifyFlightNo()) {
    query["modify_flight_no"] = request.modifyFlightNo();
  }

  if (!!request.hasSessionId()) {
    query["session_id"] = request.sessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TicketChangingEnquiry"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/ticket-changing/action/enquiry")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingEnquiryResponse>();
}

/**
 * @summary 机票改签询价
 *
 * @param request TicketChangingEnquiryRequest
 * @return TicketChangingEnquiryResponse
 */
TicketChangingEnquiryResponse Client::ticketChangingEnquiry(const TicketChangingEnquiryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingEnquiryHeaders headers = TicketChangingEnquiryHeaders();
  return ticketChangingEnquiryWithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签可改签航班列表
 *
 * @param tmpReq TicketChangingFlightListRequest
 * @param headers TicketChangingFlightListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingFlightListResponse
 */
TicketChangingFlightListResponse Client::ticketChangingFlightListWithOptions(const TicketChangingFlightListRequest &tmpReq, const TicketChangingFlightListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TicketChangingFlightListShrinkRequest request = TicketChangingFlightListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTravelerInfoList()) {
    request.setTravelerInfoListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.travelerInfoList(), "traveler_info_list", "json"));
  }

  json query = {};
  if (!!request.hasArrCity()) {
    query["arr_city"] = request.arrCity();
  }

  if (!!request.hasDepCity()) {
    query["dep_city"] = request.depCity();
  }

  if (!!request.hasDepDate()) {
    query["dep_date"] = request.depDate();
  }

  if (!!request.hasDisOrderId()) {
    query["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasIsVoluntary()) {
    query["is_voluntary"] = request.isVoluntary();
  }

  if (!!request.hasTravelerInfoListShrink()) {
    query["traveler_info_list"] = request.travelerInfoListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TicketChangingFlightList"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/huge/dtb-flight/v1/ticket-changing-flight/action/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingFlightListResponse>();
}

/**
 * @summary 机票改签可改签航班列表
 *
 * @param request TicketChangingFlightListRequest
 * @return TicketChangingFlightListResponse
 */
TicketChangingFlightListResponse Client::ticketChangingFlightList(const TicketChangingFlightListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingFlightListHeaders headers = TicketChangingFlightListHeaders();
  return ticketChangingFlightListWithOptions(request, headers, runtime);
}

/**
 * @summary 机票改签航班支付
 *
 * @param tmpReq TicketChangingPayRequest
 * @param headers TicketChangingPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketChangingPayResponse
 */
TicketChangingPayResponse Client::ticketChangingPayWithOptions(const TicketChangingPayRequest &tmpReq, const TicketChangingPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TicketChangingPayShrinkRequest request = TicketChangingPayShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "extra", "json"));
  }

  json body = {};
  if (!!request.hasCorpPayPrice()) {
    body["corp_pay_price"] = request.corpPayPrice();
  }

  if (!!request.hasDisOrderId()) {
    body["dis_order_id"] = request.disOrderId();
  }

  if (!!request.hasDisSubOrderId()) {
    body["dis_sub_order_id"] = request.disSubOrderId();
  }

  if (!!request.hasExtraShrink()) {
    body["extra"] = request.extraShrink();
  }

  if (!!request.hasPersonalPayPrice()) {
    body["personal_pay_price"] = request.personalPayPrice();
  }

  if (!!request.hasTotalPayPrice()) {
    body["total_pay_price"] = request.totalPayPrice();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TicketChangingPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/dtb-flight/v1/ticket-changing/action/pay")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketChangingPayResponse>();
}

/**
 * @summary 机票改签航班支付
 *
 * @param request TicketChangingPayRequest
 * @return TicketChangingPayResponse
 */
TicketChangingPayResponse Client::ticketChangingPay(const TicketChangingPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TicketChangingPayHeaders headers = TicketChangingPayHeaders();
  return ticketChangingPayWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票改签申请
 *
 * @param tmpReq TrainApplyChangeRequest
 * @param headers TrainApplyChangeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainApplyChangeResponse
 */
TrainApplyChangeResponse Client::trainApplyChangeWithOptions(const TrainApplyChangeRequest &tmpReq, const TrainApplyChangeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainApplyChangeShrinkRequest request = TrainApplyChangeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChangeTrainInfoS()) {
    request.setChangeTrainInfoSShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.changeTrainInfoS(), "change_train_info_s", "json"));
  }

  json query = {};
  if (!!request.hasChangeTrainInfoSShrink()) {
    query["change_train_info_s"] = request.changeTrainInfoSShrink();
  }

  json body = {};
  if (!!request.hasAcceptNoSeat()) {
    body["accept_no_seat"] = request.acceptNoSeat();
  }

  if (!!request.hasForceMatch()) {
    body["force_match"] = request.forceMatch();
  }

  if (!!request.hasIsPayNow()) {
    body["is_pay_now"] = request.isPayNow();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutChangeApplyId()) {
    body["out_change_apply_id"] = request.outChangeApplyId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainApplyChange"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/change/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainApplyChangeResponse>();
}

/**
 * @summary 火车票改签申请
 *
 * @param request TrainApplyChangeRequest
 * @return TrainApplyChangeResponse
 */
TrainApplyChangeResponse Client::trainApplyChange(const TrainApplyChangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainApplyChangeHeaders headers = TrainApplyChangeHeaders();
  return trainApplyChangeWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票退票申请
 *
 * @param tmpReq TrainApplyRefundRequest
 * @param headers TrainApplyRefundHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainApplyRefundResponse
 */
TrainApplyRefundResponse Client::trainApplyRefundWithOptions(const TrainApplyRefundRequest &tmpReq, const TrainApplyRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainApplyRefundShrinkRequest request = TrainApplyRefundShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRefundTrainInfos()) {
    request.setRefundTrainInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundTrainInfos(), "refund_train_infos", "json"));
  }

  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasOutRefundId()) {
    body["out_refund_id"] = request.outRefundId();
  }

  if (!!request.hasRefundTrainInfosShrink()) {
    body["refund_train_infos"] = request.refundTrainInfosShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainApplyRefund"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/refund/apply")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainApplyRefundResponse>();
}

/**
 * @summary 火车票退票申请
 *
 * @param request TrainApplyRefundRequest
 * @return TrainApplyRefundResponse
 */
TrainApplyRefundResponse Client::trainApplyRefund(const TrainApplyRefundRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainApplyRefundHeaders headers = TrainApplyRefundHeaders();
  return trainApplyRefundWithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车票记账数据
 *
 * @param request TrainBillSettlementQueryRequest
 * @param headers TrainBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainBillSettlementQueryResponse
 */
TrainBillSettlementQueryResponse Client::trainBillSettlementQueryWithOptions(const TrainBillSettlementQueryRequest &request, const TrainBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainBillSettlementQueryResponse>();
}

/**
 * @summary 查询火车票记账数据
 *
 * @param request TrainBillSettlementQueryRequest
 * @return TrainBillSettlementQueryResponse
 */
TrainBillSettlementQueryResponse Client::trainBillSettlementQuery(const TrainBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainBillSettlementQueryHeaders headers = TrainBillSettlementQueryHeaders();
  return trainBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车超标审批详情
 *
 * @param request TrainExceedApplyQueryRequest
 * @param headers TrainExceedApplyQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainExceedApplyQueryResponse
 */
TrainExceedApplyQueryResponse Client::trainExceedApplyQueryWithOptions(const TrainExceedApplyQueryRequest &request, const TrainExceedApplyQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainExceedApplyQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/train-exceed")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainExceedApplyQueryResponse>();
}

/**
 * @summary 查询火车超标审批详情
 *
 * @param request TrainExceedApplyQueryRequest
 * @return TrainExceedApplyQueryResponse
 */
TrainExceedApplyQueryResponse Client::trainExceedApplyQuery(const TrainExceedApplyQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainExceedApplyQueryHeaders headers = TrainExceedApplyQueryHeaders();
  return trainExceedApplyQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票改签费用预估
 *
 * @param tmpReq TrainFeeCalculateChangeRequest
 * @param headers TrainFeeCalculateChangeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainFeeCalculateChangeResponse
 */
TrainFeeCalculateChangeResponse Client::trainFeeCalculateChangeWithOptions(const TrainFeeCalculateChangeRequest &tmpReq, const TrainFeeCalculateChangeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainFeeCalculateChangeShrinkRequest request = TrainFeeCalculateChangeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChangeTrainDetails()) {
    request.setChangeTrainDetailsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.changeTrainDetails(), "change_train_details", "json"));
  }

  json body = {};
  if (!!request.hasChangeTrainDetailsShrink()) {
    body["change_train_details"] = request.changeTrainDetailsShrink();
  }

  if (!!request.hasDistributeOrderId()) {
    body["distribute_order_id"] = request.distributeOrderId();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainFeeCalculateChange"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/change/fee")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainFeeCalculateChangeResponse>();
}

/**
 * @summary 火车票改签费用预估
 *
 * @param request TrainFeeCalculateChangeRequest
 * @return TrainFeeCalculateChangeResponse
 */
TrainFeeCalculateChangeResponse Client::trainFeeCalculateChange(const TrainFeeCalculateChangeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainFeeCalculateChangeHeaders headers = TrainFeeCalculateChangeHeaders();
  return trainFeeCalculateChangeWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票退票费用预估
 *
 * @param tmpReq TrainFeeCalculateRefundRequest
 * @param headers TrainFeeCalculateRefundHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainFeeCalculateRefundResponse
 */
TrainFeeCalculateRefundResponse Client::trainFeeCalculateRefundWithOptions(const TrainFeeCalculateRefundRequest &tmpReq, const TrainFeeCalculateRefundHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainFeeCalculateRefundShrinkRequest request = TrainFeeCalculateRefundShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRefundTrainInfos()) {
    request.setRefundTrainInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.refundTrainInfos(), "refund_train_infos", "json"));
  }

  json body = {};
  if (!!request.hasDistributeOrderId()) {
    body["distribute_order_id"] = request.distributeOrderId();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasRefundTrainInfosShrink()) {
    body["refund_train_infos"] = request.refundTrainInfosShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainFeeCalculateRefund"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/refund/fee")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainFeeCalculateRefundResponse>();
}

/**
 * @summary 火车票退票费用预估
 *
 * @param request TrainFeeCalculateRefundRequest
 * @return TrainFeeCalculateRefundResponse
 */
TrainFeeCalculateRefundResponse Client::trainFeeCalculateRefund(const TrainFeeCalculateRefundRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainFeeCalculateRefundHeaders headers = TrainFeeCalculateRefundHeaders();
  return trainFeeCalculateRefundWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票车次详情查询
 *
 * @param request TrainNoInfoSearchRequest
 * @param headers TrainNoInfoSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainNoInfoSearchResponse
 */
TrainNoInfoSearchResponse Client::trainNoInfoSearchWithOptions(const TrainNoInfoSearchRequest &request, const TrainNoInfoSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArrLocation()) {
    body["arr_location"] = request.arrLocation();
  }

  if (!!request.hasDepDate()) {
    body["dep_date"] = request.depDate();
  }

  if (!!request.hasDepLocation()) {
    body["dep_location"] = request.depLocation();
  }

  if (!!request.hasLineKey()) {
    body["line_key"] = request.lineKey();
  }

  if (!!request.hasMiddleDate()) {
    body["middle_date"] = request.middleDate();
  }

  if (!!request.hasMiddleStation()) {
    body["middle_station"] = request.middleStation();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasTrainNo()) {
    body["train_no"] = request.trainNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainNoInfoSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/search/info")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainNoInfoSearchResponse>();
}

/**
 * @summary 火车票车次详情查询
 *
 * @param request TrainNoInfoSearchRequest
 * @return TrainNoInfoSearchResponse
 */
TrainNoInfoSearchResponse Client::trainNoInfoSearch(const TrainNoInfoSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainNoInfoSearchHeaders headers = TrainNoInfoSearchHeaders();
  return trainNoInfoSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票车次列表查询
 *
 * @param tmpReq TrainNoListSearchRequest
 * @param headers TrainNoListSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainNoListSearchResponse
 */
TrainNoListSearchResponse Client::trainNoListSearchWithOptions(const TrainNoListSearchRequest &tmpReq, const TrainNoListSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainNoListSearchShrinkRequest request = TrainNoListSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOption()) {
    request.setOptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.option(), "option", "json"));
  }

  json body = {};
  if (!!request.hasArrLocation()) {
    body["arr_location"] = request.arrLocation();
  }

  if (!!request.hasDepDate()) {
    body["dep_date"] = request.depDate();
  }

  if (!!request.hasDepLocation()) {
    body["dep_location"] = request.depLocation();
  }

  if (!!request.hasOptionShrink()) {
    body["option"] = request.optionShrink();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainNoListSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/search/list")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainNoListSearchResponse>();
}

/**
 * @summary 火车票车次列表查询
 *
 * @param request TrainNoListSearchRequest
 * @return TrainNoListSearchResponse
 */
TrainNoListSearchResponse Client::trainNoListSearch(const TrainNoListSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainNoListSearchHeaders headers = TrainNoListSearchHeaders();
  return trainNoListSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票订单取消
 *
 * @param request TrainOrderCancelRequest
 * @param headers TrainOrderCancelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderCancelResponse
 */
TrainOrderCancelResponse Client::trainOrderCancelWithOptions(const TrainOrderCancelRequest &request, const TrainOrderCancelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeOrderId()) {
    body["change_order_id"] = request.changeOrderId();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutChangeOrderId()) {
    body["out_change_order_id"] = request.outChangeOrderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainOrderCancel"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderCancelResponse>();
}

/**
 * @summary 火车票订单取消
 *
 * @param request TrainOrderCancelRequest
 * @return TrainOrderCancelResponse
 */
TrainOrderCancelResponse Client::trainOrderCancel(const TrainOrderCancelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderCancelHeaders headers = TrainOrderCancelHeaders();
  return trainOrderCancelWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票改签确认
 *
 * @param request TrainOrderChangeConfirmRequest
 * @param headers TrainOrderChangeConfirmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderChangeConfirmResponse
 */
TrainOrderChangeConfirmResponse Client::trainOrderChangeConfirmWithOptions(const TrainOrderChangeConfirmRequest &request, const TrainOrderChangeConfirmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeApplyId()) {
    body["change_apply_id"] = request.changeApplyId();
  }

  if (!!request.hasChangeSettleAmount()) {
    body["change_settle_amount"] = request.changeSettleAmount();
  }

  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutChangeApplyId()) {
    body["out_change_apply_id"] = request.outChangeApplyId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainOrderChangeConfirm"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/change/confirm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderChangeConfirmResponse>();
}

/**
 * @summary 火车票改签确认
 *
 * @param request TrainOrderChangeConfirmRequest
 * @return TrainOrderChangeConfirmResponse
 */
TrainOrderChangeConfirmResponse Client::trainOrderChangeConfirm(const TrainOrderChangeConfirmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderChangeConfirmHeaders headers = TrainOrderChangeConfirmHeaders();
  return trainOrderChangeConfirmWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票正向预订
 *
 * @param tmpReq TrainOrderCreateRequest
 * @param headers TrainOrderCreateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderCreateResponse
 */
TrainOrderCreateResponse Client::trainOrderCreateWithOptions(const TrainOrderCreateRequest &tmpReq, const TrainOrderCreateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TrainOrderCreateShrinkRequest request = TrainOrderCreateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBookTrainInfos()) {
    request.setBookTrainInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bookTrainInfos(), "book_train_infos", "json"));
  }

  if (!!tmpReq.hasBusinessInfo()) {
    request.setBusinessInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.businessInfo(), "business_info", "json"));
  }

  if (!!tmpReq.hasContactInfo()) {
    request.setContactInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.contactInfo(), "contact_info", "json"));
  }

  if (!!tmpReq.hasPassengerOpenInfoS()) {
    request.setPassengerOpenInfoSShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.passengerOpenInfoS(), "passenger_open_info_s", "json"));
  }

  json body = {};
  if (!!request.hasAcceptNoSeat()) {
    body["accept_no_seat"] = request.acceptNoSeat();
  }

  if (!!request.hasBookTrainInfosShrink()) {
    body["book_train_infos"] = request.bookTrainInfosShrink();
  }

  if (!!request.hasBtripUserId()) {
    body["btrip_user_id"] = request.btripUserId();
  }

  if (!!request.hasBtripUserName()) {
    body["btrip_user_name"] = request.btripUserName();
  }

  if (!!request.hasBusinessInfoShrink()) {
    body["business_info"] = request.businessInfoShrink();
  }

  if (!!request.hasContactInfoShrink()) {
    body["contact_info"] = request.contactInfoShrink();
  }

  if (!!request.hasForceMatch()) {
    body["force_match"] = request.forceMatch();
  }

  if (!!request.hasIsPayNow()) {
    body["is_pay_now"] = request.isPayNow();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPassengerOpenInfoSShrink()) {
    body["passenger_open_info_s"] = request.passengerOpenInfoSShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainOrderCreate"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderCreateResponse>();
}

/**
 * @summary 火车票正向预订
 *
 * @param request TrainOrderCreateRequest
 * @return TrainOrderCreateResponse
 */
TrainOrderCreateResponse Client::trainOrderCreate(const TrainOrderCreateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderCreateHeaders headers = TrainOrderCreateHeaders();
  return trainOrderCreateWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票订单详情
 *
 * @param request TrainOrderDetailQueryRequest
 * @param headers TrainOrderDetailQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderDetailQueryResponse
 */
TrainOrderDetailQueryResponse Client::trainOrderDetailQueryWithOptions(const TrainOrderDetailQueryRequest &request, const TrainOrderDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainOrderDetailQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderDetailQueryResponse>();
}

/**
 * @summary 火车票订单详情
 *
 * @param request TrainOrderDetailQueryRequest
 * @return TrainOrderDetailQueryResponse
 */
TrainOrderDetailQueryResponse Client::trainOrderDetailQuery(const TrainOrderDetailQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderDetailQueryHeaders headers = TrainOrderDetailQueryHeaders();
  return trainOrderDetailQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车票订单列表
 *
 * @param request TrainOrderListQueryRequest
 * @param headers TrainOrderListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderListQueryResponse
 */
TrainOrderListQueryResponse Client::trainOrderListQueryWithOptions(const TrainOrderListQueryRequest &request, const TrainOrderListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllApply()) {
    query["all_apply"] = request.allApply();
  }

  if (!!request.hasApplyId()) {
    query["apply_id"] = request.applyId();
  }

  if (!!request.hasDepartId()) {
    query["depart_id"] = request.departId();
  }

  if (!!request.hasEndTime()) {
    query["end_time"] = request.endTime();
  }

  if (!!request.hasPage()) {
    query["page"] = request.page();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["start_time"] = request.startTime();
  }

  if (!!request.hasThirdpartApplyId()) {
    query["thirdpart_apply_id"] = request.thirdpartApplyId();
  }

  if (!!request.hasUpdateEndTime()) {
    query["update_end_time"] = request.updateEndTime();
  }

  if (!!request.hasUpdateStartTime()) {
    query["update_start_time"] = request.updateStartTime();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainOrderListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderListQueryResponse>();
}

/**
 * @summary 查询火车票订单列表
 *
 * @param request TrainOrderListQueryRequest
 * @return TrainOrderListQueryResponse
 */
TrainOrderListQueryResponse Client::trainOrderListQuery(const TrainOrderListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderListQueryHeaders headers = TrainOrderListQueryHeaders();
  return trainOrderListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票订单支付
 *
 * @param request TrainOrderPayRequest
 * @param headers TrainOrderPayHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderPayResponse
 */
TrainOrderPayResponse Client::trainOrderPayWithOptions(const TrainOrderPayRequest &request, const TrainOrderPayHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOrderId()) {
    body["order_id"] = request.orderId();
  }

  if (!!request.hasOutOrderId()) {
    body["out_order_id"] = request.outOrderId();
  }

  if (!!request.hasPayAmount()) {
    body["pay_amount"] = request.payAmount();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainOrderPay"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order/pay")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderPayResponse>();
}

/**
 * @summary 火车票订单支付
 *
 * @param request TrainOrderPayRequest
 * @return TrainOrderPayResponse
 */
TrainOrderPayResponse Client::trainOrderPay(const TrainOrderPayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderPayHeaders headers = TrainOrderPayHeaders();
  return trainOrderPayWithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车票订单详情（含票信息）
 *
 * @param request TrainOrderQueryRequest
 * @param headers TrainOrderQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderQueryResponse
 */
TrainOrderQueryResponse Client::trainOrderQueryWithOptions(const TrainOrderQueryRequest &request, const TrainOrderQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainOrderQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderQueryResponse>();
}

/**
 * @summary 查询火车票订单详情（含票信息）
 *
 * @param request TrainOrderQueryRequest
 * @return TrainOrderQueryResponse
 */
TrainOrderQueryResponse Client::trainOrderQuery(const TrainOrderQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderQueryHeaders headers = TrainOrderQueryHeaders();
  return trainOrderQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票订单查询V2
 *
 * @param request TrainOrderQueryV2Request
 * @param headers TrainOrderQueryV2Headers
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainOrderQueryV2Response
 */
TrainOrderQueryV2Response Client::trainOrderQueryV2WithOptions(const TrainOrderQueryV2Request &request, const TrainOrderQueryV2Headers &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainOrderQueryV2"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v2/order")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainOrderQueryV2Response>();
}

/**
 * @summary 火车票订单查询V2
 *
 * @param request TrainOrderQueryV2Request
 * @return TrainOrderQueryV2Response
 */
TrainOrderQueryV2Response Client::trainOrderQueryV2(const TrainOrderQueryV2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainOrderQueryV2Headers headers = TrainOrderQueryV2Headers();
  return trainOrderQueryV2WithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车站数据
 *
 * @param request TrainStationSearchRequest
 * @param headers TrainStationSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainStationSearchResponse
 */
TrainStationSearchResponse Client::trainStationSearchWithOptions(const TrainStationSearchRequest &request, const TrainStationSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["keyword"] = request.keyword();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainStationSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/city/v1/train")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainStationSearchResponse>();
}

/**
 * @summary 查询火车站数据
 *
 * @param request TrainStationSearchRequest
 * @return TrainStationSearchResponse
 */
TrainStationSearchResponse Client::trainStationSearch(const TrainStationSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainStationSearchHeaders headers = TrainStationSearchHeaders();
  return trainStationSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 火车票经停站查询
 *
 * @param request TrainStopoverSearchRequest
 * @param headers TrainStopoverSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainStopoverSearchResponse
 */
TrainStopoverSearchResponse Client::trainStopoverSearchWithOptions(const TrainStopoverSearchRequest &request, const TrainStopoverSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArrStation()) {
    body["arr_station"] = request.arrStation();
  }

  if (!!request.hasDepStation()) {
    body["dep_station"] = request.depStation();
  }

  if (!!request.hasTrainDate()) {
    body["train_date"] = request.trainDate();
  }

  if (!!request.hasTrainNo()) {
    body["train_no"] = request.trainNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TrainStopoverSearch"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/train/v1/search/stopover")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainStopoverSearchResponse>();
}

/**
 * @summary 火车票经停站查询
 *
 * @param request TrainStopoverSearchRequest
 * @return TrainStopoverSearchResponse
 */
TrainStopoverSearchResponse Client::trainStopoverSearch(const TrainStopoverSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainStopoverSearchHeaders headers = TrainStopoverSearchHeaders();
  return trainStopoverSearchWithOptions(request, headers, runtime);
}

/**
 * @summary 查询火车票凭证扫描件
 *
 * @param request TrainTicketScanQueryRequest
 * @param headers TrainTicketScanQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TrainTicketScanQueryResponse
 */
TrainTicketScanQueryResponse Client::trainTicketScanQueryWithOptions(const TrainTicketScanQueryRequest &request, const TrainTicketScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillDate()) {
    query["bill_date"] = request.billDate();
  }

  if (!!request.hasBillId()) {
    query["bill_id"] = request.billId();
  }

  if (!!request.hasInvoiceSubTaskId()) {
    query["invoice_sub_task_id"] = request.invoiceSubTaskId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasSerialNumber()) {
    query["serial_number"] = request.serialNumber();
  }

  if (!!request.hasTicketNo()) {
    query["ticket_no"] = request.ticketNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TrainTicketScanQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/scan/v1/train-ticket")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TrainTicketScanQueryResponse>();
}

/**
 * @summary 查询火车票凭证扫描件
 *
 * @param request TrainTicketScanQueryRequest
 * @return TrainTicketScanQueryResponse
 */
TrainTicketScanQueryResponse Client::trainTicketScanQuery(const TrainTicketScanQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TrainTicketScanQueryHeaders headers = TrainTicketScanQueryHeaders();
  return trainTicketScanQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询差标列表
 *
 * @param request TravelStandardListQueryRequest
 * @param headers TravelStandardListQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardListQueryResponse
 */
TravelStandardListQueryResponse Client::travelStandardListQueryWithOptions(const TravelStandardListQueryRequest &request, const TravelStandardListQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromGroup()) {
    query["from_group"] = request.fromGroup();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasRuleName()) {
    query["rule_name"] = request.ruleName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TravelStandardListQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardListQueryResponse>();
}

/**
 * @summary 查询差标列表
 *
 * @param request TravelStandardListQueryRequest
 * @return TravelStandardListQueryResponse
 */
TravelStandardListQueryResponse Client::travelStandardListQuery(const TravelStandardListQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardListQueryHeaders headers = TravelStandardListQueryHeaders();
  return travelStandardListQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询差标详情
 *
 * @param tmpReq TravelStandardQueryRequest
 * @param headers TravelStandardQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardQueryResponse
 */
TravelStandardQueryResponse Client::travelStandardQueryWithOptions(const TravelStandardQueryRequest &tmpReq, const TravelStandardQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TravelStandardQueryShrinkRequest request = TravelStandardQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasServiceTypeList()) {
    request.setServiceTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serviceTypeList(), "service_type_list", "json"));
  }

  json query = {};
  if (!!request.hasFromGroup()) {
    query["from_group"] = request.fromGroup();
  }

  if (!!request.hasRuleCode()) {
    query["rule_code"] = request.ruleCode();
  }

  if (!!request.hasServiceTypeListShrink()) {
    query["service_type_list"] = request.serviceTypeListShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TravelStandardQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/detail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardQueryResponse>();
}

/**
 * @summary 查询差标详情
 *
 * @param request TravelStandardQueryRequest
 * @return TravelStandardQueryResponse
 */
TravelStandardQueryResponse Client::travelStandardQuery(const TravelStandardQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardQueryHeaders headers = TravelStandardQueryHeaders();
  return travelStandardQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 新增差旅标准关联人员实体
 *
 * @param tmpReq TravelStandardRelateAddRequest
 * @param headers TravelStandardRelateAddHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardRelateAddResponse
 */
TravelStandardRelateAddResponse Client::travelStandardRelateAddWithOptions(const TravelStandardRelateAddRequest &tmpReq, const TravelStandardRelateAddHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TravelStandardRelateAddShrinkRequest request = TravelStandardRelateAddShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddList()) {
    request.setAddListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.addList(), "add_list", "json"));
  }

  json body = {};
  if (!!request.hasAddListShrink()) {
    body["add_list"] = request.addListShrink();
  }

  if (!!request.hasFromGroup()) {
    body["from_group"] = request.fromGroup();
  }

  if (!!request.hasRuleId()) {
    body["rule_id"] = request.ruleId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TravelStandardRelateAdd"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/add-relate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardRelateAddResponse>();
}

/**
 * @summary 新增差旅标准关联人员实体
 *
 * @param request TravelStandardRelateAddRequest
 * @return TravelStandardRelateAddResponse
 */
TravelStandardRelateAddResponse Client::travelStandardRelateAdd(const TravelStandardRelateAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardRelateAddHeaders headers = TravelStandardRelateAddHeaders();
  return travelStandardRelateAddWithOptions(request, headers, runtime);
}

/**
 * @summary 删除差旅标准关联人员实体
 *
 * @param tmpReq TravelStandardRelateDeleteRequest
 * @param headers TravelStandardRelateDeleteHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardRelateDeleteResponse
 */
TravelStandardRelateDeleteResponse Client::travelStandardRelateDeleteWithOptions(const TravelStandardRelateDeleteRequest &tmpReq, const TravelStandardRelateDeleteHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TravelStandardRelateDeleteShrinkRequest request = TravelStandardRelateDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRemoveList()) {
    request.setRemoveListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.removeList(), "remove_list", "json"));
  }

  json body = {};
  if (!!request.hasFromGroup()) {
    body["from_group"] = request.fromGroup();
  }

  if (!!request.hasRemoveListShrink()) {
    body["remove_list"] = request.removeListShrink();
  }

  if (!!request.hasRuleId()) {
    body["rule_id"] = request.ruleId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TravelStandardRelateDelete"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/delete-relate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardRelateDeleteResponse>();
}

/**
 * @summary 删除差旅标准关联人员实体
 *
 * @param request TravelStandardRelateDeleteRequest
 * @return TravelStandardRelateDeleteResponse
 */
TravelStandardRelateDeleteResponse Client::travelStandardRelateDelete(const TravelStandardRelateDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardRelateDeleteHeaders headers = TravelStandardRelateDeleteHeaders();
  return travelStandardRelateDeleteWithOptions(request, headers, runtime);
}

/**
 * @summary 查询差旅标准关联人员实体
 *
 * @param request TravelStandardRelateQueryRequest
 * @param headers TravelStandardRelateQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardRelateQueryResponse
 */
TravelStandardRelateQueryResponse Client::travelStandardRelateQueryWithOptions(const TravelStandardRelateQueryRequest &request, const TravelStandardRelateQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromGroup()) {
    query["from_group"] = request.fromGroup();
  }

  if (!!request.hasRuleId()) {
    query["rule_id"] = request.ruleId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TravelStandardRelateQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/query-relate")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardRelateQueryResponse>();
}

/**
 * @summary 查询差旅标准关联人员实体
 *
 * @param request TravelStandardRelateQueryRequest
 * @return TravelStandardRelateQueryResponse
 */
TravelStandardRelateQueryResponse Client::travelStandardRelateQuery(const TravelStandardRelateQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardRelateQueryHeaders headers = TravelStandardRelateQueryHeaders();
  return travelStandardRelateQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 更新差旅标准绑定员工类型
 *
 * @param request TravelStandardScopeSaveRequest
 * @param headers TravelStandardScopeSaveHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TravelStandardScopeSaveResponse
 */
TravelStandardScopeSaveResponse Client::travelStandardScopeSaveWithOptions(const TravelStandardScopeSaveRequest &request, const TravelStandardScopeSaveHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromGroup()) {
    query["from_group"] = request.fromGroup();
  }

  if (!!request.hasRuleId()) {
    query["rule_id"] = request.ruleId();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.scope();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TravelStandardScopeSave"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/travel-manage/v1/standards/save-scope")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TravelStandardScopeSaveResponse>();
}

/**
 * @summary 更新差旅标准绑定员工类型
 *
 * @param request TravelStandardScopeSaveRequest
 * @return TravelStandardScopeSaveResponse
 */
TravelStandardScopeSaveResponse Client::travelStandardScopeSave(const TravelStandardScopeSaveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TravelStandardScopeSaveHeaders headers = TravelStandardScopeSaveHeaders();
  return travelStandardScopeSaveWithOptions(request, headers, runtime);
}

/**
 * @summary 查询业务流程
 *
 * @param request TripBusinessInstanceQueryRequest
 * @param headers TripBusinessInstanceQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TripBusinessInstanceQueryResponse
 */
TripBusinessInstanceQueryResponse Client::tripBusinessInstanceQueryWithOptions(const TripBusinessInstanceQueryRequest &request, const TripBusinessInstanceQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  if (!!request.hasThirdBusinessId()) {
    query["third_business_id"] = request.thirdBusinessId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TripBusinessInstanceQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/business")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TripBusinessInstanceQueryResponse>();
}

/**
 * @summary 查询业务流程
 *
 * @param request TripBusinessInstanceQueryRequest
 * @return TripBusinessInstanceQueryResponse
 */
TripBusinessInstanceQueryResponse Client::tripBusinessInstanceQuery(const TripBusinessInstanceQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TripBusinessInstanceQueryHeaders headers = TripBusinessInstanceQueryHeaders();
  return tripBusinessInstanceQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询抄送信息
 *
 * @param request TripCCInfoQueryRequest
 * @param headers TripCCInfoQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TripCCInfoQueryResponse
 */
TripCCInfoQueryResponse Client::tripCCInfoQueryWithOptions(const TripCCInfoQueryRequest &request, const TripCCInfoQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  if (!!request.hasNodeId()) {
    query["node_id"] = request.nodeId();
  }

  if (!!request.hasThirdBusinessId()) {
    query["third_business_id"] = request.thirdBusinessId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TripCCInfoQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/cc")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TripCCInfoQueryResponse>();
}

/**
 * @summary 查询抄送信息
 *
 * @param request TripCCInfoQueryRequest
 * @return TripCCInfoQueryResponse
 */
TripCCInfoQueryResponse Client::tripCCInfoQuery(const TripCCInfoQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TripCCInfoQueryHeaders headers = TripCCInfoQueryHeaders();
  return tripCCInfoQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询审批任务列表
 *
 * @param request TripTaskQueryRequest
 * @param headers TripTaskQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return TripTaskQueryResponse
 */
TripTaskQueryResponse Client::tripTaskQueryWithOptions(const TripTaskQueryRequest &request, const TripTaskQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessInstanceId()) {
    query["business_instance_id"] = request.businessInstanceId();
  }

  if (!!request.hasThirdBusinessId()) {
    query["third_business_id"] = request.thirdBusinessId();
  }

  if (!!request.hasUserId()) {
    query["user_id"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["user_name"] = request.userName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TripTaskQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/apply/v1/tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TripTaskQueryResponse>();
}

/**
 * @summary 查询审批任务列表
 *
 * @param request TripTaskQueryRequest
 * @return TripTaskQueryResponse
 */
TripTaskQueryResponse Client::tripTaskQuery(const TripTaskQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  TripTaskQueryHeaders headers = TripTaskQueryHeaders();
  return tripTaskQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 更新企业自定义角色
 *
 * @param request UpdateCustomRoleRequest
 * @param headers UpdateCustomRoleHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomRoleResponse
 */
UpdateCustomRoleResponse Client::updateCustomRoleWithOptions(const UpdateCustomRoleRequest &request, const UpdateCustomRoleHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRoleId()) {
    body["role_id"] = request.roleId();
  }

  if (!!request.hasRoleName()) {
    body["role_name"] = request.roleName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCustomRole"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/role/v1/customRoles/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomRoleResponse>();
}

/**
 * @summary 更新企业自定义角色
 *
 * @param request UpdateCustomRoleRequest
 * @return UpdateCustomRoleResponse
 */
UpdateCustomRoleResponse Client::updateCustomRole(const UpdateCustomRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateCustomRoleHeaders headers = UpdateCustomRoleHeaders();
  return updateCustomRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 修改企业部门
 *
 * @param tmpReq UpdateDepartmentRequest
 * @param headers UpdateDepartmentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartmentWithOptions(const UpdateDepartmentRequest &tmpReq, const UpdateDepartmentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDepartmentShrinkRequest request = UpdateDepartmentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasManagerEmployeeIdList()) {
    request.setManagerEmployeeIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managerEmployeeIdList(), "manager_employee_id_list", "json"));
  }

  json body = {};
  if (!!request.hasDeptName()) {
    body["dept_name"] = request.deptName();
  }

  if (!!request.hasManagerEmployeeIdListShrink()) {
    body["manager_employee_id_list"] = request.managerEmployeeIdListShrink();
  }

  if (!!request.hasOutDeptId()) {
    body["out_dept_id"] = request.outDeptId();
  }

  if (!!request.hasOutDeptPid()) {
    body["out_dept_pid"] = request.outDeptPid();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDepartment"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/department/v2/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDepartmentResponse>();
}

/**
 * @summary 修改企业部门
 *
 * @param request UpdateDepartmentRequest
 * @return UpdateDepartmentResponse
 */
UpdateDepartmentResponse Client::updateDepartment(const UpdateDepartmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateDepartmentHeaders headers = UpdateDepartmentHeaders();
  return updateDepartmentWithOptions(request, headers, runtime);
}

/**
 * @summary 更新员工信息
 *
 * @param tmpReq UpdateEmployeeRequest
 * @param headers UpdateEmployeeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEmployeeResponse
 */
UpdateEmployeeResponse Client::updateEmployeeWithOptions(const UpdateEmployeeRequest &tmpReq, const UpdateEmployeeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEmployeeShrinkRequest request = UpdateEmployeeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBaseCityCodeList()) {
    request.setBaseCityCodeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.baseCityCodeList(), "base_city_code_list", "json"));
  }

  if (!!tmpReq.hasBaseLocationList()) {
    request.setBaseLocationListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.baseLocationList(), "base_location_list", "json"));
  }

  if (!!tmpReq.hasCertList()) {
    request.setCertListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certList(), "cert_list", "json"));
  }

  if (!!tmpReq.hasCustomRoleCodeList()) {
    request.setCustomRoleCodeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customRoleCodeList(), "custom_role_code_list", "json"));
  }

  if (!!tmpReq.hasOutDeptIdList()) {
    request.setOutDeptIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outDeptIdList(), "out_dept_id_list", "json"));
  }

  json body = {};
  if (!!request.hasAccountEmail()) {
    body["account_email"] = request.accountEmail();
  }

  if (!!request.hasAccountPhone()) {
    body["account_phone"] = request.accountPhone();
  }

  if (!!request.hasAttribute()) {
    body["attribute"] = request.attribute();
  }

  if (!!request.hasAvatar()) {
    body["avatar"] = request.avatar();
  }

  if (!!request.hasBaseCityCodeListShrink()) {
    body["base_city_code_list"] = request.baseCityCodeListShrink();
  }

  if (!!request.hasBaseLocationListShrink()) {
    body["base_location_list"] = request.baseLocationListShrink();
  }

  if (!!request.hasBirthday()) {
    body["birthday"] = request.birthday();
  }

  if (!!request.hasCertListShrink()) {
    body["cert_list"] = request.certListShrink();
  }

  if (!!request.hasCustomRoleCodeListShrink()) {
    body["custom_role_code_list"] = request.customRoleCodeListShrink();
  }

  if (!!request.hasEmail()) {
    body["email"] = request.email();
  }

  if (!!request.hasGender()) {
    body["gender"] = request.gender();
  }

  if (!!request.hasIsAdmin()) {
    body["is_admin"] = request.isAdmin();
  }

  if (!!request.hasIsBoss()) {
    body["is_boss"] = request.isBoss();
  }

  if (!!request.hasIsDeptLeader()) {
    body["is_dept_leader"] = request.isDeptLeader();
  }

  if (!!request.hasJobNo()) {
    body["job_no"] = request.jobNo();
  }

  if (!!request.hasManagerUserId()) {
    body["manager_user_id"] = request.managerUserId();
  }

  if (!!request.hasOutDeptIdListShrink()) {
    body["out_dept_id_list"] = request.outDeptIdListShrink();
  }

  if (!!request.hasPhone()) {
    body["phone"] = request.phone();
  }

  if (!!request.hasPositionLevel()) {
    body["position_level"] = request.positionLevel();
  }

  if (!!request.hasRealName()) {
    body["real_name"] = request.realName();
  }

  if (!!request.hasRealNameEn()) {
    body["real_name_en"] = request.realNameEn();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  if (!!request.hasUserNick()) {
    body["user_nick"] = request.userNick();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEmployee"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/employee/v2/update")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEmployeeResponse>();
}

/**
 * @summary 更新员工信息
 *
 * @param request UpdateEmployeeRequest
 * @return UpdateEmployeeResponse
 */
UpdateEmployeeResponse Client::updateEmployee(const UpdateEmployeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateEmployeeHeaders headers = UpdateEmployeeHeaders();
  return updateEmployeeWithOptions(request, headers, runtime);
}

/**
 * @summary 更新员工在职状态
 *
 * @param request UpdateEmployeeLeaveStatusRequest
 * @param headers UpdateEmployeeLeaveStatusHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEmployeeLeaveStatusResponse
 */
UpdateEmployeeLeaveStatusResponse Client::updateEmployeeLeaveStatusWithOptions(const UpdateEmployeeLeaveStatusRequest &request, const UpdateEmployeeLeaveStatusHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIsLeave()) {
    body["is_leave"] = request.isLeave();
  }

  if (!!request.hasUserId()) {
    body["user_id"] = request.userId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEmployeeLeaveStatus"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/employee/v2/updateLeaveStatus")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEmployeeLeaveStatusResponse>();
}

/**
 * @summary 更新员工在职状态
 *
 * @param request UpdateEmployeeLeaveStatusRequest
 * @return UpdateEmployeeLeaveStatusResponse
 */
UpdateEmployeeLeaveStatusResponse Client::updateEmployeeLeaveStatus(const UpdateEmployeeLeaveStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateEmployeeLeaveStatusHeaders headers = UpdateEmployeeLeaveStatusHeaders();
  return updateEmployeeLeaveStatusWithOptions(request, headers, runtime);
}

/**
 * @summary 人员查询
 *
 * @param request UserQueryRequest
 * @param headers UserQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UserQueryResponse
 */
UserQueryResponse Client::userQueryWithOptions(const UserQueryRequest &request, const UserQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModifiedTimeGreaterOrEqualThan()) {
    query["modified_time_greater_or_equal_than"] = request.modifiedTimeGreaterOrEqualThan();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPageToken()) {
    query["page_token"] = request.pageToken();
  }

  if (!!request.hasThirdPartJobNo()) {
    query["third_part_job_no"] = request.thirdPartJobNo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UserQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/user/v1/user")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UserQueryResponse>();
}

/**
 * @summary 人员查询
 *
 * @param request UserQueryRequest
 * @return UserQueryResponse
 */
UserQueryResponse Client::userQuery(const UserQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UserQueryHeaders headers = UserQueryHeaders();
  return userQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询增值服务记账数据
 *
 * @param request VasBillSettlementQueryRequest
 * @param headers VasBillSettlementQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return VasBillSettlementQueryResponse
 */
VasBillSettlementQueryResponse Client::vasBillSettlementQueryWithOptions(const VasBillSettlementQueryRequest &request, const VasBillSettlementQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillBatch()) {
    query["bill_batch"] = request.billBatch();
  }

  if (!!request.hasCooperatorId()) {
    query["cooperator_id"] = request.cooperatorId();
  }

  if (!!request.hasOrderId()) {
    query["order_id"] = request.orderId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  if (!!request.hasPeriodEnd()) {
    query["period_end"] = request.periodEnd();
  }

  if (!!request.hasPeriodStart()) {
    query["period_start"] = request.periodStart();
  }

  if (!!request.hasScrollId()) {
    query["scroll_id"] = request.scrollId();
  }

  if (!!request.hasScrollMod()) {
    query["scroll_mod"] = request.scrollMod();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripCorpToken()) {
    realHeaders["x-acs-btrip-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VasBillSettlementQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/vas/v1/bill-settlement")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VasBillSettlementQueryResponse>();
}

/**
 * @summary 查询增值服务记账数据
 *
 * @param request VasBillSettlementQueryRequest
 * @return VasBillSettlementQueryResponse
 */
VasBillSettlementQueryResponse Client::vasBillSettlementQuery(const VasBillSettlementQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  VasBillSettlementQueryHeaders headers = VasBillSettlementQueryHeaders();
  return vasBillSettlementQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询增值税发票扫描件
 *
 * @param request VatInvoiceScanQueryRequest
 * @param headers VatInvoiceScanQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return VatInvoiceScanQueryResponse
 */
VatInvoiceScanQueryResponse Client::vatInvoiceScanQueryWithOptions(const VatInvoiceScanQueryRequest &request, const VatInvoiceScanQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillDate()) {
    query["bill_date"] = request.billDate();
  }

  if (!!request.hasBillId()) {
    query["bill_id"] = request.billId();
  }

  if (!!request.hasInvoiceSubTaskId()) {
    query["invoice_sub_task_id"] = request.invoiceSubTaskId();
  }

  if (!!request.hasPageNo()) {
    query["page_no"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.pageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VatInvoiceScanQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/scan/v1/vat-invoice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VatInvoiceScanQueryResponse>();
}

/**
 * @summary 查询增值税发票扫描件
 *
 * @param request VatInvoiceScanQueryRequest
 * @return VatInvoiceScanQueryResponse
 */
VatInvoiceScanQueryResponse Client::vatInvoiceScanQuery(const VatInvoiceScanQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  VatInvoiceScanQueryHeaders headers = VatInvoiceScanQueryHeaders();
  return vatInvoiceScanQueryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询账期待申请的发票数据
 *
 * @param request WaitApplyInvoiceTaskDetailQueryRequest
 * @param headers WaitApplyInvoiceTaskDetailQueryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return WaitApplyInvoiceTaskDetailQueryResponse
 */
WaitApplyInvoiceTaskDetailQueryResponse Client::waitApplyInvoiceTaskDetailQueryWithOptions(const WaitApplyInvoiceTaskDetailQueryRequest &request, const WaitApplyInvoiceTaskDetailQueryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillDate()) {
    query["bill_date"] = request.billDate();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasXAcsBtripSoCorpToken()) {
    realHeaders["x-acs-btrip-so-corp-token"] = Darabonba::Convert::stringVal(headers.xAcsBtripSoCorpToken());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WaitApplyInvoiceTaskDetailQuery"},
    {"version" , "2022-05-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/invoice/v1/wait-apply-task")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WaitApplyInvoiceTaskDetailQueryResponse>();
}

/**
 * @summary 查询账期待申请的发票数据
 *
 * @param request WaitApplyInvoiceTaskDetailQueryRequest
 * @return WaitApplyInvoiceTaskDetailQueryResponse
 */
WaitApplyInvoiceTaskDetailQueryResponse Client::waitApplyInvoiceTaskDetailQuery(const WaitApplyInvoiceTaskDetailQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  WaitApplyInvoiceTaskDetailQueryHeaders headers = WaitApplyInvoiceTaskDetailQueryHeaders();
  return waitApplyInvoiceTaskDetailQueryWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace BtripOpen20220520