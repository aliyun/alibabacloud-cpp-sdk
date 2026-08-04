#include <darabonba/Core.hpp>
#include <alibabacloud/AliGeniessp_1_0.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AliGeniessp_1_0::Models;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{

AlibabaCloud::AliGeniessp_1_0::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("aligenie", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Collect or remove from favorites.
 *
 * @param tmpReq AddAndRemoveFavoriteContentRequest
 * @param headers AddAndRemoveFavoriteContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAndRemoveFavoriteContentResponse
 */
AddAndRemoveFavoriteContentResponse Client::addAndRemoveFavoriteContentWithOptions(const AddAndRemoveFavoriteContentRequest &tmpReq, const AddAndRemoveFavoriteContentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddAndRemoveFavoriteContentShrinkRequest request = AddAndRemoveFavoriteContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenAddAndRemoveFavoriteContentRequest()) {
    request.setOpenAddAndRemoveFavoriteContentRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenAddAndRemoveFavoriteContentRequest(), "OpenAddAndRemoveFavoriteContentRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenAddAndRemoveFavoriteContentRequestShrink()) {
    body["OpenAddAndRemoveFavoriteContentRequest"] = request.getOpenAddAndRemoveFavoriteContentRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddAndRemoveFavoriteContent"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/AddAndRemoveFavoriteContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAndRemoveFavoriteContentResponse>();
}

/**
 * @summary Collect or remove from favorites.
 *
 * @param request AddAndRemoveFavoriteContentRequest
 * @return AddAndRemoveFavoriteContentResponse
 */
AddAndRemoveFavoriteContentResponse Client::addAndRemoveFavoriteContent(const AddAndRemoveFavoriteContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddAndRemoveFavoriteContentHeaders headers = AddAndRemoveFavoriteContentHeaders();
  return addAndRemoveFavoriteContentWithOptions(request, headers, runtime);
}

/**
 * @summary Subscribe to an album.
 *
 * @param tmpReq AddSubRequest
 * @param headers AddSubHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSubResponse
 */
AddSubResponse Client::addSubWithOptions(const AddSubRequest &tmpReq, const AddSubHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AddSubShrinkRequest request = AddSubShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddSubscriptionInfoRequest()) {
    request.setAddSubscriptionInfoRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddSubscriptionInfoRequest(), "AddSubscriptionInfoRequest", "json"));
  }

  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasAddSubscriptionInfoRequestShrink()) {
    query["AddSubscriptionInfoRequest"] = request.getAddSubscriptionInfoRequestShrink();
  }

  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSub"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/addSub")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSubResponse>();
}

/**
 * @summary Subscribe to an album.
 *
 * @param request AddSubRequest
 * @return AddSubResponse
 */
AddSubResponse Client::addSub(const AddSubRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AddSubHeaders headers = AddSubHeaders();
  return addSubWithOptions(request, headers, runtime);
}

/**
 * @summary Authorize logon by specifying an Aligenie account.
 *
 * @param request AuthLoginWithAligenieUserInfoRequest
 * @param headers AuthLoginWithAligenieUserInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthLoginWithAligenieUserInfoResponse
 */
AuthLoginWithAligenieUserInfoResponse Client::authLoginWithAligenieUserInfoWithOptions(const AuthLoginWithAligenieUserInfoRequest &request, const AuthLoginWithAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEncryptedAligenieUserIdentifier()) {
    body["EncryptedAligenieUserIdentifier"] = request.getEncryptedAligenieUserIdentifier();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthLoginWithAligenieUserInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/authLoginWithAligenieUserInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthLoginWithAligenieUserInfoResponse>();
}

/**
 * @summary Authorize logon by specifying an Aligenie account.
 *
 * @param request AuthLoginWithAligenieUserInfoRequest
 * @return AuthLoginWithAligenieUserInfoResponse
 */
AuthLoginWithAligenieUserInfoResponse Client::authLoginWithAligenieUserInfo(const AuthLoginWithAligenieUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuthLoginWithAligenieUserInfoHeaders headers = AuthLoginWithAligenieUserInfoHeaders();
  return authLoginWithAligenieUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Generate a Genie account by phone number for authorization logon.
 *
 * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
 * @param headers AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
 */
AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse Client::authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request, const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthLoginWithAligenieUserInfoGeneratedByPhoneNumber"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/authLoginWithAligenieUserInfoGeneratedByPhoneNumber")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse>();
}

/**
 * @summary Generate a Genie account by phone number for authorization logon.
 *
 * @param request AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest
 * @return AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse
 */
AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberResponse Client::authLoginWithAligenieUserInfoGeneratedByPhoneNumber(const AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders headers = AuthLoginWithAligenieUserInfoGeneratedByPhoneNumberHeaders();
  return authLoginWithAligenieUserInfoGeneratedByPhoneNumberWithOptions(request, headers, runtime);
}

/**
 * @summary Authorize logon by specifying a Taobao account
 *
 * @param request AuthLoginWithTaobaoUserInfoRequest
 * @param headers AuthLoginWithTaobaoUserInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthLoginWithTaobaoUserInfoResponse
 */
AuthLoginWithTaobaoUserInfoResponse Client::authLoginWithTaobaoUserInfoWithOptions(const AuthLoginWithTaobaoUserInfoRequest &request, const AuthLoginWithTaobaoUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEncryptedTaobaoUserIdentifier()) {
    body["EncryptedTaobaoUserIdentifier"] = request.getEncryptedTaobaoUserIdentifier();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthLoginWithTaobaoUserInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/authLoginWithTaobaoUserInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthLoginWithTaobaoUserInfoResponse>();
}

/**
 * @summary Authorize logon by specifying a Taobao account
 *
 * @param request AuthLoginWithTaobaoUserInfoRequest
 * @return AuthLoginWithTaobaoUserInfoResponse
 */
AuthLoginWithTaobaoUserInfoResponse Client::authLoginWithTaobaoUserInfo(const AuthLoginWithTaobaoUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuthLoginWithTaobaoUserInfoHeaders headers = AuthLoginWithTaobaoUserInfoHeaders();
  return authLoginWithTaobaoUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Authorize logon by using third-party user information.
 *
 * @param tmpReq AuthLoginWithThirdUserInfoRequest
 * @param headers AuthLoginWithThirdUserInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthLoginWithThirdUserInfoResponse
 */
AuthLoginWithThirdUserInfoResponse Client::authLoginWithThirdUserInfoWithOptions(const AuthLoginWithThirdUserInfoRequest &tmpReq, const AuthLoginWithThirdUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AuthLoginWithThirdUserInfoShrinkRequest request = AuthLoginWithThirdUserInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtInfo()) {
    request.setExtInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtInfo(), "ExtInfo", "json"));
  }

  json body = {};
  if (!!request.hasExtInfoShrink()) {
    body["ExtInfo"] = request.getExtInfoShrink();
  }

  if (!!request.hasSceneCode()) {
    body["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasThirdUserIdentifier()) {
    body["ThirdUserIdentifier"] = request.getThirdUserIdentifier();
  }

  if (!!request.hasThirdUserType()) {
    body["ThirdUserType"] = request.getThirdUserType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuthLoginWithThirdUserInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/authLoginWithThirdUserInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthLoginWithThirdUserInfoResponse>();
}

/**
 * @summary Authorize logon by using third-party user information.
 *
 * @param request AuthLoginWithThirdUserInfoRequest
 * @return AuthLoginWithThirdUserInfoResponse
 */
AuthLoginWithThirdUserInfoResponse Client::authLoginWithThirdUserInfo(const AuthLoginWithThirdUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AuthLoginWithThirdUserInfoHeaders headers = AuthLoginWithThirdUserInfoHeaders();
  return authLoginWithThirdUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary 检查并拨打voip电话【酒店业务】
 *
 * @param tmpReq CheckAndDoVoipCallForHotelRequest
 * @param headers CheckAndDoVoipCallForHotelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAndDoVoipCallForHotelResponse
 */
CheckAndDoVoipCallForHotelResponse Client::checkAndDoVoipCallForHotelWithOptions(const CheckAndDoVoipCallForHotelRequest &tmpReq, const CheckAndDoVoipCallForHotelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckAndDoVoipCallForHotelShrinkRequest request = CheckAndDoVoipCallForHotelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasBizData()) {
    body["BizData"] = request.getBizData();
  }

  if (!!request.hasCalleeNick()) {
    body["CalleeNick"] = request.getCalleeNick();
  }

  if (!!request.hasCalleePhoneNum()) {
    body["CalleePhoneNum"] = request.getCalleePhoneNum();
  }

  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckAndDoVoipCallForHotel"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/checkAndDoVoipCallForHotel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAndDoVoipCallForHotelResponse>();
}

/**
 * @summary 检查并拨打voip电话【酒店业务】
 *
 * @param request CheckAndDoVoipCallForHotelRequest
 * @return CheckAndDoVoipCallForHotelResponse
 */
CheckAndDoVoipCallForHotelResponse Client::checkAndDoVoipCallForHotel(const CheckAndDoVoipCallForHotelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckAndDoVoipCallForHotelHeaders headers = CheckAndDoVoipCallForHotelHeaders();
  return checkAndDoVoipCallForHotelWithOptions(request, headers, runtime);
}

/**
 * @summary Poll the result of the activation attachment.
 *
 * @param tmpReq CheckAuthCodeBindForExtRequest
 * @param headers CheckAuthCodeBindForExtHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAuthCodeBindForExtResponse
 */
CheckAuthCodeBindForExtResponse Client::checkAuthCodeBindForExtWithOptions(const CheckAuthCodeBindForExtRequest &tmpReq, const CheckAuthCodeBindForExtHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CheckAuthCodeBindForExtShrinkRequest request = CheckAuthCodeBindForExtShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasEncodeKey()) {
    query["EncodeKey"] = request.getEncodeKey();
  }

  if (!!request.hasEncodeType()) {
    query["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckAuthCodeBindForExt"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/checkAuthCodeBindForExt")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAuthCodeBindForExtResponse>();
}

/**
 * @summary Poll the result of the activation attachment.
 *
 * @param request CheckAuthCodeBindForExtRequest
 * @return CheckAuthCodeBindForExtResponse
 */
CheckAuthCodeBindForExtResponse Client::checkAuthCodeBindForExt(const CheckAuthCodeBindForExtRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CheckAuthCodeBindForExtHeaders headers = CheckAuthCodeBindForExtHeaders();
  return checkAuthCodeBindForExtWithOptions(request, headers, runtime);
}

/**
 * @summary Cloud Push Song: Create a playlist by providing the device openUuid and the Tmall Genie openUserId.
 *
 * @description After synchronously validating the input parameters, the system asynchronously creates the playlist.
 *
 * @param tmpReq CloudPlayerRequest
 * @param headers CloudPlayerHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloudPlayerResponse
 */
CloudPlayerResponse Client::cloudPlayerWithOptions(const CloudPlayerRequest &tmpReq, const CloudPlayerHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloudPlayerShrinkRequest request = CloudPlayerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasSongIdList()) {
    request.setSongIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSongIdList(), "SongIdList", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasCurPlayIndex()) {
    query["CurPlayIndex"] = request.getCurPlayIndex();
  }

  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPlayMode()) {
    query["PlayMode"] = request.getPlayMode();
  }

  if (!!request.hasSongId()) {
    query["SongId"] = request.getSongId();
  }

  if (!!request.hasSongIdListShrink()) {
    query["SongIdList"] = request.getSongIdListShrink();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloudPlayer"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/cloud/player")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloudPlayerResponse>();
}

