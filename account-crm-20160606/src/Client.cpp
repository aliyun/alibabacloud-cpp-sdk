#include <darabonba/Core.hpp>
#include <alibabacloud/AccountCrm20160606.hpp>
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
using namespace AlibabaCloud::AccountCrm20160606::Models;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{

AlibabaCloud::AccountCrm20160606::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("account-crm", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AccountOneKeyDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AccountOneKeyDeleteResponse
 */
AccountOneKeyDeleteResponse Client::accountOneKeyDeleteWithOptions(const AccountOneKeyDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AccountOneKeyDelete"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AccountOneKeyDeleteResponse>();
}

/**
 * @param request AccountOneKeyDeleteRequest
 * @return AccountOneKeyDeleteResponse
 */
AccountOneKeyDeleteResponse Client::accountOneKeyDelete(const AccountOneKeyDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return accountOneKeyDeleteWithOptions(request, runtime);
}

/**
 * @param request AddCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomerLabelResponse
 */
AddCustomerLabelResponse Client::addCustomerLabelWithOptions(const AddCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndtime()) {
    query["Endtime"] = request.getEndtime();
  }

  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasLabelTypes()) {
    query["LabelTypes"] = request.getLabelTypes();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomerLabel"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomerLabelResponse>();
}

/**
 * @param request AddCustomerLabelRequest
 * @return AddCustomerLabelResponse
 */
AddCustomerLabelResponse Client::addCustomerLabel(const AddCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomerLabelWithOptions(request, runtime);
}

/**
 * @param request AllowAgAccountLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllowAgAccountLoginResponse
 */
AllowAgAccountLoginResponse Client::allowAgAccountLoginWithOptions(const AllowAgAccountLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllowAgAccountLogin"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllowAgAccountLoginResponse>();
}

/**
 * @param request AllowAgAccountLoginRequest
 * @return AllowAgAccountLoginResponse
 */
AllowAgAccountLoginResponse Client::allowAgAccountLogin(const AllowAgAccountLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allowAgAccountLoginWithOptions(request, runtime);
}

/**
 * @summary 申请ag注销
 *
 * @param request ApplyAgOneKeyDeleteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAgOneKeyDeleteTaskResponse
 */
ApplyAgOneKeyDeleteTaskResponse Client::applyAgOneKeyDeleteTaskWithOptions(const ApplyAgOneKeyDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAbandonedDependency()) {
    query["AbandonedDependency"] = request.getAbandonedDependency();
  }

  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyAgOneKeyDeleteTask"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAgOneKeyDeleteTaskResponse>();
}

/**
 * @summary 申请ag注销
 *
 * @param request ApplyAgOneKeyDeleteTaskRequest
 * @return ApplyAgOneKeyDeleteTaskResponse
 */
ApplyAgOneKeyDeleteTaskResponse Client::applyAgOneKeyDeleteTask(const ApplyAgOneKeyDeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAgOneKeyDeleteTaskWithOptions(request, runtime);
}

/**
 * @summary 申请ag注销
 *
 * @param request ApplyAgOneKeyOnlyCheckerTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAgOneKeyOnlyCheckerTaskResponse
 */
ApplyAgOneKeyOnlyCheckerTaskResponse Client::applyAgOneKeyOnlyCheckerTaskWithOptions(const ApplyAgOneKeyOnlyCheckerTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyAgOneKeyOnlyCheckerTask"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAgOneKeyOnlyCheckerTaskResponse>();
}

/**
 * @summary 申请ag注销
 *
 * @param request ApplyAgOneKeyOnlyCheckerTaskRequest
 * @return ApplyAgOneKeyOnlyCheckerTaskResponse
 */
ApplyAgOneKeyOnlyCheckerTaskResponse Client::applyAgOneKeyOnlyCheckerTask(const ApplyAgOneKeyOnlyCheckerTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAgOneKeyOnlyCheckerTaskWithOptions(request, runtime);
}

/**
 * @param request ApplyIdentityRegistrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyIdentityRegistrationResponse
 */
ApplyIdentityRegistrationResponse Client::applyIdentityRegistrationWithOptions(const ApplyIdentityRegistrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasDocBackPic()) {
    query["DocBackPic"] = request.getDocBackPic();
  }

  if (!!request.hasDocFrontPic()) {
    query["DocFrontPic"] = request.getDocFrontPic();
  }

  if (!!request.hasDocNum()) {
    query["DocNum"] = request.getDocNum();
  }

  if (!!request.hasDocType()) {
    query["DocType"] = request.getDocType();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasFullName()) {
    query["FullName"] = request.getFullName();
  }

  if (!!request.hasRegisteredAddress()) {
    query["RegisteredAddress"] = request.getRegisteredAddress();
  }

  if (!!request.hasRegisteredCountry()) {
    query["RegisteredCountry"] = request.getRegisteredCountry();
  }

  if (!!request.hasRegisteredNum()) {
    query["RegisteredNum"] = request.getRegisteredNum();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasTel()) {
    query["Tel"] = request.getTel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyIdentityRegistration"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyIdentityRegistrationResponse>();
}

/**
 * @param request ApplyIdentityRegistrationRequest
 * @return ApplyIdentityRegistrationResponse
 */
ApplyIdentityRegistrationResponse Client::applyIdentityRegistration(const ApplyIdentityRegistrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyIdentityRegistrationWithOptions(request, runtime);
}

/**
 * @param request AsyncCreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncCreateAgAccountResponse
 */
AsyncCreateAgAccountResponse Client::asyncCreateAgAccountWithOptions(const AsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoginEmail()) {
    query["LoginEmail"] = request.getLoginEmail();
  }

  if (!!request.hasMaserAccountInfo()) {
    query["MaserAccountInfo"] = request.getMaserAccountInfo();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AsyncCreateAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncCreateAgAccountResponse>();
}

/**
 * @param request AsyncCreateAgAccountRequest
 * @return AsyncCreateAgAccountResponse
 */
AsyncCreateAgAccountResponse Client::asyncCreateAgAccount(const AsyncCreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncCreateAgAccountWithOptions(request, runtime);
}

/**
 * @param request AsyncModifyAgLoginEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AsyncModifyAgLoginEmailResponse
 */
AsyncModifyAgLoginEmailResponse Client::asyncModifyAgLoginEmailWithOptions(const AsyncModifyAgLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasNewLoginEmail()) {
    query["NewLoginEmail"] = request.getNewLoginEmail();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AsyncModifyAgLoginEmail"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AsyncModifyAgLoginEmailResponse>();
}

/**
 * @param request AsyncModifyAgLoginEmailRequest
 * @return AsyncModifyAgLoginEmailResponse
 */
AsyncModifyAgLoginEmailResponse Client::asyncModifyAgLoginEmail(const AsyncModifyAgLoginEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return asyncModifyAgLoginEmailWithOptions(request, runtime);
}

/**
 * @param request AuthAndActiveWithHidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthAndActiveWithHidResponse
 */
AuthAndActiveWithHidResponse Client::authAndActiveWithHidWithOptions(const AuthAndActiveWithHidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthAndActiveWithHid"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthAndActiveWithHidResponse>();
}

/**
 * @param request AuthAndActiveWithHidRequest
 * @return AuthAndActiveWithHidResponse
 */
AuthAndActiveWithHidResponse Client::authAndActiveWithHid(const AuthAndActiveWithHidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authAndActiveWithHidWithOptions(request, runtime);
}

/**
 * @param request AuthAndRefreshLoginTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthAndRefreshLoginTicketResponse
 */
AuthAndRefreshLoginTicketResponse Client::authAndRefreshLoginTicketWithOptions(const AuthAndRefreshLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthAndRefreshLoginTicket"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthAndRefreshLoginTicketResponse>();
}

/**
 * @param request AuthAndRefreshLoginTicketRequest
 * @return AuthAndRefreshLoginTicketResponse
 */
AuthAndRefreshLoginTicketResponse Client::authAndRefreshLoginTicket(const AuthAndRefreshLoginTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authAndRefreshLoginTicketWithOptions(request, runtime);
}

/**
 * @param request AuthLoginTicketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthLoginTicketResponse
 */
AuthLoginTicketResponse Client::authLoginTicketWithOptions(const AuthLoginTicketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasMinorAuthCode()) {
    query["MinorAuthCode"] = request.getMinorAuthCode();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthLoginTicket"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthLoginTicketResponse>();
}

/**
 * @param request AuthLoginTicketRequest
 * @return AuthLoginTicketResponse
 */
AuthLoginTicketResponse Client::authLoginTicket(const AuthLoginTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authLoginTicketWithOptions(request, runtime);
}

/**
 * @param request BatchQueryAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryAgAccountResponse
 */
BatchQueryAgAccountResponse Client::batchQueryAgAccountWithOptions(const BatchQueryAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPkList()) {
    query["PkList"] = request.getPkList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryAgAccountResponse>();
}

/**
 * @param request BatchQueryAgAccountRequest
 * @return BatchQueryAgAccountResponse
 */
BatchQueryAgAccountResponse Client::batchQueryAgAccount(const BatchQueryAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQueryAgAccountWithOptions(request, runtime);
}

/**
 * @param request BatchQueryCreateAccountTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryCreateAccountTraceResponse
 */
BatchQueryCreateAccountTraceResponse Client::batchQueryCreateAccountTraceWithOptions(const BatchQueryCreateAccountTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNoList()) {
    query["TraceNoList"] = request.getTraceNoList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryCreateAccountTrace"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryCreateAccountTraceResponse>();
}

