// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/btrip_open_20220520.hpp>
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

using namespace Alibabacloud_BtripOpen20220520;

Alibabacloud_BtripOpen20220520::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("btripopen"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BtripOpen20220520::Client::getEndpoint(shared_ptr<string> productId,
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

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessTokenWithOptions(shared_ptr<AccessTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("app_secret", *request->appSecret));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AccessToken"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/btrip-open-auth/v1/access-token/action/take"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AccessTokenResponse(callApi(params, req, runtime));
}

AccessTokenResponse Alibabacloud_BtripOpen20220520::Client::accessToken(shared_ptr<AccessTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return accessTokenWithOptions(request, headers, runtime);
}

AddDepartmentResponse Alibabacloud_BtripOpen20220520::Client::addDepartmentWithOptions(shared_ptr<AddDepartmentRequest> tmpReq, shared_ptr<AddDepartmentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddDepartmentShrinkRequest> request = make_shared<AddDepartmentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managerEmployeeIdList)) {
    request->managerEmployeeIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managerEmployeeIdList, make_shared<string>("manager_employee_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deptName)) {
    body->insert(pair<string, string>("dept_name", *request->deptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerEmployeeIdListShrink)) {
    body->insert(pair<string, string>("manager_employee_id_list", *request->managerEmployeeIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptId)) {
    body->insert(pair<string, string>("out_dept_id", *request->outDeptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptPid)) {
    body->insert(pair<string, string>("out_dept_pid", *request->outDeptPid));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDepartment"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/department/v2/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDepartmentResponse(callApi(params, req, runtime));
}

AddDepartmentResponse Alibabacloud_BtripOpen20220520::Client::addDepartment(shared_ptr<AddDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddDepartmentHeaders> headers = make_shared<AddDepartmentHeaders>();
  return addDepartmentWithOptions(request, headers, runtime);
}

AddEmployeeResponse Alibabacloud_BtripOpen20220520::Client::addEmployeeWithOptions(shared_ptr<AddEmployeeRequest> tmpReq, shared_ptr<AddEmployeeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddEmployeeShrinkRequest> request = make_shared<AddEmployeeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->baseCityCodeList)) {
    request->baseCityCodeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->baseCityCodeList, make_shared<string>("base_city_code_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddEmployeeRequestBaseLocationList>>(tmpReq->baseLocationList)) {
    request->baseLocationListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->baseLocationList, make_shared<string>("base_location_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddEmployeeRequestCertList>>(tmpReq->certList)) {
    request->certListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->certList, make_shared<string>("cert_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customRoleCodeList)) {
    request->customRoleCodeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customRoleCodeList, make_shared<string>("custom_role_code_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->outDeptIdList)) {
    request->outDeptIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outDeptIdList, make_shared<string>("out_dept_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attribute)) {
    body->insert(pair<string, string>("attribute", *request->attribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatar)) {
    body->insert(pair<string, string>("avatar", *request->avatar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baseCityCodeListShrink)) {
    body->insert(pair<string, string>("base_city_code_list", *request->baseCityCodeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baseLocationListShrink)) {
    body->insert(pair<string, string>("base_location_list", *request->baseLocationListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    body->insert(pair<string, string>("birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certListShrink)) {
    body->insert(pair<string, string>("cert_list", *request->certListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customRoleCodeListShrink)) {
    body->insert(pair<string, string>("custom_role_code_list", *request->customRoleCodeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    body->insert(pair<string, string>("gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAdmin)) {
    body->insert(pair<string, bool>("is_admin", *request->isAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBoss)) {
    body->insert(pair<string, bool>("is_boss", *request->isBoss));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDeptLeader)) {
    body->insert(pair<string, bool>("is_dept_leader", *request->isDeptLeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerUserId)) {
    body->insert(pair<string, string>("manager_user_id", *request->managerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptIdListShrink)) {
    body->insert(pair<string, string>("out_dept_id_list", *request->outDeptIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positionLevel)) {
    body->insert(pair<string, string>("position_level", *request->positionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realName)) {
    body->insert(pair<string, string>("real_name", *request->realName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionId)) {
    body->insert(pair<string, string>("union_id", *request->unionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    body->insert(pair<string, string>("user_nick", *request->userNick));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEmployee"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/employee/v2/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEmployeeResponse(callApi(params, req, runtime));
}

AddEmployeeResponse Alibabacloud_BtripOpen20220520::Client::addEmployee(shared_ptr<AddEmployeeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddEmployeeHeaders> headers = make_shared<AddEmployeeHeaders>();
  return addEmployeeWithOptions(request, headers, runtime);
}

AddEmployeesToCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::addEmployeesToCustomRoleWithOptions(shared_ptr<AddEmployeesToCustomRoleRequest> tmpReq, shared_ptr<AddEmployeesToCustomRoleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddEmployeesToCustomRoleShrinkRequest> request = make_shared<AddEmployeesToCustomRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("user_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    body->insert(pair<string, string>("role_id", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("user_id_list", *request->userIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEmployeesToCustomRole"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/role/v1/customRoleEmployees/add"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEmployeesToCustomRoleResponse(callApi(params, req, runtime));
}

AddEmployeesToCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::addEmployeesToCustomRole(shared_ptr<AddEmployeesToCustomRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddEmployeesToCustomRoleHeaders> headers = make_shared<AddEmployeesToCustomRoleHeaders>();
  return addEmployeesToCustomRoleWithOptions(request, headers, runtime);
}

AddInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::addInvoiceEntityWithOptions(shared_ptr<AddInvoiceEntityRequest> tmpReq, shared_ptr<AddInvoiceEntityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddInvoiceEntityShrinkRequest> request = make_shared<AddInvoiceEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddInvoiceEntityRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddInvoiceEntity"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/entities"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddInvoiceEntityResponse(callApi(params, req, runtime));
}

AddInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::addInvoiceEntity(shared_ptr<AddInvoiceEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddInvoiceEntityHeaders> headers = make_shared<AddInvoiceEntityHeaders>();
  return addInvoiceEntityWithOptions(request, headers, runtime);
}

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGetWithOptions(shared_ptr<AddressGetRequest> request, shared_ptr<AddressGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionType)) {
    query->insert(pair<string, long>("action_type", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityName)) {
    query->insert(pair<string, string>("arr_city_name", *request->arrCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carScenesCode)) {
    query->insert(pair<string, string>("car_scenes_code", *request->carScenesCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityName)) {
    query->insert(pair<string, string>("dep_city_name", *request->depCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryId)) {
    query->insert(pair<string, string>("itinerary_id", *request->itineraryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->middlePage)) {
    query->insert(pair<string, long>("middle_page", *request->middlePage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_Id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionParameters)) {
    query->insert(pair<string, string>("session_parameters", *request->sessionParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taobaoCallbackUrl)) {
    query->insert(pair<string, string>("taobao_callback_url", *request->taobaoCallbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerId)) {
    query->insert(pair<string, string>("traveler_id", *request->travelerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->useBookingProxy)) {
    query->insert(pair<string, long>("use_booking_proxy", *request->useBookingProxy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddressGet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/address"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddressGetResponse(callApi(params, req, runtime));
}

AddressGetResponse Alibabacloud_BtripOpen20220520::Client::addressGet(shared_ptr<AddressGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AddressGetHeaders> headers = make_shared<AddressGetHeaders>();
  return addressGetWithOptions(request, headers, runtime);
}

AirportSearchResponse Alibabacloud_BtripOpen20220520::Client::airportSearchWithOptions(shared_ptr<AirportSearchRequest> request, shared_ptr<AirportSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AirportSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/airport"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AirportSearchResponse(callApi(params, req, runtime));
}

AirportSearchResponse Alibabacloud_BtripOpen20220520::Client::airportSearch(shared_ptr<AirportSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AirportSearchHeaders> headers = make_shared<AirportSearchHeaders>();
  return airportSearchWithOptions(request, headers, runtime);
}

AllBaseCityInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::allBaseCityInfoQueryWithOptions(shared_ptr<AllBaseCityInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllBaseCityInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/code"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllBaseCityInfoQueryResponse(callApi(params, req, runtime));
}

AllBaseCityInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::allBaseCityInfoQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<AllBaseCityInfoQueryHeaders> headers = make_shared<AllBaseCityInfoQueryHeaders>();
  return allBaseCityInfoQueryWithOptions(headers, runtime);
}

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAddWithOptions(shared_ptr<ApplyAddRequest> tmpReq, shared_ptr<ApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyAddShrinkRequest> request = make_shared<ApplyAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestCarRule>(tmpReq->carRule)) {
    request->carRuleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->carRule, make_shared<string>("car_rule"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestDefaultStandard>(tmpReq->defaultStandard)) {
    request->defaultStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultStandard, make_shared<string>("default_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerStandard, make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyAddRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelShare, make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestItinerarySetList>>(tmpReq->itinerarySetList)) {
    request->itinerarySetListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itinerarySetList, make_shared<string>("itinerary_set_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestTravelerList>>(tmpReq->travelerList)) {
    request->travelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerList, make_shared<string>("traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyAddRequestTravelerStandard>>(tmpReq->travelerStandard)) {
    request->travelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerStandard, make_shared<string>("traveler_standard"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->budget)) {
    body->insert(pair<string, long>("budget", *request->budget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->budgetMerge)) {
    body->insert(pair<string, long>("budget_merge", *request->budgetMerge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carRuleShrink)) {
    body->insert(pair<string, string>("car_rule", *request->carRuleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpName)) {
    body->insert(pair<string, string>("corp_name", *request->corpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultStandardShrink)) {
    body->insert(pair<string, string>("default_standard", *request->defaultStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    body->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departName)) {
    body->insert(pair<string, string>("depart_name", *request->departName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendField)) {
    body->insert(pair<string, string>("extend_field", *request->extendField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerListShrink)) {
    body->insert(pair<string, string>("external_traveler_list", *request->externalTravelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerStandardShrink)) {
    body->insert(pair<string, string>("external_traveler_standard", *request->externalTravelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flightBudget)) {
    body->insert(pair<string, long>("flight_budget", *request->flightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelBudget)) {
    body->insert(pair<string, long>("hotel_budget", *request->hotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelShareShrink)) {
    body->insert(pair<string, string>("hotel_share", *request->hotelShareShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internationalFlightCabins)) {
    body->insert(pair<string, string>("international_flight_cabins", *request->internationalFlightCabins));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlFlightBudget)) {
    body->insert(pair<string, long>("intl_flight_budget", *request->intlFlightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlHotelBudget)) {
    body->insert(pair<string, long>("intl_hotel_budget", *request->intlHotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryListShrink)) {
    body->insert(pair<string, string>("itinerary_list", *request->itineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itineraryRule)) {
    body->insert(pair<string, long>("itinerary_rule", *request->itineraryRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itinerarySetListShrink)) {
    body->insert(pair<string, string>("itinerary_set_list", *request->itinerarySetListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitTraveler)) {
    body->insert(pair<string, long>("limit_traveler", *request->limitTraveler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mealBudget)) {
    body->insert(pair<string, long>("meal_budget", *request->mealBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDepartmentId)) {
    body->insert(pair<string, string>("payment_department_id", *request->paymentDepartmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDepartmentName)) {
    body->insert(pair<string, string>("payment_department_name", *request->paymentDepartmentName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    body->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    body->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartBusinessId)) {
    body->insert(pair<string, string>("thirdpart_business_id", *request->thirdpartBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartDepartId)) {
    body->insert(pair<string, string>("thirdpart_depart_id", *request->thirdpartDepartId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->togetherBookRule)) {
    body->insert(pair<string, long>("together_book_rule", *request->togetherBookRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainBudget)) {
    body->insert(pair<string, long>("train_budget", *request->trainBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerListShrink)) {
    body->insert(pair<string, string>("traveler_list", *request->travelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerStandardShrink)) {
    body->insert(pair<string, string>("traveler_standard", *request->travelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripCause)) {
    body->insert(pair<string, string>("trip_cause", *request->tripCause));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripDay)) {
    body->insert(pair<string, long>("trip_day", *request->tripDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripTitle)) {
    body->insert(pair<string, string>("trip_title", *request->tripTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    body->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vehicleBudget)) {
    body->insert(pair<string, long>("vehicle_budget", *request->vehicleBudget));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAddResponse(callApi(params, req, runtime));
}

ApplyAddResponse Alibabacloud_BtripOpen20220520::Client::applyAdd(shared_ptr<ApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyAddHeaders> headers = make_shared<ApplyAddHeaders>();
  return applyAddWithOptions(request, headers, runtime);
}

ApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::applyApproveWithOptions(shared_ptr<ApplyApproveRequest> request, shared_ptr<ApplyApproveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyId)) {
    body->insert(pair<string, string>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->note)) {
    body->insert(pair<string, string>("note", *request->note));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateTime)) {
    body->insert(pair<string, string>("operate_time", *request->operateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    body->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyApprove"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip/action/approve"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyApproveResponse(callApi(params, req, runtime));
}

ApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::applyApprove(shared_ptr<ApplyApproveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyApproveHeaders> headers = make_shared<ApplyApproveHeaders>();
  return applyApproveWithOptions(request, headers, runtime);
}

ApplyExternalNodeStatusUpdateResponse Alibabacloud_BtripOpen20220520::Client::applyExternalNodeStatusUpdateWithOptions(shared_ptr<ApplyExternalNodeStatusUpdateRequest> tmpReq, shared_ptr<ApplyExternalNodeStatusUpdateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyExternalNodeStatusUpdateShrinkRequest> request = make_shared<ApplyExternalNodeStatusUpdateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyExternalNodeStatusUpdateRequestOperationRecords>>(tmpReq->operationRecords)) {
    request->operationRecordsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->operationRecords, make_shared<string>("operation_records"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    body->insert(pair<string, string>("node_id", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operationRecordsShrink)) {
    body->insert(pair<string, string>("operation_records", *request->operationRecordsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processActionResult)) {
    body->insert(pair<string, string>("process_action_result", *request->processActionResult));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyExternalNodeStatusUpdate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/external-nodes/action/status-update"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyExternalNodeStatusUpdateResponse(callApi(params, req, runtime));
}

ApplyExternalNodeStatusUpdateResponse Alibabacloud_BtripOpen20220520::Client::applyExternalNodeStatusUpdate(shared_ptr<ApplyExternalNodeStatusUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyExternalNodeStatusUpdateHeaders> headers = make_shared<ApplyExternalNodeStatusUpdateHeaders>();
  return applyExternalNodeStatusUpdateWithOptions(request, headers, runtime);
}

ApplyInvoiceTaskResponse Alibabacloud_BtripOpen20220520::Client::applyInvoiceTaskWithOptions(shared_ptr<ApplyInvoiceTaskRequest> tmpReq, shared_ptr<ApplyInvoiceTaskHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyInvoiceTaskShrinkRequest> request = make_shared<ApplyInvoiceTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ApplyInvoiceTaskRequestInvoiceTaskList>>(tmpReq->invoiceTaskList)) {
    request->invoiceTaskListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->invoiceTaskList, make_shared<string>("invoice_task_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    body->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceTaskListShrink)) {
    body->insert(pair<string, string>("invoice_task_list", *request->invoiceTaskListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyInvoiceTask"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/apply-invoice-task"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyInvoiceTaskResponse(callApi(params, req, runtime));
}

ApplyInvoiceTaskResponse Alibabacloud_BtripOpen20220520::Client::applyInvoiceTask(shared_ptr<ApplyInvoiceTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyInvoiceTaskHeaders> headers = make_shared<ApplyInvoiceTaskHeaders>();
  return applyInvoiceTaskWithOptions(request, headers, runtime);
}

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQueryWithOptions(shared_ptr<ApplyListQueryRequest> request, shared_ptr<ApplyListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtModified)) {
    query->insert(pair<string, string>("gmt_modified", *request->gmtModified));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyShangLvApply)) {
    query->insert(pair<string, bool>("only_shang_lv_apply", *request->onlyShangLvApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    query->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trips"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyListQueryResponse(callApi(params, req, runtime));
}

ApplyListQueryResponse Alibabacloud_BtripOpen20220520::Client::applyListQuery(shared_ptr<ApplyListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyListQueryHeaders> headers = make_shared<ApplyListQueryHeaders>();
  return applyListQueryWithOptions(request, headers, runtime);
}

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModifyWithOptions(shared_ptr<ApplyModifyRequest> tmpReq, shared_ptr<ApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ApplyModifyShrinkRequest> request = make_shared<ApplyModifyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestCarRule>(tmpReq->carRule)) {
    request->carRuleShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->carRule, make_shared<string>("car_rule"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestDefaultStandard>(tmpReq->defaultStandard)) {
    request->defaultStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultStandard, make_shared<string>("default_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestExternalTravelerList>>(tmpReq->externalTravelerList)) {
    request->externalTravelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerList, make_shared<string>("external_traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestExternalTravelerStandard>(tmpReq->externalTravelerStandard)) {
    request->externalTravelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->externalTravelerStandard, make_shared<string>("external_traveler_standard"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ApplyModifyRequestHotelShare>(tmpReq->hotelShare)) {
    request->hotelShareShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelShare, make_shared<string>("hotel_share"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestItinerarySetList>>(tmpReq->itinerarySetList)) {
    request->itinerarySetListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itinerarySetList, make_shared<string>("itinerary_set_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestTravelerList>>(tmpReq->travelerList)) {
    request->travelerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerList, make_shared<string>("traveler_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ApplyModifyRequestTravelerStandard>>(tmpReq->travelerStandard)) {
    request->travelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerStandard, make_shared<string>("traveler_standard"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->budget)) {
    body->insert(pair<string, long>("budget", *request->budget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->budgetMerge)) {
    body->insert(pair<string, long>("budget_merge", *request->budgetMerge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carRuleShrink)) {
    body->insert(pair<string, string>("car_rule", *request->carRuleShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpName)) {
    body->insert(pair<string, string>("corp_name", *request->corpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultStandardShrink)) {
    body->insert(pair<string, string>("default_standard", *request->defaultStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    body->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departName)) {
    body->insert(pair<string, string>("depart_name", *request->departName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extendField)) {
    body->insert(pair<string, string>("extend_field", *request->extendField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerListShrink)) {
    body->insert(pair<string, string>("external_traveler_list", *request->externalTravelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalTravelerStandardShrink)) {
    body->insert(pair<string, string>("external_traveler_standard", *request->externalTravelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flightBudget)) {
    body->insert(pair<string, long>("flight_budget", *request->flightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelBudget)) {
    body->insert(pair<string, long>("hotel_budget", *request->hotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelShareShrink)) {
    body->insert(pair<string, string>("hotel_share", *request->hotelShareShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlFlightBudget)) {
    body->insert(pair<string, long>("intl_flight_budget", *request->intlFlightBudget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->intlHotelBudget)) {
    body->insert(pair<string, long>("intl_hotel_budget", *request->intlHotelBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryListShrink)) {
    body->insert(pair<string, string>("itinerary_list", *request->itineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itineraryRule)) {
    body->insert(pair<string, long>("itinerary_rule", *request->itineraryRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itinerarySetListShrink)) {
    body->insert(pair<string, string>("itinerary_set_list", *request->itinerarySetListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitTraveler)) {
    body->insert(pair<string, long>("limit_traveler", *request->limitTraveler));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mealBudget)) {
    body->insert(pair<string, long>("meal_budget", *request->mealBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDepartmentId)) {
    body->insert(pair<string, string>("payment_department_id", *request->paymentDepartmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paymentDepartmentName)) {
    body->insert(pair<string, string>("payment_department_name", *request->paymentDepartmentName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    body->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    body->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartBusinessId)) {
    body->insert(pair<string, string>("thirdpart_business_id", *request->thirdpartBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartDepartId)) {
    body->insert(pair<string, string>("thirdpart_depart_id", *request->thirdpartDepartId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->togetherBookRule)) {
    body->insert(pair<string, long>("together_book_rule", *request->togetherBookRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trainBudget)) {
    body->insert(pair<string, long>("train_budget", *request->trainBudget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerListShrink)) {
    body->insert(pair<string, string>("traveler_list", *request->travelerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerStandardShrink)) {
    body->insert(pair<string, string>("traveler_standard", *request->travelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripCause)) {
    body->insert(pair<string, string>("trip_cause", *request->tripCause));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripDay)) {
    body->insert(pair<string, long>("trip_day", *request->tripDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripTitle)) {
    body->insert(pair<string, string>("trip_title", *request->tripTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unionNo)) {
    body->insert(pair<string, string>("union_no", *request->unionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vehicleBudget)) {
    body->insert(pair<string, long>("vehicle_budget", *request->vehicleBudget));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyModifyResponse(callApi(params, req, runtime));
}

ApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::applyModify(shared_ptr<ApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyModifyHeaders> headers = make_shared<ApplyModifyHeaders>();
  return applyModifyWithOptions(request, headers, runtime);
}

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQueryWithOptions(shared_ptr<ApplyQueryRequest> request, shared_ptr<ApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applyShowId)) {
    query->insert(pair<string, string>("apply_show_id", *request->applyShowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/biz-trip"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyQueryResponse(callApi(params, req, runtime));
}

ApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::applyQuery(shared_ptr<ApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyQueryHeaders> headers = make_shared<ApplyQueryHeaders>();
  return applyQueryWithOptions(request, headers, runtime);
}

ApplyTripTaskExecuteResponse Alibabacloud_BtripOpen20220520::Client::applyTripTaskExecuteWithOptions(shared_ptr<ApplyTripTaskExecuteRequest> request, shared_ptr<ApplyTripTaskExecuteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->actionFrom)) {
    body->insert(pair<string, string>("action_from", *request->actionFrom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    body->insert(pair<string, string>("comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskAction)) {
    body->insert(pair<string, string>("task_action", *request->taskAction));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskId)) {
    body->insert(pair<string, long>("task_id", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyTripTaskExecute"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/trip-task/action/execute"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyTripTaskExecuteResponse(callApi(params, req, runtime));
}

ApplyTripTaskExecuteResponse Alibabacloud_BtripOpen20220520::Client::applyTripTaskExecute(shared_ptr<ApplyTripTaskExecuteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ApplyTripTaskExecuteHeaders> headers = make_shared<ApplyTripTaskExecuteHeaders>();
  return applyTripTaskExecuteWithOptions(request, headers, runtime);
}

BaseCityInfoSearchResponse Alibabacloud_BtripOpen20220520::Client::baseCityInfoSearchWithOptions(shared_ptr<BaseCityInfoSearchRequest> request, shared_ptr<BaseCityInfoSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("region", *request->region));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BaseCityInfoSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/cities/action/search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BaseCityInfoSearchResponse(callApi(params, req, runtime));
}

BaseCityInfoSearchResponse Alibabacloud_BtripOpen20220520::Client::baseCityInfoSearch(shared_ptr<BaseCityInfoSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BaseCityInfoSearchHeaders> headers = make_shared<BaseCityInfoSearchHeaders>();
  return baseCityInfoSearchWithOptions(request, headers, runtime);
}

BtripBillInfoAdjustResponse Alibabacloud_BtripOpen20220520::Client::btripBillInfoAdjustWithOptions(shared_ptr<BtripBillInfoAdjustRequest> request, shared_ptr<BtripBillInfoAdjustHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->primaryId)) {
    body->insert(pair<string, long>("primary_id", *request->primaryId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartDepartmentId)) {
    body->insert(pair<string, string>("third_part_department_id", *request->thirdPartDepartmentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartProjectId)) {
    body->insert(pair<string, string>("third_part_project_id", *request->thirdPartProjectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BtripBillInfoAdjust"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/bill/v1/info/action/adjust"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BtripBillInfoAdjustResponse(callApi(params, req, runtime));
}

BtripBillInfoAdjustResponse Alibabacloud_BtripOpen20220520::Client::btripBillInfoAdjust(shared_ptr<BtripBillInfoAdjustRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<BtripBillInfoAdjustHeaders> headers = make_shared<BtripBillInfoAdjustHeaders>();
  return btripBillInfoAdjustWithOptions(request, headers, runtime);
}

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAddWithOptions(shared_ptr<CarApplyAddRequest> tmpReq, shared_ptr<CarApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CarApplyAddShrinkRequest> request = make_shared<CarApplyAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CarApplyAddRequestTravelerStandard>>(tmpReq->travelerStandard)) {
    request->travelerStandardShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerStandard, make_shared<string>("traveler_standard"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cause)) {
    body->insert(pair<string, string>("cause", *request->cause));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("city", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCodeSet)) {
    body->insert(pair<string, string>("city_code_set", *request->cityCodeSet));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    body->insert(pair<string, string>("date", *request->date));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->finishedDate)) {
    body->insert(pair<string, string>("finished_date", *request->finishedDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("project_code", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesTotal)) {
    body->insert(pair<string, long>("times_total", *request->timesTotal));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesType)) {
    body->insert(pair<string, long>("times_type", *request->timesType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timesUsed)) {
    body->insert(pair<string, long>("times_used", *request->timesUsed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerStandardShrink)) {
    body->insert(pair<string, string>("traveler_standard", *request->travelerStandardShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyAddResponse(callApi(params, req, runtime));
}

CarApplyAddResponse Alibabacloud_BtripOpen20220520::Client::carApplyAdd(shared_ptr<CarApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyAddHeaders> headers = make_shared<CarApplyAddHeaders>();
  return carApplyAddWithOptions(request, headers, runtime);
}

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModifyWithOptions(shared_ptr<CarApplyModifyRequest> request, shared_ptr<CarApplyModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operateTime)) {
    body->insert(pair<string, string>("operate_time", *request->operateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyModifyResponse(callApi(params, req, runtime));
}

CarApplyModifyResponse Alibabacloud_BtripOpen20220520::Client::carApplyModify(shared_ptr<CarApplyModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyModifyHeaders> headers = make_shared<CarApplyModifyHeaders>();
  return carApplyModifyWithOptions(request, headers, runtime);
}

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQueryWithOptions(shared_ptr<CarApplyQueryRequest> request, shared_ptr<CarApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createdEndAt)) {
    query->insert(pair<string, string>("created_end_at", *request->createdEndAt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createdStartAt)) {
    query->insert(pair<string, string>("created_start_at", *request->createdStartAt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("page_number", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    query->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/car"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarApplyQueryResponse(callApi(params, req, runtime));
}

CarApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::carApplyQuery(shared_ptr<CarApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarApplyQueryHeaders> headers = make_shared<CarApplyQueryHeaders>();
  return carApplyQueryWithOptions(request, headers, runtime);
}

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQueryWithOptions(shared_ptr<CarBillSettlementQueryRequest> request, shared_ptr<CarBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarBillSettlementQueryResponse(callApi(params, req, runtime));
}

CarBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::carBillSettlementQuery(shared_ptr<CarBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarBillSettlementQueryHeaders> headers = make_shared<CarBillSettlementQueryHeaders>();
  return carBillSettlementQueryWithOptions(request, headers, runtime);
}

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQueryWithOptions(shared_ptr<CarOrderListQueryRequest> request, shared_ptr<CarOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarOrderListQueryResponse(callApi(params, req, runtime));
}

CarOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderListQuery(shared_ptr<CarOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarOrderListQueryHeaders> headers = make_shared<CarOrderListQueryHeaders>();
  return carOrderListQueryWithOptions(request, headers, runtime);
}

CarOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderQueryWithOptions(shared_ptr<CarOrderQueryRequest> request, shared_ptr<CarOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subOrderId)) {
    query->insert(pair<string, long>("sub_order_id", *request->subOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarOrderQueryResponse(callApi(params, req, runtime));
}

CarOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::carOrderQuery(shared_ptr<CarOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarOrderQueryHeaders> headers = make_shared<CarOrderQueryHeaders>();
  return carOrderQueryWithOptions(request, headers, runtime);
}

CarSceneQueryResponse Alibabacloud_BtripOpen20220520::Client::carSceneQueryWithOptions(shared_ptr<CarSceneQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CarSceneQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/car/v1/scenes"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CarSceneQueryResponse(callApi(params, req, runtime));
}

CarSceneQueryResponse Alibabacloud_BtripOpen20220520::Client::carSceneQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CarSceneQueryHeaders> headers = make_shared<CarSceneQueryHeaders>();
  return carSceneQueryWithOptions(headers, runtime);
}

ChannelCorpCreateResponse Alibabacloud_BtripOpen20220520::Client::channelCorpCreateWithOptions(shared_ptr<ChannelCorpCreateRequest> request, shared_ptr<ChannelCorpCreateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->administratorName)) {
    body->insert(pair<string, string>("administrator_name", *request->administratorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->administratorPhone)) {
    body->insert(pair<string, string>("administrator_phone", *request->administratorPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->city)) {
    body->insert(pair<string, string>("city", *request->city));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpName)) {
    body->insert(pair<string, string>("corp_name", *request->corpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->province)) {
    body->insert(pair<string, string>("province", *request->province));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdCorpId)) {
    body->insert(pair<string, string>("third_corp_id", *request->thirdCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChannelCorpCreate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/corp/v1/channelCorps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChannelCorpCreateResponse(callApi(params, req, runtime));
}

ChannelCorpCreateResponse Alibabacloud_BtripOpen20220520::Client::channelCorpCreate(shared_ptr<ChannelCorpCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ChannelCorpCreateHeaders> headers = make_shared<ChannelCorpCreateHeaders>();
  return channelCorpCreateWithOptions(request, headers, runtime);
}

CitySearchResponse Alibabacloud_BtripOpen20220520::Client::citySearchWithOptions(shared_ptr<CitySearchRequest> request, shared_ptr<CitySearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CitySearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/city"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CitySearchResponse(callApi(params, req, runtime));
}

CitySearchResponse Alibabacloud_BtripOpen20220520::Client::citySearch(shared_ptr<CitySearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CitySearchHeaders> headers = make_shared<CitySearchHeaders>();
  return citySearchWithOptions(request, headers, runtime);
}

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQueryWithOptions(shared_ptr<CommonApplyQueryRequest> request, shared_ptr<CommonApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommonApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/common"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommonApplyQueryResponse(callApi(params, req, runtime));
}

CommonApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::commonApplyQuery(shared_ptr<CommonApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommonApplyQueryHeaders> headers = make_shared<CommonApplyQueryHeaders>();
  return commonApplyQueryWithOptions(request, headers, runtime);
}

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySyncWithOptions(shared_ptr<CommonApplySyncRequest> request, shared_ptr<CommonApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyFlowId)) {
    query->insert(pair<string, string>("thirdparty_flow_id", *request->thirdpartyFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommonApplySync"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/syn-common"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CommonApplySyncResponse(callApi(params, req, runtime));
}

CommonApplySyncResponse Alibabacloud_BtripOpen20220520::Client::commonApplySync(shared_ptr<CommonApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CommonApplySyncHeaders> headers = make_shared<CommonApplySyncHeaders>();
  return commonApplySyncWithOptions(request, headers, runtime);
}

CooperatorFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::cooperatorFlightBillSettlementQueryWithOptions(shared_ptr<CooperatorFlightBillSettlementQueryRequest> request, shared_ptr<CooperatorFlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorId)) {
    query->insert(pair<string, string>("cooperator_id", *request->cooperatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CooperatorFlightBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cooperator-flight/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CooperatorFlightBillSettlementQueryResponse(callApi(params, req, runtime));
}

CooperatorFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::cooperatorFlightBillSettlementQuery(shared_ptr<CooperatorFlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CooperatorFlightBillSettlementQueryHeaders> headers = make_shared<CooperatorFlightBillSettlementQueryHeaders>();
  return cooperatorFlightBillSettlementQueryWithOptions(request, headers, runtime);
}

CooperatorHotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::cooperatorHotelBillSettlementQueryWithOptions(shared_ptr<CooperatorHotelBillSettlementQueryRequest> request, shared_ptr<CooperatorHotelBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorId)) {
    query->insert(pair<string, string>("cooperator_id", *request->cooperatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CooperatorHotelBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cooperator-hotel/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CooperatorHotelBillSettlementQueryResponse(callApi(params, req, runtime));
}

CooperatorHotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::cooperatorHotelBillSettlementQuery(shared_ptr<CooperatorHotelBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CooperatorHotelBillSettlementQueryHeaders> headers = make_shared<CooperatorHotelBillSettlementQueryHeaders>();
  return cooperatorHotelBillSettlementQueryWithOptions(request, headers, runtime);
}

CooperatorHotelEventPushResponse Alibabacloud_BtripOpen20220520::Client::cooperatorHotelEventPushWithOptions(shared_ptr<CooperatorHotelEventPushRequest> request, shared_ptr<CooperatorHotelEventPushHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->changeOrderStatus)) {
    body->insert(pair<string, long>("change_order_status", *request->changeOrderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderStatusDesc)) {
    body->insert(pair<string, string>("change_order_status_desc", *request->changeOrderStatusDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorOrderId)) {
    body->insert(pair<string, string>("cooperator_order_id", *request->cooperatorOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    body->insert(pair<string, string>("event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventDesc)) {
    body->insert(pair<string, string>("event_desc", *request->eventDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTime)) {
    body->insert(pair<string, string>("event_time", *request->eventTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CooperatorHotelEventPush"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/coop-hotel/v1/orders/events"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CooperatorHotelEventPushResponse(callApi(params, req, runtime));
}

CooperatorHotelEventPushResponse Alibabacloud_BtripOpen20220520::Client::cooperatorHotelEventPush(shared_ptr<CooperatorHotelEventPushRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CooperatorHotelEventPushHeaders> headers = make_shared<CooperatorHotelEventPushHeaders>();
  return cooperatorHotelEventPushWithOptions(request, headers, runtime);
}

CooperatorSyncPayStatusResponse Alibabacloud_BtripOpen20220520::Client::cooperatorSyncPayStatusWithOptions(shared_ptr<CooperatorSyncPayStatusRequest> request, shared_ptr<CooperatorSyncPayStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorOrderId)) {
    body->insert(pair<string, string>("cooperator_order_id", *request->cooperatorOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorPayNo)) {
    body->insert(pair<string, string>("cooperator_pay_no", *request->cooperatorPayNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payStatus)) {
    body->insert(pair<string, string>("pay_status", *request->payStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payTime)) {
    body->insert(pair<string, long>("pay_time", *request->payTime));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CooperatorSyncPayStatus"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/coop-pay/v1/cashiers/status"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CooperatorSyncPayStatusResponse(callApi(params, req, runtime));
}

CooperatorSyncPayStatusResponse Alibabacloud_BtripOpen20220520::Client::cooperatorSyncPayStatus(shared_ptr<CooperatorSyncPayStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CooperatorSyncPayStatusHeaders> headers = make_shared<CooperatorSyncPayStatusHeaders>();
  return cooperatorSyncPayStatusWithOptions(request, headers, runtime);
}

CorpAuthLinkInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::corpAuthLinkInfoQueryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CorpAuthLinkInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/corp-authority-link/v1/info"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CorpAuthLinkInfoQueryResponse(callApi(params, req, runtime));
}

CorpAuthLinkInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::corpAuthLinkInfoQuery() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return corpAuthLinkInfoQueryWithOptions(headers, runtime);
}

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpTokenWithOptions(shared_ptr<CorpTokenRequest> request, shared_ptr<CorpTokenHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("app_secret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    query->insert(pair<string, string>("corp_id", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("type", *request->type));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CorpToken"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/btrip-open-auth/v1/corp-token/action/take"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CorpTokenResponse(callApi(params, req, runtime));
}

CorpTokenResponse Alibabacloud_BtripOpen20220520::Client::corpToken(shared_ptr<CorpTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CorpTokenHeaders> headers = make_shared<CorpTokenHeaders>();
  return corpTokenWithOptions(request, headers, runtime);
}

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDeleteWithOptions(shared_ptr<CostCenterDeleteRequest> request, shared_ptr<CostCenterDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/delete-costcenter"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterDeleteResponse(callApi(params, req, runtime));
}

CostCenterDeleteResponse Alibabacloud_BtripOpen20220520::Client::costCenterDelete(shared_ptr<CostCenterDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterDeleteHeaders> headers = make_shared<CostCenterDeleteHeaders>();
  return costCenterDeleteWithOptions(request, headers, runtime);
}

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModifyWithOptions(shared_ptr<CostCenterModifyRequest> request, shared_ptr<CostCenterModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayNo)) {
    body->insert(pair<string, string>("alipay_no", *request->alipayNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disable)) {
    body->insert(pair<string, long>("disable", *request->disable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/modify-costcenter"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterModifyResponse(callApi(params, req, runtime));
}

CostCenterModifyResponse Alibabacloud_BtripOpen20220520::Client::costCenterModify(shared_ptr<CostCenterModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterModifyHeaders> headers = make_shared<CostCenterModifyHeaders>();
  return costCenterModifyWithOptions(request, headers, runtime);
}

CostCenterQueryResponse Alibabacloud_BtripOpen20220520::Client::costCenterQueryWithOptions(shared_ptr<CostCenterQueryRequest> request, shared_ptr<CostCenterQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->disable)) {
    query->insert(pair<string, long>("disable", *request->disable));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needOrgEntity)) {
    query->insert(pair<string, bool>("need_org_entity", *request->needOrgEntity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/costcenter"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterQueryResponse(callApi(params, req, runtime));
}

CostCenterQueryResponse Alibabacloud_BtripOpen20220520::Client::costCenterQuery(shared_ptr<CostCenterQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterQueryHeaders> headers = make_shared<CostCenterQueryHeaders>();
  return costCenterQueryWithOptions(request, headers, runtime);
}

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSaveWithOptions(shared_ptr<CostCenterSaveRequest> request, shared_ptr<CostCenterSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alipayNo)) {
    body->insert(pair<string, string>("alipay_no", *request->alipayNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->disable)) {
    body->insert(pair<string, long>("disable", *request->disable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->number)) {
    body->insert(pair<string, string>("number", *request->number));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CostCenterSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/save-costcenter"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CostCenterSaveResponse(callApi(params, req, runtime));
}

CostCenterSaveResponse Alibabacloud_BtripOpen20220520::Client::costCenterSave(shared_ptr<CostCenterSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CostCenterSaveHeaders> headers = make_shared<CostCenterSaveHeaders>();
  return costCenterSaveWithOptions(request, headers, runtime);
}

CreateCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::createCustomRoleWithOptions(shared_ptr<CreateCustomRoleRequest> request, shared_ptr<CreateCustomRoleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    body->insert(pair<string, string>("role_id", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("role_name", *request->roleName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomRole"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/role/v1/customRoles/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomRoleResponse(callApi(params, req, runtime));
}

CreateCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::createCustomRole(shared_ptr<CreateCustomRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateCustomRoleHeaders> headers = make_shared<CreateCustomRoleHeaders>();
  return createCustomRoleWithOptions(request, headers, runtime);
}

CreateSubCorpResponse Alibabacloud_BtripOpen20220520::Client::createSubCorpWithOptions(shared_ptr<CreateSubCorpRequest> request, shared_ptr<CreateSubCorpHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCorpId)) {
    body->insert(pair<string, string>("outer_corp_id", *request->outerCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerCorpName)) {
    body->insert(pair<string, string>("outer_corp_name", *request->outerCorpName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubCorp"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/corps"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubCorpResponse(callApi(params, req, runtime));
}

CreateSubCorpResponse Alibabacloud_BtripOpen20220520::Client::createSubCorp(shared_ptr<CreateSubCorpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateSubCorpHeaders> headers = make_shared<CreateSubCorpHeaders>();
  return createSubCorpWithOptions(request, headers, runtime);
}

DeleteCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::deleteCustomRoleWithOptions(shared_ptr<DeleteCustomRoleRequest> request, shared_ptr<DeleteCustomRoleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    body->insert(pair<string, string>("role_id", *request->roleId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomRole"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/role/v1/customRoles/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomRoleResponse(callApi(params, req, runtime));
}

DeleteCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::deleteCustomRole(shared_ptr<DeleteCustomRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteCustomRoleHeaders> headers = make_shared<DeleteCustomRoleHeaders>();
  return deleteCustomRoleWithOptions(request, headers, runtime);
}

DeleteDepartmentResponse Alibabacloud_BtripOpen20220520::Client::deleteDepartmentWithOptions(shared_ptr<DeleteDepartmentRequest> request, shared_ptr<DeleteDepartmentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptId)) {
    body->insert(pair<string, string>("out_dept_id", *request->outDeptId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDepartment"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/department/v2/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDepartmentResponse(callApi(params, req, runtime));
}

DeleteDepartmentResponse Alibabacloud_BtripOpen20220520::Client::deleteDepartment(shared_ptr<DeleteDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteDepartmentHeaders> headers = make_shared<DeleteDepartmentHeaders>();
  return deleteDepartmentWithOptions(request, headers, runtime);
}

DeleteEmployeesFromCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::deleteEmployeesFromCustomRoleWithOptions(shared_ptr<DeleteEmployeesFromCustomRoleRequest> tmpReq, shared_ptr<DeleteEmployeesFromCustomRoleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteEmployeesFromCustomRoleShrinkRequest> request = make_shared<DeleteEmployeesFromCustomRoleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("user_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    body->insert(pair<string, string>("role_id", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("user_id_list", *request->userIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEmployeesFromCustomRole"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/role/v1/customRoleEmployees/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEmployeesFromCustomRoleResponse(callApi(params, req, runtime));
}

DeleteEmployeesFromCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::deleteEmployeesFromCustomRole(shared_ptr<DeleteEmployeesFromCustomRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteEmployeesFromCustomRoleHeaders> headers = make_shared<DeleteEmployeesFromCustomRoleHeaders>();
  return deleteEmployeesFromCustomRoleWithOptions(request, headers, runtime);
}

DeleteInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::deleteInvoiceEntityWithOptions(shared_ptr<DeleteInvoiceEntityRequest> tmpReq, shared_ptr<DeleteInvoiceEntityHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteInvoiceEntityShrinkRequest> request = make_shared<DeleteInvoiceEntityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteInvoiceEntityRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    query->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteInvoiceEntity"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/entities"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteInvoiceEntityResponse(callApi(params, req, runtime));
}

DeleteInvoiceEntityResponse Alibabacloud_BtripOpen20220520::Client::deleteInvoiceEntity(shared_ptr<DeleteInvoiceEntityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteInvoiceEntityHeaders> headers = make_shared<DeleteInvoiceEntityHeaders>();
  return deleteInvoiceEntityWithOptions(request, headers, runtime);
}

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSaveWithOptions(shared_ptr<DepartmentSaveRequest> tmpReq, shared_ptr<DepartmentSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DepartmentSaveShrinkRequest> request = make_shared<DepartmentSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DepartmentSaveRequestDepartList>>(tmpReq->departList)) {
    request->departListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->departList, make_shared<string>("depart_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->departListShrink)) {
    body->insert(pair<string, string>("depart_list", *request->departListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DepartmentSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/department/v1/department"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DepartmentSaveResponse(callApi(params, req, runtime));
}

DepartmentSaveResponse Alibabacloud_BtripOpen20220520::Client::departmentSave(shared_ptr<DepartmentSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DepartmentSaveHeaders> headers = make_shared<DepartmentSaveHeaders>();
  return departmentSaveWithOptions(request, headers, runtime);
}

ElectronicItineraryBatchApplyResponse Alibabacloud_BtripOpen20220520::Client::electronicItineraryBatchApplyWithOptions(shared_ptr<ElectronicItineraryBatchApplyRequest> tmpReq, shared_ptr<ElectronicItineraryBatchApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ElectronicItineraryBatchApplyShrinkRequest> request = make_shared<ElectronicItineraryBatchApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ElectronicItineraryBatchApplyRequestApplyItineraryList>>(tmpReq->applyItineraryList)) {
    request->applyItineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applyItineraryList, make_shared<string>("apply_itinerary_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyItineraryListShrink)) {
    body->insert(pair<string, string>("apply_itinerary_list", *request->applyItineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->canReprint)) {
    body->insert(pair<string, bool>("can_reprint", *request->canReprint));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ElectronicItineraryBatchApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/apply-itinerary-batch-task"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ElectronicItineraryBatchApplyResponse(callApi(params, req, runtime));
}

ElectronicItineraryBatchApplyResponse Alibabacloud_BtripOpen20220520::Client::electronicItineraryBatchApply(shared_ptr<ElectronicItineraryBatchApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ElectronicItineraryBatchApplyHeaders> headers = make_shared<ElectronicItineraryBatchApplyHeaders>();
  return electronicItineraryBatchApplyWithOptions(request, headers, runtime);
}

ElectronicItineraryGetApplyResultResponse Alibabacloud_BtripOpen20220520::Client::electronicItineraryGetApplyResultWithOptions(shared_ptr<ElectronicItineraryGetApplyResultRequest> request, shared_ptr<ElectronicItineraryGetApplyResultHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchApplyNo)) {
    query->insert(pair<string, string>("batch_apply_no", *request->batchApplyNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ElectronicItineraryGetApplyResult"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/get-itinerary-batch-task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ElectronicItineraryGetApplyResultResponse(callApi(params, req, runtime));
}

ElectronicItineraryGetApplyResultResponse Alibabacloud_BtripOpen20220520::Client::electronicItineraryGetApplyResult(shared_ptr<ElectronicItineraryGetApplyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ElectronicItineraryGetApplyResultHeaders> headers = make_shared<ElectronicItineraryGetApplyResultHeaders>();
  return electronicItineraryGetApplyResultWithOptions(request, headers, runtime);
}

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAddWithOptions(shared_ptr<EntityAddRequest> tmpReq, shared_ptr<EntityAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntityAddShrinkRequest> request = make_shared<EntityAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntityAddRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntityAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/add-entity"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntityAddResponse(callApi(params, req, runtime));
}

EntityAddResponse Alibabacloud_BtripOpen20220520::Client::entityAdd(shared_ptr<EntityAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntityAddHeaders> headers = make_shared<EntityAddHeaders>();
  return entityAddWithOptions(request, headers, runtime);
}

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDeleteWithOptions(shared_ptr<EntityDeleteRequest> tmpReq, shared_ptr<EntityDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntityDeleteShrinkRequest> request = make_shared<EntityDeleteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntityDeleteRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    query->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntityDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/entity/action/delete"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntityDeleteResponse(callApi(params, req, runtime));
}

EntityDeleteResponse Alibabacloud_BtripOpen20220520::Client::entityDelete(shared_ptr<EntityDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntityDeleteHeaders> headers = make_shared<EntityDeleteHeaders>();
  return entityDeleteWithOptions(request, headers, runtime);
}

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySetWithOptions(shared_ptr<EntitySetRequest> tmpReq, shared_ptr<EntitySetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EntitySetShrinkRequest> request = make_shared<EntitySetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<EntitySetRequestEntityDOList>>(tmpReq->entityDOList)) {
    request->entityDOListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entityDOList, make_shared<string>("entity_d_o_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityDOListShrink)) {
    body->insert(pair<string, string>("entity_d_o_list", *request->entityDOListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartId)) {
    body->insert(pair<string, string>("thirdpart_id", *request->thirdpartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EntitySet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/set-entity"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EntitySetResponse(callApi(params, req, runtime));
}

EntitySetResponse Alibabacloud_BtripOpen20220520::Client::entitySet(shared_ptr<EntitySetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EntitySetHeaders> headers = make_shared<EntitySetHeaders>();
  return entitySetWithOptions(request, headers, runtime);
}

EstimatedPriceQueryResponse Alibabacloud_BtripOpen20220520::Client::estimatedPriceQueryWithOptions(shared_ptr<EstimatedPriceQueryRequest> request, shared_ptr<EstimatedPriceQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryId)) {
    query->insert(pair<string, string>("itinerary_id", *request->itineraryId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EstimatedPriceQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/costcenter/v1/estimated-price"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EstimatedPriceQueryResponse(callApi(params, req, runtime));
}

EstimatedPriceQueryResponse Alibabacloud_BtripOpen20220520::Client::estimatedPriceQuery(shared_ptr<EstimatedPriceQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<EstimatedPriceQueryHeaders> headers = make_shared<EstimatedPriceQueryHeaders>();
  return estimatedPriceQueryWithOptions(request, headers, runtime);
}

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySyncWithOptions(shared_ptr<ExceedApplySyncRequest> request, shared_ptr<ExceedApplySyncHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bizCategory)) {
    query->insert(pair<string, long>("biz_category", *request->bizCategory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartyFlowId)) {
    query->insert(pair<string, string>("thirdparty_flow_id", *request->thirdpartyFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExceedApplySync"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/syn-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExceedApplySyncResponse(callApi(params, req, runtime));
}

ExceedApplySyncResponse Alibabacloud_BtripOpen20220520::Client::exceedApplySync(shared_ptr<ExceedApplySyncRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExceedApplySyncHeaders> headers = make_shared<ExceedApplySyncHeaders>();
  return exceedApplySyncWithOptions(request, headers, runtime);
}

ExternalUserAddResponse Alibabacloud_BtripOpen20220520::Client::externalUserAddWithOptions(shared_ptr<ExternalUserAddRequest> tmpReq, shared_ptr<ExternalUserAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExternalUserAddShrinkRequest> request = make_shared<ExternalUserAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ExternalUserAddRequestCertRequestList>>(tmpReq->certRequestList)) {
    request->certRequestListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->certRequestList, make_shared<string>("cert_request_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    body->insert(pair<string, string>("birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRequestListShrink)) {
    body->insert(pair<string, string>("cert_request_list", *request->certRequestListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalUserId)) {
    body->insert(pair<string, string>("external_user_id", *request->externalUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realName)) {
    body->insert(pair<string, string>("real_name", *request->realName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userType)) {
    body->insert(pair<string, long>("user_type", *request->userType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExternalUserAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/externalUsers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExternalUserAddResponse(callApi(params, req, runtime));
}

ExternalUserAddResponse Alibabacloud_BtripOpen20220520::Client::externalUserAdd(shared_ptr<ExternalUserAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExternalUserAddHeaders> headers = make_shared<ExternalUserAddHeaders>();
  return externalUserAddWithOptions(request, headers, runtime);
}

ExternalUserDeleteResponse Alibabacloud_BtripOpen20220520::Client::externalUserDeleteWithOptions(shared_ptr<string> externalUserId, shared_ptr<ExternalUserDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExternalUserDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/externalUsers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(externalUserId)))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExternalUserDeleteResponse(callApi(params, req, runtime));
}

ExternalUserDeleteResponse Alibabacloud_BtripOpen20220520::Client::externalUserDelete(shared_ptr<string> externalUserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExternalUserDeleteHeaders> headers = make_shared<ExternalUserDeleteHeaders>();
  return externalUserDeleteWithOptions(externalUserId, headers, runtime);
}

ExternalUserQueryResponse Alibabacloud_BtripOpen20220520::Client::externalUserQueryWithOptions(shared_ptr<string> externalUserId, shared_ptr<ExternalUserQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExternalUserQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/externalUsers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(externalUserId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExternalUserQueryResponse(callApi(params, req, runtime));
}

ExternalUserQueryResponse Alibabacloud_BtripOpen20220520::Client::externalUserQuery(shared_ptr<string> externalUserId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExternalUserQueryHeaders> headers = make_shared<ExternalUserQueryHeaders>();
  return externalUserQueryWithOptions(externalUserId, headers, runtime);
}

ExternalUserUpdateResponse Alibabacloud_BtripOpen20220520::Client::externalUserUpdateWithOptions(shared_ptr<string> externalUserId,
                                                                                                 shared_ptr<ExternalUserUpdateRequest> tmpReq,
                                                                                                 shared_ptr<ExternalUserUpdateHeaders> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExternalUserUpdateShrinkRequest> request = make_shared<ExternalUserUpdateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ExternalUserUpdateRequestCertRequestList>>(tmpReq->certRequestList)) {
    request->certRequestListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->certRequestList, make_shared<string>("cert_request_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    body->insert(pair<string, string>("birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certRequestListShrink)) {
    body->insert(pair<string, string>("cert_request_list", *request->certRequestListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realName)) {
    body->insert(pair<string, string>("real_name", *request->realName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExternalUserUpdate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/externalUsers/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(externalUserId)))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExternalUserUpdateResponse(callApi(params, req, runtime));
}

ExternalUserUpdateResponse Alibabacloud_BtripOpen20220520::Client::externalUserUpdate(shared_ptr<string> externalUserId, shared_ptr<ExternalUserUpdateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ExternalUserUpdateHeaders> headers = make_shared<ExternalUserUpdateHeaders>();
  return externalUserUpdateWithOptions(externalUserId, request, headers, runtime);
}

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQueryWithOptions(shared_ptr<FlightBillSettlementQueryRequest> request, shared_ptr<FlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightBillSettlementQueryResponse(callApi(params, req, runtime));
}

FlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::flightBillSettlementQuery(shared_ptr<FlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightBillSettlementQueryHeaders> headers = make_shared<FlightBillSettlementQueryHeaders>();
  return flightBillSettlementQueryWithOptions(request, headers, runtime);
}

FlightCancelOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCancelOrderWithOptions(shared_ptr<FlightCancelOrderRequest> request, shared_ptr<FlightCancelOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCancelOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCancelOrderResponse(callApi(params, req, runtime));
}

FlightCancelOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCancelOrder(shared_ptr<FlightCancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCancelOrderHeaders> headers = make_shared<FlightCancelOrderHeaders>();
  return flightCancelOrderWithOptions(request, headers, runtime);
}

FlightCancelOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightCancelOrderV2WithOptions(shared_ptr<FlightCancelOrderV2Request> request, shared_ptr<FlightCancelOrderV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCancelOrderV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/order/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCancelOrderV2Response(callApi(params, req, runtime));
}

FlightCancelOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightCancelOrderV2(shared_ptr<FlightCancelOrderV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCancelOrderV2Headers> headers = make_shared<FlightCancelOrderV2Headers>();
  return flightCancelOrderV2WithOptions(request, headers, runtime);
}

FlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCreateOrderWithOptions(shared_ptr<FlightCreateOrderRequest> tmpReq, shared_ptr<FlightCreateOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightCreateOrderShrinkRequest> request = make_shared<FlightCreateOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FlightCreateOrderRequestContactInfo>(tmpReq->contactInfo)) {
    request->contactInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactInfo, make_shared<string>("contact_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->orderAttr)) {
    request->orderAttrShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderAttr, make_shared<string>("order_attr"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightCreateOrderRequestTravelerInfoList>>(tmpReq->travelerInfoList)) {
    request->travelerInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerInfoList, make_shared<string>("traveler_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrAirportCode)) {
    body->insert(pair<string, string>("arr_airport_code", *request->arrAirportCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    body->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->autoPay)) {
    body->insert(pair<string, long>("auto_pay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerUniqueKey)) {
    body->insert(pair<string, string>("buyer_unique_key", *request->buyerUniqueKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfoShrink)) {
    body->insert(pair<string, string>("contact_info", *request->contactInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depAirportCode)) {
    body->insert(pair<string, string>("dep_airport_code", *request->depAirportCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    body->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    body->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderAttrShrink)) {
    body->insert(pair<string, string>("order_attr", *request->orderAttrShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderParams)) {
    body->insert(pair<string, string>("order_params", *request->orderParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    body->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->price)) {
    body->insert(pair<string, long>("price", *request->price));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptAddress)) {
    body->insert(pair<string, string>("receipt_address", *request->receiptAddress));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->receiptTarget)) {
    body->insert(pair<string, long>("receipt_target", *request->receiptTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiptTitle)) {
    body->insert(pair<string, string>("receipt_title", *request->receiptTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerInfoListShrink)) {
    body->insert(pair<string, string>("traveler_info_list", *request->travelerInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    body->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCreateOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCreateOrderResponse(callApi(params, req, runtime));
}

FlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::flightCreateOrder(shared_ptr<FlightCreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCreateOrderHeaders> headers = make_shared<FlightCreateOrderHeaders>();
  return flightCreateOrderWithOptions(request, headers, runtime);
}

FlightCreateOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightCreateOrderV2WithOptions(shared_ptr<FlightCreateOrderV2Request> tmpReq, shared_ptr<FlightCreateOrderV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightCreateOrderV2ShrinkRequest> request = make_shared<FlightCreateOrderV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<FlightCreateOrderV2RequestContactInfo>(tmpReq->contactInfo)) {
    request->contactInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactInfo, make_shared<string>("contact_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightCreateOrderV2RequestTravelers>>(tmpReq->travelers)) {
    request->travelersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelers, make_shared<string>("travelers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->asyncCreateOrderKey)) {
    body->insert(pair<string, string>("async_create_order_key", *request->asyncCreateOrderKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asyncCreateOrderMode)) {
    body->insert(pair<string, bool>("async_create_order_mode", *request->asyncCreateOrderMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfoShrink)) {
    body->insert(pair<string, string>("contact_info", *request->contactInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    body->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPriceCent)) {
    body->insert(pair<string, long>("total_price_cent", *request->totalPriceCent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelersShrink)) {
    body->insert(pair<string, string>("travelers", *request->travelersShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightCreateOrderV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/order/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightCreateOrderV2Response(callApi(params, req, runtime));
}

FlightCreateOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightCreateOrderV2(shared_ptr<FlightCreateOrderV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightCreateOrderV2Headers> headers = make_shared<FlightCreateOrderV2Headers>();
  return flightCreateOrderV2WithOptions(request, headers, runtime);
}

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQueryWithOptions(shared_ptr<FlightExceedApplyQueryRequest> request, shared_ptr<FlightExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/flight-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightExceedApplyQueryResponse(callApi(params, req, runtime));
}

FlightExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::flightExceedApplyQuery(shared_ptr<FlightExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightExceedApplyQueryHeaders> headers = make_shared<FlightExceedApplyQueryHeaders>();
  return flightExceedApplyQueryWithOptions(request, headers, runtime);
}

FlightItineraryScanQueryResponse Alibabacloud_BtripOpen20220520::Client::flightItineraryScanQueryWithOptions(shared_ptr<FlightItineraryScanQueryRequest> request, shared_ptr<FlightItineraryScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryNum)) {
    query->insert(pair<string, string>("itinerary_num", *request->itineraryNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketNo)) {
    query->insert(pair<string, string>("ticket_no", *request->ticketNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightItineraryScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/flight-itinerary"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightItineraryScanQueryResponse(callApi(params, req, runtime));
}

FlightItineraryScanQueryResponse Alibabacloud_BtripOpen20220520::Client::flightItineraryScanQuery(shared_ptr<FlightItineraryScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightItineraryScanQueryHeaders> headers = make_shared<FlightItineraryScanQueryHeaders>();
  return flightItineraryScanQueryWithOptions(request, headers, runtime);
}

FlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::flightListingSearchWithOptions(shared_ptr<FlightListingSearchRequest> request, shared_ptr<FlightListingSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightListingSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/flight/action/listing-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightListingSearchResponse(callApi(params, req, runtime));
}

FlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::flightListingSearch(shared_ptr<FlightListingSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightListingSearchHeaders> headers = make_shared<FlightListingSearchHeaders>();
  return flightListingSearchWithOptions(request, headers, runtime);
}

FlightListingSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightListingSearchV2WithOptions(shared_ptr<FlightListingSearchV2Request> tmpReq, shared_ptr<FlightListingSearchV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightListingSearchV2ShrinkRequest> request = make_shared<FlightListingSearchV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->cabinTypeList)) {
    request->cabinTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cabinTypeList, make_shared<string>("cabin_type_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightListingSearchV2RequestSearchJourneys>>(tmpReq->searchJourneys)) {
    request->searchJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchJourneys, make_shared<string>("search_journeys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinTypeListShrink)) {
    query->insert(pair<string, string>("cabin_type_list", *request->cabinTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directOnly)) {
    query->insert(pair<string, bool>("direct_only", *request->directOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needMultiClassPrice)) {
    query->insert(pair<string, bool>("need_multi_class_price", *request->needMultiClassPrice));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needQueryServiceFee)) {
    query->insert(pair<string, bool>("need_query_service_fee", *request->needQueryServiceFee));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needShareFlight)) {
    query->insert(pair<string, bool>("need_share_flight", *request->needShareFlight));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needYCBestPrice)) {
    query->insert(pair<string, bool>("need_y_c_best_price", *request->needYCBestPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchJourneysShrink)) {
    query->insert(pair<string, string>("search_journeys", *request->searchJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchMode)) {
    query->insert(pair<string, long>("search_mode", *request->searchMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    query->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightListingSearchV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/flight/action/listing-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightListingSearchV2Response(callApi(params, req, runtime));
}

FlightListingSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightListingSearchV2(shared_ptr<FlightListingSearchV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightListingSearchV2Headers> headers = make_shared<FlightListingSearchV2Headers>();
  return flightListingSearchV2WithOptions(request, headers, runtime);
}

FlightModifyApplyV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyApplyV2WithOptions(shared_ptr<FlightModifyApplyV2Request> tmpReq, shared_ptr<FlightModifyApplyV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightModifyApplyV2ShrinkRequest> request = make_shared<FlightModifyApplyV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FlightModifyApplyV2RequestPassengerSegmentRelations>>(tmpReq->passengerSegmentRelations)) {
    request->passengerSegmentRelationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentRelations, make_shared<string>("passenger_segment_relations"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheKey)) {
    body->insert(pair<string, string>("cache_key", *request->cacheKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactPhone)) {
    body->insert(pair<string, string>("contact_phone", *request->contactPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemId)) {
    body->insert(pair<string, string>("item_id", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    body->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentRelationsShrink)) {
    body->insert(pair<string, string>("passenger_segment_relations", *request->passengerSegmentRelationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->voluntary)) {
    body->insert(pair<string, bool>("voluntary", *request->voluntary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyApplyV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyApplyV2Response(callApi(params, req, runtime));
}

FlightModifyApplyV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyApplyV2(shared_ptr<FlightModifyApplyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyApplyV2Headers> headers = make_shared<FlightModifyApplyV2Headers>();
  return flightModifyApplyV2WithOptions(request, headers, runtime);
}

FlightModifyCancelV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyCancelV2WithOptions(shared_ptr<FlightModifyCancelV2Request> request, shared_ptr<FlightModifyCancelV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    query->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subOrderId)) {
    query->insert(pair<string, long>("sub_order_id", *request->subOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyCancelV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyCancelV2Response(callApi(params, req, runtime));
}

FlightModifyCancelV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyCancelV2(shared_ptr<FlightModifyCancelV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyCancelV2Headers> headers = make_shared<FlightModifyCancelV2Headers>();
  return flightModifyCancelV2WithOptions(request, headers, runtime);
}

FlightModifyListingSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyListingSearchV2WithOptions(shared_ptr<FlightModifyListingSearchV2Request> tmpReq, shared_ptr<FlightModifyListingSearchV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightModifyListingSearchV2ShrinkRequest> request = make_shared<FlightModifyListingSearchV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->cabinClass)) {
    request->cabinClassShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cabinClass, make_shared<string>("cabin_class"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->depDate)) {
    request->depDateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depDate, make_shared<string>("dep_date"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightModifyListingSearchV2RequestPassengerSegmentRelations>>(tmpReq->passengerSegmentRelations)) {
    request->passengerSegmentRelationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentRelations, make_shared<string>("passenger_segment_relations"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightModifyListingSearchV2RequestSelectedSegments>>(tmpReq->selectedSegments)) {
    request->selectedSegmentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->selectedSegments, make_shared<string>("selected_segments"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClassShrink)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClassShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDateShrink)) {
    query->insert(pair<string, string>("dep_date", *request->depDateShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->interfaceCallerIsSupportRetry)) {
    query->insert(pair<string, bool>("interface_caller_is_support_retry", *request->interfaceCallerIsSupportRetry));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentRelationsShrink)) {
    query->insert(pair<string, string>("passenger_segment_relations", *request->passengerSegmentRelationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchMode)) {
    query->insert(pair<string, long>("search_mode", *request->searchMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchRetryToken)) {
    query->insert(pair<string, string>("search_retry_token", *request->searchRetryToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectedSegmentsShrink)) {
    query->insert(pair<string, string>("selected_segments", *request->selectedSegmentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->voluntary)) {
    query->insert(pair<string, bool>("voluntary", *request->voluntary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyListingSearchV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/listing-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyListingSearchV2Response(callApi(params, req, runtime));
}

FlightModifyListingSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyListingSearchV2(shared_ptr<FlightModifyListingSearchV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyListingSearchV2Headers> headers = make_shared<FlightModifyListingSearchV2Headers>();
  return flightModifyListingSearchV2WithOptions(request, headers, runtime);
}

FlightModifyOrderDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyOrderDetailV2WithOptions(shared_ptr<FlightModifyOrderDetailV2Request> request, shared_ptr<FlightModifyOrderDetailV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyApplyId)) {
    query->insert(pair<string, string>("modify_apply_id", *request->modifyApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needQueryServiceFee)) {
    query->insert(pair<string, bool>("need_query_service_fee", *request->needQueryServiceFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outModifyApplyId)) {
    query->insert(pair<string, string>("out_modify_apply_id", *request->outModifyApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyOrderDetailV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyOrderDetailV2Response(callApi(params, req, runtime));
}

FlightModifyOrderDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyOrderDetailV2(shared_ptr<FlightModifyOrderDetailV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyOrderDetailV2Headers> headers = make_shared<FlightModifyOrderDetailV2Headers>();
  return flightModifyOrderDetailV2WithOptions(request, headers, runtime);
}

FlightModifyOtaSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyOtaSearchV2WithOptions(shared_ptr<FlightModifyOtaSearchV2Request> tmpReq, shared_ptr<FlightModifyOtaSearchV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightModifyOtaSearchV2ShrinkRequest> request = make_shared<FlightModifyOtaSearchV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->cabinClass)) {
    request->cabinClassShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cabinClass, make_shared<string>("cabin_class"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->depDate)) {
    request->depDateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->depDate, make_shared<string>("dep_date"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightModifyOtaSearchV2RequestPassengerSegmentRelations>>(tmpReq->passengerSegmentRelations)) {
    request->passengerSegmentRelationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentRelations, make_shared<string>("passenger_segment_relations"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightModifyOtaSearchV2RequestSelectedSegments>>(tmpReq->selectedSegments)) {
    request->selectedSegmentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->selectedSegments, make_shared<string>("selected_segments"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClassShrink)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClassShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDateShrink)) {
    query->insert(pair<string, string>("dep_date", *request->depDateShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentRelationsShrink)) {
    query->insert(pair<string, string>("passenger_segment_relations", *request->passengerSegmentRelationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->selectedSegmentsShrink)) {
    query->insert(pair<string, string>("selected_segments", *request->selectedSegmentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->voluntary)) {
    query->insert(pair<string, bool>("voluntary", *request->voluntary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyOtaSearchV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/ota-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyOtaSearchV2Response(callApi(params, req, runtime));
}

FlightModifyOtaSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyOtaSearchV2(shared_ptr<FlightModifyOtaSearchV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyOtaSearchV2Headers> headers = make_shared<FlightModifyOtaSearchV2Headers>();
  return flightModifyOtaSearchV2WithOptions(request, headers, runtime);
}

FlightModifyPayV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyPayV2WithOptions(shared_ptr<FlightModifyPayV2Request> tmpReq, shared_ptr<FlightModifyPayV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightModifyPayV2ShrinkRequest> request = make_shared<FlightModifyPayV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extParams)) {
    request->extParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extParams, make_shared<string>("ext_params"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extParamsShrink)) {
    body->insert(pair<string, string>("ext_params", *request->extParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modifyPayAmount)) {
    body->insert(pair<string, long>("modify_pay_amount", *request->modifyPayAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    body->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subOrderId)) {
    body->insert(pair<string, long>("sub_order_id", *request->subOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightModifyPayV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/modify/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightModifyPayV2Response(callApi(params, req, runtime));
}

FlightModifyPayV2Response Alibabacloud_BtripOpen20220520::Client::flightModifyPayV2(shared_ptr<FlightModifyPayV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightModifyPayV2Headers> headers = make_shared<FlightModifyPayV2Headers>();
  return flightModifyPayV2WithOptions(request, headers, runtime);
}

FlightOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::flightOrderDetailInfoWithOptions(shared_ptr<FlightOrderDetailInfoRequest> request, shared_ptr<FlightOrderDetailInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderDetailInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderDetailInfoResponse(callApi(params, req, runtime));
}

FlightOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::flightOrderDetailInfo(shared_ptr<FlightOrderDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderDetailInfoHeaders> headers = make_shared<FlightOrderDetailInfoHeaders>();
  return flightOrderDetailInfoWithOptions(request, headers, runtime);
}

FlightOrderDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightOrderDetailV2WithOptions(shared_ptr<FlightOrderDetailV2Request> request, shared_ptr<FlightOrderDetailV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderDetailV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/order/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderDetailV2Response(callApi(params, req, runtime));
}

FlightOrderDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightOrderDetailV2(shared_ptr<FlightOrderDetailV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderDetailV2Headers> headers = make_shared<FlightOrderDetailV2Headers>();
  return flightOrderDetailV2WithOptions(request, headers, runtime);
}

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQueryWithOptions(shared_ptr<FlightOrderListQueryRequest> request, shared_ptr<FlightOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderListQueryResponse(callApi(params, req, runtime));
}

FlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderListQuery(shared_ptr<FlightOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderListQueryHeaders> headers = make_shared<FlightOrderListQueryHeaders>();
  return flightOrderListQueryWithOptions(request, headers, runtime);
}

FlightOrderListQueryV2Response Alibabacloud_BtripOpen20220520::Client::flightOrderListQueryV2WithOptions(shared_ptr<FlightOrderListQueryV2Request> tmpReq, shared_ptr<FlightOrderListQueryV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightOrderListQueryV2ShrinkRequest> request = make_shared<FlightOrderListQueryV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->approveId)) {
    request->approveIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->approveId, make_shared<string>("approve_id"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->bookerId)) {
    request->bookerIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bookerId, make_shared<string>("booker_id"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->departId)) {
    request->departIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->departId, make_shared<string>("depart_id"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->supplier)) {
    request->supplierShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->supplier, make_shared<string>("supplier"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->thirdpartApproveId)) {
    request->thirdpartApproveIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdpartApproveId, make_shared<string>("thirdpart_approve_id"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->approveIdShrink)) {
    query->insert(pair<string, string>("approve_id", *request->approveIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookerIdShrink)) {
    query->insert(pair<string, string>("booker_id", *request->bookerIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departIdShrink)) {
    query->insert(pair<string, string>("depart_id", *request->departIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("end_date", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_Size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("start_date", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierShrink)) {
    query->insert(pair<string, string>("supplier", *request->supplierShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApproveIdShrink)) {
    query->insert(pair<string, string>("thirdpart_approve_id", *request->thirdpartApproveIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndDate)) {
    query->insert(pair<string, string>("update_end_date", *request->updateEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartDate)) {
    query->insert(pair<string, string>("update_start_date", *request->updateStartDate));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderListQueryV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v2/Flight-order-list-query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderListQueryV2Response(callApi(params, req, runtime));
}

FlightOrderListQueryV2Response Alibabacloud_BtripOpen20220520::Client::flightOrderListQueryV2(shared_ptr<FlightOrderListQueryV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderListQueryV2Headers> headers = make_shared<FlightOrderListQueryV2Headers>();
  return flightOrderListQueryV2WithOptions(request, headers, runtime);
}

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQueryWithOptions(shared_ptr<FlightOrderQueryRequest> request, shared_ptr<FlightOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/flight/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOrderQueryResponse(callApi(params, req, runtime));
}

FlightOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::flightOrderQuery(shared_ptr<FlightOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOrderQueryHeaders> headers = make_shared<FlightOrderQueryHeaders>();
  return flightOrderQueryWithOptions(request, headers, runtime);
}

FlightOtaItemDetailResponse Alibabacloud_BtripOpen20220520::Client::flightOtaItemDetailWithOptions(shared_ptr<FlightOtaItemDetailRequest> request, shared_ptr<FlightOtaItemDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    query->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOtaItemDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/flight/action/ota-item-detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOtaItemDetailResponse(callApi(params, req, runtime));
}

FlightOtaItemDetailResponse Alibabacloud_BtripOpen20220520::Client::flightOtaItemDetail(shared_ptr<FlightOtaItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOtaItemDetailHeaders> headers = make_shared<FlightOtaItemDetailHeaders>();
  return flightOtaItemDetailWithOptions(request, headers, runtime);
}

FlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::flightOtaSearchWithOptions(shared_ptr<FlightOtaSearchRequest> request, shared_ptr<FlightOtaSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->carrierFlightNo)) {
    query->insert(pair<string, string>("carrier_flight_no", *request->carrierFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flightNo)) {
    query->insert(pair<string, string>("flight_no", *request->flightNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOtaSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/flight/action/ota-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOtaSearchResponse(callApi(params, req, runtime));
}

FlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::flightOtaSearch(shared_ptr<FlightOtaSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOtaSearchHeaders> headers = make_shared<FlightOtaSearchHeaders>();
  return flightOtaSearchWithOptions(request, headers, runtime);
}

FlightOtaSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightOtaSearchV2WithOptions(shared_ptr<FlightOtaSearchV2Request> tmpReq, shared_ptr<FlightOtaSearchV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightOtaSearchV2ShrinkRequest> request = make_shared<FlightOtaSearchV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->cabinTypeList)) {
    request->cabinTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cabinTypeList, make_shared<string>("cabin_type_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightOtaSearchV2RequestSearchJourneys>>(tmpReq->searchJourneys)) {
    request->searchJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchJourneys, make_shared<string>("search_journeys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinTypeListShrink)) {
    query->insert(pair<string, string>("cabin_type_list", *request->cabinTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directOnly)) {
    query->insert(pair<string, bool>("direct_only", *request->directOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needShareFlight)) {
    query->insert(pair<string, bool>("need_share_flight", *request->needShareFlight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchJourneysShrink)) {
    query->insert(pair<string, string>("search_journeys", *request->searchJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchMode)) {
    query->insert(pair<string, long>("search_mode", *request->searchMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    query->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightOtaSearchV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/flight/action/ota-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightOtaSearchV2Response(callApi(params, req, runtime));
}

FlightOtaSearchV2Response Alibabacloud_BtripOpen20220520::Client::flightOtaSearchV2(shared_ptr<FlightOtaSearchV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightOtaSearchV2Headers> headers = make_shared<FlightOtaSearchV2Headers>();
  return flightOtaSearchV2WithOptions(request, headers, runtime);
}

FlightPayOrderResponse Alibabacloud_BtripOpen20220520::Client::flightPayOrderWithOptions(shared_ptr<FlightPayOrderRequest> tmpReq, shared_ptr<FlightPayOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightPayOrderShrinkRequest> request = make_shared<FlightPayOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalPayPrice)) {
    body->insert(pair<string, long>("personal_pay_price", *request->personalPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPayPrice)) {
    body->insert(pair<string, long>("total_pay_price", *request->totalPayPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightPayOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/order/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightPayOrderResponse(callApi(params, req, runtime));
}

FlightPayOrderResponse Alibabacloud_BtripOpen20220520::Client::flightPayOrder(shared_ptr<FlightPayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightPayOrderHeaders> headers = make_shared<FlightPayOrderHeaders>();
  return flightPayOrderWithOptions(request, headers, runtime);
}

FlightPayOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightPayOrderV2WithOptions(shared_ptr<FlightPayOrderV2Request> request, shared_ptr<FlightPayOrderV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPrice)) {
    body->insert(pair<string, long>("total_price", *request->totalPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalServiceFeePrice)) {
    body->insert(pair<string, long>("total_service_fee_price", *request->totalServiceFeePrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightPayOrderV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/order/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightPayOrderV2Response(callApi(params, req, runtime));
}

FlightPayOrderV2Response Alibabacloud_BtripOpen20220520::Client::flightPayOrderV2(shared_ptr<FlightPayOrderV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightPayOrderV2Headers> headers = make_shared<FlightPayOrderV2Headers>();
  return flightPayOrderV2WithOptions(request, headers, runtime);
}

FlightRefundApplyResponse Alibabacloud_BtripOpen20220520::Client::flightRefundApplyWithOptions(shared_ptr<FlightRefundApplyRequest> tmpReq, shared_ptr<FlightRefundApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundApplyShrinkRequest> request = make_shared<FlightRefundApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundApplyRequestPassengerSegmentInfoList>>(tmpReq->passengerSegmentInfoList)) {
    request->passengerSegmentInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentInfoList, make_shared<string>("passenger_segment_info_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->refundVoucherInfo)) {
    request->refundVoucherInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundVoucherInfo, make_shared<string>("refund_voucher_info"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpRefundPrice)) {
    body->insert(pair<string, long>("corp_refund_price", *request->corpRefundPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayRefundMoney)) {
    body->insert(pair<string, string>("display_refund_money", *request->displayRefundMoney));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    body->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemUnitIds)) {
    body->insert(pair<string, string>("item_unit_ids", *request->itemUnitIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentInfoListShrink)) {
    body->insert(pair<string, string>("passenger_segment_info_list", *request->passengerSegmentInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalRefundPrice)) {
    body->insert(pair<string, long>("personal_refund_price", *request->personalRefundPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reasonDetail)) {
    body->insert(pair<string, string>("reason_detail", *request->reasonDetail));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reasonType)) {
    body->insert(pair<string, long>("reason_type", *request->reasonType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundVoucherInfoShrink)) {
    body->insert(pair<string, string>("refund_voucher_info", *request->refundVoucherInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalRefundPrice)) {
    body->insert(pair<string, long>("total_refund_price", *request->totalRefundPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundApplyResponse(callApi(params, req, runtime));
}

FlightRefundApplyResponse Alibabacloud_BtripOpen20220520::Client::flightRefundApply(shared_ptr<FlightRefundApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundApplyHeaders> headers = make_shared<FlightRefundApplyHeaders>();
  return flightRefundApplyWithOptions(request, headers, runtime);
}

FlightRefundApplyV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundApplyV2WithOptions(shared_ptr<FlightRefundApplyV2Request> tmpReq, shared_ptr<FlightRefundApplyV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundApplyV2ShrinkRequest> request = make_shared<FlightRefundApplyV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundApplyV2RequestPassengerSegmentRelations>>(tmpReq->passengerSegmentRelations)) {
    request->passengerSegmentRelationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentRelations, make_shared<string>("passenger_segment_relations"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ticketNos)) {
    request->ticketNosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ticketNos, make_shared<string>("ticket_nos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentRelationsShrink)) {
    body->insert(pair<string, string>("passenger_segment_relations", *request->passengerSegmentRelationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preCalType)) {
    body->insert(pair<string, long>("pre_cal_type", *request->preCalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundReason)) {
    body->insert(pair<string, string>("refund_reason", *request->refundReason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refundReasonType)) {
    body->insert(pair<string, long>("refund_reason_type", *request->refundReasonType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketNosShrink)) {
    body->insert(pair<string, string>("ticket_nos", *request->ticketNosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalRefundPrice)) {
    body->insert(pair<string, long>("total_refund_price", *request->totalRefundPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadPictUrls)) {
    body->insert(pair<string, string>("upload_pict_urls", *request->uploadPictUrls));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->voluntary)) {
    body->insert(pair<string, bool>("voluntary", *request->voluntary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundApplyV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/refund/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundApplyV2Response(callApi(params, req, runtime));
}

FlightRefundApplyV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundApplyV2(shared_ptr<FlightRefundApplyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundApplyV2Headers> headers = make_shared<FlightRefundApplyV2Headers>();
  return flightRefundApplyV2WithOptions(request, headers, runtime);
}

FlightRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::flightRefundDetailWithOptions(shared_ptr<FlightRefundDetailRequest> request, shared_ptr<FlightRefundDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundDetailResponse(callApi(params, req, runtime));
}

FlightRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::flightRefundDetail(shared_ptr<FlightRefundDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundDetailHeaders> headers = make_shared<FlightRefundDetailHeaders>();
  return flightRefundDetailWithOptions(request, headers, runtime);
}

FlightRefundDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundDetailV2WithOptions(shared_ptr<FlightRefundDetailV2Request> request, shared_ptr<FlightRefundDetailV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRefundApplyId)) {
    query->insert(pair<string, string>("out_refund_apply_id", *request->outRefundApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundApplyId)) {
    query->insert(pair<string, string>("refund_apply_id", *request->refundApplyId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundDetailV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/refund/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundDetailV2Response(callApi(params, req, runtime));
}

FlightRefundDetailV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundDetailV2(shared_ptr<FlightRefundDetailV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundDetailV2Headers> headers = make_shared<FlightRefundDetailV2Headers>();
  return flightRefundDetailV2WithOptions(request, headers, runtime);
}

FlightRefundPreCalResponse Alibabacloud_BtripOpen20220520::Client::flightRefundPreCalWithOptions(shared_ptr<FlightRefundPreCalRequest> tmpReq, shared_ptr<FlightRefundPreCalHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundPreCalShrinkRequest> request = make_shared<FlightRefundPreCalShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundPreCalRequestPassengerSegmentInfoList>>(tmpReq->passengerSegmentInfoList)) {
    request->passengerSegmentInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentInfoList, make_shared<string>("passenger_segment_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isVoluntary)) {
    query->insert(pair<string, string>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentInfoListShrink)) {
    query->insert(pair<string, string>("passenger_segment_info_list", *request->passengerSegmentInfoListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundPreCal"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/refund/action/pre-cal"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundPreCalResponse(callApi(params, req, runtime));
}

FlightRefundPreCalResponse Alibabacloud_BtripOpen20220520::Client::flightRefundPreCal(shared_ptr<FlightRefundPreCalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundPreCalHeaders> headers = make_shared<FlightRefundPreCalHeaders>();
  return flightRefundPreCalWithOptions(request, headers, runtime);
}

FlightRefundPreCalV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundPreCalV2WithOptions(shared_ptr<FlightRefundPreCalV2Request> tmpReq, shared_ptr<FlightRefundPreCalV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<FlightRefundPreCalV2ShrinkRequest> request = make_shared<FlightRefundPreCalV2ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<FlightRefundPreCalV2RequestPassengerSegmentRelations>>(tmpReq->passengerSegmentRelations)) {
    request->passengerSegmentRelationsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerSegmentRelations, make_shared<string>("passenger_segment_relations"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->ticketNos)) {
    request->ticketNosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ticketNos, make_shared<string>("ticket_nos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerSegmentRelationsShrink)) {
    query->insert(pair<string, string>("passenger_segment_relations", *request->passengerSegmentRelationsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preCalType)) {
    query->insert(pair<string, long>("pre_cal_type", *request->preCalType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketNosShrink)) {
    query->insert(pair<string, string>("ticket_nos", *request->ticketNosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->voluntary)) {
    query->insert(pair<string, bool>("voluntary", *request->voluntary));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightRefundPreCalV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v2/refund/action/pre-cal"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightRefundPreCalV2Response(callApi(params, req, runtime));
}

FlightRefundPreCalV2Response Alibabacloud_BtripOpen20220520::Client::flightRefundPreCalV2(shared_ptr<FlightRefundPreCalV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightRefundPreCalV2Headers> headers = make_shared<FlightRefundPreCalV2Headers>();
  return flightRefundPreCalV2WithOptions(request, headers, runtime);
}

FlightSearchListResponse Alibabacloud_BtripOpen20220520::Client::flightSearchListWithOptions(shared_ptr<FlightSearchListRequest> request, shared_ptr<FlightSearchListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->airlineCode)) {
    query->insert(pair<string, string>("airline_code", *request->airlineCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityCode)) {
    query->insert(pair<string, string>("arr_city_code", *request->arrCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCityName)) {
    query->insert(pair<string, string>("arr_city_name", *request->arrCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->arrDate)) {
    query->insert(pair<string, string>("arr_date", *request->arrDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cabinClass)) {
    query->insert(pair<string, string>("cabin_class", *request->cabinClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityCode)) {
    query->insert(pair<string, string>("dep_city_code", *request->depCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCityName)) {
    query->insert(pair<string, string>("dep_city_name", *request->depCityName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flightNo)) {
    query->insert(pair<string, string>("flight_no", *request->flightNo));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needMultiClassPrice)) {
    query->insert(pair<string, bool>("need_multi_class_price", *request->needMultiClassPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferCityCode)) {
    query->insert(pair<string, string>("transfer_city_code", *request->transferCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferFlightNo)) {
    query->insert(pair<string, string>("transfer_flight_no", *request->transferFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferLeaveDate)) {
    query->insert(pair<string, string>("transfer_leave_date", *request->transferLeaveDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tripType)) {
    query->insert(pair<string, string>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FlightSearchList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/huge/dtb-flight/v1/flight/action/search-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FlightSearchListResponse(callApi(params, req, runtime));
}

FlightSearchListResponse Alibabacloud_BtripOpen20220520::Client::flightSearchList(shared_ptr<FlightSearchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FlightSearchListHeaders> headers = make_shared<FlightSearchListHeaders>();
  return flightSearchListWithOptions(request, headers, runtime);
}

FuPointBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::fuPointBillSettlementQueryWithOptions(shared_ptr<FuPointBillSettlementQueryRequest> request, shared_ptr<FuPointBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorId)) {
    query->insert(pair<string, string>("cooperator_id", *request->cooperatorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FuPointBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/fupoint/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FuPointBillSettlementQueryResponse(callApi(params, req, runtime));
}

FuPointBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::fuPointBillSettlementQuery(shared_ptr<FuPointBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<FuPointBillSettlementQueryHeaders> headers = make_shared<FuPointBillSettlementQueryHeaders>();
  return fuPointBillSettlementQueryWithOptions(request, headers, runtime);
}

GroupCorpTokenResponse Alibabacloud_BtripOpen20220520::Client::groupCorpTokenWithOptions(shared_ptr<GroupCorpTokenRequest> request, shared_ptr<GroupCorpTokenHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("app_secret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->corpId)) {
    query->insert(pair<string, string>("corp_id", *request->corpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripAccessToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-access-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripAccessToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupCorpToken"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/btrip-open-auth/v1/group-corp-token/action/take"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupCorpTokenResponse(callApi(params, req, runtime));
}

GroupCorpTokenResponse Alibabacloud_BtripOpen20220520::Client::groupCorpToken(shared_ptr<GroupCorpTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GroupCorpTokenHeaders> headers = make_shared<GroupCorpTokenHeaders>();
  return groupCorpTokenWithOptions(request, headers, runtime);
}

GroupDepartSaveResponse Alibabacloud_BtripOpen20220520::Client::groupDepartSaveWithOptions(shared_ptr<GroupDepartSaveRequest> tmpReq, shared_ptr<GroupDepartSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GroupDepartSaveShrinkRequest> request = make_shared<GroupDepartSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->subCorpIdList)) {
    request->subCorpIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subCorpIdList, make_shared<string>("sub_corp_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deptName)) {
    body->insert(pair<string, string>("dept_name", *request->deptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerIds)) {
    body->insert(pair<string, string>("manager_ids", *request->managerIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerDeptId)) {
    body->insert(pair<string, string>("outer_dept_id", *request->outerDeptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerDeptPid)) {
    body->insert(pair<string, string>("outer_dept_pid", *request->outerDeptPid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpIdListShrink)) {
    body->insert(pair<string, string>("sub_corp_id_list", *request->subCorpIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncGroup)) {
    body->insert(pair<string, bool>("sync_group", *request->syncGroup));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupDepartSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/departs"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupDepartSaveResponse(callApi(params, req, runtime));
}

GroupDepartSaveResponse Alibabacloud_BtripOpen20220520::Client::groupDepartSave(shared_ptr<GroupDepartSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GroupDepartSaveHeaders> headers = make_shared<GroupDepartSaveHeaders>();
  return groupDepartSaveWithOptions(request, headers, runtime);
}

GroupUserSaveResponse Alibabacloud_BtripOpen20220520::Client::groupUserSaveWithOptions(shared_ptr<GroupUserSaveRequest> tmpReq, shared_ptr<GroupUserSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GroupUserSaveShrinkRequest> request = make_shared<GroupUserSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GroupUserSaveRequestCertList>>(tmpReq->certList)) {
    request->certListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->certList, make_shared<string>("cert_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GroupUserSaveRequestSubCorpIdList>>(tmpReq->subCorpIdList)) {
    request->subCorpIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subCorpIdList, make_shared<string>("sub_corp_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseCityCode)) {
    body->insert(pair<string, string>("base_city_code", *request->baseCityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    body->insert(pair<string, string>("birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certListShrink)) {
    body->insert(pair<string, string>("cert_list", *request->certListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    body->insert(pair<string, string>("gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpIdListShrink)) {
    body->insert(pair<string, string>("sub_corp_id_list", *request->subCorpIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GroupUserSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/users"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GroupUserSaveResponse(callApi(params, req, runtime));
}

GroupUserSaveResponse Alibabacloud_BtripOpen20220520::Client::groupUserSave(shared_ptr<GroupUserSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<GroupUserSaveHeaders> headers = make_shared<GroupUserSaveHeaders>();
  return groupUserSaveWithOptions(request, headers, runtime);
}

HotelAskingPriceResponse Alibabacloud_BtripOpen20220520::Client::hotelAskingPriceWithOptions(shared_ptr<HotelAskingPriceRequest> tmpReq, shared_ptr<HotelAskingPriceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelAskingPriceShrinkRequest> request = make_shared<HotelAskingPriceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->shids)) {
    request->shidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->shids, make_shared<string>("shids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adultNum)) {
    query->insert(pair<string, string>("adult_num", *request->adultNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkInDate)) {
    query->insert(pair<string, string>("check_in_date", *request->checkInDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOutDate)) {
    query->insert(pair<string, string>("check_out_date", *request->checkOutDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityName)) {
    query->insert(pair<string, string>("city_name", *request->cityName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dir)) {
    query->insert(pair<string, long>("dir", *request->dir));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelStar)) {
    query->insert(pair<string, string>("hotel_star", *request->hotelStar));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isProtocol)) {
    query->insert(pair<string, bool>("is_protocol", *request->isProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shidsShrink)) {
    query->insert(pair<string, string>("shids", *request->shidsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortCode)) {
    query->insert(pair<string, long>("sort_code", *request->sortCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelAskingPrice"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/hotels/action/asking-price"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelAskingPriceResponse(callApi(params, req, runtime));
}

HotelAskingPriceResponse Alibabacloud_BtripOpen20220520::Client::hotelAskingPrice(shared_ptr<HotelAskingPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelAskingPriceHeaders> headers = make_shared<HotelAskingPriceHeaders>();
  return hotelAskingPriceWithOptions(request, headers, runtime);
}

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQueryWithOptions(shared_ptr<HotelBillSettlementQueryRequest> request, shared_ptr<HotelBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelBillSettlementQueryResponse(callApi(params, req, runtime));
}

HotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelBillSettlementQuery(shared_ptr<HotelBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelBillSettlementQueryHeaders> headers = make_shared<HotelBillSettlementQueryHeaders>();
  return hotelBillSettlementQueryWithOptions(request, headers, runtime);
}

HotelCityCodeListResponse Alibabacloud_BtripOpen20220520::Client::hotelCityCodeListWithOptions(shared_ptr<HotelCityCodeListRequest> request, shared_ptr<HotelCityCodeListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->countryCode)) {
    query->insert(pair<string, string>("country_code", *request->countryCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelCityCodeList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/city-codes/action/search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelCityCodeListResponse(callApi(params, req, runtime));
}

HotelCityCodeListResponse Alibabacloud_BtripOpen20220520::Client::hotelCityCodeList(shared_ptr<HotelCityCodeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelCityCodeListHeaders> headers = make_shared<HotelCityCodeListHeaders>();
  return hotelCityCodeListWithOptions(request, headers, runtime);
}

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQueryWithOptions(shared_ptr<HotelExceedApplyQueryRequest> request, shared_ptr<HotelExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/hotel-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelExceedApplyQueryResponse(callApi(params, req, runtime));
}

HotelExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelExceedApplyQuery(shared_ptr<HotelExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelExceedApplyQueryHeaders> headers = make_shared<HotelExceedApplyQueryHeaders>();
  return hotelExceedApplyQueryWithOptions(request, headers, runtime);
}

HotelGoodsQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelGoodsQueryWithOptions(shared_ptr<HotelGoodsQueryRequest> request, shared_ptr<HotelGoodsQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adultNum)) {
    query->insert(pair<string, string>("adult_num", *request->adultNum));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->agreementPrice)) {
    query->insert(pair<string, bool>("agreement_price", *request->agreementPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginDate)) {
    query->insert(pair<string, string>("begin_date", *request->beginDate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->breakfastIncluded)) {
    query->insert(pair<string, bool>("breakfast_included", *request->breakfastIncluded));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("end_date", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelId)) {
    query->insert(pair<string, string>("hotel_id", *request->hotelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payOverType)) {
    query->insert(pair<string, long>("pay_over_type", *request->payOverType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->specialInvoice)) {
    query->insert(pair<string, bool>("special_invoice", *request->specialInvoice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->superMan)) {
    query->insert(pair<string, long>("super_man", *request->superMan));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelGoodsQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/hotel-goods"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelGoodsQueryResponse(callApi(params, req, runtime));
}

HotelGoodsQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelGoodsQuery(shared_ptr<HotelGoodsQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelGoodsQueryHeaders> headers = make_shared<HotelGoodsQueryHeaders>();
  return hotelGoodsQueryWithOptions(request, headers, runtime);
}

HotelIndexInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelIndexInfoWithOptions(shared_ptr<HotelIndexInfoRequest> request, shared_ptr<HotelIndexInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hotelStatus)) {
    query->insert(pair<string, long>("hotel_status", *request->hotelStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageToken)) {
    query->insert(pair<string, string>("page_token", *request->pageToken));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelIndexInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/index-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelIndexInfoResponse(callApi(params, req, runtime));
}

HotelIndexInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelIndexInfo(shared_ptr<HotelIndexInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelIndexInfoHeaders> headers = make_shared<HotelIndexInfoHeaders>();
  return hotelIndexInfoWithOptions(request, headers, runtime);
}

HotelOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCancelWithOptions(shared_ptr<HotelOrderCancelRequest> request, shared_ptr<HotelOrderCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripOrderId)) {
    query->insert(pair<string, string>("btrip_order_id", *request->btripOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderCancelResponse(callApi(params, req, runtime));
}

HotelOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCancel(shared_ptr<HotelOrderCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderCancelHeaders> headers = make_shared<HotelOrderCancelHeaders>();
  return hotelOrderCancelWithOptions(request, headers, runtime);
}

HotelOrderChangeApplyResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderChangeApplyWithOptions(shared_ptr<HotelOrderChangeApplyRequest> tmpReq, shared_ptr<HotelOrderChangeApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelOrderChangeApplyShrinkRequest> request = make_shared<HotelOrderChangeApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderChangeApplyRequestRoomInfoList>>(tmpReq->roomInfoList)) {
    request->roomInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomInfoList, make_shared<string>("room_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomInfoListShrink)) {
    body->insert(pair<string, string>("room_info_list", *request->roomInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleOrderId)) {
    body->insert(pair<string, string>("sale_order_id", *request->saleOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderChangeApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/change/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderChangeApplyResponse(callApi(params, req, runtime));
}

HotelOrderChangeApplyResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderChangeApply(shared_ptr<HotelOrderChangeApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderChangeApplyHeaders> headers = make_shared<HotelOrderChangeApplyHeaders>();
  return hotelOrderChangeApplyWithOptions(request, headers, runtime);
}

HotelOrderChangeDetailResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderChangeDetailWithOptions(shared_ptr<HotelOrderChangeDetailRequest> request, shared_ptr<HotelOrderChangeDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    body->insert(pair<string, string>("change_order_id", *request->changeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saleOrderId)) {
    body->insert(pair<string, string>("sale_order_id", *request->saleOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderChangeDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/change/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderChangeDetailResponse(callApi(params, req, runtime));
}

HotelOrderChangeDetailResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderChangeDetail(shared_ptr<HotelOrderChangeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderChangeDetailHeaders> headers = make_shared<HotelOrderChangeDetailHeaders>();
  return hotelOrderChangeDetailWithOptions(request, headers, runtime);
}

HotelOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCreateWithOptions(shared_ptr<HotelOrderCreateRequest> tmpReq, shared_ptr<HotelOrderCreateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelOrderCreateShrinkRequest> request = make_shared<HotelOrderCreateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<HotelOrderCreateRequestInvoiceInfo>(tmpReq->invoiceInfo)) {
    request->invoiceInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->invoiceInfo, make_shared<string>("invoice_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderCreateRequestOccupantInfoList>>(tmpReq->occupantInfoList)) {
    request->occupantInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->occupantInfoList, make_shared<string>("occupant_info_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<HotelOrderCreateRequestPromotionInfo>(tmpReq->promotionInfo)) {
    request->promotionInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->promotionInfo, make_shared<string>("promotion_info"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    body->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    body->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractEmail)) {
    body->insert(pair<string, string>("contract_email", *request->contractEmail));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractName)) {
    body->insert(pair<string, string>("contract_name", *request->contractName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contractPhone)) {
    body->insert(pair<string, string>("contract_phone", *request->contractPhone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extra)) {
    body->insert(pair<string, string>("extra", *request->extra));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invoiceInfoShrink)) {
    body->insert(pair<string, string>("invoice_info", *request->invoiceInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    body->insert(pair<string, long>("item_id", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryNo)) {
    body->insert(pair<string, string>("itinerary_no", *request->itineraryNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->occupantInfoListShrink)) {
    body->insert(pair<string, string>("occupant_info_list", *request->occupantInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personPayPrice)) {
    body->insert(pair<string, long>("person_pay_price", *request->personPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionInfoShrink)) {
    body->insert(pair<string, string>("promotion_info", *request->promotionInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ratePlanId)) {
    body->insert(pair<string, long>("rate_plan_id", *request->ratePlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomId)) {
    body->insert(pair<string, long>("room_id", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    body->insert(pair<string, long>("room_num", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    body->insert(pair<string, long>("seller_id", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shid)) {
    body->insert(pair<string, long>("shid", *request->shid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalOrderPrice)) {
    body->insert(pair<string, long>("total_order_price", *request->totalOrderPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validateResKey)) {
    body->insert(pair<string, string>("validate_res_key", *request->validateResKey));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderCreate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderCreateResponse(callApi(params, req, runtime));
}

HotelOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderCreate(shared_ptr<HotelOrderCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderCreateHeaders> headers = make_shared<HotelOrderCreateHeaders>();
  return hotelOrderCreateWithOptions(request, headers, runtime);
}

HotelOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderDetailInfoWithOptions(shared_ptr<HotelOrderDetailInfoRequest> request, shared_ptr<HotelOrderDetailInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripOrderId)) {
    query->insert(pair<string, string>("btrip_order_id", *request->btripOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderDetailInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderDetailInfoResponse(callApi(params, req, runtime));
}

HotelOrderDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderDetailInfo(shared_ptr<HotelOrderDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderDetailInfoHeaders> headers = make_shared<HotelOrderDetailInfoHeaders>();
  return hotelOrderDetailInfoWithOptions(request, headers, runtime);
}

HotelOrderInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderInfoQueryWithOptions(shared_ptr<string> orderId, shared_ptr<HotelOrderInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/order/v1/hotelOrders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderInfoQueryResponse(callApi(params, req, runtime));
}

HotelOrderInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderInfoQuery(shared_ptr<string> orderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderInfoQueryHeaders> headers = make_shared<HotelOrderInfoQueryHeaders>();
  return hotelOrderInfoQueryWithOptions(orderId, headers, runtime);
}

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQueryWithOptions(shared_ptr<HotelOrderListQueryRequest> request, shared_ptr<HotelOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderListQueryResponse(callApi(params, req, runtime));
}

HotelOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderListQuery(shared_ptr<HotelOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderListQueryHeaders> headers = make_shared<HotelOrderListQueryHeaders>();
  return hotelOrderListQueryWithOptions(request, headers, runtime);
}

HotelOrderPayResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPayWithOptions(shared_ptr<HotelOrderPayRequest> request, shared_ptr<HotelOrderPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->btripOrderId)) {
    body->insert(pair<string, long>("btrip_order_id", *request->btripOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->companyPayFee)) {
    body->insert(pair<string, long>("company_pay_fee", *request->companyPayFee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personPayFee)) {
    body->insert(pair<string, long>("person_pay_fee", *request->personPayFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPayAccount)) {
    body->insert(pair<string, string>("third_pay_account", *request->thirdPayAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdTradeNo)) {
    body->insert(pair<string, string>("third_trade_no", *request->thirdTradeNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPrice)) {
    body->insert(pair<string, long>("total_price", *request->totalPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderPayResponse(callApi(params, req, runtime));
}

HotelOrderPayResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPay(shared_ptr<HotelOrderPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderPayHeaders> headers = make_shared<HotelOrderPayHeaders>();
  return hotelOrderPayWithOptions(request, headers, runtime);
}

HotelOrderPreValidateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPreValidateWithOptions(shared_ptr<HotelOrderPreValidateRequest> tmpReq, shared_ptr<HotelOrderPreValidateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelOrderPreValidateShrinkRequest> request = make_shared<HotelOrderPreValidateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderPreValidateRequestDailyList>>(tmpReq->dailyList)) {
    request->dailyListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dailyList, make_shared<string>("daily_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<HotelOrderPreValidateRequestOccupantInfoList>>(tmpReq->occupantInfoList)) {
    request->occupantInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->occupantInfoList, make_shared<string>("occupant_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    query->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    query->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dailyListShrink)) {
    query->insert(pair<string, string>("daily_list", *request->dailyListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->itemId)) {
    query->insert(pair<string, long>("item_id", *request->itemId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->numberOfAdultsPerRoom)) {
    query->insert(pair<string, long>("number_of_adults_per_room", *request->numberOfAdultsPerRoom));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->occupantInfoListShrink)) {
    query->insert(pair<string, string>("occupant_info_list", *request->occupantInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ratePlanId)) {
    query->insert(pair<string, long>("rate_plan_id", *request->ratePlanId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomId)) {
    query->insert(pair<string, long>("room_id", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomNum)) {
    query->insert(pair<string, long>("room_num", *request->roomNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchRoomPrice)) {
    query->insert(pair<string, long>("search_room_price", *request->searchRoomPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sellerId)) {
    query->insert(pair<string, long>("seller_id", *request->sellerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->shid)) {
    query->insert(pair<string, long>("shid", *request->shid));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderPreValidate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/orders/action/pre-validate"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderPreValidateResponse(callApi(params, req, runtime));
}

HotelOrderPreValidateResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderPreValidate(shared_ptr<HotelOrderPreValidateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderPreValidateHeaders> headers = make_shared<HotelOrderPreValidateHeaders>();
  return hotelOrderPreValidateWithOptions(request, headers, runtime);
}

HotelOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderQueryWithOptions(shared_ptr<HotelOrderQueryRequest> request, shared_ptr<HotelOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/hotel/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelOrderQueryResponse(callApi(params, req, runtime));
}

HotelOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::hotelOrderQuery(shared_ptr<HotelOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelOrderQueryHeaders> headers = make_shared<HotelOrderQueryHeaders>();
  return hotelOrderQueryWithOptions(request, headers, runtime);
}

HotelPricePullResponse Alibabacloud_BtripOpen20220520::Client::hotelPricePullWithOptions(shared_ptr<HotelPricePullRequest> tmpReq, shared_ptr<HotelPricePullHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelPricePullShrinkRequest> request = make_shared<HotelPricePullShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotelIds)) {
    request->hotelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelIds, make_shared<string>("hotel_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    query->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    query->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cityCode)) {
    query->insert(pair<string, long>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelIdsShrink)) {
    query->insert(pair<string, string>("hotel_ids", *request->hotelIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelPricePull"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/prices/action/pull"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelPricePullResponse(callApi(params, req, runtime));
}

HotelPricePullResponse Alibabacloud_BtripOpen20220520::Client::hotelPricePull(shared_ptr<HotelPricePullRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelPricePullHeaders> headers = make_shared<HotelPricePullHeaders>();
  return hotelPricePullWithOptions(request, headers, runtime);
}

HotelRoomInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelRoomInfoWithOptions(shared_ptr<HotelRoomInfoRequest> tmpReq, shared_ptr<HotelRoomInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelRoomInfoShrinkRequest> request = make_shared<HotelRoomInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->roomIds)) {
    request->roomIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->roomIds, make_shared<string>("room_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roomIdsShrink)) {
    query->insert(pair<string, string>("room_ids", *request->roomIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelRoomInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/room-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelRoomInfoResponse(callApi(params, req, runtime));
}

HotelRoomInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelRoomInfo(shared_ptr<HotelRoomInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelRoomInfoHeaders> headers = make_shared<HotelRoomInfoHeaders>();
  return hotelRoomInfoWithOptions(request, headers, runtime);
}

HotelSearchResponse Alibabacloud_BtripOpen20220520::Client::hotelSearchWithOptions(shared_ptr<HotelSearchRequest> tmpReq, shared_ptr<HotelSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelSearchShrinkRequest> request = make_shared<HotelSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->brandCode)) {
    request->brandCodeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->brandCode, make_shared<string>("brand_code"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->shids)) {
    request->shidsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->shids, make_shared<string>("shids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adultNum)) {
    query->insert(pair<string, string>("adult_num", *request->adultNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->brandCodeShrink)) {
    query->insert(pair<string, string>("brand_code", *request->brandCodeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkInDate)) {
    query->insert(pair<string, string>("check_in_date", *request->checkInDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOutDate)) {
    query->insert(pair<string, string>("check_out_date", *request->checkOutDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dir)) {
    query->insert(pair<string, long>("dir", *request->dir));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->distance)) {
    query->insert(pair<string, long>("distance", *request->distance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->districtCode)) {
    query->insert(pair<string, string>("district_code", *request->districtCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelStar)) {
    query->insert(pair<string, string>("hotel_star", *request->hotelStar));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isProtocol)) {
    query->insert(pair<string, bool>("is_protocol", *request->isProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWords)) {
    query->insert(pair<string, string>("key_words", *request->keyWords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->location)) {
    query->insert(pair<string, string>("location", *request->location));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxPrice)) {
    query->insert(pair<string, double>("max_price", *request->maxPrice));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minPrice)) {
    query->insert(pair<string, double>("min_price", *request->minPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payOverType)) {
    query->insert(pair<string, long>("pay_over_type", *request->payOverType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentType)) {
    query->insert(pair<string, long>("payment_type", *request->paymentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shidsShrink)) {
    query->insert(pair<string, string>("shids", *request->shidsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortCode)) {
    query->insert(pair<string, long>("sort_code", *request->sortCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->superMan)) {
    query->insert(pair<string, long>("super_man", *request->superMan));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/hotels/action/search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelSearchResponse(callApi(params, req, runtime));
}

HotelSearchResponse Alibabacloud_BtripOpen20220520::Client::hotelSearch(shared_ptr<HotelSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelSearchHeaders> headers = make_shared<HotelSearchHeaders>();
  return hotelSearchWithOptions(request, headers, runtime);
}

HotelStaticInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelStaticInfoWithOptions(shared_ptr<HotelStaticInfoRequest> tmpReq, shared_ptr<HotelStaticInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<HotelStaticInfoShrinkRequest> request = make_shared<HotelStaticInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotelIds)) {
    request->hotelIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotelIds, make_shared<string>("hotel_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotelIdsShrink)) {
    query->insert(pair<string, string>("hotel_ids", *request->hotelIdsShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelStaticInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v1/static-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelStaticInfoResponse(callApi(params, req, runtime));
}

HotelStaticInfoResponse Alibabacloud_BtripOpen20220520::Client::hotelStaticInfo(shared_ptr<HotelStaticInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelStaticInfoHeaders> headers = make_shared<HotelStaticInfoHeaders>();
  return hotelStaticInfoWithOptions(request, headers, runtime);
}

HotelSuggestV2Response Alibabacloud_BtripOpen20220520::Client::hotelSuggestV2WithOptions(shared_ptr<HotelSuggestV2Request> request, shared_ptr<HotelSuggestV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkIn)) {
    query->insert(pair<string, string>("check_in", *request->checkIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkOut)) {
    query->insert(pair<string, string>("check_out", *request->checkOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cityCode)) {
    query->insert(pair<string, string>("city_code", *request->cityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchType)) {
    query->insert(pair<string, long>("search_type", *request->searchType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotelSuggestV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-hotel/v2/suggest-infos"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotelSuggestV2Response(callApi(params, req, runtime));
}

HotelSuggestV2Response Alibabacloud_BtripOpen20220520::Client::hotelSuggestV2(shared_ptr<HotelSuggestV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<HotelSuggestV2Headers> headers = make_shared<HotelSuggestV2Headers>();
  return hotelSuggestV2WithOptions(request, headers, runtime);
}

IFlightOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::iFlightOrderDetailQueryWithOptions(shared_ptr<IFlightOrderDetailQueryRequest> request, shared_ptr<IFlightOrderDetailQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IFlightOrderDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/intlFlight-order-detail-query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IFlightOrderDetailQueryResponse(callApi(params, req, runtime));
}

IFlightOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::iFlightOrderDetailQuery(shared_ptr<IFlightOrderDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IFlightOrderDetailQueryHeaders> headers = make_shared<IFlightOrderDetailQueryHeaders>();
  return iFlightOrderDetailQueryWithOptions(request, headers, runtime);
}

IFlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::iFlightOrderListQueryWithOptions(shared_ptr<IFlightOrderListQueryRequest> tmpReq, shared_ptr<IFlightOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IFlightOrderListQueryShrinkRequest> request = make_shared<IFlightOrderListQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->applyIdList)) {
    request->applyIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applyIdList, make_shared<string>("apply_id_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->bookTypeList)) {
    request->bookTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bookTypeList, make_shared<string>("book_type_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->bookerId)) {
    request->bookerIdShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bookerId, make_shared<string>("booker_id"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->thirdPartApplyIdList)) {
    request->thirdPartApplyIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdPartApplyIdList, make_shared<string>("third_part_apply_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyIdListShrink)) {
    query->insert(pair<string, string>("apply_id_list", *request->applyIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookTypeListShrink)) {
    query->insert(pair<string, string>("book_type_list", *request->bookTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookerIdShrink)) {
    query->insert(pair<string, string>("booker_id", *request->bookerIdShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("end_date", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("start_date", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyIdListShrink)) {
    query->insert(pair<string, string>("third_part_apply_id_list", *request->thirdPartApplyIdListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IFlightOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/intlFlight-order-list-query"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IFlightOrderListQueryResponse(callApi(params, req, runtime));
}

IFlightOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::iFlightOrderListQuery(shared_ptr<IFlightOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IFlightOrderListQueryHeaders> headers = make_shared<IFlightOrderListQueryHeaders>();
  return iFlightOrderListQueryWithOptions(request, headers, runtime);
}

IeFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieFlightBillSettlementQueryWithOptions(shared_ptr<IeFlightBillSettlementQueryRequest> request, shared_ptr<IeFlightBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IeFlightBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ie-flight/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IeFlightBillSettlementQueryResponse(callApi(params, req, runtime));
}

IeFlightBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieFlightBillSettlementQuery(shared_ptr<IeFlightBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IeFlightBillSettlementQueryHeaders> headers = make_shared<IeFlightBillSettlementQueryHeaders>();
  return ieFlightBillSettlementQueryWithOptions(request, headers, runtime);
}

IeHotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieHotelBillSettlementQueryWithOptions(shared_ptr<IeHotelBillSettlementQueryRequest> request, shared_ptr<IeHotelBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->category)) {
    query->insert(pair<string, long>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IeHotelBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/ie-hotel/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IeHotelBillSettlementQueryResponse(callApi(params, req, runtime));
}

IeHotelBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::ieHotelBillSettlementQuery(shared_ptr<IeHotelBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IeHotelBillSettlementQueryHeaders> headers = make_shared<IeHotelBillSettlementQueryHeaders>();
  return ieHotelBillSettlementQueryWithOptions(request, headers, runtime);
}

InsInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::insInvoiceScanQueryWithOptions(shared_ptr<InsInvoiceScanQueryRequest> request, shared_ptr<InsInvoiceScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsInvoiceScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/ins-invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsInvoiceScanQueryResponse(callApi(params, req, runtime));
}

InsInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::insInvoiceScanQuery(shared_ptr<InsInvoiceScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsInvoiceScanQueryHeaders> headers = make_shared<InsInvoiceScanQueryHeaders>();
  return insInvoiceScanQueryWithOptions(request, headers, runtime);
}

InsureOrderApplyResponse Alibabacloud_BtripOpen20220520::Client::insureOrderApplyWithOptions(shared_ptr<InsureOrderApplyRequest> request, shared_ptr<InsureOrderApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insOrderId)) {
    body->insert(pair<string, string>("ins_order_id", *request->insOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    body->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderApplyResponse(callApi(params, req, runtime));
}

InsureOrderApplyResponse Alibabacloud_BtripOpen20220520::Client::insureOrderApply(shared_ptr<InsureOrderApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderApplyHeaders> headers = make_shared<InsureOrderApplyHeaders>();
  return insureOrderApplyWithOptions(request, headers, runtime);
}

InsureOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::insureOrderCancelWithOptions(shared_ptr<string> insOrderId,
                                                                                               shared_ptr<InsureOrderCancelRequest> request,
                                                                                               shared_ptr<InsureOrderCancelHeaders> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(insOrderId)) + string("/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderCancelResponse(callApi(params, req, runtime));
}

InsureOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::insureOrderCancel(shared_ptr<string> insOrderId, shared_ptr<InsureOrderCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderCancelHeaders> headers = make_shared<InsureOrderCancelHeaders>();
  return insureOrderCancelWithOptions(insOrderId, request, headers, runtime);
}

InsureOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::insureOrderCreateWithOptions(shared_ptr<InsureOrderCreateRequest> tmpReq, shared_ptr<InsureOrderCreateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsureOrderCreateShrinkRequest> request = make_shared<InsureOrderCreateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<InsureOrderCreateRequestApplicant>(tmpReq->applicant)) {
    request->applicantShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applicant, make_shared<string>("applicant"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InsureOrderCreateRequestInsPersonAndSegmentList>>(tmpReq->insPersonAndSegmentList)) {
    request->insPersonAndSegmentListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->insPersonAndSegmentList, make_shared<string>("ins_person_and_segment_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicantShrink)) {
    body->insert(pair<string, string>("applicant", *request->applicantShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insPersonAndSegmentListShrink)) {
    body->insert(pair<string, string>("ins_person_and_segment_list", *request->insPersonAndSegmentListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outInsOrderId)) {
    body->insert(pair<string, string>("out_ins_order_id", *request->outInsOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    body->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderCreate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/action/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderCreateResponse(callApi(params, req, runtime));
}

InsureOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::insureOrderCreate(shared_ptr<InsureOrderCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderCreateHeaders> headers = make_shared<InsureOrderCreateHeaders>();
  return insureOrderCreateWithOptions(request, headers, runtime);
}

InsureOrderDetailResponse Alibabacloud_BtripOpen20220520::Client::insureOrderDetailWithOptions(shared_ptr<InsureOrderDetailRequest> request, shared_ptr<InsureOrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insOrderId)) {
    query->insert(pair<string, string>("ins_order_id", *request->insOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderDetailResponse(callApi(params, req, runtime));
}

InsureOrderDetailResponse Alibabacloud_BtripOpen20220520::Client::insureOrderDetail(shared_ptr<InsureOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderDetailHeaders> headers = make_shared<InsureOrderDetailHeaders>();
  return insureOrderDetailWithOptions(request, headers, runtime);
}

InsureOrderPayResponse Alibabacloud_BtripOpen20220520::Client::insureOrderPayWithOptions(shared_ptr<string> insOrderId,
                                                                                         shared_ptr<InsureOrderPayRequest> request,
                                                                                         shared_ptr<InsureOrderPayHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outSubOrderId)) {
    body->insert(pair<string, string>("out_sub_order_id", *request->outSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->paymentAmount)) {
    body->insert(pair<string, long>("payment_amount", *request->paymentAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    body->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(insOrderId)) + string("/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderPayResponse(callApi(params, req, runtime));
}

InsureOrderPayResponse Alibabacloud_BtripOpen20220520::Client::insureOrderPay(shared_ptr<string> insOrderId, shared_ptr<InsureOrderPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderPayHeaders> headers = make_shared<InsureOrderPayHeaders>();
  return insureOrderPayWithOptions(insOrderId, request, headers, runtime);
}

InsureOrderRefundResponse Alibabacloud_BtripOpen20220520::Client::insureOrderRefundWithOptions(shared_ptr<string> insOrderId,
                                                                                               shared_ptr<InsureOrderRefundRequest> tmpReq,
                                                                                               shared_ptr<InsureOrderRefundHeaders> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InsureOrderRefundShrinkRequest> request = make_shared<InsureOrderRefundShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->policyNoList)) {
    request->policyNoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->policyNoList, make_shared<string>("policy_no_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->subInsOrderIds)) {
    request->subInsOrderIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subInsOrderIds, make_shared<string>("sub_ins_order_ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    body->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    body->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outApplyId)) {
    body->insert(pair<string, string>("out_apply_id", *request->outApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->policyNoListShrink)) {
    body->insert(pair<string, string>("policy_no_list", *request->policyNoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subInsOrderIdsShrink)) {
    body->insert(pair<string, string>("sub_ins_order_ids", *request->subInsOrderIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    body->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderRefund"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(insOrderId)) + string("/action/refund"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderRefundResponse(callApi(params, req, runtime));
}

InsureOrderRefundResponse Alibabacloud_BtripOpen20220520::Client::insureOrderRefund(shared_ptr<string> insOrderId, shared_ptr<InsureOrderRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderRefundHeaders> headers = make_shared<InsureOrderRefundHeaders>();
  return insureOrderRefundWithOptions(insOrderId, request, headers, runtime);
}

InsureOrderUrlDetailResponse Alibabacloud_BtripOpen20220520::Client::insureOrderUrlDetailWithOptions(shared_ptr<string> insOrderId, shared_ptr<InsureOrderUrlDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureOrderUrlDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(insOrderId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureOrderUrlDetailResponse(callApi(params, req, runtime));
}

InsureOrderUrlDetailResponse Alibabacloud_BtripOpen20220520::Client::insureOrderUrlDetail(shared_ptr<string> insOrderId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureOrderUrlDetailHeaders> headers = make_shared<InsureOrderUrlDetailHeaders>();
  return insureOrderUrlDetailWithOptions(insOrderId, headers, runtime);
}

InsureRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::insureRefundDetailWithOptions(shared_ptr<InsureRefundDetailRequest> request, shared_ptr<InsureRefundDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyId)) {
    query->insert(pair<string, string>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->insOrderId)) {
    query->insert(pair<string, string>("ins_order_id", *request->insOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outApplyId)) {
    query->insert(pair<string, string>("out_apply_id", *request->outApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsureRefundDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/insurances/action/refund-detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsureRefundDetailResponse(callApi(params, req, runtime));
}

InsureRefundDetailResponse Alibabacloud_BtripOpen20220520::Client::insureRefundDetail(shared_ptr<InsureRefundDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InsureRefundDetailHeaders> headers = make_shared<InsureRefundDetailHeaders>();
  return insureRefundDetailWithOptions(request, headers, runtime);
}

IntlFlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::intlFlightCreateOrderWithOptions(shared_ptr<IntlFlightCreateOrderRequest> tmpReq, shared_ptr<IntlFlightCreateOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IntlFlightCreateOrderShrinkRequest> request = make_shared<IntlFlightCreateOrderShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<IntlFlightCreateOrderRequestContactInfo>(tmpReq->contactInfo)) {
    request->contactInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactInfo, make_shared<string>("contact_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<IntlFlightCreateOrderRequestCostCenter>(tmpReq->costCenter)) {
    request->costCenterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->costCenter, make_shared<string>("cost_center"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extraInfo)) {
    request->extraInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extraInfo, make_shared<string>("extra_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightCreateOrderRequestPassengerList>>(tmpReq->passengerList)) {
    request->passengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerList, make_shared<string>("passenger_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->asyncCreateOrderKey)) {
    query->insert(pair<string, string>("async_create_order_key", *request->asyncCreateOrderKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->asyncCreateOrderMode)) {
    query->insert(pair<string, bool>("async_create_order_mode", *request->asyncCreateOrderMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfoShrink)) {
    query->insert(pair<string, string>("contact_info", *request->contactInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->costCenterShrink)) {
    query->insert(pair<string, string>("cost_center", *request->costCenterShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfoShrink)) {
    query->insert(pair<string, string>("extra_info", *request->extraInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    query->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerListShrink)) {
    query->insert(pair<string, string>("passenger_list", *request->passengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->renderKey)) {
    query->insert(pair<string, string>("render_key", *request->renderKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPriceCent)) {
    query->insert(pair<string, long>("total_price_cent", *request->totalPriceCent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightCreateOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/order/action/create"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightCreateOrderResponse(callApi(params, req, runtime));
}

IntlFlightCreateOrderResponse Alibabacloud_BtripOpen20220520::Client::intlFlightCreateOrder(shared_ptr<IntlFlightCreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightCreateOrderHeaders> headers = make_shared<IntlFlightCreateOrderHeaders>();
  return intlFlightCreateOrderWithOptions(request, headers, runtime);
}

IntlFlightInventoryPriceCheckResponse Alibabacloud_BtripOpen20220520::Client::intlFlightInventoryPriceCheckWithOptions(shared_ptr<IntlFlightInventoryPriceCheckRequest> tmpReq, shared_ptr<IntlFlightInventoryPriceCheckHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IntlFlightInventoryPriceCheckShrinkRequest> request = make_shared<IntlFlightInventoryPriceCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightInventoryPriceCheckRequestPassengerList>>(tmpReq->passengerList)) {
    request->passengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerList, make_shared<string>("passenger_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPrice)) {
    query->insert(pair<string, long>("order_price", *request->orderPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    query->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerListShrink)) {
    query->insert(pair<string, string>("passenger_list", *request->passengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightInventoryPriceCheck"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/flights/action/inventory-price-check"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightInventoryPriceCheckResponse(callApi(params, req, runtime));
}

IntlFlightInventoryPriceCheckResponse Alibabacloud_BtripOpen20220520::Client::intlFlightInventoryPriceCheck(shared_ptr<IntlFlightInventoryPriceCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightInventoryPriceCheckHeaders> headers = make_shared<IntlFlightInventoryPriceCheckHeaders>();
  return intlFlightInventoryPriceCheckWithOptions(request, headers, runtime);
}

IntlFlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::intlFlightListingSearchWithOptions(shared_ptr<IntlFlightListingSearchRequest> tmpReq, shared_ptr<IntlFlightListingSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IntlFlightListingSearchShrinkRequest> request = make_shared<IntlFlightListingSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightListingSearchRequestSearchJourneys>>(tmpReq->searchJourneys)) {
    request->searchJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchJourneys, make_shared<string>("search_journeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightListingSearchRequestSearchPassengerList>>(tmpReq->searchPassengerList)) {
    request->searchPassengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchPassengerList, make_shared<string>("search_passenger_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cabinType)) {
    query->insert(pair<string, long>("cabin_type", *request->cabinType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directOnly)) {
    query->insert(pair<string, bool>("direct_only", *request->directOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needShareFlight)) {
    query->insert(pair<string, bool>("need_share_flight", *request->needShareFlight));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->outWheelSearch)) {
    query->insert(pair<string, bool>("out_wheel_search", *request->outWheelSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryRecordId)) {
    query->insert(pair<string, string>("query_record_id", *request->queryRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchJourneysShrink)) {
    query->insert(pair<string, string>("search_journeys", *request->searchJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->searchMode)) {
    query->insert(pair<string, long>("search_mode", *request->searchMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchPassengerListShrink)) {
    query->insert(pair<string, string>("search_passenger_list", *request->searchPassengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    query->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightListingSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/flights/action/listing-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightListingSearchResponse(callApi(params, req, runtime));
}

IntlFlightListingSearchResponse Alibabacloud_BtripOpen20220520::Client::intlFlightListingSearch(shared_ptr<IntlFlightListingSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightListingSearchHeaders> headers = make_shared<IntlFlightListingSearchHeaders>();
  return intlFlightListingSearchWithOptions(request, headers, runtime);
}

IntlFlightOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderCancelWithOptions(shared_ptr<IntlFlightOrderCancelRequest> request, shared_ptr<IntlFlightOrderCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->memo)) {
    query->insert(pair<string, string>("memo", *request->memo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOrderCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/order/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOrderCancelResponse(callApi(params, req, runtime));
}

IntlFlightOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderCancel(shared_ptr<IntlFlightOrderCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOrderCancelHeaders> headers = make_shared<IntlFlightOrderCancelHeaders>();
  return intlFlightOrderCancelWithOptions(request, headers, runtime);
}

IntlFlightOrderDetailResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderDetailWithOptions(shared_ptr<IntlFlightOrderDetailRequest> request, shared_ptr<IntlFlightOrderDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOrderDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/order/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOrderDetailResponse(callApi(params, req, runtime));
}

IntlFlightOrderDetailResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderDetail(shared_ptr<IntlFlightOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOrderDetailHeaders> headers = make_shared<IntlFlightOrderDetailHeaders>();
  return intlFlightOrderDetailWithOptions(request, headers, runtime);
}

IntlFlightOrderPayResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderPayWithOptions(shared_ptr<IntlFlightOrderPayRequest> tmpReq, shared_ptr<IntlFlightOrderPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IntlFlightOrderPayShrinkRequest> request = make_shared<IntlFlightOrderPayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extParams)) {
    request->extParamsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extParams, make_shared<string>("ext_params"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extParamsShrink)) {
    query->insert(pair<string, string>("ext_params", *request->extParamsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPrice)) {
    query->insert(pair<string, long>("total_price", *request->totalPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOrderPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/order/action/pay"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOrderPayResponse(callApi(params, req, runtime));
}

IntlFlightOrderPayResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderPay(shared_ptr<IntlFlightOrderPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOrderPayHeaders> headers = make_shared<IntlFlightOrderPayHeaders>();
  return intlFlightOrderPayWithOptions(request, headers, runtime);
}

IntlFlightOrderPayCheckResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderPayCheckWithOptions(shared_ptr<IntlFlightOrderPayCheckRequest> request, shared_ptr<IntlFlightOrderPayCheckHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    query->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOrderPayCheck"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/order/action/pay-check"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOrderPayCheckResponse(callApi(params, req, runtime));
}

IntlFlightOrderPayCheckResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOrderPayCheck(shared_ptr<IntlFlightOrderPayCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOrderPayCheckHeaders> headers = make_shared<IntlFlightOrderPayCheckHeaders>();
  return intlFlightOrderPayCheckWithOptions(request, headers, runtime);
}

IntlFlightOtaItemDetailResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOtaItemDetailWithOptions(shared_ptr<string> otaItemId,
                                                                                                           shared_ptr<IntlFlightOtaItemDetailRequest> request,
                                                                                                           shared_ptr<IntlFlightOtaItemDetailHeaders> headers,
                                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOtaItemDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/items/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(otaItemId)) + string("/action/ota-get"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOtaItemDetailResponse(callApi(params, req, runtime));
}

IntlFlightOtaItemDetailResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOtaItemDetail(shared_ptr<string> otaItemId, shared_ptr<IntlFlightOtaItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOtaItemDetailHeaders> headers = make_shared<IntlFlightOtaItemDetailHeaders>();
  return intlFlightOtaItemDetailWithOptions(otaItemId, request, headers, runtime);
}

IntlFlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOtaSearchWithOptions(shared_ptr<IntlFlightOtaSearchRequest> tmpReq, shared_ptr<IntlFlightOtaSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IntlFlightOtaSearchShrinkRequest> request = make_shared<IntlFlightOtaSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightOtaSearchRequestSearchJourneys>>(tmpReq->searchJourneys)) {
    request->searchJourneysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchJourneys, make_shared<string>("search_journeys"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<IntlFlightOtaSearchRequestSearchPassengerList>>(tmpReq->searchPassengerList)) {
    request->searchPassengerListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->searchPassengerList, make_shared<string>("search_passenger_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    query->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyerName)) {
    query->insert(pair<string, string>("buyer_name", *request->buyerName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cabinType)) {
    query->insert(pair<string, long>("cabin_type", *request->cabinType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->directOnly)) {
    query->insert(pair<string, bool>("direct_only", *request->directOnly));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needShareFlight)) {
    query->insert(pair<string, bool>("need_share_flight", *request->needShareFlight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchJourneysShrink)) {
    query->insert(pair<string, string>("search_journeys", *request->searchJourneysShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchPassengerListShrink)) {
    query->insert(pair<string, string>("search_passenger_list", *request->searchPassengerListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->supplierCode)) {
    query->insert(pair<string, string>("supplier_code", *request->supplierCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tripType)) {
    query->insert(pair<string, long>("trip_type", *request->tripType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightOtaSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/flights/action/ota-search"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightOtaSearchResponse(callApi(params, req, runtime));
}

IntlFlightOtaSearchResponse Alibabacloud_BtripOpen20220520::Client::intlFlightOtaSearch(shared_ptr<IntlFlightOtaSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightOtaSearchHeaders> headers = make_shared<IntlFlightOtaSearchHeaders>();
  return intlFlightOtaSearchWithOptions(request, headers, runtime);
}

IntlFlightSegmentAvailableCertResponse Alibabacloud_BtripOpen20220520::Client::intlFlightSegmentAvailableCertWithOptions(shared_ptr<string> otaItemId,
                                                                                                                         shared_ptr<IntlFlightSegmentAvailableCertRequest> request,
                                                                                                                         shared_ptr<IntlFlightSegmentAvailableCertHeaders> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isvName)) {
    query->insert(pair<string, string>("isv_name", *request->isvName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IntlFlightSegmentAvailableCert"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/intl-flight/v1/items/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(otaItemId)) + string("/action/segment-available-cert"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IntlFlightSegmentAvailableCertResponse(callApi(params, req, runtime));
}

IntlFlightSegmentAvailableCertResponse Alibabacloud_BtripOpen20220520::Client::intlFlightSegmentAvailableCert(shared_ptr<string> otaItemId, shared_ptr<IntlFlightSegmentAvailableCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IntlFlightSegmentAvailableCertHeaders> headers = make_shared<IntlFlightSegmentAvailableCertHeaders>();
  return intlFlightSegmentAvailableCertWithOptions(otaItemId, request, headers, runtime);
}

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAddWithOptions(shared_ptr<InvoiceAddRequest> request, shared_ptr<InvoiceAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankName)) {
    body->insert(pair<string, string>("bank_name", *request->bankName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankNo)) {
    body->insert(pair<string, string>("bank_no", *request->bankNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taxNo)) {
    body->insert(pair<string, string>("tax_no", *request->taxNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tel)) {
    body->insert(pair<string, string>("tel", *request->tel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitType)) {
    body->insert(pair<string, long>("unit_type", *request->unitType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/add-invoice"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceAddResponse(callApi(params, req, runtime));
}

InvoiceAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceAdd(shared_ptr<InvoiceAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceAddHeaders> headers = make_shared<InvoiceAddHeaders>();
  return invoiceAddWithOptions(request, headers, runtime);
}

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDeleteWithOptions(shared_ptr<InvoiceDeleteRequest> request, shared_ptr<InvoiceDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceDeleteResponse(callApi(params, req, runtime));
}

InvoiceDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceDelete(shared_ptr<InvoiceDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceDeleteHeaders> headers = make_shared<InvoiceDeleteHeaders>();
  return invoiceDeleteWithOptions(request, headers, runtime);
}

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModifyWithOptions(shared_ptr<InvoiceModifyRequest> request, shared_ptr<InvoiceModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->address)) {
    body->insert(pair<string, string>("address", *request->address));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankName)) {
    body->insert(pair<string, string>("bank_name", *request->bankName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bankNo)) {
    body->insert(pair<string, string>("bank_no", *request->bankNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taxNo)) {
    body->insert(pair<string, string>("tax_no", *request->taxNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tel)) {
    body->insert(pair<string, string>("tel", *request->tel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->unitType)) {
    body->insert(pair<string, long>("unit_type", *request->unitType));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceModifyResponse(callApi(params, req, runtime));
}

InvoiceModifyResponse Alibabacloud_BtripOpen20220520::Client::invoiceModify(shared_ptr<InvoiceModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceModifyHeaders> headers = make_shared<InvoiceModifyHeaders>();
  return invoiceModifyWithOptions(request, headers, runtime);
}

InvoiceRuleAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleAddWithOptions(shared_ptr<InvoiceRuleAddRequest> tmpReq, shared_ptr<InvoiceRuleAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleAddShrinkRequest> request = make_shared<InvoiceRuleAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleAddRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleAddResponse(callApi(params, req, runtime));
}

InvoiceRuleAddResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleAdd(shared_ptr<InvoiceRuleAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleAddHeaders> headers = make_shared<InvoiceRuleAddHeaders>();
  return invoiceRuleAddWithOptions(request, headers, runtime);
}

InvoiceRuleDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleDeleteWithOptions(shared_ptr<InvoiceRuleDeleteRequest> tmpReq, shared_ptr<InvoiceRuleDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleDeleteShrinkRequest> request = make_shared<InvoiceRuleDeleteShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleDeleteRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->delAll)) {
    query->insert(pair<string, bool>("del_all", *request->delAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    query->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleDeleteResponse(callApi(params, req, runtime));
}

InvoiceRuleDeleteResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleDelete(shared_ptr<InvoiceRuleDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleDeleteHeaders> headers = make_shared<InvoiceRuleDeleteHeaders>();
  return invoiceRuleDeleteWithOptions(request, headers, runtime);
}

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSaveWithOptions(shared_ptr<InvoiceRuleSaveRequest> tmpReq, shared_ptr<InvoiceRuleSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<InvoiceRuleSaveShrinkRequest> request = make_shared<InvoiceRuleSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<InvoiceRuleSaveRequestEntities>>(tmpReq->entities)) {
    request->entitiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->entities, make_shared<string>("entities"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allEmploye)) {
    body->insert(pair<string, bool>("all_employe", *request->allEmploye));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entitiesShrink)) {
    body->insert(pair<string, string>("entities", *request->entitiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scope)) {
    body->insert(pair<string, long>("scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceRuleSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice-rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceRuleSaveResponse(callApi(params, req, runtime));
}

InvoiceRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::invoiceRuleSave(shared_ptr<InvoiceRuleSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceRuleSaveHeaders> headers = make_shared<InvoiceRuleSaveHeaders>();
  return invoiceRuleSaveWithOptions(request, headers, runtime);
}

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearchWithOptions(shared_ptr<InvoiceSearchRequest> request, shared_ptr<InvoiceSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvoiceSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvoiceSearchResponse(callApi(params, req, runtime));
}

InvoiceSearchResponse Alibabacloud_BtripOpen20220520::Client::invoiceSearch(shared_ptr<InvoiceSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvoiceSearchHeaders> headers = make_shared<InvoiceSearchHeaders>();
  return invoiceSearchWithOptions(request, headers, runtime);
}

IsvRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::isvRuleSaveWithOptions(shared_ptr<IsvRuleSaveRequest> tmpReq, shared_ptr<IsvRuleSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IsvRuleSaveShrinkRequest> request = make_shared<IsvRuleSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IsvRuleSaveRequestBookuserList>>(tmpReq->bookuserList)) {
    request->bookuserListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bookuserList, make_shared<string>("bookuser_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->applyNeed)) {
    body->insert(pair<string, bool>("apply_need", *request->applyNeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookType)) {
    body->insert(pair<string, string>("book_type", *request->bookType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookuserListShrink)) {
    body->insert(pair<string, string>("bookuser_list", *request->bookuserListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ruleNeed)) {
    body->insert(pair<string, bool>("rule_need", *request->ruleNeed));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsvRuleSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/rule"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsvRuleSaveResponse(callApi(params, req, runtime));
}

IsvRuleSaveResponse Alibabacloud_BtripOpen20220520::Client::isvRuleSave(shared_ptr<IsvRuleSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IsvRuleSaveHeaders> headers = make_shared<IsvRuleSaveHeaders>();
  return isvRuleSaveWithOptions(request, headers, runtime);
}

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSaveWithOptions(shared_ptr<IsvUserSaveRequest> tmpReq, shared_ptr<IsvUserSaveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<IsvUserSaveShrinkRequest> request = make_shared<IsvUserSaveShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<IsvUserSaveRequestUserList>>(tmpReq->userList)) {
    request->userListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userList, make_shared<string>("user_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userListShrink)) {
    body->insert(pair<string, string>("user_list", *request->userListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsvUserSave"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/isvuser/v1/isvuser"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsvUserSaveResponse(callApi(params, req, runtime));
}

IsvUserSaveResponse Alibabacloud_BtripOpen20220520::Client::isvUserSave(shared_ptr<IsvUserSaveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<IsvUserSaveHeaders> headers = make_shared<IsvUserSaveHeaders>();
  return isvUserSaveWithOptions(request, headers, runtime);
}

MealApplyAddResponse Alibabacloud_BtripOpen20220520::Client::mealApplyAddWithOptions(shared_ptr<MealApplyAddRequest> tmpReq, shared_ptr<MealApplyAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<MealApplyAddShrinkRequest> request = make_shared<MealApplyAddShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<MealApplyAddRequestApplyUser>(tmpReq->applyUser)) {
    request->applyUserShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->applyUser, make_shared<string>("apply_user"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<MealApplyAddRequestItineraryList>>(tmpReq->itineraryList)) {
    request->itineraryListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itineraryList, make_shared<string>("itinerary_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyUserShrink)) {
    body->insert(pair<string, string>("apply_user", *request->applyUserShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->costCenterId)) {
    body->insert(pair<string, long>("cost_center_id", *request->costCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceId)) {
    body->insert(pair<string, long>("invoice_id", *request->invoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itineraryListShrink)) {
    body->insert(pair<string, string>("itinerary_list", *request->itineraryListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mealAmount)) {
    body->insert(pair<string, long>("meal_amount", *request->mealAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mealCause)) {
    body->insert(pair<string, string>("meal_cause", *request->mealCause));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("project_code", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectTitle)) {
    body->insert(pair<string, string>("project_title", *request->projectTitle));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealApplyAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/meal"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealApplyAddResponse(callApi(params, req, runtime));
}

MealApplyAddResponse Alibabacloud_BtripOpen20220520::Client::mealApplyAdd(shared_ptr<MealApplyAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealApplyAddHeaders> headers = make_shared<MealApplyAddHeaders>();
  return mealApplyAddWithOptions(request, headers, runtime);
}

MealApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::mealApplyApproveWithOptions(shared_ptr<MealApplyApproveRequest> request, shared_ptr<MealApplyApproveHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operateTime)) {
    body->insert(pair<string, string>("operate_time", *request->operateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    body->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealApplyApprove"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/meal"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealApplyApproveResponse(callApi(params, req, runtime));
}

MealApplyApproveResponse Alibabacloud_BtripOpen20220520::Client::mealApplyApprove(shared_ptr<MealApplyApproveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealApplyApproveHeaders> headers = make_shared<MealApplyApproveHeaders>();
  return mealApplyApproveWithOptions(request, headers, runtime);
}

MealApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::mealApplyQueryWithOptions(shared_ptr<MealApplyQueryRequest> request, shared_ptr<MealApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartApplyId)) {
    query->insert(pair<string, string>("third_part_apply_id", *request->thirdPartApplyId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/meal"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealApplyQueryResponse(callApi(params, req, runtime));
}

MealApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::mealApplyQuery(shared_ptr<MealApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealApplyQueryHeaders> headers = make_shared<MealApplyQueryHeaders>();
  return mealApplyQueryWithOptions(request, headers, runtime);
}

MealBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::mealBillSettlementQueryWithOptions(shared_ptr<MealBillSettlementQueryRequest> request, shared_ptr<MealBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/meal/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealBillSettlementQueryResponse(callApi(params, req, runtime));
}

MealBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::mealBillSettlementQuery(shared_ptr<MealBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealBillSettlementQueryHeaders> headers = make_shared<MealBillSettlementQueryHeaders>();
  return mealBillSettlementQueryWithOptions(request, headers, runtime);
}

MealOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::mealOrderDetailQueryWithOptions(shared_ptr<string> orderId,
                                                                                                     shared_ptr<MealOrderDetailQueryRequest> request,
                                                                                                     shared_ptr<MealOrderDetailQueryHeaders> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealOrderDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/meal/v1/orders/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(orderId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealOrderDetailQueryResponse(callApi(params, req, runtime));
}

MealOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::mealOrderDetailQuery(shared_ptr<string> orderId, shared_ptr<MealOrderDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealOrderDetailQueryHeaders> headers = make_shared<MealOrderDetailQueryHeaders>();
  return mealOrderDetailQueryWithOptions(orderId, request, headers, runtime);
}

MealOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::mealOrderListQueryWithOptions(shared_ptr<MealOrderListQueryRequest> request, shared_ptr<MealOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MealOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/meal/v1/orders"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MealOrderListQueryResponse(callApi(params, req, runtime));
}

MealOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::mealOrderListQuery(shared_ptr<MealOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MealOrderListQueryHeaders> headers = make_shared<MealOrderListQueryHeaders>();
  return mealOrderListQueryWithOptions(request, headers, runtime);
}

MonthBillConfirmResponse Alibabacloud_BtripOpen20220520::Client::monthBillConfirmWithOptions(shared_ptr<MonthBillConfirmRequest> request, shared_ptr<MonthBillConfirmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->mailBillDate)) {
    body->insert(pair<string, long>("mail_bill_date", *request->mailBillDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MonthBillConfirm"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/bill/v1/status/action/confirm"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MonthBillConfirmResponse(callApi(params, req, runtime));
}

MonthBillConfirmResponse Alibabacloud_BtripOpen20220520::Client::monthBillConfirm(shared_ptr<MonthBillConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MonthBillConfirmHeaders> headers = make_shared<MonthBillConfirmHeaders>();
  return monthBillConfirmWithOptions(request, headers, runtime);
}

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGetWithOptions(shared_ptr<MonthBillGetRequest> request, shared_ptr<MonthBillGetHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billMonth)) {
    query->insert(pair<string, string>("bill_month", *request->billMonth));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MonthBillGet"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/open/v1/month-bill"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MonthBillGetResponse(callApi(params, req, runtime));
}

MonthBillGetResponse Alibabacloud_BtripOpen20220520::Client::monthBillGet(shared_ptr<MonthBillGetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<MonthBillGetHeaders> headers = make_shared<MonthBillGetHeaders>();
  return monthBillGetWithOptions(request, headers, runtime);
}

OrderRefundDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::orderRefundDetailQueryWithOptions(shared_ptr<OrderRefundDetailQueryRequest> request, shared_ptr<OrderRefundDetailQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cooperatorOrderId)) {
    body->insert(pair<string, string>("cooperator_order_id", *request->cooperatorOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OrderRefundDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/coop-hotel/v1/refund/action/detail"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OrderRefundDetailQueryResponse(callApi(params, req, runtime));
}

OrderRefundDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::orderRefundDetailQuery(shared_ptr<OrderRefundDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<OrderRefundDetailQueryHeaders> headers = make_shared<OrderRefundDetailQueryHeaders>();
  return orderRefundDetailQueryWithOptions(request, headers, runtime);
}

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAddWithOptions(shared_ptr<ProjectAddRequest> request, shared_ptr<ProjectAddHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectAdd"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectAddResponse(callApi(params, req, runtime));
}

ProjectAddResponse Alibabacloud_BtripOpen20220520::Client::projectAdd(shared_ptr<ProjectAddRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectAddHeaders> headers = make_shared<ProjectAddHeaders>();
  return projectAddWithOptions(request, headers, runtime);
}

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDeleteWithOptions(shared_ptr<ProjectDeleteRequest> request, shared_ptr<ProjectDeleteHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    query->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectDelete"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectDeleteResponse(callApi(params, req, runtime));
}

ProjectDeleteResponse Alibabacloud_BtripOpen20220520::Client::projectDelete(shared_ptr<ProjectDeleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectDeleteHeaders> headers = make_shared<ProjectDeleteHeaders>();
  return projectDeleteWithOptions(request, headers, runtime);
}

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModifyWithOptions(shared_ptr<ProjectModifyRequest> request, shared_ptr<ProjectModifyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    body->insert(pair<string, string>("project_name", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartCostCenterId)) {
    body->insert(pair<string, string>("third_part_cost_center_id", *request->thirdPartCostCenterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartId)) {
    body->insert(pair<string, string>("third_part_id", *request->thirdPartId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartInvoiceId)) {
    body->insert(pair<string, string>("third_part_invoice_id", *request->thirdPartInvoiceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ProjectModify"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/cost/v1/project"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ProjectModifyResponse(callApi(params, req, runtime));
}

ProjectModifyResponse Alibabacloud_BtripOpen20220520::Client::projectModify(shared_ptr<ProjectModifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ProjectModifyHeaders> headers = make_shared<ProjectModifyHeaders>();
  return projectModifyWithOptions(request, headers, runtime);
}

QueryCorpDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::queryCorpDetailInfoWithOptions(shared_ptr<QueryCorpDetailInfoRequest> request, shared_ptr<QueryCorpDetailInfoHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("account_id", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetCorpId)) {
    query->insert(pair<string, string>("target_corp_id", *request->targetCorpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetThirdCorpId)) {
    query->insert(pair<string, string>("target_third_corp_id", *request->targetThirdCorpId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCorpDetailInfo"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/corps/v1/corps/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCorpDetailInfoResponse(callApi(params, req, runtime));
}

QueryCorpDetailInfoResponse Alibabacloud_BtripOpen20220520::Client::queryCorpDetailInfo(shared_ptr<QueryCorpDetailInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryCorpDetailInfoHeaders> headers = make_shared<QueryCorpDetailInfoHeaders>();
  return queryCorpDetailInfoWithOptions(request, headers, runtime);
}

QueryEmployeeDetailResponse Alibabacloud_BtripOpen20220520::Client::queryEmployeeDetailWithOptions(shared_ptr<QueryEmployeeDetailRequest> request, shared_ptr<QueryEmployeeDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outEmployeeId)) {
    query->insert(pair<string, string>("out_employee_id", *request->outEmployeeId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEmployeeDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/employeeDetail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEmployeeDetailResponse(callApi(params, req, runtime));
}

QueryEmployeeDetailResponse Alibabacloud_BtripOpen20220520::Client::queryEmployeeDetail(shared_ptr<QueryEmployeeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryEmployeeDetailHeaders> headers = make_shared<QueryEmployeeDetailHeaders>();
  return queryEmployeeDetailWithOptions(request, headers, runtime);
}

QueryGroupCorpListResponse Alibabacloud_BtripOpen20220520::Client::queryGroupCorpListWithOptions(shared_ptr<QueryGroupCorpListRequest> request, shared_ptr<QueryGroupCorpListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryGroupCorpList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/sub_corps/v1/corps/action/corpList"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryGroupCorpListResponse(callApi(params, req, runtime));
}

QueryGroupCorpListResponse Alibabacloud_BtripOpen20220520::Client::queryGroupCorpList(shared_ptr<QueryGroupCorpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryGroupCorpListHeaders> headers = make_shared<QueryGroupCorpListHeaders>();
  return queryGroupCorpListWithOptions(request, headers, runtime);
}

QueryReimbursementOrderResponse Alibabacloud_BtripOpen20220520::Client::queryReimbursementOrderWithOptions(shared_ptr<QueryReimbursementOrderRequest> request, shared_ptr<QueryReimbursementOrderHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reimbOrderNo)) {
    query->insert(pair<string, string>("reimb_order_no", *request->reimbOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subCorpId)) {
    query->insert(pair<string, string>("sub_corp_id", *request->subCorpId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryReimbursementOrder"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/reimbursement/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryReimbursementOrderResponse(callApi(params, req, runtime));
}

QueryReimbursementOrderResponse Alibabacloud_BtripOpen20220520::Client::queryReimbursementOrder(shared_ptr<QueryReimbursementOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<QueryReimbursementOrderHeaders> headers = make_shared<QueryReimbursementOrderHeaders>();
  return queryReimbursementOrderWithOptions(request, headers, runtime);
}

SyncSingleUserResponse Alibabacloud_BtripOpen20220520::Client::syncSingleUserWithOptions(shared_ptr<SyncSingleUserRequest> tmpReq, shared_ptr<SyncSingleUserHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SyncSingleUserShrinkRequest> request = make_shared<SyncSingleUserShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->thirdDepartIdList)) {
    request->thirdDepartIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->thirdDepartIdList, make_shared<string>("third_depart_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->leaveStatus)) {
    body->insert(pair<string, long>("leave_status", *request->leaveStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerUserId)) {
    body->insert(pair<string, string>("manager_user_id", *request->managerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->position)) {
    body->insert(pair<string, string>("position", *request->position));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positionLevel)) {
    body->insert(pair<string, string>("position_level", *request->positionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdDepartIdListShrink)) {
    body->insert(pair<string, string>("third_depart_id_list", *request->thirdDepartIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    body->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncSingleUser"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/single-user/action/sync"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncSingleUserResponse(callApi(params, req, runtime));
}

SyncSingleUserResponse Alibabacloud_BtripOpen20220520::Client::syncSingleUser(shared_ptr<SyncSingleUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncSingleUserHeaders> headers = make_shared<SyncSingleUserHeaders>();
  return syncSingleUserWithOptions(request, headers, runtime);
}

SyncThirdUserMappingResponse Alibabacloud_BtripOpen20220520::Client::syncThirdUserMappingWithOptions(shared_ptr<SyncThirdUserMappingRequest> request, shared_ptr<SyncThirdUserMappingHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdChannelType)) {
    body->insert(pair<string, string>("third_channel_type", *request->thirdChannelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdUserId)) {
    body->insert(pair<string, string>("third_user_id", *request->thirdUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncThirdUserMapping"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/third-users/action/mapping"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncThirdUserMappingResponse(callApi(params, req, runtime));
}

SyncThirdUserMappingResponse Alibabacloud_BtripOpen20220520::Client::syncThirdUserMapping(shared_ptr<SyncThirdUserMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<SyncThirdUserMappingHeaders> headers = make_shared<SyncThirdUserMappingHeaders>();
  return syncThirdUserMappingWithOptions(request, headers, runtime);
}

TBAccountInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::tBAccountInfoQueryWithOptions(shared_ptr<string> userId, shared_ptr<TBAccountInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TBAccountInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/account/v1/tb-accounts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TBAccountInfoQueryResponse(callApi(params, req, runtime));
}

TBAccountInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::tBAccountInfoQuery(shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TBAccountInfoQueryHeaders> headers = make_shared<TBAccountInfoQueryHeaders>();
  return tBAccountInfoQueryWithOptions(userId, headers, runtime);
}

TBAccountUnbindResponse Alibabacloud_BtripOpen20220520::Client::tBAccountUnbindWithOptions(shared_ptr<string> userId, shared_ptr<TBAccountUnbindHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TBAccountUnbind"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/account/v1/tb-accounts/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userId)) + string("/action/unbind"))},
    {"method", boost::any(string("PATCH"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TBAccountUnbindResponse(callApi(params, req, runtime));
}

TBAccountUnbindResponse Alibabacloud_BtripOpen20220520::Client::tBAccountUnbind(shared_ptr<string> userId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TBAccountUnbindHeaders> headers = make_shared<TBAccountUnbindHeaders>();
  return tBAccountUnbindWithOptions(userId, headers, runtime);
}

TicketChangingApplyResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingApplyWithOptions(shared_ptr<TicketChangingApplyRequest> tmpReq, shared_ptr<TicketChangingApplyHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingApplyShrinkRequest> request = make_shared<TicketChangingApplyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TicketChangingApplyRequestModifyFlightInfoList>>(tmpReq->modifyFlightInfoList)) {
    request->modifyFlightInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->modifyFlightInfoList, make_shared<string>("modify_flight_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    body->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyFlightInfoListShrink)) {
    body->insert(pair<string, string>("modify_flight_info_list", *request->modifyFlightInfoListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaItemId)) {
    body->insert(pair<string, string>("ota_item_id", *request->otaItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("session_id", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->whetherRetry)) {
    body->insert(pair<string, bool>("whether_retry", *request->whetherRetry));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingApply"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingApplyResponse(callApi(params, req, runtime));
}

TicketChangingApplyResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingApply(shared_ptr<TicketChangingApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingApplyHeaders> headers = make_shared<TicketChangingApplyHeaders>();
  return ticketChangingApplyWithOptions(request, headers, runtime);
}

TicketChangingCancelResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingCancelWithOptions(shared_ptr<TicketChangingCancelRequest> request, shared_ptr<TicketChangingCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/cancel"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingCancelResponse(callApi(params, req, runtime));
}

TicketChangingCancelResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingCancel(shared_ptr<TicketChangingCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingCancelHeaders> headers = make_shared<TicketChangingCancelHeaders>();
  return ticketChangingCancelWithOptions(request, headers, runtime);
}

TicketChangingDetailResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingDetailWithOptions(shared_ptr<TicketChangingDetailRequest> request, shared_ptr<TicketChangingDetailHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    query->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingDetail"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingDetailResponse(callApi(params, req, runtime));
}

TicketChangingDetailResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingDetail(shared_ptr<TicketChangingDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingDetailHeaders> headers = make_shared<TicketChangingDetailHeaders>();
  return ticketChangingDetailWithOptions(request, headers, runtime);
}

TicketChangingEnquiryResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingEnquiryWithOptions(shared_ptr<TicketChangingEnquiryRequest> request, shared_ptr<TicketChangingEnquiryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    query->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyDepartDate)) {
    query->insert(pair<string, string>("modify_depart_date", *request->modifyDepartDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyFlightNo)) {
    query->insert(pair<string, string>("modify_flight_no", *request->modifyFlightNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("session_id", *request->sessionId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingEnquiry"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/enquiry"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingEnquiryResponse(callApi(params, req, runtime));
}

TicketChangingEnquiryResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingEnquiry(shared_ptr<TicketChangingEnquiryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingEnquiryHeaders> headers = make_shared<TicketChangingEnquiryHeaders>();
  return ticketChangingEnquiryWithOptions(request, headers, runtime);
}

TicketChangingFlightListResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingFlightListWithOptions(shared_ptr<TicketChangingFlightListRequest> tmpReq, shared_ptr<TicketChangingFlightListHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingFlightListShrinkRequest> request = make_shared<TicketChangingFlightListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TicketChangingFlightListRequestTravelerInfoList>>(tmpReq->travelerInfoList)) {
    request->travelerInfoListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->travelerInfoList, make_shared<string>("traveler_info_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrCity)) {
    query->insert(pair<string, string>("arr_city", *request->arrCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depCity)) {
    query->insert(pair<string, string>("dep_city", *request->depCity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    query->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    query->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isVoluntary)) {
    query->insert(pair<string, long>("is_voluntary", *request->isVoluntary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->travelerInfoListShrink)) {
    query->insert(pair<string, string>("traveler_info_list", *request->travelerInfoListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingFlightList"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/huge/dtb-flight/v1/ticket-changing-flight/action/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingFlightListResponse(callApi(params, req, runtime));
}

TicketChangingFlightListResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingFlightList(shared_ptr<TicketChangingFlightListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingFlightListHeaders> headers = make_shared<TicketChangingFlightListHeaders>();
  return ticketChangingFlightListWithOptions(request, headers, runtime);
}

TicketChangingPayResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingPayWithOptions(shared_ptr<TicketChangingPayRequest> tmpReq, shared_ptr<TicketChangingPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TicketChangingPayShrinkRequest> request = make_shared<TicketChangingPayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extra)) {
    request->extraShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extra, make_shared<string>("extra"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->corpPayPrice)) {
    body->insert(pair<string, long>("corp_pay_price", *request->corpPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disOrderId)) {
    body->insert(pair<string, string>("dis_order_id", *request->disOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disSubOrderId)) {
    body->insert(pair<string, string>("dis_sub_order_id", *request->disSubOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraShrink)) {
    body->insert(pair<string, string>("extra", *request->extraShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalPayPrice)) {
    body->insert(pair<string, long>("personal_pay_price", *request->personalPayPrice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalPayPrice)) {
    body->insert(pair<string, long>("total_pay_price", *request->totalPayPrice));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TicketChangingPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/dtb-flight/v1/ticket-changing/action/pay"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TicketChangingPayResponse(callApi(params, req, runtime));
}

TicketChangingPayResponse Alibabacloud_BtripOpen20220520::Client::ticketChangingPay(shared_ptr<TicketChangingPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TicketChangingPayHeaders> headers = make_shared<TicketChangingPayHeaders>();
  return ticketChangingPayWithOptions(request, headers, runtime);
}

TrainApplyChangeResponse Alibabacloud_BtripOpen20220520::Client::trainApplyChangeWithOptions(shared_ptr<TrainApplyChangeRequest> tmpReq, shared_ptr<TrainApplyChangeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainApplyChangeShrinkRequest> request = make_shared<TrainApplyChangeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TrainApplyChangeRequestChangeTrainInfoS>>(tmpReq->changeTrainInfoS)) {
    request->changeTrainInfoSShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->changeTrainInfoS, make_shared<string>("change_train_info_s"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTrainInfoSShrink)) {
    query->insert(pair<string, string>("change_train_info_s", *request->changeTrainInfoSShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptNoSeat)) {
    body->insert(pair<string, string>("accept_no_seat", *request->acceptNoSeat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forceMatch)) {
    body->insert(pair<string, string>("force_match", *request->forceMatch));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPayNow)) {
    body->insert(pair<string, bool>("is_pay_now", *request->isPayNow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outChangeApplyId)) {
    body->insert(pair<string, string>("out_change_apply_id", *request->outChangeApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainApplyChange"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/change/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainApplyChangeResponse(callApi(params, req, runtime));
}

TrainApplyChangeResponse Alibabacloud_BtripOpen20220520::Client::trainApplyChange(shared_ptr<TrainApplyChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainApplyChangeHeaders> headers = make_shared<TrainApplyChangeHeaders>();
  return trainApplyChangeWithOptions(request, headers, runtime);
}

TrainApplyRefundResponse Alibabacloud_BtripOpen20220520::Client::trainApplyRefundWithOptions(shared_ptr<TrainApplyRefundRequest> tmpReq, shared_ptr<TrainApplyRefundHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainApplyRefundShrinkRequest> request = make_shared<TrainApplyRefundShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TrainApplyRefundRequestRefundTrainInfos>>(tmpReq->refundTrainInfos)) {
    request->refundTrainInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundTrainInfos, make_shared<string>("refund_train_infos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outRefundId)) {
    body->insert(pair<string, string>("out_refund_id", *request->outRefundId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundTrainInfosShrink)) {
    body->insert(pair<string, string>("refund_train_infos", *request->refundTrainInfosShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainApplyRefund"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/refund/apply"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainApplyRefundResponse(callApi(params, req, runtime));
}

TrainApplyRefundResponse Alibabacloud_BtripOpen20220520::Client::trainApplyRefund(shared_ptr<TrainApplyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainApplyRefundHeaders> headers = make_shared<TrainApplyRefundHeaders>();
  return trainApplyRefundWithOptions(request, headers, runtime);
}

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQueryWithOptions(shared_ptr<TrainBillSettlementQueryRequest> request, shared_ptr<TrainBillSettlementQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billBatch)) {
    query->insert(pair<string, string>("bill_batch", *request->billBatch));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodEnd)) {
    query->insert(pair<string, string>("period_end", *request->periodEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodStart)) {
    query->insert(pair<string, string>("period_start", *request->periodStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollId)) {
    query->insert(pair<string, string>("scroll_id", *request->scrollId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->scrollMod)) {
    query->insert(pair<string, bool>("scroll_mod", *request->scrollMod));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainBillSettlementQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/bill-settlement"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainBillSettlementQueryResponse(callApi(params, req, runtime));
}

TrainBillSettlementQueryResponse Alibabacloud_BtripOpen20220520::Client::trainBillSettlementQuery(shared_ptr<TrainBillSettlementQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainBillSettlementQueryHeaders> headers = make_shared<TrainBillSettlementQueryHeaders>();
  return trainBillSettlementQueryWithOptions(request, headers, runtime);
}

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQueryWithOptions(shared_ptr<TrainExceedApplyQueryRequest> request, shared_ptr<TrainExceedApplyQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainExceedApplyQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/train-exceed"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainExceedApplyQueryResponse(callApi(params, req, runtime));
}

TrainExceedApplyQueryResponse Alibabacloud_BtripOpen20220520::Client::trainExceedApplyQuery(shared_ptr<TrainExceedApplyQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainExceedApplyQueryHeaders> headers = make_shared<TrainExceedApplyQueryHeaders>();
  return trainExceedApplyQueryWithOptions(request, headers, runtime);
}

TrainFeeCalculateChangeResponse Alibabacloud_BtripOpen20220520::Client::trainFeeCalculateChangeWithOptions(shared_ptr<TrainFeeCalculateChangeRequest> tmpReq, shared_ptr<TrainFeeCalculateChangeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainFeeCalculateChangeShrinkRequest> request = make_shared<TrainFeeCalculateChangeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TrainFeeCalculateChangeRequestChangeTrainDetails>>(tmpReq->changeTrainDetails)) {
    request->changeTrainDetailsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->changeTrainDetails, make_shared<string>("change_train_details"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTrainDetailsShrink)) {
    body->insert(pair<string, string>("change_train_details", *request->changeTrainDetailsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->distributeOrderId)) {
    body->insert(pair<string, string>("distribute_order_id", *request->distributeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainFeeCalculateChange"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/change/fee"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainFeeCalculateChangeResponse(callApi(params, req, runtime));
}

TrainFeeCalculateChangeResponse Alibabacloud_BtripOpen20220520::Client::trainFeeCalculateChange(shared_ptr<TrainFeeCalculateChangeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainFeeCalculateChangeHeaders> headers = make_shared<TrainFeeCalculateChangeHeaders>();
  return trainFeeCalculateChangeWithOptions(request, headers, runtime);
}

TrainFeeCalculateRefundResponse Alibabacloud_BtripOpen20220520::Client::trainFeeCalculateRefundWithOptions(shared_ptr<TrainFeeCalculateRefundRequest> tmpReq, shared_ptr<TrainFeeCalculateRefundHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainFeeCalculateRefundShrinkRequest> request = make_shared<TrainFeeCalculateRefundShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TrainFeeCalculateRefundRequestRefundTrainInfos>>(tmpReq->refundTrainInfos)) {
    request->refundTrainInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->refundTrainInfos, make_shared<string>("refund_train_infos"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->distributeOrderId)) {
    body->insert(pair<string, string>("distribute_order_id", *request->distributeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->refundTrainInfosShrink)) {
    body->insert(pair<string, string>("refund_train_infos", *request->refundTrainInfosShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainFeeCalculateRefund"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/refund/fee"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainFeeCalculateRefundResponse(callApi(params, req, runtime));
}

TrainFeeCalculateRefundResponse Alibabacloud_BtripOpen20220520::Client::trainFeeCalculateRefund(shared_ptr<TrainFeeCalculateRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainFeeCalculateRefundHeaders> headers = make_shared<TrainFeeCalculateRefundHeaders>();
  return trainFeeCalculateRefundWithOptions(request, headers, runtime);
}

TrainNoInfoSearchResponse Alibabacloud_BtripOpen20220520::Client::trainNoInfoSearchWithOptions(shared_ptr<TrainNoInfoSearchRequest> request, shared_ptr<TrainNoInfoSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrLocation)) {
    body->insert(pair<string, string>("arr_location", *request->arrLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    body->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depLocation)) {
    body->insert(pair<string, string>("dep_location", *request->depLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lineKey)) {
    body->insert(pair<string, string>("line_key", *request->lineKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->middleDate)) {
    body->insert(pair<string, string>("middle_date", *request->middleDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->middleStation)) {
    body->insert(pair<string, string>("middle_station", *request->middleStation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainNo)) {
    body->insert(pair<string, string>("train_no", *request->trainNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainNoInfoSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/search/info"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainNoInfoSearchResponse(callApi(params, req, runtime));
}

TrainNoInfoSearchResponse Alibabacloud_BtripOpen20220520::Client::trainNoInfoSearch(shared_ptr<TrainNoInfoSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainNoInfoSearchHeaders> headers = make_shared<TrainNoInfoSearchHeaders>();
  return trainNoInfoSearchWithOptions(request, headers, runtime);
}

TrainNoListSearchResponse Alibabacloud_BtripOpen20220520::Client::trainNoListSearchWithOptions(shared_ptr<TrainNoListSearchRequest> tmpReq, shared_ptr<TrainNoListSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainNoListSearchShrinkRequest> request = make_shared<TrainNoListSearchShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<TrainNoListSearchRequestOption>(tmpReq->option)) {
    request->optionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->option, make_shared<string>("option"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrLocation)) {
    body->insert(pair<string, string>("arr_location", *request->arrLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depDate)) {
    body->insert(pair<string, string>("dep_date", *request->depDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depLocation)) {
    body->insert(pair<string, string>("dep_location", *request->depLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optionShrink)) {
    body->insert(pair<string, string>("option", *request->optionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainNoListSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/search/list"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainNoListSearchResponse(callApi(params, req, runtime));
}

TrainNoListSearchResponse Alibabacloud_BtripOpen20220520::Client::trainNoListSearch(shared_ptr<TrainNoListSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainNoListSearchHeaders> headers = make_shared<TrainNoListSearchHeaders>();
  return trainNoListSearchWithOptions(request, headers, runtime);
}

TrainOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::trainOrderCancelWithOptions(shared_ptr<TrainOrderCancelRequest> request, shared_ptr<TrainOrderCancelHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOrderId)) {
    body->insert(pair<string, string>("change_order_id", *request->changeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outChangeOrderId)) {
    body->insert(pair<string, string>("out_change_order_id", *request->outChangeOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderCancel"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order/cancel"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderCancelResponse(callApi(params, req, runtime));
}

TrainOrderCancelResponse Alibabacloud_BtripOpen20220520::Client::trainOrderCancel(shared_ptr<TrainOrderCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderCancelHeaders> headers = make_shared<TrainOrderCancelHeaders>();
  return trainOrderCancelWithOptions(request, headers, runtime);
}

TrainOrderChangeConfirmResponse Alibabacloud_BtripOpen20220520::Client::trainOrderChangeConfirmWithOptions(shared_ptr<TrainOrderChangeConfirmRequest> request, shared_ptr<TrainOrderChangeConfirmHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->changeApplyId)) {
    body->insert(pair<string, string>("change_apply_id", *request->changeApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeSettleAmount)) {
    body->insert(pair<string, long>("change_settle_amount", *request->changeSettleAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outChangeApplyId)) {
    body->insert(pair<string, string>("out_change_apply_id", *request->outChangeApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderChangeConfirm"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/change/confirm"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderChangeConfirmResponse(callApi(params, req, runtime));
}

TrainOrderChangeConfirmResponse Alibabacloud_BtripOpen20220520::Client::trainOrderChangeConfirm(shared_ptr<TrainOrderChangeConfirmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderChangeConfirmHeaders> headers = make_shared<TrainOrderChangeConfirmHeaders>();
  return trainOrderChangeConfirmWithOptions(request, headers, runtime);
}

TrainOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::trainOrderCreateWithOptions(shared_ptr<TrainOrderCreateRequest> tmpReq, shared_ptr<TrainOrderCreateHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TrainOrderCreateShrinkRequest> request = make_shared<TrainOrderCreateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<TrainOrderCreateRequestBookTrainInfos>>(tmpReq->bookTrainInfos)) {
    request->bookTrainInfosShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->bookTrainInfos, make_shared<string>("book_train_infos"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TrainOrderCreateRequestBusinessInfo>(tmpReq->businessInfo)) {
    request->businessInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->businessInfo, make_shared<string>("business_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<TrainOrderCreateRequestContactInfo>(tmpReq->contactInfo)) {
    request->contactInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contactInfo, make_shared<string>("contact_info"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TrainOrderCreateRequestPassengerOpenInfoS>>(tmpReq->passengerOpenInfoS)) {
    request->passengerOpenInfoSShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->passengerOpenInfoS, make_shared<string>("passenger_open_info_s"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->acceptNoSeat)) {
    body->insert(pair<string, string>("accept_no_seat", *request->acceptNoSeat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bookTrainInfosShrink)) {
    body->insert(pair<string, string>("book_train_infos", *request->bookTrainInfosShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserId)) {
    body->insert(pair<string, string>("btrip_user_id", *request->btripUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->btripUserName)) {
    body->insert(pair<string, string>("btrip_user_name", *request->btripUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInfoShrink)) {
    body->insert(pair<string, string>("business_info", *request->businessInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactInfoShrink)) {
    body->insert(pair<string, string>("contact_info", *request->contactInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forceMatch)) {
    body->insert(pair<string, string>("force_match", *request->forceMatch));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isPayNow)) {
    body->insert(pair<string, bool>("is_pay_now", *request->isPayNow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passengerOpenInfoSShrink)) {
    body->insert(pair<string, string>("passenger_open_info_s", *request->passengerOpenInfoSShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderCreate"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order/create"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderCreateResponse(callApi(params, req, runtime));
}

TrainOrderCreateResponse Alibabacloud_BtripOpen20220520::Client::trainOrderCreate(shared_ptr<TrainOrderCreateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderCreateHeaders> headers = make_shared<TrainOrderCreateHeaders>();
  return trainOrderCreateWithOptions(request, headers, runtime);
}

TrainOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderDetailQueryWithOptions(shared_ptr<TrainOrderDetailQueryRequest> request, shared_ptr<TrainOrderDetailQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order/query"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderDetailQueryResponse(callApi(params, req, runtime));
}

TrainOrderDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderDetailQuery(shared_ptr<TrainOrderDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderDetailQueryHeaders> headers = make_shared<TrainOrderDetailQueryHeaders>();
  return trainOrderDetailQueryWithOptions(request, headers, runtime);
}

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQueryWithOptions(shared_ptr<TrainOrderListQueryRequest> request, shared_ptr<TrainOrderListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->allApply)) {
    query->insert(pair<string, bool>("all_apply", *request->allApply));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("apply_id", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->departId)) {
    query->insert(pair<string, string>("depart_id", *request->departId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("end_time", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("start_time", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdpartApplyId)) {
    query->insert(pair<string, string>("thirdpart_apply_id", *request->thirdpartApplyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateEndTime)) {
    query->insert(pair<string, string>("update_end_time", *request->updateEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateStartTime)) {
    query->insert(pair<string, string>("update_start_time", *request->updateStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order-list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderListQueryResponse(callApi(params, req, runtime));
}

TrainOrderListQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderListQuery(shared_ptr<TrainOrderListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderListQueryHeaders> headers = make_shared<TrainOrderListQueryHeaders>();
  return trainOrderListQueryWithOptions(request, headers, runtime);
}

TrainOrderPayResponse Alibabacloud_BtripOpen20220520::Client::trainOrderPayWithOptions(shared_ptr<TrainOrderPayRequest> request, shared_ptr<TrainOrderPayHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    body->insert(pair<string, string>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outOrderId)) {
    body->insert(pair<string, string>("out_order_id", *request->outOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payAmount)) {
    body->insert(pair<string, long>("pay_amount", *request->payAmount));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderPay"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order/pay"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderPayResponse(callApi(params, req, runtime));
}

TrainOrderPayResponse Alibabacloud_BtripOpen20220520::Client::trainOrderPay(shared_ptr<TrainOrderPayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderPayHeaders> headers = make_shared<TrainOrderPayHeaders>();
  return trainOrderPayWithOptions(request, headers, runtime);
}

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQueryWithOptions(shared_ptr<TrainOrderQueryRequest> request, shared_ptr<TrainOrderQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderQueryResponse(callApi(params, req, runtime));
}

TrainOrderQueryResponse Alibabacloud_BtripOpen20220520::Client::trainOrderQuery(shared_ptr<TrainOrderQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderQueryHeaders> headers = make_shared<TrainOrderQueryHeaders>();
  return trainOrderQueryWithOptions(request, headers, runtime);
}

TrainOrderQueryV2Response Alibabacloud_BtripOpen20220520::Client::trainOrderQueryV2WithOptions(shared_ptr<TrainOrderQueryV2Request> request, shared_ptr<TrainOrderQueryV2Headers> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("order_id", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainOrderQueryV2"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v2/order"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainOrderQueryV2Response(callApi(params, req, runtime));
}

TrainOrderQueryV2Response Alibabacloud_BtripOpen20220520::Client::trainOrderQueryV2(shared_ptr<TrainOrderQueryV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainOrderQueryV2Headers> headers = make_shared<TrainOrderQueryV2Headers>();
  return trainOrderQueryV2WithOptions(request, headers, runtime);
}

TrainStationSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStationSearchWithOptions(shared_ptr<TrainStationSearchRequest> request, shared_ptr<TrainStationSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("keyword", *request->keyword));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainStationSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/city/v1/train"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainStationSearchResponse(callApi(params, req, runtime));
}

TrainStationSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStationSearch(shared_ptr<TrainStationSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainStationSearchHeaders> headers = make_shared<TrainStationSearchHeaders>();
  return trainStationSearchWithOptions(request, headers, runtime);
}

TrainStopoverSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStopoverSearchWithOptions(shared_ptr<TrainStopoverSearchRequest> request, shared_ptr<TrainStopoverSearchHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arrStation)) {
    body->insert(pair<string, string>("arr_station", *request->arrStation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->depStation)) {
    body->insert(pair<string, string>("dep_station", *request->depStation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainDate)) {
    body->insert(pair<string, string>("train_date", *request->trainDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trainNo)) {
    body->insert(pair<string, string>("train_no", *request->trainNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainStopoverSearch"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/train/v1/search/stopover"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainStopoverSearchResponse(callApi(params, req, runtime));
}

TrainStopoverSearchResponse Alibabacloud_BtripOpen20220520::Client::trainStopoverSearch(shared_ptr<TrainStopoverSearchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainStopoverSearchHeaders> headers = make_shared<TrainStopoverSearchHeaders>();
  return trainStopoverSearchWithOptions(request, headers, runtime);
}

TrainTicketScanQueryResponse Alibabacloud_BtripOpen20220520::Client::trainTicketScanQueryWithOptions(shared_ptr<TrainTicketScanQueryRequest> request, shared_ptr<TrainTicketScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNumber)) {
    query->insert(pair<string, string>("serial_number", *request->serialNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ticketNo)) {
    query->insert(pair<string, string>("ticket_no", *request->ticketNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TrainTicketScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/train-ticket"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TrainTicketScanQueryResponse(callApi(params, req, runtime));
}

TrainTicketScanQueryResponse Alibabacloud_BtripOpen20220520::Client::trainTicketScanQuery(shared_ptr<TrainTicketScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TrainTicketScanQueryHeaders> headers = make_shared<TrainTicketScanQueryHeaders>();
  return trainTicketScanQueryWithOptions(request, headers, runtime);
}

TravelStandardListQueryResponse Alibabacloud_BtripOpen20220520::Client::travelStandardListQueryWithOptions(shared_ptr<TravelStandardListQueryRequest> request, shared_ptr<TravelStandardListQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fromGroup)) {
    query->insert(pair<string, bool>("from_group", *request->fromGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("rule_name", *request->ruleName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TravelStandardListQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/travel-manage/v1/standards/list"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TravelStandardListQueryResponse(callApi(params, req, runtime));
}

TravelStandardListQueryResponse Alibabacloud_BtripOpen20220520::Client::travelStandardListQuery(shared_ptr<TravelStandardListQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TravelStandardListQueryHeaders> headers = make_shared<TravelStandardListQueryHeaders>();
  return travelStandardListQueryWithOptions(request, headers, runtime);
}

TravelStandardQueryResponse Alibabacloud_BtripOpen20220520::Client::travelStandardQueryWithOptions(shared_ptr<TravelStandardQueryRequest> tmpReq, shared_ptr<TravelStandardQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TravelStandardQueryShrinkRequest> request = make_shared<TravelStandardQueryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->serviceTypeList)) {
    request->serviceTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->serviceTypeList, make_shared<string>("service_type_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fromGroup)) {
    query->insert(pair<string, bool>("from_group", *request->fromGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleCode)) {
    query->insert(pair<string, long>("rule_code", *request->ruleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceTypeListShrink)) {
    query->insert(pair<string, string>("service_type_list", *request->serviceTypeListShrink));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TravelStandardQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/travel-manage/v1/standards/detail"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TravelStandardQueryResponse(callApi(params, req, runtime));
}

TravelStandardQueryResponse Alibabacloud_BtripOpen20220520::Client::travelStandardQuery(shared_ptr<TravelStandardQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TravelStandardQueryHeaders> headers = make_shared<TravelStandardQueryHeaders>();
  return travelStandardQueryWithOptions(request, headers, runtime);
}

TripBusinessInstanceQueryResponse Alibabacloud_BtripOpen20220520::Client::tripBusinessInstanceQueryWithOptions(shared_ptr<TripBusinessInstanceQueryRequest> request, shared_ptr<TripBusinessInstanceQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdBusinessId)) {
    query->insert(pair<string, string>("third_business_id", *request->thirdBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TripBusinessInstanceQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/business"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TripBusinessInstanceQueryResponse(callApi(params, req, runtime));
}

TripBusinessInstanceQueryResponse Alibabacloud_BtripOpen20220520::Client::tripBusinessInstanceQuery(shared_ptr<TripBusinessInstanceQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TripBusinessInstanceQueryHeaders> headers = make_shared<TripBusinessInstanceQueryHeaders>();
  return tripBusinessInstanceQueryWithOptions(request, headers, runtime);
}

TripCCInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::tripCCInfoQueryWithOptions(shared_ptr<TripCCInfoQueryRequest> request, shared_ptr<TripCCInfoQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeId)) {
    query->insert(pair<string, string>("node_id", *request->nodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdBusinessId)) {
    query->insert(pair<string, string>("third_business_id", *request->thirdBusinessId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TripCCInfoQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/cc"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TripCCInfoQueryResponse(callApi(params, req, runtime));
}

TripCCInfoQueryResponse Alibabacloud_BtripOpen20220520::Client::tripCCInfoQuery(shared_ptr<TripCCInfoQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TripCCInfoQueryHeaders> headers = make_shared<TripCCInfoQueryHeaders>();
  return tripCCInfoQueryWithOptions(request, headers, runtime);
}

TripTaskQueryResponse Alibabacloud_BtripOpen20220520::Client::tripTaskQueryWithOptions(shared_ptr<TripTaskQueryRequest> request, shared_ptr<TripTaskQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessInstanceId)) {
    query->insert(pair<string, string>("business_instance_id", *request->businessInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdBusinessId)) {
    query->insert(pair<string, string>("third_business_id", *request->thirdBusinessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("user_name", *request->userName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TripTaskQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/apply/v1/tasks"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TripTaskQueryResponse(callApi(params, req, runtime));
}

TripTaskQueryResponse Alibabacloud_BtripOpen20220520::Client::tripTaskQuery(shared_ptr<TripTaskQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<TripTaskQueryHeaders> headers = make_shared<TripTaskQueryHeaders>();
  return tripTaskQueryWithOptions(request, headers, runtime);
}

UpdateCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::updateCustomRoleWithOptions(shared_ptr<UpdateCustomRoleRequest> request, shared_ptr<UpdateCustomRoleHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->roleId)) {
    body->insert(pair<string, string>("role_id", *request->roleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    body->insert(pair<string, string>("role_name", *request->roleName));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomRole"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/role/v1/customRoles/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomRoleResponse(callApi(params, req, runtime));
}

UpdateCustomRoleResponse Alibabacloud_BtripOpen20220520::Client::updateCustomRole(shared_ptr<UpdateCustomRoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateCustomRoleHeaders> headers = make_shared<UpdateCustomRoleHeaders>();
  return updateCustomRoleWithOptions(request, headers, runtime);
}

UpdateDepartmentResponse Alibabacloud_BtripOpen20220520::Client::updateDepartmentWithOptions(shared_ptr<UpdateDepartmentRequest> tmpReq, shared_ptr<UpdateDepartmentHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateDepartmentShrinkRequest> request = make_shared<UpdateDepartmentShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->managerEmployeeIdList)) {
    request->managerEmployeeIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->managerEmployeeIdList, make_shared<string>("manager_employee_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deptName)) {
    body->insert(pair<string, string>("dept_name", *request->deptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerEmployeeIdListShrink)) {
    body->insert(pair<string, string>("manager_employee_id_list", *request->managerEmployeeIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptId)) {
    body->insert(pair<string, string>("out_dept_id", *request->outDeptId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptPid)) {
    body->insert(pair<string, string>("out_dept_pid", *request->outDeptPid));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDepartment"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/department/v2/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDepartmentResponse(callApi(params, req, runtime));
}

UpdateDepartmentResponse Alibabacloud_BtripOpen20220520::Client::updateDepartment(shared_ptr<UpdateDepartmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateDepartmentHeaders> headers = make_shared<UpdateDepartmentHeaders>();
  return updateDepartmentWithOptions(request, headers, runtime);
}

UpdateEmployeeResponse Alibabacloud_BtripOpen20220520::Client::updateEmployeeWithOptions(shared_ptr<UpdateEmployeeRequest> tmpReq, shared_ptr<UpdateEmployeeHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEmployeeShrinkRequest> request = make_shared<UpdateEmployeeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->baseCityCodeList)) {
    request->baseCityCodeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->baseCityCodeList, make_shared<string>("base_city_code_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEmployeeRequestBaseLocationList>>(tmpReq->baseLocationList)) {
    request->baseLocationListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->baseLocationList, make_shared<string>("base_location_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEmployeeRequestCertList>>(tmpReq->certList)) {
    request->certListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->certList, make_shared<string>("cert_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->customRoleCodeList)) {
    request->customRoleCodeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->customRoleCodeList, make_shared<string>("custom_role_code_list"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->outDeptIdList)) {
    request->outDeptIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outDeptIdList, make_shared<string>("out_dept_id_list"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->attribute)) {
    body->insert(pair<string, string>("attribute", *request->attribute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatar)) {
    body->insert(pair<string, string>("avatar", *request->avatar));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baseCityCodeListShrink)) {
    body->insert(pair<string, string>("base_city_code_list", *request->baseCityCodeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->baseLocationListShrink)) {
    body->insert(pair<string, string>("base_location_list", *request->baseLocationListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    body->insert(pair<string, string>("birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certListShrink)) {
    body->insert(pair<string, string>("cert_list", *request->certListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customRoleCodeListShrink)) {
    body->insert(pair<string, string>("custom_role_code_list", *request->customRoleCodeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    body->insert(pair<string, string>("gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAdmin)) {
    body->insert(pair<string, bool>("is_admin", *request->isAdmin));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBoss)) {
    body->insert(pair<string, bool>("is_boss", *request->isBoss));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isDeptLeader)) {
    body->insert(pair<string, bool>("is_dept_leader", *request->isDeptLeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobNo)) {
    body->insert(pair<string, string>("job_no", *request->jobNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->managerUserId)) {
    body->insert(pair<string, string>("manager_user_id", *request->managerUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outDeptIdListShrink)) {
    body->insert(pair<string, string>("out_dept_id_list", *request->outDeptIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->positionLevel)) {
    body->insert(pair<string, string>("position_level", *request->positionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realName)) {
    body->insert(pair<string, string>("real_name", *request->realName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->realNameEn)) {
    body->insert(pair<string, string>("real_name_en", *request->realNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userNick)) {
    body->insert(pair<string, string>("user_nick", *request->userNick));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEmployee"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/employee/v2/update"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEmployeeResponse(callApi(params, req, runtime));
}

UpdateEmployeeResponse Alibabacloud_BtripOpen20220520::Client::updateEmployee(shared_ptr<UpdateEmployeeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateEmployeeHeaders> headers = make_shared<UpdateEmployeeHeaders>();
  return updateEmployeeWithOptions(request, headers, runtime);
}

UpdateEmployeeLeaveStatusResponse Alibabacloud_BtripOpen20220520::Client::updateEmployeeLeaveStatusWithOptions(shared_ptr<UpdateEmployeeLeaveStatusRequest> request, shared_ptr<UpdateEmployeeLeaveStatusHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->isLeave)) {
    body->insert(pair<string, bool>("is_leave", *request->isLeave));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("user_id", *request->userId));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEmployeeLeaveStatus"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/employee/v2/updateLeaveStatus"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEmployeeLeaveStatusResponse(callApi(params, req, runtime));
}

UpdateEmployeeLeaveStatusResponse Alibabacloud_BtripOpen20220520::Client::updateEmployeeLeaveStatus(shared_ptr<UpdateEmployeeLeaveStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateEmployeeLeaveStatusHeaders> headers = make_shared<UpdateEmployeeLeaveStatusHeaders>();
  return updateEmployeeLeaveStatusWithOptions(request, headers, runtime);
}

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQueryWithOptions(shared_ptr<UserQueryRequest> request, shared_ptr<UserQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->modifiedTimeGreaterOrEqualThan)) {
    query->insert(pair<string, string>("modified_time_greater_or_equal_than", *request->modifiedTimeGreaterOrEqualThan));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageToken)) {
    query->insert(pair<string, string>("page_token", *request->pageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thirdPartJobNo)) {
    query->insert(pair<string, string>("third_part_job_no", *request->thirdPartJobNo));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UserQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/user/v1/user"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UserQueryResponse(callApi(params, req, runtime));
}

UserQueryResponse Alibabacloud_BtripOpen20220520::Client::userQuery(shared_ptr<UserQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UserQueryHeaders> headers = make_shared<UserQueryHeaders>();
  return userQueryWithOptions(request, headers, runtime);
}

VatInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::vatInvoiceScanQueryWithOptions(shared_ptr<VatInvoiceScanQueryRequest> request, shared_ptr<VatInvoiceScanQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->billId)) {
    query->insert(pair<string, long>("bill_id", *request->billId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->invoiceSubTaskId)) {
    query->insert(pair<string, long>("invoice_sub_task_id", *request->invoiceSubTaskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("page_no", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("page_size", *request->pageSize));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VatInvoiceScanQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/scan/v1/vat-invoice"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VatInvoiceScanQueryResponse(callApi(params, req, runtime));
}

VatInvoiceScanQueryResponse Alibabacloud_BtripOpen20220520::Client::vatInvoiceScanQuery(shared_ptr<VatInvoiceScanQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<VatInvoiceScanQueryHeaders> headers = make_shared<VatInvoiceScanQueryHeaders>();
  return vatInvoiceScanQueryWithOptions(request, headers, runtime);
}

WaitApplyInvoiceTaskDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::waitApplyInvoiceTaskDetailQueryWithOptions(shared_ptr<WaitApplyInvoiceTaskDetailQueryRequest> request, shared_ptr<WaitApplyInvoiceTaskDetailQueryHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billDate)) {
    query->insert(pair<string, string>("bill_date", *request->billDate));
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xAcsBtripSoCorpToken)) {
    realHeaders->insert(pair<string, string>("x-acs-btrip-so-corp-token", Darabonba_Util::Client::toJSONString(headers->xAcsBtripSoCorpToken)));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WaitApplyInvoiceTaskDetailQuery"))},
    {"version", boost::any(string("2022-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/invoice/v1/wait-apply-task"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WaitApplyInvoiceTaskDetailQueryResponse(callApi(params, req, runtime));
}

WaitApplyInvoiceTaskDetailQueryResponse Alibabacloud_BtripOpen20220520::Client::waitApplyInvoiceTaskDetailQuery(shared_ptr<WaitApplyInvoiceTaskDetailQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<WaitApplyInvoiceTaskDetailQueryHeaders> headers = make_shared<WaitApplyInvoiceTaskDetailQueryHeaders>();
  return waitApplyInvoiceTaskDetailQueryWithOptions(request, headers, runtime);
}