/**
 * @summary Cloud Push Song: Create a playlist by providing the device openUuid and the Tmall Genie openUserId.
 *
 * @description After synchronously validating the input parameters, the system asynchronously creates the playlist.
 *
 * @param request CloudPlayerRequest
 * @return CloudPlayerResponse
 */
CloudPlayerResponse Client::cloudPlayer(const CloudPlayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CloudPlayerHeaders headers = CloudPlayerHeaders();
  return cloudPlayerWithOptions(request, headers, runtime);
}

/**
 * @summary Create an alarm that supports three types: one-time, weekly, and legal working days.
 *
 * @param tmpReq CreateAlarmRequest
 * @param headers CreateAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlarmResponse
 */
CreateAlarmResponse Client::createAlarmWithOptions(const CreateAlarmRequest &tmpReq, const CreateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAlarmShrinkRequest request = CreateAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlarm"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/createAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlarmResponse>();
}

/**
 * @summary Create an alarm that supports three types: one-time, weekly, and legal working days.
 *
 * @param request CreateAlarmRequest
 * @return CreateAlarmResponse
 */
CreateAlarmResponse Client::createAlarm(const CreateAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateAlarmHeaders headers = CreateAlarmHeaders();
  return createAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary Create a playlist and play the specified content.
 *
 * @param tmpReq CreatePlayingListRequest
 * @param headers CreatePlayingListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePlayingListResponse
 */
CreatePlayingListResponse Client::createPlayingListWithOptions(const CreatePlayingListRequest &tmpReq, const CreatePlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePlayingListShrinkRequest request = CreatePlayingListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenCreatePlayingListRequest()) {
    request.setOpenCreatePlayingListRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenCreatePlayingListRequest(), "OpenCreatePlayingListRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenCreatePlayingListRequestShrink()) {
    body["OpenCreatePlayingListRequest"] = request.getOpenCreatePlayingListRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePlayingList"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/CreatePlayingList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePlayingListResponse>();
}

/**
 * @summary Create a playlist and play the specified content.
 *
 * @param request CreatePlayingListRequest
 * @return CreatePlayingListResponse
 */
CreatePlayingListResponse Client::createPlayingList(const CreatePlayingListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreatePlayingListHeaders headers = CreatePlayingListHeaders();
  return createPlayingListWithOptions(request, headers, runtime);
}

/**
 * @summary Playlist creation uses OAuth2 authorization.
 *
 * @param tmpReq CreatePlayingListOAuth2Request
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePlayingListOAuth2Response
 */
CreatePlayingListOAuth2Response Client::createPlayingListOAuth2WithOptions(const CreatePlayingListOAuth2Request &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePlayingListOAuth2ShrinkRequest request = CreatePlayingListOAuth2ShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenCreatePlayingListRequest()) {
    request.setOpenCreatePlayingListRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenCreatePlayingListRequest(), "OpenCreatePlayingListRequest", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenCreatePlayingListRequestShrink()) {
    body["OpenCreatePlayingListRequest"] = request.getOpenCreatePlayingListRequestShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePlayingListOAuth2"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/CreatePlayingListOAuth2")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePlayingListOAuth2Response>();
}

/**
 * @summary Playlist creation uses OAuth2 authorization.
 *
 * @param request CreatePlayingListOAuth2Request
 * @return CreatePlayingListOAuth2Response
 */
CreatePlayingListOAuth2Response Client::createPlayingListOAuth2(const CreatePlayingListOAuth2Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPlayingListOAuth2WithOptions(request, headers, runtime);
}

/**
 * @summary Create a scheduled task.
 *
 * @description Configure a triggering task for Custom instruction data in the ecosystem based on scheduling rules such as one-time, daily, or business days.
 *
 * @param tmpReq CreateScheduleTaskRequest
 * @param headers CreateScheduleTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduleTaskResponse
 */
CreateScheduleTaskResponse Client::createScheduleTaskWithOptions(const CreateScheduleTaskRequest &tmpReq, const CreateScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduleTaskShrinkRequest request = CreateScheduleTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduleTask"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/CreateScheduleTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduleTaskResponse>();
}

/**
 * @summary Create a scheduled task.
 *
 * @description Configure a triggering task for Custom instruction data in the ecosystem based on scheduling rules such as one-time, daily, or business days.
 *
 * @param request CreateScheduleTaskRequest
 * @return CreateScheduleTaskResponse
 */
CreateScheduleTaskResponse Client::createScheduleTask(const CreateScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateScheduleTaskHeaders headers = CreateScheduleTaskHeaders();
  return createScheduleTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Delete alarms. You can delete multiple alarms at the same time.
 *
 * @param tmpReq DeleteAlarmsRequest
 * @param headers DeleteAlarmsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlarmsResponse
 */
DeleteAlarmsResponse Client::deleteAlarmsWithOptions(const DeleteAlarmsRequest &tmpReq, const DeleteAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAlarmsShrinkRequest request = DeleteAlarmsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteAlarms"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/deleteAlarms")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlarmsResponse>();
}

/**
 * @summary Delete alarms. You can delete multiple alarms at the same time.
 *
 * @param request DeleteAlarmsRequest
 * @return DeleteAlarmsResponse
 */
DeleteAlarmsResponse Client::deleteAlarms(const DeleteAlarmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteAlarmsHeaders headers = DeleteAlarmsHeaders();
  return deleteAlarmsWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a scheduled task.
 *
 * @description Deletes a specified scheduled task by its ID.
 *
 * @param tmpReq DeleteScheduleTaskRequest
 * @param headers DeleteScheduleTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduleTaskResponse
 */
DeleteScheduleTaskResponse Client::deleteScheduleTaskWithOptions(const DeleteScheduleTaskRequest &tmpReq, const DeleteScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteScheduleTaskShrinkRequest request = DeleteScheduleTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteScheduleTask"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/DeleteScheduleTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduleTaskResponse>();
}

/**
 * @summary Delete a scheduled task.
 *
 * @description Deletes a specified scheduled task by its ID.
 *
 * @param request DeleteScheduleTaskRequest
 * @return DeleteScheduleTaskResponse
 */
DeleteScheduleTaskResponse Client::deleteScheduleTask(const DeleteScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteScheduleTaskHeaders headers = DeleteScheduleTaskHeaders();
  return deleteScheduleTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Delete a subscribed album.
 *
 * @param request DeleteSubRequest
 * @param headers DeleteSubHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubResponse
 */
DeleteSubResponse Client::deleteSubWithOptions(const DeleteSubRequest &request, const DeleteSubHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSub"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/deleteSub")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubResponse>();
}

/**
 * @summary Delete a subscribed album.
 *
 * @param request DeleteSubRequest
 * @return DeleteSubResponse
 */
DeleteSubResponse Client::deleteSub(const DeleteSubRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSubHeaders headers = DeleteSubHeaders();
  return deleteSubWithOptions(request, headers, runtime);
}

/**
 * @summary Control property values such as device volume.
 *
 * @description Specify a device to modify property values such as volume.
 *
 * @param tmpReq DeviceControlRequest
 * @param headers DeviceControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeviceControlResponse
 */
DeviceControlResponse Client::deviceControlWithOptions(const DeviceControlRequest &tmpReq, const DeviceControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeviceControlShrinkRequest request = DeviceControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasControlRequest()) {
    request.setControlRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getControlRequest(), "ControlRequest", "json"));
  }

  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  json body = {};
  if (!!request.hasControlRequestShrink()) {
    body["ControlRequest"] = request.getControlRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeviceControl"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/control")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeviceControlResponse>();
}

/**
 * @summary Control property values such as device volume.
 *
 * @description Specify a device to modify property values such as volume.
 *
 * @param request DeviceControlRequest
 * @return DeviceControlResponse
 */
DeviceControlResponse Client::deviceControl(const DeviceControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeviceControlHeaders headers = DeviceControlHeaders();
  return deviceControlWithOptions(request, headers, runtime);
}

/**
 * @summary Use the login-state access token for authentication to obtain the third-party user identifier and the Tmall Genie user\\"s openId.
 *
 * @description Note: When the login state expires, the integrator must reinitiate the authorization login flow to obtain a new login state (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the login-state access credential (LoginStateAccessToken) parameter by using the Java SDK (for SDKs in other languages, consult Tmall Genie developers during integration).  
 * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the login state has expired.
 * - Invoke the service API by sending an HTTP request with the login-state access credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the login state has expired.
 *
 * @param request EcologyOpennessAuthenticateRequest
 * @param headers EcologyOpennessAuthenticateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EcologyOpennessAuthenticateResponse
 */
EcologyOpennessAuthenticateResponse Client::ecologyOpennessAuthenticateWithOptions(const EcologyOpennessAuthenticateRequest &request, const EcologyOpennessAuthenticateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEncodeKey()) {
    body["EncodeKey"] = request.getEncodeKey();
  }

  if (!!request.hasEncodeType()) {
    body["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasLoginStateAccessToken()) {
    body["LoginStateAccessToken"] = request.getLoginStateAccessToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EcologyOpennessAuthenticate"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ecologyOpennessAuthenticate")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EcologyOpennessAuthenticateResponse>();
}