/**
 * @param request BatchQueryCreateAccountTraceRequest
 * @return BatchQueryCreateAccountTraceResponse
 */
BatchQueryCreateAccountTraceResponse Client::batchQueryCreateAccountTrace(const BatchQueryCreateAccountTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQueryCreateAccountTraceWithOptions(request, runtime);
}

/**
 * @param request BatchQueryModifyLoginEmailTraceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchQueryModifyLoginEmailTraceResponse
 */
BatchQueryModifyLoginEmailTraceResponse Client::batchQueryModifyLoginEmailTraceWithOptions(const BatchQueryModifyLoginEmailTraceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNoList()) {
    query["TraceNoList"] = request.getTraceNoList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchQueryModifyLoginEmailTrace"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchQueryModifyLoginEmailTraceResponse>();
}

/**
 * @param request BatchQueryModifyLoginEmailTraceRequest
 * @return BatchQueryModifyLoginEmailTraceResponse
 */
BatchQueryModifyLoginEmailTraceResponse Client::batchQueryModifyLoginEmailTrace(const BatchQueryModifyLoginEmailTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchQueryModifyLoginEmailTraceWithOptions(request, runtime);
}

/**
 * @param request CancelAsyncCreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAsyncCreateAgAccountResponse
 */
CancelAsyncCreateAgAccountResponse Client::cancelAsyncCreateAgAccountWithOptions(const CancelAsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNo()) {
    query["TraceNo"] = request.getTraceNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAsyncCreateAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAsyncCreateAgAccountResponse>();
}

/**
 * @param request CancelAsyncCreateAgAccountRequest
 * @return CancelAsyncCreateAgAccountResponse
 */
CancelAsyncCreateAgAccountResponse Client::cancelAsyncCreateAgAccount(const CancelAsyncCreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAsyncCreateAgAccountWithOptions(request, runtime);
}

/**
 * @param request CancelAsyncModifyLoginEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAsyncModifyLoginEmailResponse
 */
CancelAsyncModifyLoginEmailResponse Client::cancelAsyncModifyLoginEmailWithOptions(const CancelAsyncModifyLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNo()) {
    query["TraceNo"] = request.getTraceNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelAsyncModifyLoginEmail"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAsyncModifyLoginEmailResponse>();
}

/**
 * @param request CancelAsyncModifyLoginEmailRequest
 * @return CancelAsyncModifyLoginEmailResponse
 */
CancelAsyncModifyLoginEmailResponse Client::cancelAsyncModifyLoginEmail(const CancelAsyncModifyLoginEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAsyncModifyLoginEmailWithOptions(request, runtime);
}

/**
 * @param request ChangeAgAccountNationalityCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAgAccountNationalityCodeResponse
 */
ChangeAgAccountNationalityCodeResponse Client::changeAgAccountNationalityCodeWithOptions(const ChangeAgAccountNationalityCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasNationalityCode()) {
    query["NationalityCode"] = request.getNationalityCode();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAgAccountNationalityCode"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAgAccountNationalityCodeResponse>();
}

/**
 * @param request ChangeAgAccountNationalityCodeRequest
 * @return ChangeAgAccountNationalityCodeResponse
 */
ChangeAgAccountNationalityCodeResponse Client::changeAgAccountNationalityCode(const ChangeAgAccountNationalityCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAgAccountNationalityCodeWithOptions(request, runtime);
}

/**
 * @param request ChangeAgSecurityEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAgSecurityEmailResponse
 */
ChangeAgSecurityEmailResponse Client::changeAgSecurityEmailWithOptions(const ChangeAgSecurityEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasSecurityEmail()) {
    query["SecurityEmail"] = request.getSecurityEmail();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAgSecurityEmail"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAgSecurityEmailResponse>();
}

/**
 * @param request ChangeAgSecurityEmailRequest
 * @return ChangeAgSecurityEmailResponse
 */
ChangeAgSecurityEmailResponse Client::changeAgSecurityEmail(const ChangeAgSecurityEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAgSecurityEmailWithOptions(request, runtime);
}

/**
 * @param request ChangeAgSecurityMobileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeAgSecurityMobileResponse
 */
ChangeAgSecurityMobileResponse Client::changeAgSecurityMobileWithOptions(const ChangeAgSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasSecurityMobile()) {
    query["SecurityMobile"] = request.getSecurityMobile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeAgSecurityMobile"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeAgSecurityMobileResponse>();
}

/**
 * @param request ChangeAgSecurityMobileRequest
 * @return ChangeAgSecurityMobileResponse
 */
ChangeAgSecurityMobileResponse Client::changeAgSecurityMobile(const ChangeAgSecurityMobileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeAgSecurityMobileWithOptions(request, runtime);
}

/**
 * @param request CreateAccountProfileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountProfileInfoResponse
 */
CreateAccountProfileInfoResponse Client::createAccountProfileInfoWithOptions(const CreateAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountJson()) {
    query["AccountJson"] = request.getAccountJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccountProfileInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountProfileInfoResponse>();
}

/**
 * @param request CreateAccountProfileInfoRequest
 * @return CreateAccountProfileInfoResponse
 */
CreateAccountProfileInfoResponse Client::createAccountProfileInfo(const CreateAccountProfileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountProfileInfoWithOptions(request, runtime);
}

/**
 * @param request CreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccountWithOptions(const CreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoginEmail()) {
    query["LoginEmail"] = request.getLoginEmail();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasNationCode()) {
    query["NationCode"] = request.getNationCode();
  }

  if (!!request.hasOwn()) {
    query["Own"] = request.getOwn();
  }

  if (!!request.hasRealParentPk()) {
    query["RealParentPk"] = request.getRealParentPk();
  }

  if (!!request.hasSecurityMobile()) {
    query["SecurityMobile"] = request.getSecurityMobile();
  }

  if (!!request.hasShowNickName()) {
    query["ShowNickName"] = request.getShowNickName();
  }

  if (!!request.hasSiteNick()) {
    query["SiteNick"] = request.getSiteNick();
  }

  if (!!request.hasSrcAccountInfo()) {
    query["srcAccountInfo"] = request.getSrcAccountInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgAccountResponse>();
}

/**
 * @param request CreateAgAccountRequest
 * @return CreateAgAccountResponse
 */
CreateAgAccountResponse Client::createAgAccount(const CreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgAccountWithOptions(request, runtime);
}

/**
 * @param request CreateContacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContacterResponse
 */
CreateContacterResponse Client::createContacterWithOptions(const CreateContacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContacterAddress()) {
    query["ContacterAddress"] = request.getContacterAddress();
  }

  if (!!request.hasContacterDingding()) {
    query["ContacterDingding"] = request.getContacterDingding();
  }

  if (!!request.hasContacterEmail()) {
    query["ContacterEmail"] = request.getContacterEmail();
  }

  if (!!request.hasContacterMobile()) {
    query["ContacterMobile"] = request.getContacterMobile();
  }

  if (!!request.hasContacterName()) {
    query["ContacterName"] = request.getContacterName();
  }

  if (!!request.hasContacterPosition()) {
    query["ContacterPosition"] = request.getContacterPosition();
  }

  if (!!request.hasContacterStaffNo()) {
    query["ContacterStaffNo"] = request.getContacterStaffNo();
  }

  if (!!request.hasContacterType()) {
    query["ContacterType"] = request.getContacterType();
  }

  if (!!request.hasContacterWangwang()) {
    query["ContacterWangwang"] = request.getContacterWangwang();
  }

  if (!!request.hasEmailConfirmed()) {
    query["EmailConfirmed"] = request.getEmailConfirmed();
  }

  if (!!request.hasMobileConfirmed()) {
    query["MobileConfirmed"] = request.getMobileConfirmed();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContacter"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContacterResponse>();
}

/**
 * @param request CreateContacterRequest
 * @return CreateContacterResponse
 */
CreateContacterResponse Client::createContacter(const CreateContacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContacterWithOptions(request, runtime);
}

/**
 * @param request CreateRealNameCertificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRealNameCertificationResponse
 */
CreateRealNameCertificationResponse Client::createRealNameCertificationWithOptions(const CreateRealNameCertificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountCertifyType()) {
    query["AccountCertifyType"] = request.getAccountCertifyType();
  }

  if (!!request.hasCorporateLicenseNumber()) {
    query["CorporateLicenseNumber"] = request.getCorporateLicenseNumber();
  }

  if (!!request.hasCorporateName()) {
    query["CorporateName"] = request.getCorporateName();
  }

  if (!!request.hasLicenseNumber()) {
    query["LicenseNumber"] = request.getLicenseNumber();
  }

  if (!!request.hasLicenseType()) {
    query["LicenseType"] = request.getLicenseType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRealNameCertification"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRealNameCertificationResponse>();
}

/**
 * @param request CreateRealNameCertificationRequest
 * @return CreateRealNameCertificationResponse
 */
CreateRealNameCertificationResponse Client::createRealNameCertification(const CreateRealNameCertificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRealNameCertificationWithOptions(request, runtime);
}

/**
 * @param request CustomerSensitiveInfoLogicalDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerSensitiveInfoLogicalDeleteResponse
 */
CustomerSensitiveInfoLogicalDeleteResponse Client::customerSensitiveInfoLogicalDeleteWithOptions(const CustomerSensitiveInfoLogicalDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CustomerSensitiveInfoLogicalDelete"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerSensitiveInfoLogicalDeleteResponse>();
}

/**
 * @param request CustomerSensitiveInfoLogicalDeleteRequest
 * @return CustomerSensitiveInfoLogicalDeleteResponse
 */
