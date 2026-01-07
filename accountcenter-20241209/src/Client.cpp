#include <darabonba/Core.hpp>
#include <alibabacloud/AccountCenter20241209.hpp>
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
using namespace AlibabaCloud::AccountCenter20241209::Models;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{

AlibabaCloud::AccountCenter20241209::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("accountcenter", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 添加私有联系人
 *
 * @param request AccountContactAddRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountContactAddResponse
 */
AccountContactAddResponse Client::accountContactAddWithOptions(const AccountContactAddRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAsyncEmailVerify()) {
    body["AsyncEmailVerify"] = request.getAsyncEmailVerify();
  }

  if (!!request.hasAsyncMobileVerify()) {
    body["AsyncMobileVerify"] = request.getAsyncMobileVerify();
  }

  if (!!request.hasContactEmail()) {
    body["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactMobile()) {
    body["ContactMobile"] = request.getContactMobile();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPosition()) {
    body["ContactPosition"] = request.getContactPosition();
  }

  if (!!request.hasEmailCode()) {
    body["EmailCode"] = request.getEmailCode();
  }

  if (!!request.hasMobileCode()) {
    body["MobileCode"] = request.getMobileCode();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AccountContactAdd"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountContactAddResponse>();
}

/**
 * @summary 添加私有联系人
 *
 * @param request AccountContactAddRequest
 * @return AccountContactAddResponse
 */
AccountContactAddResponse Client::accountContactAdd(const AccountContactAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountContactAddWithOptions(request, runtime);
}

/**
 * @summary 删除私有联系人
 *
 * @param request AccountContactDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountContactDeleteResponse
 */
AccountContactDeleteResponse Client::accountContactDeleteWithOptions(const AccountContactDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AccountContactDelete"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountContactDeleteResponse>();
}

/**
 * @summary 删除私有联系人
 *
 * @param request AccountContactDeleteRequest
 * @return AccountContactDeleteResponse
 */
AccountContactDeleteResponse Client::accountContactDelete(const AccountContactDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountContactDeleteWithOptions(request, runtime);
}

/**
 * @summary 修改私有联系人
 *
 * @param request AccountContactEditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountContactEditResponse
 */
AccountContactEditResponse Client::accountContactEditWithOptions(const AccountContactEditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAsyncEmailVerify()) {
    body["AsyncEmailVerify"] = request.getAsyncEmailVerify();
  }

  if (!!request.hasAsyncMobileVerify()) {
    body["AsyncMobileVerify"] = request.getAsyncMobileVerify();
  }

  if (!!request.hasContactEmail()) {
    body["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactMobile()) {
    body["ContactMobile"] = request.getContactMobile();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPosition()) {
    body["ContactPosition"] = request.getContactPosition();
  }

  if (!!request.hasEmailCode()) {
    body["EmailCode"] = request.getEmailCode();
  }

  if (!!request.hasMobileCode()) {
    body["MobileCode"] = request.getMobileCode();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AccountContactEdit"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountContactEditResponse>();
}

/**
 * @summary 修改私有联系人
 *
 * @param request AccountContactEditRequest
 * @return AccountContactEditResponse
 */
AccountContactEditResponse Client::accountContactEdit(const AccountContactEditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountContactEditWithOptions(request, runtime);
}

/**
 * @summary 查询联系人详情
 *
 * @param request AccountContactQueryDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountContactQueryDetailResponse
 */
AccountContactQueryDetailResponse Client::accountContactQueryDetailWithOptions(const AccountContactQueryDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AccountContactQueryDetail"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountContactQueryDetailResponse>();
}

/**
 * @summary 查询联系人详情
 *
 * @param request AccountContactQueryDetailRequest
 * @return AccountContactQueryDetailResponse
 */
AccountContactQueryDetailResponse Client::accountContactQueryDetail(const AccountContactQueryDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountContactQueryDetailWithOptions(request, runtime);
}

/**
 * @summary 查询联系人列表
 *
 * @param request AccountContactQueryPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountContactQueryPageListResponse
 */
AccountContactQueryPageListResponse Client::accountContactQueryPageListWithOptions(const AccountContactQueryPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasShowCompleteInfo()) {
    query["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateContact()) {
    body["PrivateContact"] = request.getPrivateContact();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AccountContactQueryPageList"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountContactQueryPageListResponse>();
}

/**
 * @summary 查询联系人列表
 *
 * @param request AccountContactQueryPageListRequest
 * @return AccountContactQueryPageListResponse
 */
AccountContactQueryPageListResponse Client::accountContactQueryPageList(const AccountContactQueryPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountContactQueryPageListWithOptions(request, runtime);
}

/**
 * @summary 修改登录密码
 *
 * @param request EnterpriseAccountChangeLoginPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountChangeLoginPasswordResponse
 */
EnterpriseAccountChangeLoginPasswordResponse Client::enterpriseAccountChangeLoginPasswordWithOptions(const EnterpriseAccountChangeLoginPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptPassword()) {
    query["EncryptPassword"] = request.getEncryptPassword();
  }

  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountChangeLoginPassword"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountChangeLoginPasswordResponse>();
}

/**
 * @summary 修改登录密码
 *
 * @param request EnterpriseAccountChangeLoginPasswordRequest
 * @return EnterpriseAccountChangeLoginPasswordResponse
 */
EnterpriseAccountChangeLoginPasswordResponse Client::enterpriseAccountChangeLoginPassword(const EnterpriseAccountChangeLoginPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountChangeLoginPasswordWithOptions(request, runtime);
}

/**
 * @summary 修改安全邮箱
 *
 * @param request EnterpriseAccountChangeSecurityEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountChangeSecurityEmailResponse
 */
EnterpriseAccountChangeSecurityEmailResponse Client::enterpriseAccountChangeSecurityEmailWithOptions(const EnterpriseAccountChangeSecurityEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSecurityEmail()) {
    query["SecurityEmail"] = request.getSecurityEmail();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.getVerifyCode();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountChangeSecurityEmail"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountChangeSecurityEmailResponse>();
}

/**
 * @summary 修改安全邮箱
 *
 * @param request EnterpriseAccountChangeSecurityEmailRequest
 * @return EnterpriseAccountChangeSecurityEmailResponse
 */
EnterpriseAccountChangeSecurityEmailResponse Client::enterpriseAccountChangeSecurityEmail(const EnterpriseAccountChangeSecurityEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountChangeSecurityEmailWithOptions(request, runtime);
}

/**
 * @summary 修改成员账号安全手机号
 *
 * @param request EnterpriseAccountChangeSecurityMobileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountChangeSecurityMobileResponse
 */
EnterpriseAccountChangeSecurityMobileResponse Client::enterpriseAccountChangeSecurityMobileWithOptions(const EnterpriseAccountChangeSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasNewMobile()) {
    query["NewMobile"] = request.getNewMobile();
  }

  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasVerificationCode()) {
    query["VerificationCode"] = request.getVerificationCode();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountChangeSecurityMobile"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountChangeSecurityMobileResponse>();
}

/**
 * @summary 修改成员账号安全手机号
 *
 * @param request EnterpriseAccountChangeSecurityMobileRequest
 * @return EnterpriseAccountChangeSecurityMobileResponse
 */
EnterpriseAccountChangeSecurityMobileResponse Client::enterpriseAccountChangeSecurityMobile(const EnterpriseAccountChangeSecurityMobileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountChangeSecurityMobileWithOptions(request, runtime);
}

/**
 * @summary 查询纳管账号授权角色
 *
 * @param request EnterpriseAccountQueryAccountGrantedRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountQueryAccountGrantedRolesResponse
 */
EnterpriseAccountQueryAccountGrantedRolesResponse Client::enterpriseAccountQueryAccountGrantedRolesWithOptions(const EnterpriseAccountQueryAccountGrantedRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasIsOpenApi()) {
    body["IsOpenApi"] = request.getIsOpenApi();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPk()) {
    body["Pk"] = request.getPk();
  }

  if (!!request.hasShowCompleteInfo()) {
    body["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseAccountQueryAccountGrantedRoles"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountQueryAccountGrantedRolesResponse>();
}

/**
 * @summary 查询纳管账号授权角色
 *
 * @param request EnterpriseAccountQueryAccountGrantedRolesRequest
 * @return EnterpriseAccountQueryAccountGrantedRolesResponse
 */
EnterpriseAccountQueryAccountGrantedRolesResponse Client::enterpriseAccountQueryAccountGrantedRoles(const EnterpriseAccountQueryAccountGrantedRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountQueryAccountGrantedRolesWithOptions(request, runtime);
}

/**
 * @summary 批量查询纳管账号信息
 *
 * @param request EnterpriseAccountQueryAccountsInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountQueryAccountsInfoResponse
 */
EnterpriseAccountQueryAccountsInfoResponse Client::enterpriseAccountQueryAccountsInfoWithOptions(const EnterpriseAccountQueryAccountsInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPksJson()) {
    query["PksJson"] = request.getPksJson();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasShowCompleteInfo()) {
    body["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountQueryAccountsInfo"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountQueryAccountsInfoResponse>();
}

/**
 * @summary 批量查询纳管账号信息
 *
 * @param request EnterpriseAccountQueryAccountsInfoRequest
 * @return EnterpriseAccountQueryAccountsInfoResponse
 */
EnterpriseAccountQueryAccountsInfoResponse Client::enterpriseAccountQueryAccountsInfo(const EnterpriseAccountQueryAccountsInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountQueryAccountsInfoWithOptions(request, runtime);
}

/**
 * @summary 查询纳管账号登录设置
 *
 * @param request EnterpriseAccountQueryLoginSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountQueryLoginSettingsResponse
 */
EnterpriseAccountQueryLoginSettingsResponse Client::enterpriseAccountQueryLoginSettingsWithOptions(const EnterpriseAccountQueryLoginSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasIsOpenApi()) {
    body["IsOpenApi"] = request.getIsOpenApi();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPk()) {
    body["Pk"] = request.getPk();
  }

  if (!!request.hasShowCompleteInfo()) {
    body["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseAccountQueryLoginSettings"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountQueryLoginSettingsResponse>();
}

/**
 * @summary 查询纳管账号登录设置
 *
 * @param request EnterpriseAccountQueryLoginSettingsRequest
 * @return EnterpriseAccountQueryLoginSettingsResponse
 */
EnterpriseAccountQueryLoginSettingsResponse Client::enterpriseAccountQueryLoginSettings(const EnterpriseAccountQueryLoginSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountQueryLoginSettingsWithOptions(request, runtime);
}

/**
 * @summary 移除mfa
 *
 * @param request EnterpriseAccountRemoveMfaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountRemoveMfaResponse
 */
EnterpriseAccountRemoveMfaResponse Client::enterpriseAccountRemoveMfaWithOptions(const EnterpriseAccountRemoveMfaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountRemoveMfa"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountRemoveMfaResponse>();
}

/**
 * @summary 移除mfa
 *
 * @param request EnterpriseAccountRemoveMfaRequest
 * @return EnterpriseAccountRemoveMfaResponse
 */
EnterpriseAccountRemoveMfaResponse Client::enterpriseAccountRemoveMfa(const EnterpriseAccountRemoveMfaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountRemoveMfaWithOptions(request, runtime);
}

/**
 * @summary 脱离ea
 *
 * @param request EnterpriseAccountSeparateEaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountSeparateEaResponse
 */
EnterpriseAccountSeparateEaResponse Client::enterpriseAccountSeparateEaWithOptions(const EnterpriseAccountSeparateEaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountSeparateEa"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountSeparateEaResponse>();
}

/**
 * @summary 脱离ea
 *
 * @param request EnterpriseAccountSeparateEaRequest
 * @return EnterpriseAccountSeparateEaResponse
 */
EnterpriseAccountSeparateEaResponse Client::enterpriseAccountSeparateEa(const EnterpriseAccountSeparateEaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountSeparateEaWithOptions(request, runtime);
}

/**
 * @summary 更新账号企业多账号中的别名
 *
 * @param request EnterpriseAccountUpdateAccountAliasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateAccountAliasResponse
 */
EnterpriseAccountUpdateAccountAliasResponse Client::enterpriseAccountUpdateAccountAliasWithOptions(const EnterpriseAccountUpdateAccountAliasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateAccountAlias"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateAccountAliasResponse>();
}

/**
 * @summary 更新账号企业多账号中的别名
 *
 * @param request EnterpriseAccountUpdateAccountAliasRequest
 * @return EnterpriseAccountUpdateAccountAliasResponse
 */
EnterpriseAccountUpdateAccountAliasResponse Client::enterpriseAccountUpdateAccountAlias(const EnterpriseAccountUpdateAccountAliasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateAccountAliasWithOptions(request, runtime);
}

/**
 * @summary 更新账号授权
 *
 * @param request EnterpriseAccountUpdateAccountBizRoleGrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateAccountBizRoleGrantResponse
 */
EnterpriseAccountUpdateAccountBizRoleGrantResponse Client::enterpriseAccountUpdateAccountBizRoleGrantWithOptions(const EnterpriseAccountUpdateAccountBizRoleGrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRoleCodeListJson()) {
    query["BizRoleCodeListJson"] = request.getBizRoleCodeListJson();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateAccountBizRoleGrant"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateAccountBizRoleGrantResponse>();
}

/**
 * @summary 更新账号授权
 *
 * @param request EnterpriseAccountUpdateAccountBizRoleGrantRequest
 * @return EnterpriseAccountUpdateAccountBizRoleGrantResponse
 */
EnterpriseAccountUpdateAccountBizRoleGrantResponse Client::enterpriseAccountUpdateAccountBizRoleGrant(const EnterpriseAccountUpdateAccountBizRoleGrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateAccountBizRoleGrantWithOptions(request, runtime);
}

/**
 * @summary 设置Ip掩码
 *
 * @param request EnterpriseAccountUpdateIpMaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateIpMaskResponse
 */
EnterpriseAccountUpdateIpMaskResponse Client::enterpriseAccountUpdateIpMaskWithOptions(const EnterpriseAccountUpdateIpMaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpMasksJson()) {
    query["IpMasksJson"] = request.getIpMasksJson();
  }

  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateIpMask"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateIpMaskResponse>();
}

/**
 * @summary 设置Ip掩码
 *
 * @param request EnterpriseAccountUpdateIpMaskRequest
 * @return EnterpriseAccountUpdateIpMaskResponse
 */
EnterpriseAccountUpdateIpMaskResponse Client::enterpriseAccountUpdateIpMask(const EnterpriseAccountUpdateIpMaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateIpMaskWithOptions(request, runtime);
}

/**
 * @summary 更新操作风控
 *
 * @param request EnterpriseAccountUpdateOperateRiskControlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateOperateRiskControlResponse
 */
EnterpriseAccountUpdateOperateRiskControlResponse Client::enterpriseAccountUpdateOperateRiskControlWithOptions(const EnterpriseAccountUpdateOperateRiskControlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasProductLevel()) {
    query["ProductLevel"] = request.getProductLevel();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasValidateType()) {
    query["ValidateType"] = request.getValidateType();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateOperateRiskControl"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateOperateRiskControlResponse>();
}

/**
 * @summary 更新操作风控
 *
 * @param request EnterpriseAccountUpdateOperateRiskControlRequest
 * @return EnterpriseAccountUpdateOperateRiskControlResponse
 */
EnterpriseAccountUpdateOperateRiskControlResponse Client::enterpriseAccountUpdateOperateRiskControl(const EnterpriseAccountUpdateOperateRiskControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateOperateRiskControlWithOptions(request, runtime);
}

/**
 * @summary 修改安全手机启用状态
 *
 * @param request EnterpriseAccountUpdateSecurityMobileLoginStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateSecurityMobileLoginStatusResponse
 */
EnterpriseAccountUpdateSecurityMobileLoginStatusResponse Client::enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(const EnterpriseAccountUpdateSecurityMobileLoginStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateSecurityMobileLoginStatus"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateSecurityMobileLoginStatusResponse>();
}

/**
 * @summary 修改安全手机启用状态
 *
 * @param request EnterpriseAccountUpdateSecurityMobileLoginStatusRequest
 * @return EnterpriseAccountUpdateSecurityMobileLoginStatusResponse
 */
EnterpriseAccountUpdateSecurityMobileLoginStatusResponse Client::enterpriseAccountUpdateSecurityMobileLoginStatus(const EnterpriseAccountUpdateSecurityMobileLoginStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(request, runtime);
}

/**
 * @summary 更新过期时间
 *
 * @param request EnterpriseAccountUpdateSessionExpireTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseAccountUpdateSessionExpireTimeResponse
 */
EnterpriseAccountUpdateSessionExpireTimeResponse Client::enterpriseAccountUpdateSessionExpireTimeWithOptions(const EnterpriseAccountUpdateSessionExpireTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSessionExpireTime()) {
    query["SessionExpireTime"] = request.getSessionExpireTime();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseAccountUpdateSessionExpireTime"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseAccountUpdateSessionExpireTimeResponse>();
}

/**
 * @summary 更新过期时间
 *
 * @param request EnterpriseAccountUpdateSessionExpireTimeRequest
 * @return EnterpriseAccountUpdateSessionExpireTimeResponse
 */
EnterpriseAccountUpdateSessionExpireTimeResponse Client::enterpriseAccountUpdateSessionExpireTime(const EnterpriseAccountUpdateSessionExpireTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseAccountUpdateSessionExpireTimeWithOptions(request, runtime);
}

/**
 * @summary 增加企业联系人
 *
 * @param request EnterpriseContactAddRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseContactAddResponse
 */
EnterpriseContactAddResponse Client::enterpriseContactAddWithOptions(const EnterpriseContactAddRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAsyncEmailVerify()) {
    body["AsyncEmailVerify"] = request.getAsyncEmailVerify();
  }

  if (!!request.hasAsyncMobileVerify()) {
    body["AsyncMobileVerify"] = request.getAsyncMobileVerify();
  }

  if (!!request.hasContactEmail()) {
    body["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactMobile()) {
    body["ContactMobile"] = request.getContactMobile();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPosition()) {
    body["ContactPosition"] = request.getContactPosition();
  }

  if (!!request.hasEmailCode()) {
    body["EmailCode"] = request.getEmailCode();
  }

  if (!!request.hasMobileCode()) {
    body["MobileCode"] = request.getMobileCode();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseContactAdd"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseContactAddResponse>();
}

/**
 * @summary 增加企业联系人
 *
 * @param request EnterpriseContactAddRequest
 * @return EnterpriseContactAddResponse
 */
EnterpriseContactAddResponse Client::enterpriseContactAdd(const EnterpriseContactAddRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseContactAddWithOptions(request, runtime);
}

/**
 * @summary 删除企业联系人
 *
 * @param request EnterpriseContactDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseContactDeleteResponse
 */
EnterpriseContactDeleteResponse Client::enterpriseContactDeleteWithOptions(const EnterpriseContactDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseContactDelete"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseContactDeleteResponse>();
}

/**
 * @summary 删除企业联系人
 *
 * @param request EnterpriseContactDeleteRequest
 * @return EnterpriseContactDeleteResponse
 */
EnterpriseContactDeleteResponse Client::enterpriseContactDelete(const EnterpriseContactDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseContactDeleteWithOptions(request, runtime);
}

/**
 * @summary 修改私企业联系人
 *
 * @param request EnterpriseContactEditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseContactEditResponse
 */
EnterpriseContactEditResponse Client::enterpriseContactEditWithOptions(const EnterpriseContactEditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasAsyncEmailVerify()) {
    body["AsyncEmailVerify"] = request.getAsyncEmailVerify();
  }

  if (!!request.hasAsyncMobileVerify()) {
    body["AsyncMobileVerify"] = request.getAsyncMobileVerify();
  }

  if (!!request.hasContactEmail()) {
    body["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactMobile()) {
    body["ContactMobile"] = request.getContactMobile();
  }

  if (!!request.hasContactName()) {
    body["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPosition()) {
    body["ContactPosition"] = request.getContactPosition();
  }

  if (!!request.hasEmailCode()) {
    body["EmailCode"] = request.getEmailCode();
  }

  if (!!request.hasMobileCode()) {
    body["MobileCode"] = request.getMobileCode();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseContactEdit"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseContactEditResponse>();
}

/**
 * @summary 修改私企业联系人
 *
 * @param request EnterpriseContactEditRequest
 * @return EnterpriseContactEditResponse
 */
EnterpriseContactEditResponse Client::enterpriseContactEdit(const EnterpriseContactEditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseContactEditWithOptions(request, runtime);
}

/**
 * @summary 查询联系人详情
 *
 * @param request EnterpriseContactQueryDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseContactQueryDetailResponse
 */
EnterpriseContactQueryDetailResponse Client::enterpriseContactQueryDetailWithOptions(const EnterpriseContactQueryDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactId()) {
    body["ContactId"] = request.getContactId();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseContactQueryDetail"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseContactQueryDetailResponse>();
}

/**
 * @summary 查询联系人详情
 *
 * @param request EnterpriseContactQueryDetailRequest
 * @return EnterpriseContactQueryDetailResponse
 */
EnterpriseContactQueryDetailResponse Client::enterpriseContactQueryDetail(const EnterpriseContactQueryDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseContactQueryDetailWithOptions(request, runtime);
}

/**
 * @summary 查询联系人列表
 *
 * @param request EnterpriseContactQueryPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseContactQueryPageListResponse
 */
EnterpriseContactQueryPageListResponse Client::enterpriseContactQueryPageListWithOptions(const EnterpriseContactQueryPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasShowCompleteInfo()) {
    query["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPrivateContact()) {
    body["PrivateContact"] = request.getPrivateContact();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.getQuery();
  }

  if (!!request.hasSharedContact()) {
    body["SharedContact"] = request.getSharedContact();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseContactQueryPageList"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseContactQueryPageListResponse>();
}

/**
 * @summary 查询联系人列表
 *
 * @param request EnterpriseContactQueryPageListRequest
 * @return EnterpriseContactQueryPageListResponse
 */
EnterpriseContactQueryPageListResponse Client::enterpriseContactQueryPageList(const EnterpriseContactQueryPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseContactQueryPageListWithOptions(request, runtime);
}

/**
 * @summary 组织目录树查询
 *
 * @param request EnterpriseOrgQueryLoadTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseOrgQueryLoadTreeResponse
 */
EnterpriseOrgQueryLoadTreeResponse Client::enterpriseOrgQueryLoadTreeWithOptions(const EnterpriseOrgQueryLoadTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasLoadOrgOnly()) {
    query["LoadOrgOnly"] = request.getLoadOrgOnly();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseOrgQueryLoadTree"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseOrgQueryLoadTreeResponse>();
}

/**
 * @summary 组织目录树查询
 *
 * @param request EnterpriseOrgQueryLoadTreeRequest
 * @return EnterpriseOrgQueryLoadTreeResponse
 */
EnterpriseOrgQueryLoadTreeResponse Client::enterpriseOrgQueryLoadTree(const EnterpriseOrgQueryLoadTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseOrgQueryLoadTreeWithOptions(request, runtime);
}

/**
 * @summary 创建成员账号
 *
 * @param request EnterpriseRegisterAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRegisterAccountResponse
 */
EnterpriseRegisterAccountResponse Client::enterpriseRegisterAccountWithOptions(const EnterpriseRegisterAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasEncryptPassword()) {
    query["EncryptPassword"] = request.getEncryptPassword();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasLoginEmail()) {
    query["LoginEmail"] = request.getLoginEmail();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRequestId()) {
    query["RequestId"] = request.getRequestId();
  }

  if (!!request.hasShowCompleteInfo()) {
    query["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  if (!!request.hasSiteNick()) {
    query["SiteNick"] = request.getSiteNick();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRegisterAccount"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRegisterAccountResponse>();
}

/**
 * @summary 创建成员账号
 *
 * @param request EnterpriseRegisterAccountRequest
 * @return EnterpriseRegisterAccountResponse
 */
EnterpriseRegisterAccountResponse Client::enterpriseRegisterAccount(const EnterpriseRegisterAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRegisterAccountWithOptions(request, runtime);
}

/**
 * @summary 创建业务角色
 *
 * @param request EnterpriseRoleCreateBizRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleCreateBizRoleResponse
 */
EnterpriseRoleCreateBizRoleResponse Client::enterpriseRoleCreateBizRoleWithOptions(const EnterpriseRoleCreateBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizPermissionCodeListJson()) {
    query["BizPermissionCodeListJson"] = request.getBizPermissionCodeListJson();
  }

  if (!!request.hasBizRoleDesc()) {
    query["BizRoleDesc"] = request.getBizRoleDesc();
  }

  if (!!request.hasBizRoleName()) {
    query["BizRoleName"] = request.getBizRoleName();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleCreateBizRole"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleCreateBizRoleResponse>();
}

/**
 * @summary 创建业务角色
 *
 * @param request EnterpriseRoleCreateBizRoleRequest
 * @return EnterpriseRoleCreateBizRoleResponse
 */
EnterpriseRoleCreateBizRoleResponse Client::enterpriseRoleCreateBizRole(const EnterpriseRoleCreateBizRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleCreateBizRoleWithOptions(request, runtime);
}

/**
 * @summary 删除业务角色
 *
 * @param request EnterpriseRoleDeleteBizRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleDeleteBizRoleResponse
 */
EnterpriseRoleDeleteBizRoleResponse Client::enterpriseRoleDeleteBizRoleWithOptions(const EnterpriseRoleDeleteBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRoleCode()) {
    query["BizRoleCode"] = request.getBizRoleCode();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleDeleteBizRole"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleDeleteBizRoleResponse>();
}

/**
 * @summary 删除业务角色
 *
 * @param request EnterpriseRoleDeleteBizRoleRequest
 * @return EnterpriseRoleDeleteBizRoleResponse
 */
EnterpriseRoleDeleteBizRoleResponse Client::enterpriseRoleDeleteBizRole(const EnterpriseRoleDeleteBizRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleDeleteBizRoleWithOptions(request, runtime);
}

/**
 * @summary 角色授权场景下分页查询账号
 *
 * @param request EnterpriseRoleQueryAccountForRoleGrantByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleQueryAccountForRoleGrantByPageResponse
 */
EnterpriseRoleQueryAccountForRoleGrantByPageResponse Client::enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(const EnterpriseRoleQueryAccountForRoleGrantByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRoleCode()) {
    query["BizRoleCode"] = request.getBizRoleCode();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrgId()) {
    query["OrgId"] = request.getOrgId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasShowCompleteInfo()) {
    query["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleQueryAccountForRoleGrantByPage"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleQueryAccountForRoleGrantByPageResponse>();
}

/**
 * @summary 角色授权场景下分页查询账号
 *
 * @param request EnterpriseRoleQueryAccountForRoleGrantByPageRequest
 * @return EnterpriseRoleQueryAccountForRoleGrantByPageResponse
 */
EnterpriseRoleQueryAccountForRoleGrantByPageResponse Client::enterpriseRoleQueryAccountForRoleGrantByPage(const EnterpriseRoleQueryAccountForRoleGrantByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(request, runtime);
}

/**
 * @summary 分页查询业务角色
 *
 * @param request EnterpriseRoleQueryBizRoleByPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleQueryBizRoleByPageResponse
 */
EnterpriseRoleQueryBizRoleByPageResponse Client::enterpriseRoleQueryBizRoleByPageWithOptions(const EnterpriseRoleQueryBizRoleByPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrientedLeId()) {
    query["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSrcType()) {
    query["SrcType"] = request.getSrcType();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleQueryBizRoleByPage"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleQueryBizRoleByPageResponse>();
}

/**
 * @summary 分页查询业务角色
 *
 * @param request EnterpriseRoleQueryBizRoleByPageRequest
 * @return EnterpriseRoleQueryBizRoleByPageResponse
 */
EnterpriseRoleQueryBizRoleByPageResponse Client::enterpriseRoleQueryBizRoleByPage(const EnterpriseRoleQueryBizRoleByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleQueryBizRoleByPageWithOptions(request, runtime);
}

/**
 * @summary 查询业务角色详情
 *
 * @param request EnterpriseRoleQueryBizRoleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleQueryBizRoleDetailResponse
 */
EnterpriseRoleQueryBizRoleDetailResponse Client::enterpriseRoleQueryBizRoleDetailWithOptions(const EnterpriseRoleQueryBizRoleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizRoleCode()) {
    query["BizRoleCode"] = request.getBizRoleCode();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleQueryBizRoleDetail"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleQueryBizRoleDetailResponse>();
}

/**
 * @summary 查询业务角色详情
 *
 * @param request EnterpriseRoleQueryBizRoleDetailRequest
 * @return EnterpriseRoleQueryBizRoleDetailResponse
 */
EnterpriseRoleQueryBizRoleDetailResponse Client::enterpriseRoleQueryBizRoleDetail(const EnterpriseRoleQueryBizRoleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleQueryBizRoleDetailWithOptions(request, runtime);
}

/**
 * @summary 更新业务角色
 *
 * @param request EnterpriseRoleUpdateBizRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseRoleUpdateBizRoleResponse
 */
EnterpriseRoleUpdateBizRoleResponse Client::enterpriseRoleUpdateBizRoleWithOptions(const EnterpriseRoleUpdateBizRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizPermissionCodeListJson()) {
    query["BizPermissionCodeListJson"] = request.getBizPermissionCodeListJson();
  }

  if (!!request.hasBizRoleCode()) {
    query["BizRoleCode"] = request.getBizRoleCode();
  }

  if (!!request.hasBizRoleDesc()) {
    query["BizRoleDesc"] = request.getBizRoleDesc();
  }

  if (!!request.hasBizRoleName()) {
    query["BizRoleName"] = request.getBizRoleName();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  json body = {};
  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseRoleUpdateBizRole"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseRoleUpdateBizRoleResponse>();
}

/**
 * @summary 更新业务角色
 *
 * @param request EnterpriseRoleUpdateBizRoleRequest
 * @return EnterpriseRoleUpdateBizRoleResponse
 */
EnterpriseRoleUpdateBizRoleResponse Client::enterpriseRoleUpdateBizRole(const EnterpriseRoleUpdateBizRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseRoleUpdateBizRoleWithOptions(request, runtime);
}

/**
 * @summary 处理待办项
 *
 * @param request EnterpriseTodoDealAccountTodoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseTodoDealAccountTodoResponse
 */
EnterpriseTodoDealAccountTodoResponse Client::enterpriseTodoDealAccountTodoWithOptions(const EnterpriseTodoDealAccountTodoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTodoId()) {
    body["TodoId"] = request.getTodoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnterpriseTodoDealAccountTodo"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseTodoDealAccountTodoResponse>();
}

/**
 * @summary 处理待办项
 *
 * @param request EnterpriseTodoDealAccountTodoRequest
 * @return EnterpriseTodoDealAccountTodoResponse
 */
EnterpriseTodoDealAccountTodoResponse Client::enterpriseTodoDealAccountTodo(const EnterpriseTodoDealAccountTodoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseTodoDealAccountTodoWithOptions(request, runtime);
}

/**
 * @summary 查询当前登录用户处理的待办项列表
 *
 * @param request EnterpriseTodoQueryAccountTodoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseTodoQueryAccountTodoListResponse
 */
EnterpriseTodoQueryAccountTodoListResponse Client::enterpriseTodoQueryAccountTodoListWithOptions(const EnterpriseTodoQueryAccountTodoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOperatePk()) {
    body["OperatePk"] = request.getOperatePk();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPage()) {
    body["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasShowCompleteInfo()) {
    body["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTodoType()) {
    body["TodoType"] = request.getTodoType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseTodoQueryAccountTodoList"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseTodoQueryAccountTodoListResponse>();
}

/**
 * @summary 查询当前登录用户处理的待办项列表
 *
 * @param request EnterpriseTodoQueryAccountTodoListRequest
 * @return EnterpriseTodoQueryAccountTodoListResponse
 */
EnterpriseTodoQueryAccountTodoListResponse Client::enterpriseTodoQueryAccountTodoList(const EnterpriseTodoQueryAccountTodoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseTodoQueryAccountTodoListWithOptions(request, runtime);
}

/**
 * @summary 查询当前登录用户发起的待办项列表
 *
 * @param request EnterpriseTodoQueryAccountTodoListByApplicantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseTodoQueryAccountTodoListByApplicantResponse
 */
EnterpriseTodoQueryAccountTodoListByApplicantResponse Client::enterpriseTodoQueryAccountTodoListByApplicantWithOptions(const EnterpriseTodoQueryAccountTodoListByApplicantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasOperatePk()) {
    body["OperatePk"] = request.getOperatePk();
  }

  if (!!request.hasOrientedEcId()) {
    body["OrientedEcId"] = request.getOrientedEcId();
  }

  if (!!request.hasOrientedLeId()) {
    body["OrientedLeId"] = request.getOrientedLeId();
  }

  if (!!request.hasOrientedNbId()) {
    body["OrientedNbId"] = request.getOrientedNbId();
  }

  if (!!request.hasPage()) {
    body["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasShowCompleteInfo()) {
    body["ShowCompleteInfo"] = request.getShowCompleteInfo();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTodoType()) {
    body["TodoType"] = request.getTodoType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EnterpriseTodoQueryAccountTodoListByApplicant"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseTodoQueryAccountTodoListByApplicantResponse>();
}

/**
 * @summary 查询当前登录用户发起的待办项列表
 *
 * @param request EnterpriseTodoQueryAccountTodoListByApplicantRequest
 * @return EnterpriseTodoQueryAccountTodoListByApplicantResponse
 */
EnterpriseTodoQueryAccountTodoListByApplicantResponse Client::enterpriseTodoQueryAccountTodoListByApplicant(const EnterpriseTodoQueryAccountTodoListByApplicantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseTodoQueryAccountTodoListByApplicantWithOptions(request, runtime);
}

/**
 * @summary 管理员邀请纳管
 *
 * @param request EnterpriseUninvitedAdminInviteJoinEnterpriseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnterpriseUninvitedAdminInviteJoinEnterpriseResponse
 */
EnterpriseUninvitedAdminInviteJoinEnterpriseResponse Client::enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(const EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEcId()) {
    query["EcId"] = request.getEcId();
  }

  if (!!request.hasEncryptTicket()) {
    query["EncryptTicket"] = request.getEncryptTicket();
  }

  if (!!request.hasInviteePk()) {
    query["InviteePk"] = request.getInviteePk();
  }

  if (!!request.hasLeId()) {
    query["LeId"] = request.getLeId();
  }

  if (!!request.hasNbId()) {
    query["NbId"] = request.getNbId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnterpriseUninvitedAdminInviteJoinEnterprise"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnterpriseUninvitedAdminInviteJoinEnterpriseResponse>();
}

/**
 * @summary 管理员邀请纳管
 *
 * @param request EnterpriseUninvitedAdminInviteJoinEnterpriseRequest
 * @return EnterpriseUninvitedAdminInviteJoinEnterpriseResponse
 */
EnterpriseUninvitedAdminInviteJoinEnterpriseResponse Client::enterpriseUninvitedAdminInviteJoinEnterprise(const EnterpriseUninvitedAdminInviteJoinEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(request, runtime);
}

/**
 * @summary 账号中心发送异步验证邮件
 *
 * @param request SendAsyncEmailCaptchaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAsyncEmailCaptchaResponse
 */
SendAsyncEmailCaptchaResponse Client::sendAsyncEmailCaptchaWithOptions(const SendAsyncEmailCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactInfo()) {
    body["ContactInfo"] = request.getContactInfo();
  }

  if (!!request.hasContactorId()) {
    body["ContactorId"] = request.getContactorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendAsyncEmailCaptcha"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAsyncEmailCaptchaResponse>();
}

/**
 * @summary 账号中心发送异步验证邮件
 *
 * @param request SendAsyncEmailCaptchaRequest
 * @return SendAsyncEmailCaptchaResponse
 */
SendAsyncEmailCaptchaResponse Client::sendAsyncEmailCaptcha(const SendAsyncEmailCaptchaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendAsyncEmailCaptchaWithOptions(request, runtime);
}

/**
 * @summary 账号中心发送异步验证短信
 *
 * @param request SendAsyncMobileCaptchaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAsyncMobileCaptchaResponse
 */
SendAsyncMobileCaptchaResponse Client::sendAsyncMobileCaptchaWithOptions(const SendAsyncMobileCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasContactInfo()) {
    body["ContactInfo"] = request.getContactInfo();
  }

  if (!!request.hasContactorId()) {
    body["ContactorId"] = request.getContactorId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendAsyncMobileCaptcha"},
    {"version" , "2024-12-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAsyncMobileCaptchaResponse>();
}

/**
 * @summary 账号中心发送异步验证短信
 *
 * @param request SendAsyncMobileCaptchaRequest
 * @return SendAsyncMobileCaptchaResponse
 */
SendAsyncMobileCaptchaResponse Client::sendAsyncMobileCaptcha(const SendAsyncMobileCaptchaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendAsyncMobileCaptchaWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AccountCenter20241209