/**
 * @summary Use the login-state access token for authentication to obtain the third-party user identifier and the Tmall Genie user\\"s openId.
 *
 * @description Note: When the login state expires, the integrator must reinitiate the authorization login flow to obtain a new login state (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the login-state access credential (LoginStateAccessToken) parameter by using the Java SDK (for SDKs in other languages, consult Tmall Genie developers during integration).  
 * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the login state has expired.
 * - Invoke the service API by sending an HTTP request with the login-state access credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the login state has expired.
 *
 * @param request EcologyOpennessAuthenticateRequest
 * @return EcologyOpennessAuthenticateResponse
 */
EcologyOpennessAuthenticateResponse Client::ecologyOpennessAuthenticate(const EcologyOpennessAuthenticateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EcologyOpennessAuthenticateHeaders headers = EcologyOpennessAuthenticateHeaders();
  return ecologyOpennessAuthenticateWithOptions(request, headers, runtime);
}

/**
 * @summary Ecosystem Open API for sending SMS verification codes
 *
 * @param request EcologyOpennessSendVerificationCodeRequest
 * @param headers EcologyOpennessSendVerificationCodeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return EcologyOpennessSendVerificationCodeResponse
 */
EcologyOpennessSendVerificationCodeResponse Client::ecologyOpennessSendVerificationCodeWithOptions(const EcologyOpennessSendVerificationCodeRequest &request, const EcologyOpennessSendVerificationCodeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPhoneNumber()) {
    body["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EcologyOpennessSendVerificationCode"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ecologyOpennessSendVerificationCode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EcologyOpennessSendVerificationCodeResponse>();
}

/**
 * @summary Ecosystem Open API for sending SMS verification codes
 *
 * @param request EcologyOpennessSendVerificationCodeRequest
 * @return EcologyOpennessSendVerificationCodeResponse
 */
EcologyOpennessSendVerificationCodeResponse Client::ecologyOpennessSendVerificationCode(const EcologyOpennessSendVerificationCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  EcologyOpennessSendVerificationCodeHeaders headers = EcologyOpennessSendVerificationCodeHeaders();
  return ecologyOpennessSendVerificationCodeWithOptions(request, headers, runtime);
}

/**
 * @summary Find a list of accounts that can be authorized to log on by phone number
 *
 * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
 * @param headers FindUserlistToAuthLoginWithPhoneNumberHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindUserlistToAuthLoginWithPhoneNumberResponse
 */
FindUserlistToAuthLoginWithPhoneNumberResponse Client::findUserlistToAuthLoginWithPhoneNumberWithOptions(const FindUserlistToAuthLoginWithPhoneNumberRequest &request, const FindUserlistToAuthLoginWithPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindUserlistToAuthLoginWithPhoneNumber"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/findUserlistToAuthLoginWithPhoneNumber")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindUserlistToAuthLoginWithPhoneNumberResponse>();
}

/**
 * @summary Find a list of accounts that can be authorized to log on by phone number
 *
 * @param request FindUserlistToAuthLoginWithPhoneNumberRequest
 * @return FindUserlistToAuthLoginWithPhoneNumberResponse
 */