CustomerSensitiveInfoLogicalDeleteResponse Client::customerSensitiveInfoLogicalDelete(const CustomerSensitiveInfoLogicalDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerSensitiveInfoLogicalDeleteWithOptions(request, runtime);
}

/**
 * @param request CustomerSensitiveInfoPhysicalDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CustomerSensitiveInfoPhysicalDeleteResponse
 */
CustomerSensitiveInfoPhysicalDeleteResponse Client::customerSensitiveInfoPhysicalDeleteWithOptions(const CustomerSensitiveInfoPhysicalDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CustomerSensitiveInfoPhysicalDelete"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CustomerSensitiveInfoPhysicalDeleteResponse>();
}

/**
 * @param request CustomerSensitiveInfoPhysicalDeleteRequest
 * @return CustomerSensitiveInfoPhysicalDeleteResponse
 */
CustomerSensitiveInfoPhysicalDeleteResponse Client::customerSensitiveInfoPhysicalDelete(const CustomerSensitiveInfoPhysicalDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return customerSensitiveInfoPhysicalDeleteWithOptions(request, runtime);
}

/**
 * @summary 同步Del缓存操作
 *
 * @param request DelCacheOperateSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DelCacheOperateSyncResponse
 */
DelCacheOperateSyncResponse Client::delCacheOperateSyncWithOptions(const DelCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DelCacheOperateSync"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DelCacheOperateSyncResponse>();
}

/**
 * @summary 同步Del缓存操作
 *
 * @param request DelCacheOperateSyncRequest
 * @return DelCacheOperateSyncResponse
 */
DelCacheOperateSyncResponse Client::delCacheOperateSync(const DelCacheOperateSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return delCacheOperateSyncWithOptions(request, runtime);
}

/**
 * @param request DeleteContacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContacterResponse
 */
DeleteContacterResponse Client::deleteContacterWithOptions(const DeleteContacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContacterId()) {
    query["ContacterId"] = request.getContacterId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContacter"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContacterResponse>();
}

/**
 * @param request DeleteContacterRequest
 * @return DeleteContacterResponse
 */
DeleteContacterResponse Client::deleteContacter(const DeleteContacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContacterWithOptions(request, runtime);
}

/**
 * @param request DeleteCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomerLabelResponse
 */
DeleteCustomerLabelResponse Client::deleteCustomerLabelWithOptions(const DeleteCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasLabelTypes()) {
    query["LabelTypes"] = request.getLabelTypes();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomerLabel"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomerLabelResponse>();
}

/**
 * @param request DeleteCustomerLabelRequest
 * @return DeleteCustomerLabelResponse
 */
DeleteCustomerLabelResponse Client::deleteCustomerLabel(const DeleteCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomerLabelWithOptions(request, runtime);
}

/**
 * @summary 根据outerId查询是否存在绑定关系
 *
 * @param request ExistBindsByOuterIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExistBindsByOuterIdResponse
 */
ExistBindsByOuterIdResponse Client::existBindsByOuterIdWithOptions(const ExistBindsByOuterIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExistBindsByOuterId"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExistBindsByOuterIdResponse>();
}

/**
 * @summary 根据outerId查询是否存在绑定关系
 *
 * @param request ExistBindsByOuterIdRequest
 * @return ExistBindsByOuterIdResponse
 */
ExistBindsByOuterIdResponse Client::existBindsByOuterId(const ExistBindsByOuterIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return existBindsByOuterIdWithOptions(request, runtime);
}

/**
 * @param request FindAllContacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindAllContacterResponse
 */
FindAllContacterResponse Client::findAllContacterWithOptions(const FindAllContacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasLocaleString()) {
    query["LocaleString"] = request.getLocaleString();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindAllContacter"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindAllContacterResponse>();
}

/**
 * @param request FindAllContacterRequest
 * @return FindAllContacterResponse
 */
FindAllContacterResponse Client::findAllContacter(const FindAllContacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findAllContacterWithOptions(request, runtime);
}

/**
 * @param request FindBizCategoryConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindBizCategoryConfigResponse
 */
FindBizCategoryConfigResponse Client::findBizCategoryConfigWithOptions(const FindBizCategoryConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocaleString()) {
    query["LocaleString"] = request.getLocaleString();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindBizCategoryConfig"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindBizCategoryConfigResponse>();
}

/**
 * @param request FindBizCategoryConfigRequest
 * @return FindBizCategoryConfigResponse
 */
FindBizCategoryConfigResponse Client::findBizCategoryConfig(const FindBizCategoryConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findBizCategoryConfigWithOptions(request, runtime);
}

/**
 * @param request FindContacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindContacterResponse
 */
FindContacterResponse Client::findContacterWithOptions(const FindContacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContacterId()) {
    query["ContacterId"] = request.getContacterId();
  }

  if (!!request.hasLocaleString()) {
    query["LocaleString"] = request.getLocaleString();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindContacter"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindContacterResponse>();
}

/**
 * @param request FindContacterRequest
 * @return FindContacterResponse
 */
FindContacterResponse Client::findContacter(const FindContacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findContacterWithOptions(request, runtime);
}

/**
 * @param request FindCustomerInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindCustomerInfoResponse
 */
FindCustomerInfoResponse Client::findCustomerInfoWithOptions(const FindCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindCustomerInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindCustomerInfoResponse>();
}

/**
 * @param request FindCustomerInfoRequest
 * @return FindCustomerInfoResponse
 */
FindCustomerInfoResponse Client::findCustomerInfo(const FindCustomerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findCustomerInfoWithOptions(request, runtime);
}

/**
 * @param request FindCustomerSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindCustomerSnapshotResponse
 */
FindCustomerSnapshotResponse Client::findCustomerSnapshotWithOptions(const FindCustomerSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInfoType()) {
    query["InfoType"] = request.getInfoType();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindCustomerSnapshot"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindCustomerSnapshotResponse>();
}

/**
 * @param request FindCustomerSnapshotRequest
 * @return FindCustomerSnapshotResponse
 */
FindCustomerSnapshotResponse Client::findCustomerSnapshot(const FindCustomerSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findCustomerSnapshotWithOptions(request, runtime);
}

/**
 * @param request FindFinanceTaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindFinanceTaxResponse
 */
FindFinanceTaxResponse Client::findFinanceTaxWithOptions(const FindFinanceTaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHId()) {
    query["HId"] = request.getHId();
  }

  if (!!request.hasTaxVersion()) {
    query["TaxVersion"] = request.getTaxVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindFinanceTax"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindFinanceTaxResponse>();
}

/**
 * @param request FindFinanceTaxRequest
 * @return FindFinanceTaxResponse
 */
FindFinanceTaxResponse Client::findFinanceTax(const FindFinanceTaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findFinanceTaxWithOptions(request, runtime);
}

/**
 * @param request FindFinanceTaxDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindFinanceTaxDetailResponse
 */
FindFinanceTaxDetailResponse Client::findFinanceTaxDetailWithOptions(const FindFinanceTaxDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKpId()) {
    query["KpId"] = request.getKpId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindFinanceTaxDetail"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindFinanceTaxDetailResponse>();
}

/**
 * @param request FindFinanceTaxDetailRequest
 * @return FindFinanceTaxDetailResponse
 */
FindFinanceTaxDetailResponse Client::findFinanceTaxDetail(const FindFinanceTaxDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findFinanceTaxDetailWithOptions(request, runtime);
}

/**
 * @summary 登录过程中根据HID匹配Pk的历史逻辑
 *
 * @param request FindPkByHidForLoginWithLegacyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindPkByHidForLoginWithLegacyResponse
 */
FindPkByHidForLoginWithLegacyResponse Client::findPkByHidForLoginWithLegacyWithOptions(const FindPkByHidForLoginWithLegacyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindPkByHidForLoginWithLegacy"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindPkByHidForLoginWithLegacyResponse>();
}

/**
 * @summary 登录过程中根据HID匹配Pk的历史逻辑
 *
 * @param request FindPkByHidForLoginWithLegacyRequest
 * @return FindPkByHidForLoginWithLegacyResponse
 */
FindPkByHidForLoginWithLegacyResponse Client::findPkByHidForLoginWithLegacy(const FindPkByHidForLoginWithLegacyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findPkByHidForLoginWithLegacyWithOptions(request, runtime);
}

/**
 * @param request ForbiddenAgAccountLoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForbiddenAgAccountLoginResponse
 */
ForbiddenAgAccountLoginResponse Client::forbiddenAgAccountLoginWithOptions(const ForbiddenAgAccountLoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForbiddenAgAccountLogin"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForbiddenAgAccountLoginResponse>();
}

/**
 * @param request ForbiddenAgAccountLoginRequest
 * @return ForbiddenAgAccountLoginResponse
 */
ForbiddenAgAccountLoginResponse Client::forbiddenAgAccountLogin(const ForbiddenAgAccountLoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forbiddenAgAccountLoginWithOptions(request, runtime);
}

/**
 * @summary 获取实名认证url
 *
 * @param request GenerateAliyunCertUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAliyunCertUrlResponse
 */