FindUserlistToAuthLoginWithPhoneNumberResponse Client::findUserlistToAuthLoginWithPhoneNumber(const FindUserlistToAuthLoginWithPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  FindUserlistToAuthLoginWithPhoneNumberHeaders headers = FindUserlistToAuthLoginWithPhoneNumberHeaders();
  return findUserlistToAuthLoginWithPhoneNumberWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve the detailed information of a specific alarm clock.
 *
 * @param tmpReq GetAlarmRequest
 * @param headers GetAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlarmResponse
 */
GetAlarmResponse Client::getAlarmWithOptions(const GetAlarmRequest &tmpReq, const GetAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAlarmShrinkRequest request = GetAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetAlarm"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlarmResponse>();
}

/**
 * @summary Retrieve the detailed information of a specific alarm clock.
 *
 * @param request GetAlarmRequest
 * @return GetAlarmResponse
 */
GetAlarmResponse Client::getAlarm(const GetAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAlarmHeaders headers = GetAlarmHeaders();
  return getAlarmWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve album information by a specific ID.
 *
 * @param request GetAlbumRequest
 * @param headers GetAlbumHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlbumResponse
 */
GetAlbumResponse Client::getAlbumWithOptions(const GetAlbumRequest &request, const GetAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlbum"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetAlbum")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlbumResponse>();
}

/**
 * @summary Retrieve album information by a specific ID.
 *
 * @param request GetAlbumRequest
 * @return GetAlbumResponse
 */
GetAlbumResponse Client::getAlbum(const GetAlbumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAlbumHeaders headers = GetAlbumHeaders();
  return getAlbumWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve album information.
 *
 * @param request GetAlbumDetailByIdRequest
 * @param headers GetAlbumDetailByIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlbumDetailByIdResponse
 */
GetAlbumDetailByIdResponse Client::getAlbumDetailByIdWithOptions(const GetAlbumDetailByIdRequest &request, const GetAlbumDetailByIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlbumId()) {
    query["AlbumId"] = request.getAlbumId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlbumDetailById"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getAlbumDetailById")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlbumDetailByIdResponse>();
}

/**
 * @summary Retrieve album information.
 *
 * @param request GetAlbumDetailByIdRequest
 * @return GetAlbumDetailByIdResponse
 */
GetAlbumDetailByIdResponse Client::getAlbumDetailById(const GetAlbumDetailByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAlbumDetailByIdHeaders headers = GetAlbumDetailByIdHeaders();
  return getAlbumDetailByIdWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the Aligenie account information bound to a third party by using the logon state credential
 *
 * @description Note: When the logon state expires, the integrator must initiate the authorization logon flow again to obtain a new logon state (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the logon state access credential (LoginStateAccessToken) parameter by using the Java software development kit (SDK). For SDKs in other languages, consult the Tmall Genie developer team during integration.  
 * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the logon state has expired.
 * - Invoke the service API by sending an HTTP request with the logon state access credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the logon state has expired.
 *
 * @param request GetAligenieUserInfoRequest
 * @param headers GetAligenieUserInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAligenieUserInfoResponse
 */
GetAligenieUserInfoResponse Client::getAligenieUserInfoWithOptions(const GetAligenieUserInfoRequest &request, const GetAligenieUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLoginStateAccessToken()) {
    query["LoginStateAccessToken"] = request.getLoginStateAccessToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAligenieUserInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getAligenieUserInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAligenieUserInfoResponse>();
}

/**
 * @summary Obtain the Aligenie account information bound to a third party by using the logon state credential
 *
 * @description Note: When the logon state expires, the integrator must initiate the authorization logon flow again to obtain a new logon state (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the logon state access credential (LoginStateAccessToken) parameter by using the Java software development kit (SDK). For SDKs in other languages, consult the Tmall Genie developer team during integration.  
 * If the API call throws a TeaException and TeaException.code is InvalidAuthentication, the logon state has expired.
 * - Invoke the service API by sending an HTTP request with the logon state access credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the logon state has expired.
 *
 * @param request GetAligenieUserInfoRequest
 * @return GetAligenieUserInfoResponse
 */
GetAligenieUserInfoResponse Client::getAligenieUserInfo(const GetAligenieUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetAligenieUserInfoHeaders headers = GetAligenieUserInfoHeaders();
  return getAligenieUserInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the authCode.
 *
 * @description Obtain the corresponding authCode by specifying the user ID.
 *
 * @param tmpReq GetCodeEnhanceRequest
 * @param headers GetCodeEnhanceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCodeEnhanceResponse
 */
GetCodeEnhanceResponse Client::getCodeEnhanceWithOptions(const GetCodeEnhanceRequest &tmpReq, const GetCodeEnhanceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCodeEnhanceShrinkRequest request = GetCodeEnhanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannelInfo()) {
    request.setChannelInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannelInfo(), "ChannelInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasChannelInfoShrink()) {
    query["ChannelInfo"] = request.getChannelInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCodeEnhance"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getCodeEnhance")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCodeEnhanceResponse>();
}

/**
 * @summary Obtain the authCode.
 *
 * @description Obtain the corresponding authCode by specifying the user ID.
 *
 * @param request GetCodeEnhanceRequest
 * @return GetCodeEnhanceResponse
 */
GetCodeEnhanceResponse Client::getCodeEnhance(const GetCodeEnhanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCodeEnhanceHeaders headers = GetCodeEnhanceHeaders();
  return getCodeEnhanceWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve content information by a specific ID
 *
 * @param request GetContentRequest
 * @param headers GetContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContentResponse
 */
GetContentResponse Client::getContentWithOptions(const GetContentRequest &request, const GetContentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContent"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContentResponse>();
}

/**
 * @summary Retrieve content information by a specific ID
 *
 * @param request GetContentRequest
 * @return GetContentResponse
 */
GetContentResponse Client::getContent(const GetContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetContentHeaders headers = GetContentHeaders();
  return getContentWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the current playback item.
 *
 * @param tmpReq GetCurrentPlayingItemRequest
 * @param headers GetCurrentPlayingItemHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCurrentPlayingItemResponse
 */
GetCurrentPlayingItemResponse Client::getCurrentPlayingItemWithOptions(const GetCurrentPlayingItemRequest &tmpReq, const GetCurrentPlayingItemHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCurrentPlayingItemShrinkRequest request = GetCurrentPlayingItemShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCurrentPlayingItem"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetCurrentPlayingItem")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCurrentPlayingItemResponse>();
}

/**
 * @summary Obtain the current playback item.
 *
 * @param request GetCurrentPlayingItemRequest
 * @return GetCurrentPlayingItemResponse
 */
GetCurrentPlayingItemResponse Client::getCurrentPlayingItem(const GetCurrentPlayingItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCurrentPlayingItemHeaders headers = GetCurrentPlayingItemHeaders();
  return getCurrentPlayingItemWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the current playlist.
 *
 * @param tmpReq GetCurrentPlayingListRequest
 * @param headers GetCurrentPlayingListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCurrentPlayingListResponse
 */
GetCurrentPlayingListResponse Client::getCurrentPlayingListWithOptions(const GetCurrentPlayingListRequest &tmpReq, const GetCurrentPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetCurrentPlayingListShrinkRequest request = GetCurrentPlayingListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenQueryPlayListRequest()) {
    request.setOpenQueryPlayListRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenQueryPlayListRequest(), "OpenQueryPlayListRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenQueryPlayListRequestShrink()) {
    body["OpenQueryPlayListRequest"] = request.getOpenQueryPlayListRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetCurrentPlayingList"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetCurrentPlayingList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCurrentPlayingListResponse>();
}

/**
 * @summary Obtain the current playlist.
 *
 * @param request GetCurrentPlayingListRequest
 * @return GetCurrentPlayingListResponse
 */
GetCurrentPlayingListResponse Client::getCurrentPlayingList(const GetCurrentPlayingListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetCurrentPlayingListHeaders headers = GetCurrentPlayingListHeaders();
  return getCurrentPlayingListWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain basic device information by Device ID.
 *
 * @param tmpReq GetDeviceBasicInfoRequest
 * @param headers GetDeviceBasicInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceBasicInfoResponse
 */
GetDeviceBasicInfoResponse Client::getDeviceBasicInfoWithOptions(const GetDeviceBasicInfoRequest &tmpReq, const GetDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeviceBasicInfoShrinkRequest request = GetDeviceBasicInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceBasicInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceBasicInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceBasicInfoResponse>();
}

/**
 * @summary Obtain basic device information by Device ID.
 *
 * @param request GetDeviceBasicInfoRequest
 * @return GetDeviceBasicInfoResponse
 */
GetDeviceBasicInfoResponse Client::getDeviceBasicInfo(const GetDeviceBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceBasicInfoHeaders headers = GetDeviceBasicInfoHeaders();
  return getDeviceBasicInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the Device ID based on the device MAC or SN.
 *
 * @param request GetDeviceIdByIdentityRequest
 * @param headers GetDeviceIdByIdentityHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceIdByIdentityResponse
 */
GetDeviceIdByIdentityResponse Client::getDeviceIdByIdentityWithOptions(const GetDeviceIdByIdentityRequest &request, const GetDeviceIdByIdentityHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncodeKey()) {
    query["EncodeKey"] = request.getEncodeKey();
  }

  if (!!request.hasEncodeType()) {
    query["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasIdentityId()) {
    query["IdentityId"] = request.getIdentityId();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceIdByIdentity"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceIdByIdentity")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceIdByIdentityResponse>();
}

/**
 * @summary Obtain the Device ID based on the device MAC or SN.
 *
 * @param request GetDeviceIdByIdentityRequest
 * @return GetDeviceIdByIdentityResponse
 */
GetDeviceIdByIdentityResponse Client::getDeviceIdByIdentity(const GetDeviceIdByIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceIdByIdentityHeaders headers = GetDeviceIdByIdentityHeaders();
  return getDeviceIdByIdentityWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the user settings of a device.
 *
 * @param tmpReq GetDeviceSettingRequest
 * @param headers GetDeviceSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceSettingResponse
 */
GetDeviceSettingResponse Client::getDeviceSettingWithOptions(const GetDeviceSettingRequest &tmpReq, const GetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeviceSettingShrinkRequest request = GetDeviceSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeys(), "Keys", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasKeysShrink()) {
    query["Keys"] = request.getKeysShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceSetting"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceSetting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceSettingResponse>();
}

/**
 * @summary Obtain the user settings of a device.
 *
 * @param request GetDeviceSettingRequest
 * @return GetDeviceSettingResponse
 */
GetDeviceSettingResponse Client::getDeviceSetting(const GetDeviceSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceSettingHeaders headers = GetDeviceSettingHeaders();
  return getDeviceSettingWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain device status details.
 *
 * @param tmpReq GetDeviceStatusDetailRequest
 * @param headers GetDeviceStatusDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceStatusDetailResponse
 */
GetDeviceStatusDetailResponse Client::getDeviceStatusDetailWithOptions(const GetDeviceStatusDetailRequest &tmpReq, const GetDeviceStatusDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeviceStatusDetailShrinkRequest request = GetDeviceStatusDetailShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeys(), "Keys", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasKeysShrink()) {
    query["Keys"] = request.getKeysShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceStatusDetail"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceStatusDetail")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceStatusDetailResponse>();
}

/**
 * @summary Obtain device status details.
 *
 * @param request GetDeviceStatusDetailRequest
 * @return GetDeviceStatusDetailResponse
 */
GetDeviceStatusDetailResponse Client::getDeviceStatusDetail(const GetDeviceStatusDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceStatusDetailHeaders headers = GetDeviceStatusDetailHeaders();
  return getDeviceStatusDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the online status of a device based on its openID.
 *
 * @param tmpReq GetDeviceStatusInfoRequest
 * @param headers GetDeviceStatusInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceStatusInfoResponse
 */
GetDeviceStatusInfoResponse Client::getDeviceStatusInfoWithOptions(const GetDeviceStatusInfoRequest &tmpReq, const GetDeviceStatusInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeviceStatusInfoShrinkRequest request = GetDeviceStatusInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceStatusInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceStatusInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceStatusInfoResponse>();
}

/**
 * @summary Obtain the online status of a device based on its openID.
 *
 * @param request GetDeviceStatusInfoRequest
 * @return GetDeviceStatusInfoResponse
 */
GetDeviceStatusInfoResponse Client::getDeviceStatusInfo(const GetDeviceStatusInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceStatusInfoHeaders headers = GetDeviceStatusInfoHeaders();
  return getDeviceStatusInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the tag information of a device.
 *
 * @param tmpReq GetDeviceTagRequest
 * @param headers GetDeviceTagHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeviceTagResponse
 */
GetDeviceTagResponse Client::getDeviceTagWithOptions(const GetDeviceTagRequest &tmpReq, const GetDeviceTagHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetDeviceTagShrinkRequest request = GetDeviceTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeviceTag"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getDeviceTag")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeviceTagResponse>();
}

/**
 * @summary Obtain the tag information of a device.
 *
 * @param request GetDeviceTagRequest
 * @return GetDeviceTagResponse
 */
GetDeviceTagResponse Client::getDeviceTag(const GetDeviceTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetDeviceTagHeaders headers = GetDeviceTagHeaders();
  return getDeviceTagWithOptions(request, headers, runtime);
}

/**
 * @summary Derived requirements from Jiangsu Telecom\\"s self-developed desktop launcher project. HaoBai expects to collect statistics on the activation rate, active user rate, and top user usage patterns after the project is published, and to generate daily and weekly reports. Daily reports are synchronized automatically via API, while weekly reports are synchronized offline.
 *
 * @param request GetJiangSuTelecomDataRequest
 * @param headers GetJiangSuTelecomDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJiangSuTelecomDataResponse
 */
GetJiangSuTelecomDataResponse Client::getJiangSuTelecomDataWithOptions(const GetJiangSuTelecomDataRequest &request, const GetJiangSuTelecomDataHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJiangSuTelecomData"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetJiangSuTelecomData")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJiangSuTelecomDataResponse>();
}

/**
 * @summary Derived requirements from Jiangsu Telecom\\"s self-developed desktop launcher project. HaoBai expects to collect statistics on the activation rate, active user rate, and top user usage patterns after the project is published, and to generate daily and weekly reports. Daily reports are synchronized automatically via API, while weekly reports are synchronized offline.
 *
 * @param request GetJiangSuTelecomDataRequest
 * @return GetJiangSuTelecomDataResponse
 */
GetJiangSuTelecomDataResponse Client::getJiangSuTelecomData(const GetJiangSuTelecomDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetJiangSuTelecomDataHeaders headers = GetJiangSuTelecomDataHeaders();
  return getJiangSuTelecomDataWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain scheduled task information.
 *
 * @description Query the details of a specified scheduled task by its ID.
 *
 * @param tmpReq GetScheduleTaskRequest
 * @param headers GetScheduleTaskHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduleTaskResponse
 */
GetScheduleTaskResponse Client::getScheduleTaskWithOptions(const GetScheduleTaskRequest &tmpReq, const GetScheduleTaskHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetScheduleTaskShrinkRequest request = GetScheduleTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetScheduleTask"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetScheduleTask")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduleTaskResponse>();
}

/**
 * @summary Obtain scheduled task information.
 *
 * @description Query the details of a specified scheduled task by its ID.
 *
 * @param request GetScheduleTaskRequest
 * @return GetScheduleTaskResponse
 */
GetScheduleTaskResponse Client::getScheduleTask(const GetScheduleTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetScheduleTaskHeaders headers = GetScheduleTaskHeaders();
  return getScheduleTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Query the number of unread messages for a user.
 *
 * @param tmpReq GetUnreadMessageCountRequest
 * @param headers GetUnreadMessageCountHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUnreadMessageCountResponse
 */
GetUnreadMessageCountResponse Client::getUnreadMessageCountWithOptions(const GetUnreadMessageCountRequest &tmpReq, const GetUnreadMessageCountHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUnreadMessageCountShrinkRequest request = GetUnreadMessageCountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUnreadMessageCount"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getUnreadMessageCount")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUnreadMessageCountResponse>();
}

/**
 * @summary Query the number of unread messages for a user.
 *
 * @param request GetUnreadMessageCountRequest
 * @return GetUnreadMessageCountResponse
 */
GetUnreadMessageCountResponse Client::getUnreadMessageCount(const GetUnreadMessageCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUnreadMessageCountHeaders headers = GetUnreadMessageCountHeaders();
  return getUnreadMessageCountWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the User ID attached to a device by the device\\"s openID.
 *
 * @param tmpReq GetUserByDeviceIdRequest
 * @param headers GetUserByDeviceIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserByDeviceIdResponse
 */
GetUserByDeviceIdResponse Client::getUserByDeviceIdWithOptions(const GetUserByDeviceIdRequest &tmpReq, const GetUserByDeviceIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetUserByDeviceIdShrinkRequest request = GetUserByDeviceIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserByDeviceId"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/getUserByDeviceId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserByDeviceIdResponse>();
}

/**
 * @summary Obtain the User ID attached to a device by the device\\"s openID.
 *
 * @param request GetUserByDeviceIdRequest
 * @return GetUserByDeviceIdResponse
 */
GetUserByDeviceIdResponse Client::getUserByDeviceId(const GetUserByDeviceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetUserByDeviceIdHeaders headers = GetUserByDeviceIdHeaders();
  return getUserByDeviceIdWithOptions(request, headers, runtime);
}

/**
 * @summary Query the weather.
 *
 * @description Query the weather data for the location of the device based on the Device Information obtained from system parameters.
 *
 * @param tmpReq GetWeatherRequest
 * @param headers GetWeatherHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWeatherResponse
 */
GetWeatherResponse Client::getWeatherWithOptions(const GetWeatherRequest &tmpReq, const GetWeatherHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetWeatherShrinkRequest request = GetWeatherShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetWeather"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/GetWeather")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWeatherResponse>();
}

/**
 * @summary Query the weather.
 *
 * @description Query the weather data for the location of the device based on the Device Information obtained from system parameters.
 *
 * @param request GetWeatherRequest
 * @return GetWeatherResponse
 */
GetWeatherResponse Client::getWeather(const GetWeatherRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetWeatherHeaders headers = GetWeatherHeaders();
  return getWeatherWithOptions(request, headers, runtime);
}

/**
 * @summary Click a playlist to start playback.
 *
 * @param tmpReq IndexControlPlayingListRequest
 * @param headers IndexControlPlayingListHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return IndexControlPlayingListResponse
 */
IndexControlPlayingListResponse Client::indexControlPlayingListWithOptions(const IndexControlPlayingListRequest &tmpReq, const IndexControlPlayingListHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  IndexControlPlayingListShrinkRequest request = IndexControlPlayingListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenIndexControlRequest()) {
    request.setOpenIndexControlRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenIndexControlRequest(), "OpenIndexControlRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenIndexControlRequestShrink()) {
    body["OpenIndexControlRequest"] = request.getOpenIndexControlRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "IndexControlPlayingList"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/IndexControlPlayingList")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IndexControlPlayingListResponse>();
}

/**
 * @summary Click a playlist to start playback.
 *
 * @param request IndexControlPlayingListRequest
 * @return IndexControlPlayingListResponse
 */
IndexControlPlayingListResponse Client::indexControlPlayingList(const IndexControlPlayingListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  IndexControlPlayingListHeaders headers = IndexControlPlayingListHeaders();
  return indexControlPlayingListWithOptions(request, headers, runtime);
}

/**
 * @summary When a user operation (not initiated from the device side) causes the login session of a third-party application on the device to become invalid (for example, the user logs on to the same account from a new device, invalidating the session on the old device, or the user changes their password, which invalidates the session on the old device), the third party must invoke this API to notify Tmall Genie.
 *
 * @description > Modify message notification template  
 * > - You need to query the templateId first, then modify other parameters based on the templateId.
 *
 * @param tmpReq InvalidateThirdPartyAppLoginStateRequest
 * @param headers InvalidateThirdPartyAppLoginStateHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvalidateThirdPartyAppLoginStateResponse
 */
InvalidateThirdPartyAppLoginStateResponse Client::invalidateThirdPartyAppLoginStateWithOptions(const InvalidateThirdPartyAppLoginStateRequest &tmpReq, const InvalidateThirdPartyAppLoginStateHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvalidateThirdPartyAppLoginStateShrinkRequest request = InvalidateThirdPartyAppLoginStateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasThirdPartyAppId()) {
    body["ThirdPartyAppId"] = request.getThirdPartyAppId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "InvalidateThirdPartyAppLoginState"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/invalidateThirdPartyAppLoginState")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvalidateThirdPartyAppLoginStateResponse>();
}

/**
 * @summary When a user operation (not initiated from the device side) causes the login session of a third-party application on the device to become invalid (for example, the user logs on to the same account from a new device, invalidating the session on the old device, or the user changes their password, which invalidates the session on the old device), the third party must invoke this API to notify Tmall Genie.
 *
 * @description > Modify message notification template  
 * > - You need to query the templateId first, then modify other parameters based on the templateId.
 *
 * @param request InvalidateThirdPartyAppLoginStateRequest
 * @return InvalidateThirdPartyAppLoginStateResponse
 */
InvalidateThirdPartyAppLoginStateResponse Client::invalidateThirdPartyAppLoginState(const InvalidateThirdPartyAppLoginStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  InvalidateThirdPartyAppLoginStateHeaders headers = InvalidateThirdPartyAppLoginStateHeaders();
  return invalidateThirdPartyAppLoginStateWithOptions(request, headers, runtime);
}

/**
 * @summary Perform a paged query to retrieve the alarm clock list of a specific User on a device.
 *
 * @param tmpReq ListAlarmsRequest
 * @param headers ListAlarmsHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlarmsResponse
 */
ListAlarmsResponse Client::listAlarmsWithOptions(const ListAlarmsRequest &tmpReq, const ListAlarmsHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlarmsShrinkRequest request = ListAlarmsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListAlarms"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlarmsResponse>();
}

/**
 * @summary Perform a paged query to retrieve the alarm clock list of a specific User on a device.
 *
 * @param request ListAlarmsRequest
 * @return ListAlarmsResponse
 */
ListAlarmsResponse Client::listAlarms(const ListAlarmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListAlarmsHeaders headers = ListAlarmsHeaders();
  return listAlarmsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the content list within a music audio album.
 *
 * @param request ListAlbumDetailRequest
 * @param headers ListAlbumDetailHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlbumDetailResponse
 */
ListAlbumDetailResponse Client::listAlbumDetailWithOptions(const ListAlbumDetailRequest &request, const ListAlbumDetailHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlbumDetail"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListAlbumDetail")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlbumDetailResponse>();
}

/**
 * @summary Obtain the content list within a music audio album.
 *
 * @param request ListAlbumDetailRequest
 * @return ListAlbumDetailResponse
 */
ListAlbumDetailResponse Client::listAlbumDetail(const ListAlbumDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListAlbumDetailHeaders headers = ListAlbumDetailHeaders();
  return listAlbumDetailWithOptions(request, headers, runtime);
}

/**
 * @summary Whether the album is subscribed.
 *
 * @param tmpReq ListAlbumIsAddedRequest
 * @param headers ListAlbumIsAddedHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlbumIsAddedResponse
 */
ListAlbumIsAddedResponse Client::listAlbumIsAddedWithOptions(const ListAlbumIsAddedRequest &tmpReq, const ListAlbumIsAddedHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlbumIsAddedShrinkRequest request = ListAlbumIsAddedShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlbumIdList()) {
    request.setAlbumIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlbumIdList(), "AlbumIdList", "json"));
  }

  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasAlbumIdListShrink()) {
    query["AlbumIdList"] = request.getAlbumIdListShrink();
  }

  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlbumIsAdded"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listAlbumIsAdded")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlbumIsAddedResponse>();
}

/**
 * @summary Whether the album is subscribed.
 *
 * @param request ListAlbumIsAddedRequest
 * @return ListAlbumIsAddedResponse
 */
ListAlbumIsAddedResponse Client::listAlbumIsAdded(const ListAlbumIsAddedRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListAlbumIsAddedHeaders headers = ListAlbumIsAddedHeaders();
  return listAlbumIsAddedWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the content under a specific category according to the specified sorting order.
 *
 * @param tmpReq ListCateContentRequest
 * @param headers ListCateContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCateContentResponse
 */
ListCateContentResponse Client::listCateContentWithOptions(const ListCateContentRequest &tmpReq, const ListCateContentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCateContentShrinkRequest request = ListCateContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequest(), "Request", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.getRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCateContent"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListCateContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCateContentResponse>();
}

/**
 * @summary Obtain the content under a specific category according to the specified sorting order.
 *
 * @param request ListCateContentRequest
 * @return ListCateContentResponse
 */
ListCateContentResponse Client::listCateContent(const ListCateContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCateContentHeaders headers = ListCateContentHeaders();
  return listCateContentWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain category information.
 *
 * @param request ListCateInfoRequest
 * @param headers ListCateInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCateInfoResponse
 */
ListCateInfoResponse Client::listCateInfoWithOptions(const ListCateInfoRequest &request, const ListCateInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCateInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListCateInfo")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCateInfoResponse>();
}

/**
 * @summary Obtain category information.
 *
 * @param request ListCateInfoRequest
 * @return ListCateInfoResponse
 */
ListCateInfoResponse Client::listCateInfo(const ListCateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCateInfoHeaders headers = ListCateInfoHeaders();
  return listCateInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the top-level category list for music or audio.
 *
 * @param request ListCommonCateFirstFloorRequest
 * @param headers ListCommonCateFirstFloorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonCateFirstFloorResponse
 */
ListCommonCateFirstFloorResponse Client::listCommonCateFirstFloorWithOptions(const ListCommonCateFirstFloorRequest &request, const ListCommonCateFirstFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommonCateFirstFloor"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListCommonCateFirstFloor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommonCateFirstFloorResponse>();
}

/**
 * @summary Obtain the top-level category list for music or audio.
 *
 * @param request ListCommonCateFirstFloorRequest
 * @return ListCommonCateFirstFloorResponse
 */
ListCommonCateFirstFloorResponse Client::listCommonCateFirstFloor(const ListCommonCateFirstFloorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCommonCateFirstFloorHeaders headers = ListCommonCateFirstFloorHeaders();
  return listCommonCateFirstFloorWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieve the list of level-2 categories under a specified level-1 category.
 *
 * @param request ListCommonCateSecondFloorRequest
 * @param headers ListCommonCateSecondFloorHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCommonCateSecondFloorResponse
 */
ListCommonCateSecondFloorResponse Client::listCommonCateSecondFloorWithOptions(const ListCommonCateSecondFloorRequest &request, const ListCommonCateSecondFloorHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentCateId()) {
    query["ParentCateId"] = request.getParentCateId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCommonCateSecondFloor"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListCommonCateSecondFloor")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCommonCateSecondFloorResponse>();
}

/**
 * @summary Retrieve the list of level-2 categories under a specified level-1 category.
 *
 * @param request ListCommonCateSecondFloorRequest
 * @return ListCommonCateSecondFloorResponse
 */
ListCommonCateSecondFloorResponse Client::listCommonCateSecondFloor(const ListCommonCateSecondFloorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListCommonCateSecondFloorHeaders headers = ListCommonCateSecondFloorHeaders();
  return listCommonCateSecondFloorWithOptions(request, headers, runtime);
}

/**
 * @summary Batch retrieve basic device information based on a list of device openIDs.
 *
 * @param tmpReq ListDeviceBasicInfoRequest
 * @param headers ListDeviceBasicInfoHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceBasicInfoResponse
 */
ListDeviceBasicInfoResponse Client::listDeviceBasicInfoWithOptions(const ListDeviceBasicInfoRequest &tmpReq, const ListDeviceBasicInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeviceBasicInfoShrinkRequest request = ListDeviceBasicInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfos()) {
    request.setDeviceInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfos(), "DeviceInfos", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfosShrink()) {
    query["DeviceInfos"] = request.getDeviceInfosShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceBasicInfo"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listDeviceBasicInfo")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceBasicInfoResponse>();
}

/**
 * @summary Batch retrieve basic device information based on a list of device openIDs.
 *
 * @param request ListDeviceBasicInfoRequest
 * @return ListDeviceBasicInfoResponse
 */
ListDeviceBasicInfoResponse Client::listDeviceBasicInfo(const ListDeviceBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeviceBasicInfoHeaders headers = ListDeviceBasicInfoHeaders();
  return listDeviceBasicInfoWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the list of attached Device IDs based on the user\\"s openID.
 *
 * @param tmpReq ListDeviceByUserIdRequest
 * @param headers ListDeviceByUserIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceByUserIdResponse
 */
ListDeviceByUserIdResponse Client::listDeviceByUserIdWithOptions(const ListDeviceByUserIdRequest &tmpReq, const ListDeviceByUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeviceByUserIdShrinkRequest request = ListDeviceByUserIdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceByUserId"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listDeviceByUserId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceByUserIdResponse>();
}

/**
 * @summary Obtain the list of attached Device IDs based on the user\\"s openID.
 *
 * @param request ListDeviceByUserIdRequest
 * @return ListDeviceByUserIdResponse
 */
ListDeviceByUserIdResponse Client::listDeviceByUserId(const ListDeviceByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeviceByUserIdHeaders headers = ListDeviceByUserIdHeaders();
  return listDeviceByUserIdWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the device list for a specified channel.
 *
 * @param tmpReq ListDeviceByUserIdAndChanelRequest
 * @param headers ListDeviceByUserIdAndChanelHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceByUserIdAndChanelResponse
 */
ListDeviceByUserIdAndChanelResponse Client::listDeviceByUserIdAndChanelWithOptions(const ListDeviceByUserIdAndChanelRequest &tmpReq, const ListDeviceByUserIdAndChanelHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeviceByUserIdAndChanelShrinkRequest request = ListDeviceByUserIdAndChanelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasChannelInfo()) {
    request.setChannelInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getChannelInfo(), "ChannelInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasChannelInfoShrink()) {
    query["ChannelInfo"] = request.getChannelInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceByUserIdAndChanel"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listDeviceByUserIdAndChanel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceByUserIdAndChanelResponse>();
}

/**
 * @summary Obtain the device list for a specified channel.
 *
 * @param request ListDeviceByUserIdAndChanelRequest
 * @return ListDeviceByUserIdAndChanelResponse
 */
ListDeviceByUserIdAndChanelResponse Client::listDeviceByUserIdAndChanel(const ListDeviceByUserIdAndChanelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeviceByUserIdAndChanelHeaders headers = ListDeviceByUserIdAndChanelHeaders();
  return listDeviceByUserIdAndChanelWithOptions(request, headers, runtime);
}

/**
 * @summary Batch retrieve Device IDs by device MAC/SN.
 *
 * @param tmpReq ListDeviceIdByIdentitiesRequest
 * @param headers ListDeviceIdByIdentitiesHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeviceIdByIdentitiesResponse
 */
ListDeviceIdByIdentitiesResponse Client::listDeviceIdByIdentitiesWithOptions(const ListDeviceIdByIdentitiesRequest &tmpReq, const ListDeviceIdByIdentitiesHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeviceIdByIdentitiesShrinkRequest request = ListDeviceIdByIdentitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIdentityIds()) {
    request.setIdentityIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIdentityIds(), "IdentityIds", "json"));
  }

  json query = {};
  if (!!request.hasEncodeKey()) {
    query["EncodeKey"] = request.getEncodeKey();
  }

  if (!!request.hasEncodeType()) {
    query["EncodeType"] = request.getEncodeType();
  }

  if (!!request.hasIdentityIdsShrink()) {
    query["IdentityIds"] = request.getIdentityIdsShrink();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasProductKey()) {
    query["ProductKey"] = request.getProductKey();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeviceIdByIdentities"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listDeviceIdByIdentities")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeviceIdByIdentitiesResponse>();
}

/**
 * @summary Batch retrieve Device IDs by device MAC/SN.
 *
 * @param request ListDeviceIdByIdentitiesRequest
 * @return ListDeviceIdByIdentitiesResponse
 */
ListDeviceIdByIdentitiesResponse Client::listDeviceIdByIdentities(const ListDeviceIdByIdentitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListDeviceIdByIdentitiesHeaders headers = ListDeviceIdByIdentitiesHeaders();
  return listDeviceIdByIdentitiesWithOptions(request, headers, runtime);
}

/**
 * @summary Query the list of ringtones under a specified music category.
 *
 * @param tmpReq ListMusicRequest
 * @param headers ListMusicHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMusicResponse
 */
ListMusicResponse Client::listMusicWithOptions(const ListMusicRequest &tmpReq, const ListMusicHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMusicShrinkRequest request = ListMusicShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMusic"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listMusic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMusicResponse>();
}

/**
 * @summary Query the list of ringtones under a specified music category.
 *
 * @param request ListMusicRequest
 * @return ListMusicResponse
 */
ListMusicResponse Client::listMusic(const ListMusicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListMusicHeaders headers = ListMusicHeaders();
  return listMusicWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the history playback API.
 *
 * @param tmpReq ListPlayHistoryRequest
 * @param headers ListPlayHistoryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPlayHistoryResponse
 */
ListPlayHistoryResponse Client::listPlayHistoryWithOptions(const ListPlayHistoryRequest &tmpReq, const ListPlayHistoryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPlayHistoryShrinkRequest request = ListPlayHistoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequest(), "Request", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.getRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListPlayHistory"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListPlayHistory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPlayHistoryResponse>();
}

/**
 * @summary Obtain the history playback API.
 *
 * @param request ListPlayHistoryRequest
 * @return ListPlayHistoryResponse
 */
ListPlayHistoryResponse Client::listPlayHistory(const ListPlayHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListPlayHistoryHeaders headers = ListPlayHistoryHeaders();
  return listPlayHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain daily recommended music or audio.
 *
 * @param tmpReq ListRecommendContentRequest
 * @param headers ListRecommendContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecommendContentResponse
 */
ListRecommendContentResponse Client::listRecommendContentWithOptions(const ListRecommendContentRequest &tmpReq, const ListRecommendContentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRecommendContentShrinkRequest request = ListRecommendContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequest(), "Request", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.getRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListRecommendContent"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ListRecommendContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecommendContentResponse>();
}

/**
 * @summary Obtain daily recommended music or audio.
 *
 * @param request ListRecommendContentRequest
 * @return ListRecommendContentResponse
 */
ListRecommendContentResponse Client::listRecommendContent(const ListRecommendContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListRecommendContentHeaders headers = ListRecommendContentHeaders();
  return listRecommendContentWithOptions(request, headers, runtime);
}

/**
 * @summary The user has subscribed to the list.
 *
 * @param tmpReq ListSubRequest
 * @param headers ListSubHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubResponse
 */
ListSubResponse Client::listSubWithOptions(const ListSubRequest &tmpReq, const ListSubHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSubShrinkRequest request = ListSubShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPage()) {
    request.setPageShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPage(), "Page", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPageShrink()) {
    query["Page"] = request.getPageShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSub"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listSub")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubResponse>();
}

/**
 * @summary The user has subscribed to the list.
 *
 * @param request ListSubRequest
 * @return ListSubResponse
 */
ListSubResponse Client::listSub(const ListSubRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSubHeaders headers = ListSubHeaders();
  return listSubWithOptions(request, headers, runtime);
}

/**
 * @summary Album List.
 *
 * @param tmpReq ListSubAlbumRequest
 * @param headers ListSubAlbumHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubAlbumResponse
 */
ListSubAlbumResponse Client::listSubAlbumWithOptions(const ListSubAlbumRequest &tmpReq, const ListSubAlbumHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSubAlbumShrinkRequest request = ListSubAlbumShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasQuerySubscriptionAlbumRequest()) {
    request.setQuerySubscriptionAlbumRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuerySubscriptionAlbumRequest(), "QuerySubscriptionAlbumRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasQuerySubscriptionAlbumRequestShrink()) {
    query["QuerySubscriptionAlbumRequest"] = request.getQuerySubscriptionAlbumRequestShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubAlbum"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listSubAlbum")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubAlbumResponse>();
}

/**
 * @summary Album List.
 *
 * @param request ListSubAlbumRequest
 * @return ListSubAlbumResponse
 */
ListSubAlbumResponse Client::listSubAlbum(const ListSubAlbumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSubAlbumHeaders headers = ListSubAlbumHeaders();
  return listSubAlbumWithOptions(request, headers, runtime);
}

/**
 * @summary Album categorization.
 *
 * @param request ListSubscriptionAlbumCategoryRequest
 * @param headers ListSubscriptionAlbumCategoryHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscriptionAlbumCategoryResponse
 */
ListSubscriptionAlbumCategoryResponse Client::listSubscriptionAlbumCategoryWithOptions(const ListSubscriptionAlbumCategoryRequest &request, const ListSubscriptionAlbumCategoryHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.getCategoryName();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubscriptionAlbumCategory"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listSubscriptionAlbumCategory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubscriptionAlbumCategoryResponse>();
}

/**
 * @summary Album categorization.
 *
 * @param request ListSubscriptionAlbumCategoryRequest
 * @return ListSubscriptionAlbumCategoryResponse
 */
ListSubscriptionAlbumCategoryResponse Client::listSubscriptionAlbumCategory(const ListSubscriptionAlbumCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListSubscriptionAlbumCategoryHeaders headers = ListSubscriptionAlbumCategoryHeaders();
  return listSubscriptionAlbumCategoryWithOptions(request, headers, runtime);
}

/**
 * @summary Query the list of user message records based on the query conditions, including the start time and the number of entries to return.
 *
 * @param tmpReq ListUserMessageRequest
 * @param headers ListUserMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserMessageResponse
 */
ListUserMessageResponse Client::listUserMessageWithOptions(const ListUserMessageRequest &tmpReq, const ListUserMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserMessageShrinkRequest request = ListUserMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.getBeforeTime();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  if (!!request.hasLimit()) {
    query["limit"] = request.getLimit();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserMessage"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/listUserMessage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserMessageResponse>();
}

/**
 * @summary Query the list of user message records based on the query conditions, including the start time and the number of entries to return.
 *
 * @param request ListUserMessageRequest
 * @return ListUserMessageResponse
 */
ListUserMessageResponse Client::listUserMessage(const ListUserMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ListUserMessageHeaders headers = ListUserMessageHeaders();
  return listUserMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Shift the project to obtain recommended songs, including daily recommendations, popular songs, and genre-based playlists.
 *
 * @description Different scenarios (such as daily recommendations and popular songs) can be distinguished by the Type parameter.
 *
 * @param tmpReq MobileRecommendRequest
 * @param headers MobileRecommendHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return MobileRecommendResponse
 */
MobileRecommendResponse Client::mobileRecommendWithOptions(const MobileRecommendRequest &tmpReq, const MobileRecommendHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  MobileRecommendShrinkRequest request = MobileRecommendShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasBotId()) {
    query["BotId"] = request.getBotId();
  }

  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasStyle()) {
    query["Style"] = request.getStyle();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MobileRecommend"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/mobile/recommend/music")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MobileRecommendResponse>();
}

/**
 * @summary Shift the project to obtain recommended songs, including daily recommendations, popular songs, and genre-based playlists.
 *
 * @description Different scenarios (such as daily recommendations and popular songs) can be distinguished by the Type parameter.
 *
 * @param request MobileRecommendRequest
 * @return MobileRecommendResponse
 */
MobileRecommendResponse Client::mobileRecommend(const MobileRecommendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  MobileRecommendHeaders headers = MobileRecommendHeaders();
  return mobileRecommendWithOptions(request, headers, runtime);
}

/**
 * @summary Playback and pause control.
 *
 * @param tmpReq PlayAndPauseControlRequest
 * @param headers PlayAndPauseControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PlayAndPauseControlResponse
 */
PlayAndPauseControlResponse Client::playAndPauseControlWithOptions(const PlayAndPauseControlRequest &tmpReq, const PlayAndPauseControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PlayAndPauseControlShrinkRequest request = PlayAndPauseControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenPlayAndPauseControlParam()) {
    request.setOpenPlayAndPauseControlParamShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenPlayAndPauseControlParam(), "OpenPlayAndPauseControlParam", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenPlayAndPauseControlParamShrink()) {
    body["OpenPlayAndPauseControlParam"] = request.getOpenPlayAndPauseControlParamShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PlayAndPauseControl"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/PlayAndPauseControl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PlayAndPauseControlResponse>();
}

/**
 * @summary Playback and pause control.
 *
 * @param request PlayAndPauseControlRequest
 * @return PlayAndPauseControlResponse
 */
PlayAndPauseControlResponse Client::playAndPauseControl(const PlayAndPauseControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PlayAndPauseControlHeaders headers = PlayAndPauseControlHeaders();
  return playAndPauseControlWithOptions(request, headers, runtime);
}

/**
 * @summary Switch playback mode.
 *
 * @param tmpReq PlayModeControlRequest
 * @param headers PlayModeControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PlayModeControlResponse
 */
PlayModeControlResponse Client::playModeControlWithOptions(const PlayModeControlRequest &tmpReq, const PlayModeControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PlayModeControlShrinkRequest request = PlayModeControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenPlayModeControlRequest()) {
    request.setOpenPlayModeControlRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenPlayModeControlRequest(), "OpenPlayModeControlRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenPlayModeControlRequestShrink()) {
    body["OpenPlayModeControlRequest"] = request.getOpenPlayModeControlRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PlayModeControl"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/PlayModeControl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PlayModeControlResponse>();
}

/**
 * @summary Switch playback mode.
 *
 * @param request PlayModeControlRequest
 * @return PlayModeControlResponse
 */
PlayModeControlResponse Client::playModeControl(const PlayModeControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PlayModeControlHeaders headers = PlayModeControlHeaders();
  return playModeControlWithOptions(request, headers, runtime);
}

/**
 * @summary Control the next or previous track in the created playlist.
 *
 * @param tmpReq PreviousAndNextControlRequest
 * @param headers PreviousAndNextControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviousAndNextControlResponse
 */
PreviousAndNextControlResponse Client::previousAndNextControlWithOptions(const PreviousAndNextControlRequest &tmpReq, const PreviousAndNextControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreviousAndNextControlShrinkRequest request = PreviousAndNextControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenControlPlayingListRequest()) {
    request.setOpenControlPlayingListRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenControlPlayingListRequest(), "OpenControlPlayingListRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenControlPlayingListRequestShrink()) {
    body["OpenControlPlayingListRequest"] = request.getOpenControlPlayingListRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreviousAndNextControl"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/PreviousAndNextControl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviousAndNextControlResponse>();
}

/**
 * @summary Control the next or previous track in the created playlist.
 *
 * @param request PreviousAndNextControlRequest
 * @return PreviousAndNextControlResponse
 */
PreviousAndNextControlResponse Client::previousAndNextControl(const PreviousAndNextControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PreviousAndNextControlHeaders headers = PreviousAndNextControlHeaders();
  return previousAndNextControlWithOptions(request, headers, runtime);
}

/**
 * @summary Progress control.
 *
 * @param tmpReq ProgressControlRequest
 * @param headers ProgressControlHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProgressControlResponse
 */
ProgressControlResponse Client::progressControlWithOptions(const ProgressControlRequest &tmpReq, const ProgressControlHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ProgressControlShrinkRequest request = ProgressControlShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasOpenProgressControlRequest()) {
    request.setOpenProgressControlRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOpenProgressControlRequest(), "OpenProgressControlRequest", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasOpenProgressControlRequestShrink()) {
    body["OpenProgressControlRequest"] = request.getOpenProgressControlRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ProgressControl"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/ProgressControl")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProgressControlResponse>();
}

/**
 * @summary Progress control.
 *
 * @param request ProgressControlRequest
 * @return ProgressControlResponse
 */
ProgressControlResponse Client::progressControl(const ProgressControlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ProgressControlHeaders headers = ProgressControlHeaders();
  return progressControlWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the collection of alarm music types supported by the device.
 *
 * @param tmpReq QueryMusicTypeRequest
 * @param headers QueryMusicTypeHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMusicTypeResponse
 */
QueryMusicTypeResponse Client::queryMusicTypeWithOptions(const QueryMusicTypeRequest &tmpReq, const QueryMusicTypeHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMusicTypeShrinkRequest request = QueryMusicTypeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryMusicType"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/queryMusicType")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMusicTypeResponse>();
}

/**
 * @summary Obtain the collection of alarm music types supported by the device.
 *
 * @param request QueryMusicTypeRequest
 * @return QueryMusicTypeResponse
 */
QueryMusicTypeResponse Client::queryMusicType(const QueryMusicTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryMusicTypeHeaders headers = QueryMusicTypeHeaders();
  return queryMusicTypeWithOptions(request, headers, runtime);
}

/**
 * @summary Obtain the list of authorized Tmall Genie users and their devices by using the TME user ID, for use by KuGou Cloud Push Song service
 *
 * @param request QueryUserDeviceListByTmeUserIdRequest
 * @param headers QueryUserDeviceListByTmeUserIdHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUserDeviceListByTmeUserIdResponse
 */
QueryUserDeviceListByTmeUserIdResponse Client::queryUserDeviceListByTmeUserIdWithOptions(const QueryUserDeviceListByTmeUserIdRequest &request, const QueryUserDeviceListByTmeUserIdHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSp()) {
    query["Sp"] = request.getSp();
  }

  if (!!request.hasTmeUserId()) {
    query["TmeUserId"] = request.getTmeUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUserDeviceListByTmeUserId"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/queryUserDeviceListByTmeUserId")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUserDeviceListByTmeUserIdResponse>();
}

/**
 * @summary Obtain the list of authorized Tmall Genie users and their devices by using the TME user ID, for use by KuGou Cloud Push Song service
 *
 * @param request QueryUserDeviceListByTmeUserIdRequest
 * @return QueryUserDeviceListByTmeUserIdResponse
 */
QueryUserDeviceListByTmeUserIdResponse Client::queryUserDeviceListByTmeUserId(const QueryUserDeviceListByTmeUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  QueryUserDeviceListByTmeUserIdHeaders headers = QueryUserDeviceListByTmeUserIdHeaders();
  return queryUserDeviceListByTmeUserIdWithOptions(request, headers, runtime);
}

/**
 * @summary Set a message to read status.
 *
 * @param tmpReq ReadMessageRequest
 * @param headers ReadMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessageWithOptions(const ReadMessageRequest &tmpReq, const ReadMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReadMessageShrinkRequest request = ReadMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReadMessage"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/readMessage")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReadMessageResponse>();
}

/**
 * @summary Set a message to read status.
 *
 * @param request ReadMessageRequest
 * @return ReadMessageResponse
 */
ReadMessageResponse Client::readMessage(const ReadMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ReadMessageHeaders headers = ReadMessageHeaders();
  return readMessageWithOptions(request, headers, runtime);
}

/**
 * @summary A screen-equipped device completes activation and attachment between the user and the device by scanning a QR code.
 *
 * @description Perform activation and attachment by scanning the QR code related to activation and attachment displayed on the device.
 *
 * @param tmpReq ScanCodeBindRequest
 * @param headers ScanCodeBindHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScanCodeBindResponse
 */
ScanCodeBindResponse Client::scanCodeBindWithOptions(const ScanCodeBindRequest &tmpReq, const ScanCodeBindHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ScanCodeBindShrinkRequest request = ScanCodeBindShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBindReq()) {
    request.setBindReqShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBindReq(), "BindReq", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasBindReqShrink()) {
    body["BindReq"] = request.getBindReqShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ScanCodeBind"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/scanCode")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScanCodeBindResponse>();
}

/**
 * @summary A screen-equipped device completes activation and attachment between the user and the device by scanning a QR code.
 *
 * @description Perform activation and attachment by scanning the QR code related to activation and attachment displayed on the device.
 *
 * @param request ScanCodeBindRequest
 * @return ScanCodeBindResponse
 */
ScanCodeBindResponse Client::scanCodeBind(const ScanCodeBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ScanCodeBindHeaders headers = ScanCodeBindHeaders();
  return scanCodeBindWithOptions(request, headers, runtime);
}

/**
 * @summary Query the content of a selection pool by its ID.
 *
 * @param tmpReq ScgSearchRequest
 * @param headers ScgSearchHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScgSearchResponse
 */
ScgSearchResponse Client::scgSearchWithOptions(const ScgSearchRequest &tmpReq, const ScgSearchHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ScgSearchShrinkRequest request = ScgSearchShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScgFilter()) {
    request.setScgFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScgFilter(), "ScgFilter", "json"));
  }

  json query = {};
  if (!!request.hasScgFilterShrink()) {
    query["ScgFilter"] = request.getScgFilterShrink();
  }

  if (!!request.hasTopicId()) {
    query["TopicId"] = request.getTopicId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScgSearch"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/scgSearch")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScgSearchResponse>();
}

/**
 * @summary Query the content of a selection pool by its ID.
 *
 * @param request ScgSearchRequest
 * @return ScgSearchResponse
 */
ScgSearchResponse Client::scgSearch(const ScgSearchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ScgSearchHeaders headers = ScgSearchHeaders();
  return scgSearchWithOptions(request, headers, runtime);
}

/**
 * @summary Search according to specific search criteria.
 *
 * @param tmpReq SearchContentRequest
 * @param headers SearchContentHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchContentResponse
 */
SearchContentResponse Client::searchContentWithOptions(const SearchContentRequest &tmpReq, const SearchContentHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchContentShrinkRequest request = SearchContentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasRequest()) {
    request.setRequestShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequest(), "Request", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  json body = {};
  if (!!request.hasRequestShrink()) {
    body["Request"] = request.getRequestShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchContent"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/SearchContent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchContentResponse>();
}

/**
 * @summary Search according to specific search criteria.
 *
 * @param request SearchContentRequest
 * @return SearchContentResponse
 */
SearchContentResponse Client::searchContent(const SearchContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SearchContentHeaders headers = SearchContentHeaders();
  return searchContentWithOptions(request, headers, runtime);
}

/**
 * @summary Send a message.
 *
 * @param tmpReq SendMessageRequest
 * @param headers SendMessageHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessageWithOptions(const SendMessageRequest &tmpReq, const SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SendMessageShrinkRequest request = SendMessageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json query = {};
  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  if (!!request.hasUserInfoShrink()) {
    query["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/sendMessage")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageResponse>();
}

/**
 * @summary Send a message.
 *
 * @param request SendMessageRequest
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessage(const SendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendMessageHeaders headers = SendMessageHeaders();
  return sendMessageWithOptions(request, headers, runtime);
}

/**
 * @summary Modify the user settings of a device.
 *
 * @param tmpReq SetDeviceSettingRequest
 * @param headers SetDeviceSettingHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDeviceSettingResponse
 */
SetDeviceSettingResponse Client::setDeviceSettingWithOptions(const SetDeviceSettingRequest &tmpReq, const SetDeviceSettingHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetDeviceSettingShrinkRequest request = SetDeviceSettingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  json query = {};
  if (!!request.hasDeviceInfoShrink()) {
    query["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  json body = {};
  if (!!request.hasKey()) {
    body["Key"] = request.getKey();
  }

  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetDeviceSetting"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/setDeviceSetting")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDeviceSettingResponse>();
}

/**
 * @summary Modify the user settings of a device.
 *
 * @param request SetDeviceSettingRequest
 * @return SetDeviceSettingResponse
 */
SetDeviceSettingResponse Client::setDeviceSetting(const SetDeviceSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SetDeviceSettingHeaders headers = SetDeviceSettingHeaders();
  return setDeviceSettingWithOptions(request, headers, runtime);
}

/**
 * @summary Third-party real-time information data change event push
 *
 * @param request ThirdImmediateMsgPushRequest
 * @param headers ThirdImmediateMsgPushHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ThirdImmediateMsgPushResponse
 */
ThirdImmediateMsgPushResponse Client::thirdImmediateMsgPushWithOptions(const ThirdImmediateMsgPushRequest &request, const ThirdImmediateMsgPushHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasChangeDetail()) {
    query["ChangeDetail"] = request.getChangeDetail();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasPsgIds()) {
    query["PsgIds"] = request.getPsgIds();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasTrafficChangeType()) {
    query["TrafficChangeType"] = request.getTrafficChangeType();
  }

  if (!!request.hasTrafficChangeTypeDesc()) {
    query["TrafficChangeTypeDesc"] = request.getTrafficChangeTypeDesc();
  }

  if (!!request.hasTrafficJourneyIds()) {
    query["TrafficJourneyIds"] = request.getTrafficJourneyIds();
  }

  if (!!request.hasTrafficSubOrderIds()) {
    query["TrafficSubOrderIds"] = request.getTrafficSubOrderIds();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ThirdImmediateMsgPush"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/thirdImmediateMsgPush")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ThirdImmediateMsgPushResponse>();
}

/**
 * @summary Third-party real-time information data change event push
 *
 * @param request ThirdImmediateMsgPushRequest
 * @return ThirdImmediateMsgPushResponse
 */
ThirdImmediateMsgPushResponse Client::thirdImmediateMsgPush(const ThirdImmediateMsgPushRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ThirdImmediateMsgPushHeaders headers = ThirdImmediateMsgPushHeaders();
  return thirdImmediateMsgPushWithOptions(request, headers, runtime);
}

/**
 * @summary Detach the relationship between a third-party account and a Tmall Genie account by using a logon credential.
 *
 * @description Note: When the logon credential expires, the integrator must initiate the authorization logon flow again to obtain a new logon credential (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the logon credential (LoginStateAccessToken) parameter via the Java software development kit (SDK). For SDKs in other languages, consult Tmall Genie developers during integration.  
 * If the API call throws a TeaException and TeaException.code is "InvalidAuthentication", the logon credential has expired.
 * - Invoke the service API by sending an HTTP request with the logon credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the logon credential has expired.
 *
 * @param request UnbindAligenieUserRequest
 * @param headers UnbindAligenieUserHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAligenieUserResponse
 */
UnbindAligenieUserResponse Client::unbindAligenieUserWithOptions(const UnbindAligenieUserRequest &request, const UnbindAligenieUserHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLoginStateAccessToken()) {
    body["LoginStateAccessToken"] = request.getLoginStateAccessToken();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnbindAligenieUser"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/unbindAligenieUser")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindAligenieUserResponse>();
}