GenerateAliyunCertUrlResponse Client::generateAliyunCertUrlWithOptions(const GenerateAliyunCertUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunPk()) {
    query["AliyunPk"] = request.getAliyunPk();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasApplyChannel()) {
    query["ApplyChannel"] = request.getApplyChannel();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.getApplyType();
  }

  if (!!request.hasCallback()) {
    query["Callback"] = request.getCallback();
  }

  if (!!request.hasCertWay()) {
    query["CertWay"] = request.getCertWay();
  }

  if (!!request.hasIgnoreAlreadyCert()) {
    query["IgnoreAlreadyCert"] = request.getIgnoreAlreadyCert();
  }

  if (!!request.hasIsMobile()) {
    query["IsMobile"] = request.getIsMobile();
  }

  if (!!request.hasIsOpenApp()) {
    query["IsOpenApp"] = request.getIsOpenApp();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasSubjectType()) {
    query["SubjectType"] = request.getSubjectType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateAliyunCertUrl"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAliyunCertUrlResponse>();
}

/**
 * @summary 获取实名认证url
 *
 * @param request GenerateAliyunCertUrlRequest
 * @return GenerateAliyunCertUrlResponse
 */
GenerateAliyunCertUrlResponse Client::generateAliyunCertUrl(const GenerateAliyunCertUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAliyunCertUrlWithOptions(request, runtime);
}

/**
 * @param request GetAgAccountAkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgAccountAkResponse
 */
GetAgAccountAkResponse Client::getAgAccountAkWithOptions(const GetAgAccountAkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgAccountAk"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgAccountAkResponse>();
}

/**
 * @param request GetAgAccountAkRequest
 * @return GetAgAccountAkResponse
 */
GetAgAccountAkResponse Client::getAgAccountAk(const GetAgAccountAkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgAccountAkWithOptions(request, runtime);
}

/**
 * @summary 申请ag注销
 *
 * @param request GetAgOneKeyDeleteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgOneKeyDeleteTaskResponse
 */
GetAgOneKeyDeleteTaskResponse Client::getAgOneKeyDeleteTaskWithOptions(const GetAgOneKeyDeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgOneKeyDeleteTask"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgOneKeyDeleteTaskResponse>();
}

/**
 * @summary 申请ag注销
 *
 * @param request GetAgOneKeyDeleteTaskRequest
 * @return GetAgOneKeyDeleteTaskResponse
 */
GetAgOneKeyDeleteTaskResponse Client::getAgOneKeyDeleteTask(const GetAgOneKeyDeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgOneKeyDeleteTaskWithOptions(request, runtime);
}

/**
 * @param request GetAgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgRelationResponse
 */
GetAgRelationResponse Client::getAgRelationWithOptions(const GetAgRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgRelation"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgRelationResponse>();
}

/**
 * @param request GetAgRelationRequest
 * @return GetAgRelationResponse
 */
GetAgRelationResponse Client::getAgRelation(const GetAgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgRelationWithOptions(request, runtime);
}

/**
 * @param request GetAliyunIdByPkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAliyunIdByPkResponse
 */
GetAliyunIdByPkResponse Client::getAliyunIdByPkWithOptions(const GetAliyunIdByPkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAliyunIdByPk"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAliyunIdByPkResponse>();
}

/**
 * @param request GetAliyunIdByPkRequest
 * @return GetAliyunIdByPkResponse
 */
GetAliyunIdByPkResponse Client::getAliyunIdByPk(const GetAliyunIdByPkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAliyunIdByPkWithOptions(request, runtime);
}

/**
 * @param request GetAliyunPKByAliyunIDRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAliyunPKByAliyunIDResponse
 */
GetAliyunPKByAliyunIDResponse Client::getAliyunPKByAliyunIDWithOptions(const GetAliyunPKByAliyunIDRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunId()) {
    query["AliyunId"] = request.getAliyunId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAliyunPKByAliyunID"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAliyunPKByAliyunIDResponse>();
}

/**
 * @param request GetAliyunPKByAliyunIDRequest
 * @return GetAliyunPKByAliyunIDResponse
 */
GetAliyunPKByAliyunIDResponse Client::getAliyunPKByAliyunID(const GetAliyunPKByAliyunIDRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAliyunPKByAliyunIDWithOptions(request, runtime);
}

/**
 * @param request GetCustomerCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerCategoryResponse
 */
GetCustomerCategoryResponse Client::getCustomerCategoryWithOptions(const GetCustomerCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocaleString()) {
    query["LocaleString"] = request.getLocaleString();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerCategory"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerCategoryResponse>();
}

/**
 * @param request GetCustomerCategoryRequest
 * @return GetCustomerCategoryResponse
 */
GetCustomerCategoryResponse Client::getCustomerCategory(const GetCustomerCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerCategoryWithOptions(request, runtime);
}

/**
 * @param request GetCustomerCategoryDictionaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerCategoryDictionaryResponse
 */
GetCustomerCategoryDictionaryResponse Client::getCustomerCategoryDictionaryWithOptions(const GetCustomerCategoryDictionaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerCategoryDictionary"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerCategoryDictionaryResponse>();
}

/**
 * @param request GetCustomerCategoryDictionaryRequest
 * @return GetCustomerCategoryDictionaryResponse
 */
GetCustomerCategoryDictionaryResponse Client::getCustomerCategoryDictionary(const GetCustomerCategoryDictionaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerCategoryDictionaryWithOptions(request, runtime);
}

/**
 * @param request GetCustomerInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomerInformationResponse
 */
GetCustomerInformationResponse Client::getCustomerInformationWithOptions(const GetCustomerInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomerInformation"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomerInformationResponse>();
}

/**
 * @param request GetCustomerInformationRequest
 * @return GetCustomerInformationResponse
 */
GetCustomerInformationResponse Client::getCustomerInformation(const GetCustomerInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomerInformationWithOptions(request, runtime);
}

/**
 * @param request GetDingTalkUserOrgByAliyunTmpCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDingTalkUserOrgByAliyunTmpCodeResponse
 */
GetDingTalkUserOrgByAliyunTmpCodeResponse Client::getDingTalkUserOrgByAliyunTmpCodeWithOptions(const GetDingTalkUserOrgByAliyunTmpCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDingTalkUserOrgByAliyunTmpCode"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDingTalkUserOrgByAliyunTmpCodeResponse>();
}

/**
 * @param request GetDingTalkUserOrgByAliyunTmpCodeRequest
 * @return GetDingTalkUserOrgByAliyunTmpCodeResponse
 */
GetDingTalkUserOrgByAliyunTmpCodeResponse Client::getDingTalkUserOrgByAliyunTmpCode(const GetDingTalkUserOrgByAliyunTmpCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDingTalkUserOrgByAliyunTmpCodeWithOptions(request, runtime);
}

/**
 * @param request GetIdentityRegistrationByCustomerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIdentityRegistrationByCustomerResponse
 */
GetIdentityRegistrationByCustomerResponse Client::getIdentityRegistrationByCustomerWithOptions(const GetIdentityRegistrationByCustomerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIdentityRegistrationByCustomer"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIdentityRegistrationByCustomerResponse>();
}

/**
 * @param request GetIdentityRegistrationByCustomerRequest
 * @return GetIdentityRegistrationByCustomerResponse
 */
GetIdentityRegistrationByCustomerResponse Client::getIdentityRegistrationByCustomer(const GetIdentityRegistrationByCustomerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIdentityRegistrationByCustomerWithOptions(request, runtime);
}

/**
 * @param request GetProfileTypeByPkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProfileTypeByPkResponse
 */
GetProfileTypeByPkResponse Client::getProfileTypeByPkWithOptions(const GetProfileTypeByPkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProfileTypeByPk"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProfileTypeByPkResponse>();
}

/**
 * @param request GetProfileTypeByPkRequest
 * @return GetProfileTypeByPkResponse
 */
GetProfileTypeByPkResponse Client::getProfileTypeByPk(const GetProfileTypeByPkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProfileTypeByPkWithOptions(request, runtime);
}

/**
 * @param request GetUploadIdentityRegistrationDocConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadIdentityRegistrationDocConfigResponse
 */
GetUploadIdentityRegistrationDocConfigResponse Client::getUploadIdentityRegistrationDocConfigWithOptions(const GetUploadIdentityRegistrationDocConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadIdentityRegistrationDocConfig"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadIdentityRegistrationDocConfigResponse>();
}

/**
 * @param request GetUploadIdentityRegistrationDocConfigRequest
 * @return GetUploadIdentityRegistrationDocConfigResponse
 */
GetUploadIdentityRegistrationDocConfigResponse Client::getUploadIdentityRegistrationDocConfig(const GetUploadIdentityRegistrationDocConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadIdentityRegistrationDocConfigWithOptions(request, runtime);
}

/**
 * @summary IncrBy缓存操作
 *
 * @param request IncrByCacheOperateSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IncrByCacheOperateSyncResponse
 */
IncrByCacheOperateSyncResponse Client::incrByCacheOperateSyncWithOptions(const IncrByCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultValue()) {
    query["DefaultValue"] = request.getDefaultValue();
  }

  if (!!request.hasExpireSeconds()) {
    query["ExpireSeconds"] = request.getExpireSeconds();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasStep()) {
    query["Step"] = request.getStep();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IncrByCacheOperateSync"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IncrByCacheOperateSyncResponse>();
}

/**
 * @summary IncrBy缓存操作
 *
 * @param request IncrByCacheOperateSyncRequest
 * @return IncrByCacheOperateSyncResponse
 */
IncrByCacheOperateSyncResponse Client::incrByCacheOperateSync(const IncrByCacheOperateSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return incrByCacheOperateSyncWithOptions(request, runtime);
}

/**
 * @summary 申请ag注销
 *
 * @param request JudgeAgExistQuietPeriodRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JudgeAgExistQuietPeriodResponse
 */
JudgeAgExistQuietPeriodResponse Client::judgeAgExistQuietPeriodWithOptions(const JudgeAgExistQuietPeriodRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JudgeAgExistQuietPeriod"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JudgeAgExistQuietPeriodResponse>();
}

/**
 * @summary 申请ag注销
 *
 * @param request JudgeAgExistQuietPeriodRequest
 * @return JudgeAgExistQuietPeriodResponse
 */
JudgeAgExistQuietPeriodResponse Client::judgeAgExistQuietPeriod(const JudgeAgExistQuietPeriodRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return judgeAgExistQuietPeriodWithOptions(request, runtime);
}

/**
 * @param request LoadRealNameInfoByPkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadRealNameInfoByPkResponse
 */
LoadRealNameInfoByPkResponse Client::loadRealNameInfoByPkWithOptions(const LoadRealNameInfoByPkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoadRealNameInfoByPk"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadRealNameInfoByPkResponse>();
}

/**
 * @param request LoadRealNameInfoByPkRequest
 * @return LoadRealNameInfoByPkResponse
 */
LoadRealNameInfoByPkResponse Client::loadRealNameInfoByPk(const LoadRealNameInfoByPkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadRealNameInfoByPkWithOptions(request, runtime);
}

/**
 * @param tmpReq MapFromHavanaBindIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MapFromHavanaBindIdResponse
 */
MapFromHavanaBindIdResponse Client::mapFromHavanaBindIdWithOptions(const MapFromHavanaBindIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MapFromHavanaBindIdShrinkRequest request = MapFromHavanaBindIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHavanaBindStations()) {
    request.setHavanaBindStationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHavanaBindStations(), "HavanaBindStations", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasHavanaBindId()) {
    query["HavanaBindId"] = request.getHavanaBindId();
  }

  if (!!request.hasHavanaBindStationsShrink()) {
    query["HavanaBindStations"] = request.getHavanaBindStationsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MapFromHavanaBindId"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MapFromHavanaBindIdResponse>();
}

/**
 * @param request MapFromHavanaBindIdRequest
 * @return MapFromHavanaBindIdResponse
 */
MapFromHavanaBindIdResponse Client::mapFromHavanaBindId(const MapFromHavanaBindIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mapFromHavanaBindIdWithOptions(request, runtime);
}

/**
 * @param request MapPkFromHidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MapPkFromHidResponse
 */
MapPkFromHidResponse Client::mapPkFromHidWithOptions(const MapPkFromHidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasBid()) {
    query["Bid"] = request.getBid();
  }

  if (!!request.hasHid()) {
    query["Hid"] = request.getHid();
  }

  if (!!request.hasMappingScenes()) {
    query["MappingScenes"] = request.getMappingScenes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MapPkFromHid"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MapPkFromHidResponse>();
}

/**
 * @param request MapPkFromHidRequest
 * @return MapPkFromHidResponse
 */
MapPkFromHidResponse Client::mapPkFromHid(const MapPkFromHidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mapPkFromHidWithOptions(request, runtime);
}

/**
 * @param request MapPkToHidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MapPkToHidResponse
 */
MapPkToHidResponse Client::mapPkToHidWithOptions(const MapPkToHidRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMappingScenes()) {
    query["MappingScenes"] = request.getMappingScenes();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MapPkToHid"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MapPkToHidResponse>();
}

/**
 * @param request MapPkToHidRequest
 * @return MapPkToHidResponse
 */
MapPkToHidResponse Client::mapPkToHid(const MapPkToHidRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mapPkToHidWithOptions(request, runtime);
}

/**
 * @param tmpReq MapToHavanaBindIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MapToHavanaBindIdResponse
 */
MapToHavanaBindIdResponse Client::mapToHavanaBindIdWithOptions(const MapToHavanaBindIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MapToHavanaBindIdShrinkRequest request = MapToHavanaBindIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHavanaBindStations()) {
    request.setHavanaBindStationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHavanaBindStations(), "HavanaBindStations", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasHavanaBindStationsShrink()) {
    query["HavanaBindStations"] = request.getHavanaBindStationsShrink();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MapToHavanaBindId"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MapToHavanaBindIdResponse>();
}

/**
 * @param request MapToHavanaBindIdRequest
 * @return MapToHavanaBindIdResponse
 */
MapToHavanaBindIdResponse Client::mapToHavanaBindId(const MapToHavanaBindIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mapToHavanaBindIdWithOptions(request, runtime);
}

/**
 * @param request ModifyBizCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBizCategoryResponse
 */
ModifyBizCategoryResponse Client::modifyBizCategoryWithOptions(const ModifyBizCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamList()) {
    query["ParamList"] = request.getParamList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBizCategory"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBizCategoryResponse>();
}

/**
 * @param request ModifyBizCategoryRequest
 * @return ModifyBizCategoryResponse
 */
ModifyBizCategoryResponse Client::modifyBizCategory(const ModifyBizCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBizCategoryWithOptions(request, runtime);
}

/**
 * @param request ModifyContacterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyContacterResponse
 */
ModifyContacterResponse Client::modifyContacterWithOptions(const ModifyContacterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContacterAddress()) {
    query["ContacterAddress"] = request.getContacterAddress();
  }

  if (!!request.hasContacterDingding()) {
    query["ContacterDingding"] = request.getContacterDingding();
  }

  if (!!request.hasContacterEmail()) {
    query["ContacterEmail"] = request.getContacterEmail();
  }

  if (!!request.hasContacterId()) {
    query["ContacterId"] = request.getContacterId();
  }

  if (!!request.hasContacterMobile()) {
    query["ContacterMobile"] = request.getContacterMobile();
  }

  if (!!request.hasContacterName()) {
    query["ContacterName"] = request.getContacterName();
  }

  if (!!request.hasContacterPosition()) {
    query["ContacterPosition"] = request.getContacterPosition();
  }

  if (!!request.hasContacterStaffNo()) {
    query["ContacterStaffNo"] = request.getContacterStaffNo();
  }

  if (!!request.hasContacterType()) {
    query["ContacterType"] = request.getContacterType();
  }

  if (!!request.hasContacterWangwang()) {
    query["ContacterWangwang"] = request.getContacterWangwang();
  }

  if (!!request.hasEmailConfirmed()) {
    query["EmailConfirmed"] = request.getEmailConfirmed();
  }

  if (!!request.hasMobileConfirmed()) {
    query["MobileConfirmed"] = request.getMobileConfirmed();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyContacter"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyContacterResponse>();
}

/**
 * @param request ModifyContacterRequest
 * @return ModifyContacterResponse
 */
ModifyContacterResponse Client::modifyContacter(const ModifyContacterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyContacterWithOptions(request, runtime);
}

/**
 * @param request ModifyCustomerInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomerInfoResponse
 */
ModifyCustomerInfoResponse Client::modifyCustomerInfoWithOptions(const ModifyCustomerInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBiz()) {
    query["Biz"] = request.getBiz();
  }

  if (!!request.hasCustomerCategory()) {
    query["CustomerCategory"] = request.getCustomerCategory();
  }

  if (!!request.hasCustomerSubCategory()) {
    query["CustomerSubCategory"] = request.getCustomerSubCategory();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWebsite()) {
    query["Website"] = request.getWebsite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustomerInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomerInfoResponse>();
}

/**
 * @param request ModifyCustomerInfoRequest
 * @return ModifyCustomerInfoResponse
 */
ModifyCustomerInfoResponse Client::modifyCustomerInfo(const ModifyCustomerInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomerInfoWithOptions(request, runtime);
}

/**
 * @param request OperateFinanceTaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateFinanceTaxResponse
 */
OperateFinanceTaxResponse Client::operateFinanceTaxWithOptions(const OperateFinanceTaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFinanceTax()) {
    query["FinanceTax"] = request.getFinanceTax();
  }

  if (!!request.hasFinanceTaxCertificateImgName()) {
    query["FinanceTaxCertificateImgName"] = request.getFinanceTaxCertificateImgName();
  }

  if (!!request.hasHId()) {
    query["HId"] = request.getHId();
  }

  if (!!request.hasSecondFinanceTax()) {
    query["SecondFinanceTax"] = request.getSecondFinanceTax();
  }

  if (!!request.hasSecondFinanceTaxCertificateImgName()) {
    query["SecondFinanceTaxCertificateImgName"] = request.getSecondFinanceTaxCertificateImgName();
  }

  if (!!request.hasSecondFinanceTaxCertificateImgUrl()) {
    query["SecondFinanceTaxCertificateImgUrl"] = request.getSecondFinanceTaxCertificateImgUrl();
  }

  if (!!request.hasFinanceTaxCertificateImgUrl()) {
    query["financeTaxCertificateImgUrl"] = request.getFinanceTaxCertificateImgUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateFinanceTax"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateFinanceTaxResponse>();
}

/**
 * @param request OperateFinanceTaxRequest
 * @return OperateFinanceTaxResponse
 */
OperateFinanceTaxResponse Client::operateFinanceTax(const OperateFinanceTaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateFinanceTaxWithOptions(request, runtime);
}

/**
 * @param request QueryAccountAddressInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountAddressInfoResponse
 */
QueryAccountAddressInfoResponse Client::queryAccountAddressInfoWithOptions(const QueryAccountAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressVersion()) {
    query["AddressVersion"] = request.getAddressVersion();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountAddressInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountAddressInfoResponse>();
}

/**
 * @param request QueryAccountAddressInfoRequest
 * @return QueryAccountAddressInfoResponse
 */