/**
 * @summary Detach the relationship between a third-party account and a Tmall Genie account by using a logon credential.
 *
 * @description Note: When the logon credential expires, the integrator must initiate the authorization logon flow again to obtain a new logon credential (entry service API: AuthLoginWithThirdUserInfo).
 * - Invoke the service API with the logon credential (LoginStateAccessToken) parameter via the Java software development kit (SDK). For SDKs in other languages, consult Tmall Genie developers during integration.  
 * If the API call throws a TeaException and TeaException.code is "InvalidAuthentication", the logon credential has expired.
 * - Invoke the service API by sending an HTTP request with the logon credential (LoginStateAccessToken) parameter.  
 * If the HTTP response status code returned by the API call is 400, the logon credential has expired.
 *
 * @param request UnbindAligenieUserRequest
 * @return UnbindAligenieUserResponse
 */
UnbindAligenieUserResponse Client::unbindAligenieUser(const UnbindAligenieUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UnbindAligenieUserHeaders headers = UnbindAligenieUserHeaders();
  return unbindAligenieUserWithOptions(request, headers, runtime);
}

/**
 * @summary Detach the binding relationship based on the user\\"s open information and the device\\"s open information.
 *
 * @param tmpReq UnbindDeviceRequest
 * @param headers UnbindDeviceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDeviceResponse
 */