QueryAccountAddressInfoResponse Client::queryAccountAddressInfo(const QueryAccountAddressInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountAddressInfoWithOptions(request, runtime);
}

/**
 * @param request QueryAccountAddressInfoWithoutHavanaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountAddressInfoWithoutHavanaResponse
 */
QueryAccountAddressInfoWithoutHavanaResponse Client::queryAccountAddressInfoWithoutHavanaWithOptions(const QueryAccountAddressInfoWithoutHavanaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddressVersion()) {
    query["AddressVersion"] = request.getAddressVersion();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountAddressInfoWithoutHavana"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountAddressInfoWithoutHavanaResponse>();
}

/**
 * @param request QueryAccountAddressInfoWithoutHavanaRequest
 * @return QueryAccountAddressInfoWithoutHavanaResponse
 */
QueryAccountAddressInfoWithoutHavanaResponse Client::queryAccountAddressInfoWithoutHavana(const QueryAccountAddressInfoWithoutHavanaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountAddressInfoWithoutHavanaWithOptions(request, runtime);
}

/**
 * @summary 查询账号收货地址
 *
 * @param request QueryAccountDeliveryAddressInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountDeliveryAddressInfoResponse
 */
QueryAccountDeliveryAddressInfoResponse Client::queryAccountDeliveryAddressInfoWithOptions(const QueryAccountDeliveryAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountDeliveryAddressInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountDeliveryAddressInfoResponse>();
}

/**
 * @summary 查询账号收货地址
 *
 * @param request QueryAccountDeliveryAddressInfoRequest
 * @return QueryAccountDeliveryAddressInfoResponse
 */
QueryAccountDeliveryAddressInfoResponse Client::queryAccountDeliveryAddressInfo(const QueryAccountDeliveryAddressInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountDeliveryAddressInfoWithOptions(request, runtime);
}

/**
 * @param request QueryAccountProfileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountProfileInfoResponse
 */
QueryAccountProfileInfoResponse Client::queryAccountProfileInfoWithOptions(const QueryAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountProfileInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountProfileInfoResponse>();
}

/**
 * @param request QueryAccountProfileInfoRequest
 * @return QueryAccountProfileInfoResponse
 */
QueryAccountProfileInfoResponse Client::queryAccountProfileInfo(const QueryAccountProfileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountProfileInfoWithOptions(request, runtime);
}

/**
 * @param request QueryAccountRealNameInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountRealNameInfoResponse
 */
QueryAccountRealNameInfoResponse Client::queryAccountRealNameInfoWithOptions(const QueryAccountRealNameInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountRealNameInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountRealNameInfoResponse>();
}

/**
 * @param request QueryAccountRealNameInfoRequest
 * @return QueryAccountRealNameInfoResponse
 */
QueryAccountRealNameInfoResponse Client::queryAccountRealNameInfo(const QueryAccountRealNameInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountRealNameInfoWithOptions(request, runtime);
}

/**
 * @param request QueryAccountSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountSiteResponse
 */
QueryAccountSiteResponse Client::queryAccountSiteWithOptions(const QueryAccountSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountSite"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountSiteResponse>();
}

/**
 * @param request QueryAccountSiteRequest
 * @return QueryAccountSiteResponse
 */
QueryAccountSiteResponse Client::queryAccountSite(const QueryAccountSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountSiteWithOptions(request, runtime);
}

/**
 * @param request QueryAccountTrueNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAccountTrueNameResponse
 */
QueryAccountTrueNameResponse Client::queryAccountTrueNameWithOptions(const QueryAccountTrueNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAccountTrueName"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAccountTrueNameResponse>();
}

/**
 * @param request QueryAccountTrueNameRequest
 * @return QueryAccountTrueNameResponse
 */
QueryAccountTrueNameResponse Client::queryAccountTrueName(const QueryAccountTrueNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAccountTrueNameWithOptions(request, runtime);
}

/**
 * @param request QueryAgAccountLoginPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAgAccountLoginPermissionResponse
 */
QueryAgAccountLoginPermissionResponse Client::queryAgAccountLoginPermissionWithOptions(const QueryAgAccountLoginPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAgAccountLoginPermission"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAgAccountLoginPermissionResponse>();
}

/**
 * @param request QueryAgAccountLoginPermissionRequest
 * @return QueryAgAccountLoginPermissionResponse
 */
QueryAgAccountLoginPermissionResponse Client::queryAgAccountLoginPermission(const QueryAgAccountLoginPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAgAccountLoginPermissionWithOptions(request, runtime);
}

/**
 * @param request QueryAgRelationCountAndQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAgRelationCountAndQuotaResponse
 */
QueryAgRelationCountAndQuotaResponse Client::queryAgRelationCountAndQuotaWithOptions(const QueryAgRelationCountAndQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppName()) {
    body["AppName"] = request.getAppName();
  }

  if (!!request.hasCallerBid()) {
    body["CallerBid"] = request.getCallerBid();
  }

  if (!!request.hasCallerParentId()) {
    body["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCallerType()) {
    body["CallerType"] = request.getCallerType();
  }

  if (!!request.hasCallerUid()) {
    body["CallerUid"] = request.getCallerUid();
  }

  if (!!request.hasMpk()) {
    body["Mpk"] = request.getMpk();
  }

  if (!!request.hasNullObject()) {
    body["NullObject"] = request.getNullObject();
  }

  if (!!request.hasRequestId()) {
    body["RequestId"] = request.getRequestId();
  }

  if (!!request.hasSecurityToken()) {
    body["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSourceIp()) {
    body["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStsTokenCallerBid()) {
    body["StsTokenCallerBid"] = request.getStsTokenCallerBid();
  }

  if (!!request.hasStsTokenCallerUid()) {
    body["StsTokenCallerUid"] = request.getStsTokenCallerUid();
  }

  if (!!request.hasStsTokenRoleId()) {
    body["StsTokenRoleId"] = request.getStsTokenRoleId();
  }

  if (!!request.hasVersion()) {
    body["Version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryAgRelationCountAndQuota"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAgRelationCountAndQuotaResponse>();
}

/**
 * @param request QueryAgRelationCountAndQuotaRequest
 * @return QueryAgRelationCountAndQuotaResponse
 */
QueryAgRelationCountAndQuotaResponse Client::queryAgRelationCountAndQuota(const QueryAgRelationCountAndQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAgRelationCountAndQuotaWithOptions(request, runtime);
}

/**
 * @param request QueryAgSecurityMobileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAgSecurityMobileResponse
 */
QueryAgSecurityMobileResponse Client::queryAgSecurityMobileWithOptions(const QueryAgSecurityMobileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAgSecurityMobile"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAgSecurityMobileResponse>();
}

/**
 * @param request QueryAgSecurityMobileRequest
 * @return QueryAgSecurityMobileResponse
 */
QueryAgSecurityMobileResponse Client::queryAgSecurityMobile(const QueryAgSecurityMobileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAgSecurityMobileWithOptions(request, runtime);
}

/**
 * @param request QueryBindsByOuterIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBindsByOuterIdResponse
 */
QueryBindsByOuterIdResponse Client::queryBindsByOuterIdWithOptions(const QueryBindsByOuterIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasMinorOuterId()) {
    query["MinorOuterId"] = request.getMinorOuterId();
  }

  if (!!request.hasOuterId()) {
    query["OuterId"] = request.getOuterId();
  }

  if (!!request.hasTenantId()) {
    query["TenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBindsByOuterId"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBindsByOuterIdResponse>();
}

/**
 * @param request QueryBindsByOuterIdRequest
 * @return QueryBindsByOuterIdResponse
 */
QueryBindsByOuterIdResponse Client::queryBindsByOuterId(const QueryBindsByOuterIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBindsByOuterIdWithOptions(request, runtime);
}

/**
 * @param tmpReq QueryBindsByPkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBindsByPkResponse
 */
QueryBindsByPkResponse Client::queryBindsByPkWithOptions(const QueryBindsByPkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryBindsByPkShrinkRequest request = QueryBindsByPkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTenantIds()) {
    request.setTenantIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTenantIds(), "TenantIds", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasTenantIdsShrink()) {
    query["TenantIds"] = request.getTenantIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryBindsByPk"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBindsByPkResponse>();
}

/**
 * @param request QueryBindsByPkRequest
 * @return QueryBindsByPkResponse
 */
QueryBindsByPkResponse Client::queryBindsByPk(const QueryBindsByPkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBindsByPkWithOptions(request, runtime);
}

/**
 * @param request QueryCustomerLabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCustomerLabelResponse
 */
QueryCustomerLabelResponse Client::queryCustomerLabelWithOptions(const QueryCustomerLabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelSeries()) {
    query["LabelSeries"] = request.getLabelSeries();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCustomerLabel"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCustomerLabelResponse>();
}

/**
 * @param request QueryCustomerLabelRequest
 * @return QueryCustomerLabelResponse
 */
QueryCustomerLabelResponse Client::queryCustomerLabel(const QueryCustomerLabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCustomerLabelWithOptions(request, runtime);
}

/**
 * @param request QueryDeleteTaskCheckDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDeleteTaskCheckDataResponse
 */
QueryDeleteTaskCheckDataResponse Client::queryDeleteTaskCheckDataWithOptions(const QueryDeleteTaskCheckDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasLongLang()) {
    query["LongLang"] = request.getLongLang();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDeleteTaskCheckData"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDeleteTaskCheckDataResponse>();
}

/**
 * @param request QueryDeleteTaskCheckDataRequest
 * @return QueryDeleteTaskCheckDataResponse
 */
QueryDeleteTaskCheckDataResponse Client::queryDeleteTaskCheckData(const QueryDeleteTaskCheckDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDeleteTaskCheckDataWithOptions(request, runtime);
}

/**
 * @param request QueryEncryptedAccountProfileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEncryptedAccountProfileInfoResponse
 */
QueryEncryptedAccountProfileInfoResponse Client::queryEncryptedAccountProfileInfoWithOptions(const QueryEncryptedAccountProfileInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEncryptedAccountProfileInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEncryptedAccountProfileInfoResponse>();
}

/**
 * @param request QueryEncryptedAccountProfileInfoRequest
 * @return QueryEncryptedAccountProfileInfoResponse
 */
QueryEncryptedAccountProfileInfoResponse Client::queryEncryptedAccountProfileInfo(const QueryEncryptedAccountProfileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEncryptedAccountProfileInfoWithOptions(request, runtime);
}

/**
 * @param request QueryEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEnterpriseInfoResponse
 */
QueryEnterpriseInfoResponse Client::queryEnterpriseInfoWithOptions(const QueryEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseVersion()) {
    query["EnterpriseVersion"] = request.getEnterpriseVersion();
  }

  if (!!request.hasHavanaId()) {
    query["HavanaId"] = request.getHavanaId();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEnterpriseInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEnterpriseInfoResponse>();
}

/**
 * @param request QueryEnterpriseInfoRequest
 * @return QueryEnterpriseInfoResponse
 */
QueryEnterpriseInfoResponse Client::queryEnterpriseInfo(const QueryEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request QueryEnumConfigByTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEnumConfigByTypeResponse
 */
QueryEnumConfigByTypeResponse Client::queryEnumConfigByTypeWithOptions(const QueryEnumConfigByTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryEnumConfigByType"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryEnumConfigByTypeResponse>();
}

/**
 * @param request QueryEnumConfigByTypeRequest
 * @return QueryEnumConfigByTypeResponse
 */
QueryEnumConfigByTypeResponse Client::queryEnumConfigByType(const QueryEnumConfigByTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEnumConfigByTypeWithOptions(request, runtime);
}

/**
 * @param request QueryOneKeyDeleteBlockListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOneKeyDeleteBlockListResponse
 */
QueryOneKeyDeleteBlockListResponse Client::queryOneKeyDeleteBlockListWithOptions(const QueryOneKeyDeleteBlockListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOneKeyDeleteBlockList"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOneKeyDeleteBlockListResponse>();
}

/**
 * @param request QueryOneKeyDeleteBlockListRequest
 * @return QueryOneKeyDeleteBlockListResponse
 */
QueryOneKeyDeleteBlockListResponse Client::queryOneKeyDeleteBlockList(const QueryOneKeyDeleteBlockListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOneKeyDeleteBlockListWithOptions(request, runtime);
}

/**
 * @param request QuerySecurityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecurityInfoResponse
 */
QuerySecurityInfoResponse Client::querySecurityInfoWithOptions(const QuerySecurityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySecurityInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecurityInfoResponse>();
}

/**
 * @param request QuerySecurityInfoRequest
 * @return QuerySecurityInfoResponse
 */
QuerySecurityInfoResponse Client::querySecurityInfo(const QuerySecurityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecurityInfoWithOptions(request, runtime);
}

/**
 * @param request RegisterInternalAccountForBucRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterInternalAccountForBucResponse
 */
RegisterInternalAccountForBucResponse Client::registerInternalAccountForBucWithOptions(const RegisterInternalAccountForBucRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBid()) {
    query["Bid"] = request.getBid();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasIsEmailConfirmed()) {
    query["IsEmailConfirmed"] = request.getIsEmailConfirmed();
  }

  if (!!request.hasIsMobileConfirmed()) {
    query["IsMobileConfirmed"] = request.getIsMobileConfirmed();
  }

  if (!!request.hasIsMobileLogin()) {
    query["IsMobileLogin"] = request.getIsMobileLogin();
  }

  if (!!request.hasMobile()) {
    query["Mobile"] = request.getMobile();
  }

  if (!!request.hasNationalityCode()) {
    query["NationalityCode"] = request.getNationalityCode();
  }

  if (!!request.hasPlainPassword()) {
    query["PlainPassword"] = request.getPlainPassword();
  }

  if (!!request.hasPreferredLanguage()) {
    query["PreferredLanguage"] = request.getPreferredLanguage();
  }

  if (!!request.hasAccountTypeCode()) {
    query["accountTypeCode"] = request.getAccountTypeCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterInternalAccountForBuc"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterInternalAccountForBucResponse>();
}

/**
 * @param request RegisterInternalAccountForBucRequest
 * @return RegisterInternalAccountForBucResponse
 */
RegisterInternalAccountForBucResponse Client::registerInternalAccountForBuc(const RegisterInternalAccountForBucRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerInternalAccountForBucWithOptions(request, runtime);
}

/**
 * @param request ReleaseAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseAgAccountResponse
 */
ReleaseAgAccountResponse Client::releaseAgAccountWithOptions(const ReleaseAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasReleaseReason()) {
    query["ReleaseReason"] = request.getReleaseReason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseAgAccountResponse>();
}

/**
 * @param request ReleaseAgAccountRequest
 * @return ReleaseAgAccountResponse
 */
ReleaseAgAccountResponse Client::releaseAgAccount(const ReleaseAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseAgAccountWithOptions(request, runtime);
}

/**
 * @param request ResendAsyncCreateAgAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendAsyncCreateAgAccountResponse
 */
ResendAsyncCreateAgAccountResponse Client::resendAsyncCreateAgAccountWithOptions(const ResendAsyncCreateAgAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNo()) {
    query["TraceNo"] = request.getTraceNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendAsyncCreateAgAccount"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendAsyncCreateAgAccountResponse>();
}

/**
 * @param request ResendAsyncCreateAgAccountRequest
 * @return ResendAsyncCreateAgAccountResponse
 */
ResendAsyncCreateAgAccountResponse Client::resendAsyncCreateAgAccount(const ResendAsyncCreateAgAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendAsyncCreateAgAccountWithOptions(request, runtime);
}

/**
 * @param request ResendAsyncModifyLoginEmailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResendAsyncModifyLoginEmailResponse
 */
ResendAsyncModifyLoginEmailResponse Client::resendAsyncModifyLoginEmailWithOptions(const ResendAsyncModifyLoginEmailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasTraceNo()) {
    query["TraceNo"] = request.getTraceNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResendAsyncModifyLoginEmail"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResendAsyncModifyLoginEmailResponse>();
}

/**
 * @param request ResendAsyncModifyLoginEmailRequest
 * @return ResendAsyncModifyLoginEmailResponse
 */
ResendAsyncModifyLoginEmailResponse Client::resendAsyncModifyLoginEmail(const ResendAsyncModifyLoginEmailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resendAsyncModifyLoginEmailWithOptions(request, runtime);
}

/**
 * @param request SeparateAgRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SeparateAgRelationResponse
 */
SeparateAgRelationResponse Client::separateAgRelationWithOptions(const SeparateAgRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SeparateAgRelation"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SeparateAgRelationResponse>();
}

/**
 * @param request SeparateAgRelationRequest
 * @return SeparateAgRelationResponse
 */
SeparateAgRelationResponse Client::separateAgRelation(const SeparateAgRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return separateAgRelationWithOptions(request, runtime);
}

/**
 * @summary 同步set操作
 *
 * @param request SetCacheOperateSyncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCacheOperateSyncResponse
 */
SetCacheOperateSyncResponse Client::setCacheOperateSyncWithOptions(const SetCacheOperateSyncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExceptVersion()) {
    query["ExceptVersion"] = request.getExceptVersion();
  }

  if (!!request.hasExpireSeconds()) {
    query["ExpireSeconds"] = request.getExpireSeconds();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasSetType()) {
    query["SetType"] = request.getSetType();
  }

  if (!!request.hasValueClazz()) {
    query["ValueClazz"] = request.getValueClazz();
  }

  if (!!request.hasValueString()) {
    query["ValueString"] = request.getValueString();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCacheOperateSync"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCacheOperateSyncResponse>();
}

/**
 * @summary 同步set操作
 *
 * @param request SetCacheOperateSyncRequest
 * @return SetCacheOperateSyncResponse
 */
SetCacheOperateSyncResponse Client::setCacheOperateSync(const SetCacheOperateSyncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCacheOperateSyncWithOptions(request, runtime);
}

/**
 * @param tmpReq UpdateAccountAddressInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountAddressInfoResponse
 */
UpdateAccountAddressInfoResponse Client::updateAccountAddressInfoWithOptions(const UpdateAccountAddressInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAccountAddressInfoShrinkRequest request = UpdateAccountAddressInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCityJsonString()) {
    request.setCityJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCityJsonString(), "CityJsonString", "json"));
  }

  if (!!tmpReq.hasDistrictJsonString()) {
    request.setDistrictJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDistrictJsonString(), "DistrictJsonString", "json"));
  }

  if (!!tmpReq.hasProvinceJsonString()) {
    request.setProvinceJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProvinceJsonString(), "ProvinceJsonString", "json"));
  }

  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddress2()) {
    query["Address2"] = request.getAddress2();
  }

  if (!!request.hasCityJsonStringShrink()) {
    query["CityJsonString"] = request.getCityJsonStringShrink();
  }

  if (!!request.hasDistrictJsonStringShrink()) {
    query["DistrictJsonString"] = request.getDistrictJsonStringShrink();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasPostCode()) {
    query["PostCode"] = request.getPostCode();
  }

  if (!!request.hasProvinceJsonStringShrink()) {
    query["ProvinceJsonString"] = request.getProvinceJsonStringShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccountAddressInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountAddressInfoResponse>();
}