UnbindDeviceResponse Client::unbindDeviceWithOptions(const UnbindDeviceRequest &tmpReq, const UnbindDeviceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnbindDeviceShrinkRequest request = UnbindDeviceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UnbindDevice"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/unbindDevice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDeviceResponse>();
}

/**
 * @summary Detach the binding relationship based on the user\\"s open information and the device\\"s open information.
 *
 * @param request UnbindDeviceRequest
 * @return UnbindDeviceResponse
 */
UnbindDeviceResponse Client::unbindDevice(const UnbindDeviceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UnbindDeviceHeaders headers = UnbindDeviceHeaders();
  return unbindDeviceWithOptions(request, headers, runtime);
}

/**
 * @summary Update an alarm, including its trigger time, loop type, and music.
 *
 * @param tmpReq UpdateAlarmRequest
 * @param headers UpdateAlarmHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlarmResponse
 */
UpdateAlarmResponse Client::updateAlarmWithOptions(const UpdateAlarmRequest &tmpReq, const UpdateAlarmHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAlarmShrinkRequest request = UpdateAlarmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDeviceInfo()) {
    request.setDeviceInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDeviceInfo(), "DeviceInfo", "json"));
  }

  if (!!tmpReq.hasPayload()) {
    request.setPayloadShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPayload(), "Payload", "json"));
  }

  if (!!tmpReq.hasUserInfo()) {
    request.setUserInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserInfo(), "UserInfo", "json"));
  }

  json body = {};
  if (!!request.hasDeviceInfoShrink()) {
    body["DeviceInfo"] = request.getDeviceInfoShrink();
  }

  if (!!request.hasPayloadShrink()) {
    body["Payload"] = request.getPayloadShrink();
  }

  if (!!request.hasUserInfoShrink()) {
    body["UserInfo"] = request.getUserInfoShrink();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXAcsAligenieAccessToken()) {
    realHeaders["x-acs-aligenie-access-token"] = Darabonba::Convert::stringVal(headers.getXAcsAligenieAccessToken());
  }

  if (!!headers.hasAuthorization()) {
    realHeaders["Authorization"] = Darabonba::Convert::stringVal(headers.getAuthorization());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlarm"},
    {"version" , "ssp_1.0"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1.0/ssp/updateAlarm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlarmResponse>();
}

/**
 * @summary Update an alarm, including its trigger time, loop type, and music.
 *
 * @param request UpdateAlarmRequest
 * @return UpdateAlarmResponse
 */
UpdateAlarmResponse Client::updateAlarm(const UpdateAlarmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateAlarmHeaders headers = UpdateAlarmHeaders();
  return updateAlarmWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0