/**
 * @param request UpdateAccountAddressInfoRequest
 * @return UpdateAccountAddressInfoResponse
 */
UpdateAccountAddressInfoResponse Client::updateAccountAddressInfo(const UpdateAccountAddressInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountAddressInfoWithOptions(request, runtime);
}

/**
 * @param tmpReq UpdateAccountProfileInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAccountProfileInfoResponse
 */
UpdateAccountProfileInfoResponse Client::updateAccountProfileInfoWithOptions(const UpdateAccountProfileInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAccountProfileInfoShrinkRequest request = UpdateAccountProfileInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCityJsonString()) {
    request.setCityJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCityJsonString(), "CityJsonString", "json"));
  }

  if (!!tmpReq.hasDistrictJsonString()) {
    request.setDistrictJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDistrictJsonString(), "DistrictJsonString", "json"));
  }

  if (!!tmpReq.hasProvinceJsonString()) {
    request.setProvinceJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProvinceJsonString(), "ProvinceJsonString", "json"));
  }

  json query = {};
  if (!!request.hasAccountAttribute()) {
    query["AccountAttribute"] = request.getAccountAttribute();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddress2()) {
    query["Address2"] = request.getAddress2();
  }

  if (!!request.hasBindAlipayNo()) {
    query["BindAlipayNo"] = request.getBindAlipayNo();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasCityJsonStringShrink()) {
    query["CityJsonString"] = request.getCityJsonStringShrink();
  }

  if (!!request.hasContactMethod()) {
    query["ContactMethod"] = request.getContactMethod();
  }

  if (!!request.hasDistrictJsonStringShrink()) {
    query["DistrictJsonString"] = request.getDistrictJsonStringShrink();
  }

  if (!!request.hasFax()) {
    query["Fax"] = request.getFax();
  }

  if (!!request.hasFirstName()) {
    query["FirstName"] = request.getFirstName();
  }

  if (!!request.hasHead()) {
    query["Head"] = request.getHead();
  }

  if (!!request.hasHeadColor()) {
    query["HeadColor"] = request.getHeadColor();
  }

  if (!!request.hasLastName()) {
    query["LastName"] = request.getLastName();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasPostCode()) {
    query["PostCode"] = request.getPostCode();
  }

  if (!!request.hasProvinceJsonStringShrink()) {
    query["ProvinceJsonString"] = request.getProvinceJsonStringShrink();
  }

  if (!!request.hasSelfServicingBusinessRegNum()) {
    query["SelfServicingBusinessRegNum"] = request.getSelfServicingBusinessRegNum();
  }

  if (!!request.hasSelfServicingIdentificationNum()) {
    query["SelfServicingIdentificationNum"] = request.getSelfServicingIdentificationNum();
  }

  if (!!request.hasTrueName()) {
    query["TrueName"] = request.getTrueName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAccountProfileInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAccountProfileInfoResponse>();
}

/**
 * @param request UpdateAccountProfileInfoRequest
 * @return UpdateAccountProfileInfoResponse
 */
UpdateAccountProfileInfoResponse Client::updateAccountProfileInfo(const UpdateAccountProfileInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAccountProfileInfoWithOptions(request, runtime);
}

/**
 * @param request UpdateAgAccountAddressInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgAccountAddressInfoResponse
 */
UpdateAgAccountAddressInfoResponse Client::updateAgAccountAddressInfoWithOptions(const UpdateAgAccountAddressInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddress2()) {
    query["Address2"] = request.getAddress2();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasPostCode()) {
    query["PostCode"] = request.getPostCode();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAgAccountAddressInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgAccountAddressInfoResponse>();
}

/**
 * @param request UpdateAgAccountAddressInfoRequest
 * @return UpdateAgAccountAddressInfoResponse
 */
UpdateAgAccountAddressInfoResponse Client::updateAgAccountAddressInfo(const UpdateAgAccountAddressInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgAccountAddressInfoWithOptions(request, runtime);
}

/**
 * @param request UpdateAgServiceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgServiceStatusResponse
 */
UpdateAgServiceStatusResponse Client::updateAgServiceStatusWithOptions(const UpdateAgServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgAccountType()) {
    query["AgAccountType"] = request.getAgAccountType();
  }

  if (!!request.hasMpk()) {
    query["Mpk"] = request.getMpk();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAgServiceStatus"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgServiceStatusResponse>();
}

/**
 * @param request UpdateAgServiceStatusRequest
 * @return UpdateAgServiceStatusResponse
 */
UpdateAgServiceStatusResponse Client::updateAgServiceStatus(const UpdateAgServiceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgServiceStatusWithOptions(request, runtime);
}

/**
 * @param request UpdateCustomerCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomerCategoryResponse
 */
UpdateCustomerCategoryResponse Client::updateCustomerCategoryWithOptions(const UpdateCustomerCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParamList()) {
    query["ParamList"] = request.getParamList();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomerCategory"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomerCategoryResponse>();
}

/**
 * @param request UpdateCustomerCategoryRequest
 * @return UpdateCustomerCategoryResponse
 */
UpdateCustomerCategoryResponse Client::updateCustomerCategory(const UpdateCustomerCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomerCategoryWithOptions(request, runtime);
}

/**
 * @param request UpdateCustomerInformationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomerInformationResponse
 */
UpdateCustomerInformationResponse Client::updateCustomerInformationWithOptions(const UpdateCustomerInformationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBiz()) {
    query["Biz"] = request.getBiz();
  }

  if (!!request.hasCustomerCategory()) {
    query["CustomerCategory"] = request.getCustomerCategory();
  }

  if (!!request.hasCustomerSubCategory()) {
    query["CustomerSubCategory"] = request.getCustomerSubCategory();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasWebsite()) {
    query["Website"] = request.getWebsite();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomerInformation"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomerInformationResponse>();
}

/**
 * @param request UpdateCustomerInformationRequest
 * @return UpdateCustomerInformationResponse
 */
UpdateCustomerInformationResponse Client::updateCustomerInformation(const UpdateCustomerInformationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomerInformationWithOptions(request, runtime);
}

/**
 * @param tmpReq UpdateOrInsertEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOrInsertEnterpriseInfoResponse
 */
UpdateOrInsertEnterpriseInfoResponse Client::updateOrInsertEnterpriseInfoWithOptions(const UpdateOrInsertEnterpriseInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateOrInsertEnterpriseInfoShrinkRequest request = UpdateOrInsertEnterpriseInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCityJsonString()) {
    request.setCityJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCityJsonString(), "CityJsonString", "json"));
  }

  if (!!tmpReq.hasProvinceJsonString()) {
    request.setProvinceJsonStringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProvinceJsonString(), "ProvinceJsonString", "json"));
  }

  json query = {};
  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAlias()) {
    query["Alias"] = request.getAlias();
  }

  if (!!request.hasCityJsonStringShrink()) {
    query["CityJsonString"] = request.getCityJsonStringShrink();
  }

  if (!!request.hasEnterpriseSize()) {
    query["EnterpriseSize"] = request.getEnterpriseSize();
  }

  if (!!request.hasFax()) {
    query["Fax"] = request.getFax();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPK()) {
    query["PK"] = request.getPK();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasProvinceJsonStringShrink()) {
    query["ProvinceJsonString"] = request.getProvinceJsonStringShrink();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOrInsertEnterpriseInfo"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOrInsertEnterpriseInfoResponse>();
}

/**
 * @param request UpdateOrInsertEnterpriseInfoRequest
 * @return UpdateOrInsertEnterpriseInfoResponse
 */
UpdateOrInsertEnterpriseInfoResponse Client::updateOrInsertEnterpriseInfo(const UpdateOrInsertEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOrInsertEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request DoLogicalDeleteResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DoLogicalDeleteResourceResponse
 */
DoLogicalDeleteResourceResponse Client::doLogicalDeleteResourceWithOptions(const DoLogicalDeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBid()) {
    query["Bid"] = request.getBid();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasGmtWakeup()) {
    query["GmtWakeup"] = request.getGmtWakeup();
  }

  if (!!request.hasHid()) {
    query["Hid"] = request.getHid();
  }

  if (!!request.hasInterrupt()) {
    query["Interrupt"] = request.getInterrupt();
  }

  if (!!request.hasInvoker()) {
    query["Invoker"] = request.getInvoker();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasPk()) {
    query["Pk"] = request.getPk();
  }

  if (!!request.hasSuccess()) {
    query["Success"] = request.getSuccess();
  }

  if (!!request.hasTaskExtraData()) {
    query["TaskExtraData"] = request.getTaskExtraData();
  }

  if (!!request.hasTaskIdentifier()) {
    query["TaskIdentifier"] = request.getTaskIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "doLogicalDeleteResource"},
    {"version" , "2016-06-06"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DoLogicalDeleteResourceResponse>();
}

/**
 * @param request DoLogicalDeleteResourceRequest
 * @return DoLogicalDeleteResourceResponse
 */
DoLogicalDeleteResourceResponse Client::doLogicalDeleteResource(const DoLogicalDeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return doLogicalDeleteResourceWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AccountCrm20160606