#include <darabonba/Core.hpp>
#include <alibabacloud/Dyplsapi20170525.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Dyplsapi20170525::Models;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{

AlibabaCloud::Dyplsapi20170525::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "Dyplsapi";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("dyplsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a tracking number for a private number in the AXN binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAxnTrackNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAxnTrackNoResponse
 */
AddAxnTrackNoResponse Client::addAxnTrackNoWithOptions(const AddAxnTrackNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  if (!!request.hasTrackNo()) {
    query["trackNo"] = request.getTrackNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAxnTrackNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAxnTrackNoResponse>();
}

/**
 * @summary Adds a tracking number for a private number in the AXN binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddAxnTrackNoRequest
 * @return AddAxnTrackNoResponse
 */
AddAxnTrackNoResponse Client::addAxnTrackNo(const AddAxnTrackNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAxnTrackNoWithOptions(request, runtime);
}

/**
 * @summary Adds a phone number to the blacklist of a China number pool. Only AXN privacy number, AXN extension number, and 95AXN privacy number pool types support blacklist settings.
 *
 * @description - This operation is not a batch operation. You can add only one pair of **point-to-point blacklist** numbers or one **number pool blacklist** number at a time.
 * - To delete a blacklist entry, call the [DeleteSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-deletesecretblacklist) operation.
 * ### Quantity limit
 * The maximum number of blacklist entries per number pool is 2,000,000. If this limit is exceeded, API calls to add blacklist numbers will fail, which may affect your business. If you have special requirements, contact your Alibaba Cloud account manager.
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request AddSecretBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSecretBlacklistResponse
 */
AddSecretBlacklistResponse Client::addSecretBlacklistWithOptions(const AddSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackNo()) {
    query["BlackNo"] = request.getBlackNo();
  }

  if (!!request.hasBlackType()) {
    query["BlackType"] = request.getBlackType();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasWayControl()) {
    query["WayControl"] = request.getWayControl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSecretBlacklist"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSecretBlacklistResponse>();
}

/**
 * @summary Adds a phone number to the blacklist of a China number pool. Only AXN privacy number, AXN extension number, and 95AXN privacy number pool types support blacklist settings.
 *
 * @description - This operation is not a batch operation. You can add only one pair of **point-to-point blacklist** numbers or one **number pool blacklist** number at a time.
 * - To delete a blacklist entry, call the [DeleteSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-deletesecretblacklist) operation.
 * ### Quantity limit
 * The maximum number of blacklist entries per number pool is 2,000,000. If this limit is exceeded, API calls to add blacklist numbers will fail, which may affect your business. If you have special requirements, contact your Alibaba Cloud account manager.
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If this limit is exceeded, API calls will be throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request AddSecretBlacklistRequest
 * @return AddSecretBlacklistResponse
 */
AddSecretBlacklistResponse Client::addSecretBlacklist(const AddSecretBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSecretBlacklistWithOptions(request, runtime);
}

/**
 * @summary Establishes a call binding relationship (B, X, A) for work number X of employee B on the work number platform to allow employee B to call customer A through work number X.
 *
 * @param request BindAXBCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAXBCallResponse
 */
BindAXBCallResponse Client::bindAXBCallWithOptions(const BindAXBCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthId()) {
    query["AuthId"] = request.getAuthId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAXBCall"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAXBCallResponse>();
}

/**
 * @summary Establishes a call binding relationship (B, X, A) for work number X of employee B on the work number platform to allow employee B to call customer A through work number X.
 *
 * @param request BindAXBCallRequest
 * @return BindAXBCallResponse
 */
BindAXBCallResponse Client::bindAXBCall(const BindAXBCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAXBCallWithOptions(request, runtime);
}

/**
 * @summary Adds an AXB binding.
 *
 * @description Before you add an AXB binding, we recommend that you specify role A and role B in the AXB device certificate (ProductKey, DeviceName, and DeviceSecret) in your business scenario. For example, in a taxi-hailing scenario, role A is the passenger and role B is the driver.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxbRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxbResponse
 */
BindAxbResponse Client::bindAxbWithOptions(const BindAxbRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.getASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.getASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.getCallDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.getCallTimeout();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.getDtmfConfig();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.getExpectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.getIsRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.getPhoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.getRingConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxb"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxbResponse>();
}

/**
 * @summary Adds an AXB binding.
 *
 * @description Before you add an AXB binding, we recommend that you specify role A and role B in the AXB device certificate (ProductKey, DeviceName, and DeviceSecret) in your business scenario. For example, in a taxi-hailing scenario, role A is the passenger and role B is the driver.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxbRequest
 * @return BindAxbResponse
 */
BindAxbResponse Client::bindAxb(const BindAxbRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxbWithOptions(request, runtime);
}

/**
 * @summary Binds phone numbers for a 700AXB private number. A 700AXB private number restricts the calling relationship to a one-to-one relationship. User A can contact User B through the intermediate number X that starts with 700, and User B can also contact User A through the same intermediate number X.
 *
 * @description Before invoking this operation, make sure that you have purchased a private number in the console.
 * You can use this operation to attach numbers for a 700AXB private number, or attach A and B numbers for a 700AXB private number on the Number Management page in the console.
 * Before attaching numbers for a 700AXB private number, determine the A role and B role in your business scenario. For example, in a ride-hailing scenario, A is the passenger and B is the driver.
 * The 700AXB private number is mainly used for privacy protection in one-to-one scenarios. You attach number A and number B through the Phone Number Protection service. When A calls X, the call is forwarded to B. When B calls X, the call is forwarded to A. A single X number can be reused by up to 200 binding pairs, such as A1XB1, A2XB2, A3XB3, and so on. As long as the phone numbers of A and B users are unique, a single X number can be bound to 200 groups of phone numbers simultaneously, and calls can also be made simultaneously.
 * QPS limit
 * The single-user QPS limit for this operation is 5,000 calls per second. Exceeding this limit will cause throttling, which may affect your business. Invoke this operation appropriately.
 *
 * @param request BindAxb700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxb700Response
 */
BindAxb700Response Client::bindAxb700WithOptions(const BindAxb700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.getAudio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.getCallTimeout();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.getDtmfConfig();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.getIndustrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.getNeedAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.getNeedRecord();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasRecType()) {
    query["RecType"] = request.getRecType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxb700"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxb700Response>();
}

/**
 * @summary Binds phone numbers for a 700AXB private number. A 700AXB private number restricts the calling relationship to a one-to-one relationship. User A can contact User B through the intermediate number X that starts with 700, and User B can also contact User A through the same intermediate number X.
 *
 * @description Before invoking this operation, make sure that you have purchased a private number in the console.
 * You can use this operation to attach numbers for a 700AXB private number, or attach A and B numbers for a 700AXB private number on the Number Management page in the console.
 * Before attaching numbers for a 700AXB private number, determine the A role and B role in your business scenario. For example, in a ride-hailing scenario, A is the passenger and B is the driver.
 * The 700AXB private number is mainly used for privacy protection in one-to-one scenarios. You attach number A and number B through the Phone Number Protection service. When A calls X, the call is forwarded to B. When B calls X, the call is forwarded to A. A single X number can be reused by up to 200 binding pairs, such as A1XB1, A2XB2, A3XB3, and so on. As long as the phone numbers of A and B users are unique, a single X number can be bound to 200 groups of phone numbers simultaneously, and calls can also be made simultaneously.
 * QPS limit
 * The single-user QPS limit for this operation is 5,000 calls per second. Exceeding this limit will cause throttling, which may affect your business. Invoke this operation appropriately.
 *
 * @param request BindAxb700Request
 * @return BindAxb700Response
 */
BindAxb700Response Client::bindAxb700(const BindAxb700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxb700WithOptions(request, runtime);
}

/**
 * @summary Attaches an AXB privacy number to a fixed line to restrict the calling relationship to a one-to-one relationship, allowing User A to contact User B through the fixed-line intermediate number X, and User B to contact User A through the same intermediate number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration support.
 *
 * @description - Before you invoke this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind numbers to a fixed-line AXB intermediate number. Currently, you cannot bind Number A and Number B to a fixed-line AXB intermediate number on the Number Management page in the console.
 * - Before binding numbers, we recommend that you clarify the roles of User A and User B in your business scenario. For example, in common scenarios such as ride-hailing, User A is the passenger and User B is the driver.
 * - Fixed-line AXB intermediate numbers are mainly used for privacy protection in one-to-one scenarios. Number A and Number B are bound through the Phone Number Protection service. When User A calls Number X, the call is forwarded to User B. When User B calls Number X, the call is forwarded to User A. A single fixed-line Number X can be reused for N binding relationships, such as A1-X-B1, A2-X-B2, and A3-X-B3. As long as the mobile phone numbers of Users A and B are not duplicated, a single fixed-line Number X can be bound to N pairs of mobile phone numbers simultaneously, and calls can be made concurrently.
 * - The number of times a number can be reused varies based on the number you purchased. You can confirm the specific reuse limit with your technical support when purchasing the number.
 *
 * @param tmpReq BindAxbFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxbFixedLineResponse
 */
BindAxbFixedLineResponse Client::bindAxbFixedLineWithOptions(const BindAxbFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindAxbFixedLineShrinkRequest request = BindAxbFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.getAreacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.getBindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxbFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxbFixedLineResponse>();
}

/**
 * @summary Attaches an AXB privacy number to a fixed line to restrict the calling relationship to a one-to-one relationship, allowing User A to contact User B through the fixed-line intermediate number X, and User B to contact User A through the same intermediate number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration support.
 *
 * @description - Before you invoke this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind numbers to a fixed-line AXB intermediate number. Currently, you cannot bind Number A and Number B to a fixed-line AXB intermediate number on the Number Management page in the console.
 * - Before binding numbers, we recommend that you clarify the roles of User A and User B in your business scenario. For example, in common scenarios such as ride-hailing, User A is the passenger and User B is the driver.
 * - Fixed-line AXB intermediate numbers are mainly used for privacy protection in one-to-one scenarios. Number A and Number B are bound through the Phone Number Protection service. When User A calls Number X, the call is forwarded to User B. When User B calls Number X, the call is forwarded to User A. A single fixed-line Number X can be reused for N binding relationships, such as A1-X-B1, A2-X-B2, and A3-X-B3. As long as the mobile phone numbers of Users A and B are not duplicated, a single fixed-line Number X can be bound to N pairs of mobile phone numbers simultaneously, and calls can be made concurrently.
 * - The number of times a number can be reused varies based on the number you purchased. You can confirm the specific reuse limit with your technical support when purchasing the number.
 *
 * @param request BindAxbFixedLineRequest
 * @return BindAxbFixedLineResponse
 */
BindAxbFixedLineResponse Client::bindAxbFixedLine(const BindAxbFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxbFixedLineWithOptions(request, runtime);
}

/**
 * @summary Adds an AXG binding.
 *
 * @description An AXG protection solution can be configured to meet the requirements for grading users, limiting the scope of calls, and restricting order snatching. The letter G represents a phone number group to which you can add phone numbers as needed.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxgResponse
 */
BindAxgResponse Client::bindAxgWithOptions(const BindAxgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.getASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.getASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.getCallDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.getExpectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.getIsRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.getPhoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.getRingConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxg"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxgResponse>();
}

/**
 * @summary Adds an AXG binding.
 *
 * @description An AXG protection solution can be configured to meet the requirements for grading users, limiting the scope of calls, and restricting order snatching. The letter G represents a phone number group to which you can add phone numbers as needed.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxgRequest
 * @return BindAxgResponse
 */
BindAxgResponse Client::bindAxg(const BindAxgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxgWithOptions(request, runtime);
}

/**
 * @summary Adds a binding relationship for an AXN privacy number. An AXN privacy number assigns an exclusive privacy number to User A, allowing any Number N to reach User A by dialing Number X.
 *
 * @description - Before calling this operation, make sure that you have [purchased a privacy number](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this operation to bind numbers to an AXN privacy number, or bind Number A and Number B to an AXN privacy number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
 * - Before binding numbers to an AXN privacy number, clarify the role of User A in your business scenario. For example, in a used car information publishing scenario, User A represents the contact information of the landlord or agent.
 * ### QPS limits
 * The QPS limit per user is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request BindAxnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnResponse
 */
BindAxnResponse Client::bindAxnWithOptions(const BindAxnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.getASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.getASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.getCallDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.getCallTimeout();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.getExpectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.getIsRecordingEnabled();
  }

  if (!!request.hasNoType()) {
    query["NoType"] = request.getNoType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.getPhoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.getRingConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxn"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxnResponse>();
}

/**
 * @summary Adds a binding relationship for an AXN privacy number. An AXN privacy number assigns an exclusive privacy number to User A, allowing any Number N to reach User A by dialing Number X.
 *
 * @description - Before calling this operation, make sure that you have [purchased a privacy number](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this operation to bind numbers to an AXN privacy number, or bind Number A and Number B to an AXN privacy number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
 * - Before binding numbers to an AXN privacy number, clarify the role of User A in your business scenario. For example, in a used car information publishing scenario, User A represents the contact information of the landlord or agent.
 * ### QPS limits
 * The QPS limit per user is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request BindAxnRequest
 * @return BindAxnResponse
 */
BindAxnResponse Client::bindAxn(const BindAxnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnWithOptions(request, runtime);
}

/**
 * @summary Adds a binding relationship for an AXN extension number. The AXN extension number feature is similar to the AXN privacy number feature but introduces extension numbers to reduce the usage of X numbers. When making a call, the caller dials the X number first and then enters the corresponding extension number after hearing the prompt tone to connect to number A.
 *
 * @description - Before calling this operation, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this operation to bind numbers to an AXN extension number. You can also bind numbers A and B to an AXN extension number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
 * - Before binding numbers for an AXN extension number, we recommend that you clarify the roles of A and N in your business scenario. For example, if number A is a customer, number X is the privacy number assigned to the customer. Calls from any other number to number X plus the extension number are forwarded to number A. When A calls X, the call is forwarded to the default number B specified during binding.
 * ### QPS limits
 * The queries per second (QPS) limit for a single user is 5,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request BindAxnExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnExtensionResponse
 */
BindAxnExtensionResponse Client::bindAxnExtensionWithOptions(const BindAxnExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.getASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.getASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.getCallDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.getExpectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.getExtend();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.getExtension();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.getIsRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.getPhoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.getRingConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxnExtension"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxnExtensionResponse>();
}

/**
 * @summary Adds a binding relationship for an AXN extension number. The AXN extension number feature is similar to the AXN privacy number feature but introduces extension numbers to reduce the usage of X numbers. When making a call, the caller dials the X number first and then enters the corresponding extension number after hearing the prompt tone to connect to number A.
 *
 * @description - Before calling this operation, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this operation to bind numbers to an AXN extension number. You can also bind numbers A and B to an AXN extension number on the [Number Management](https://dyplsnext.console.aliyun.com/number/list?spm=a2c4g.11186623.0.0.64e649bbTzmb6j&resType=1&billId=FC100000165392498) page in the console.
 * - Before binding numbers for an AXN extension number, we recommend that you clarify the roles of A and N in your business scenario. For example, if number A is a customer, number X is the privacy number assigned to the customer. Calls from any other number to number X plus the extension number are forwarded to number A. When A calls X, the call is forwarded to the default number B specified during binding.
 * ### QPS limits
 * The queries per second (QPS) limit for a single user is 5,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request BindAxnExtensionRequest
 * @return BindAxnExtensionResponse
 */
BindAxnExtensionResponse Client::bindAxnExtension(const BindAxnExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnExtensionWithOptions(request, runtime);
}

/**
 * @summary The fixed-line AXN extension number introduces extension numbers on top of the fixed-line AXN privacy number, thereby reducing the usage of X numbers. When making a call, first dial the X number, and then enter the corresponding extension number after hearing the prompt tone to be connected to A. The fixed-line AXN extension number service is currently invitation-only. Contact your technical support to activate the service and obtain integration support.
 *
 * @description - Before calling this API, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this API to bind numbers for the fixed-line AXN extension number. Binding numbers for the fixed-line AXN extension number through the console is not supported.
 * - Before binding numbers, we recommend that you first clarify the A role and N role in your business scenario. For example, if the A number represents the customer, the X number is the privacy number assigned to the customer. Any other number calling the X number plus the extension number will be forwarded to the A number. When A calls X, the call will be forwarded to the default B number specified during binding.
 *
 * @param tmpReq BindAxnExtensionFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnExtensionFixedLineResponse
 */
BindAxnExtensionFixedLineResponse Client::bindAxnExtensionFixedLineWithOptions(const BindAxnExtensionFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindAxnExtensionFixedLineShrinkRequest request = BindAxnExtensionFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtraaxx()) {
    request.setExtraaxxShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtraaxx(), "Extraaxx", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.getAreacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.getBindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraaxxShrink()) {
    query["Extraaxx"] = request.getExtraaxxShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasTelXext()) {
    query["TelXext"] = request.getTelXext();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxnExtensionFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxnExtensionFixedLineResponse>();
}

/**
 * @summary The fixed-line AXN extension number introduces extension numbers on top of the fixed-line AXN privacy number, thereby reducing the usage of X numbers. When making a call, first dial the X number, and then enter the corresponding extension number after hearing the prompt tone to be connected to A. The fixed-line AXN extension number service is currently invitation-only. Contact your technical support to activate the service and obtain integration support.
 *
 * @description - Before calling this API, make sure that you have [purchased privacy numbers](https://dyplsnext.console.aliyun.com/numberbuy) in the console.
 * - You can use this API to bind numbers for the fixed-line AXN extension number. Binding numbers for the fixed-line AXN extension number through the console is not supported.
 * - Before binding numbers, we recommend that you first clarify the A role and N role in your business scenario. For example, if the A number represents the customer, the X number is the privacy number assigned to the customer. Any other number calling the X number plus the extension number will be forwarded to the A number. When A calls X, the call will be forwarded to the default B number specified during binding.
 *
 * @param request BindAxnExtensionFixedLineRequest
 * @return BindAxnExtensionFixedLineResponse
 */
BindAxnExtensionFixedLineResponse Client::bindAxnExtensionFixedLine(const BindAxnExtensionFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnExtensionFixedLineWithOptions(request, runtime);
}

/**
 * @summary Binds a fixed-line AXN privacy number to assign a dedicated privacy number to User A, which allows any number N to be forwarded to User A by dialing number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration assistance.
 *
 * @description - Before you call this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind a number to a fixed-line AXN privacy number. The console does not support binding for fixed-line AXN privacy numbers.
 * - Before binding a number, we recommend that you clarify the role of User A in your business scenario. For example, in a used car listing scenario, User A represents the contact information of the property owner or broker.
 *
 * @param tmpReq BindAxnFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnFixedLineResponse
 */
BindAxnFixedLineResponse Client::bindAxnFixedLineWithOptions(const BindAxnFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindAxnFixedLineShrinkRequest request = BindAxnFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.getAreacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.getBindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAxnFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAxnFixedLineResponse>();
}

/**
 * @summary Binds a fixed-line AXN privacy number to assign a dedicated privacy number to User A, which allows any number N to be forwarded to User A by dialing number X. Fixed-line privacy numbers are currently available by invitation only. Contact your technical support to activate the service and obtain integration assistance.
 *
 * @description - Before you call this operation, make sure that you have purchased a privacy number in the console. You can use this operation to bind a number to a fixed-line AXN privacy number. The console does not support binding for fixed-line AXN privacy numbers.
 * - Before binding a number, we recommend that you clarify the role of User A in your business scenario. For example, in a used car listing scenario, User A represents the contact information of the property owner or broker.
 *
 * @param request BindAxnFixedLineRequest
 * @return BindAxnFixedLineResponse
 */
BindAxnFixedLineResponse Client::bindAxnFixedLine(const BindAxnFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnFixedLineWithOptions(request, runtime);
}

/**
 * @summary Adds AXG bindings in batches. The AXG model is a Phone Number Protection Solution for scenarios requiring User Tiering, Call Scope Restriction, or Order Grabbing Restriction. In this model, G represents a Number Group, to which you can add phone numbers.
 *
 * @description - Before you bind AXG Numbers, you must purchase X Numbers, create a G Number Group, and add Numbers to the group. To create a G Number Group, see [Set up G Number Group](https://help.aliyun.com/zh/pnp/user-guide/manage-phone-number-pools#section-9bb-xrg-c78) or call the [CreateAxgGroup](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-createaxggroup) API.
 * - Before binding AXG Numbers, define Role A and Role G for your business scenario. For example, on a recruitment platform, Role A can represent job applicants and Role G can represent the hiring team.
 * - When you call this API for Batch Binding of AXG Numbers, a single failed request does not affect others in the batch. The API returns a status code for each binding request.
 * ### QPS limit
 * The QPS limit for this API is 5,000 per user. Exceeding this limit results in throttling. Plan your API calls accordingly to avoid impacting your business.
 *
 * @param tmpReq BindBatchAxgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindBatchAxgResponse
 */
BindBatchAxgResponse Client::bindBatchAxgWithOptions(const BindBatchAxgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindBatchAxgShrinkRequest request = BindBatchAxgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAxgBindList()) {
    request.setAxgBindListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAxgBindList(), "AxgBindList", "json"));
  }

  json query = {};
  if (!!request.hasAxgBindListShrink()) {
    query["AxgBindList"] = request.getAxgBindListShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindBatchAxg"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindBatchAxgResponse>();
}

/**
 * @summary Adds AXG bindings in batches. The AXG model is a Phone Number Protection Solution for scenarios requiring User Tiering, Call Scope Restriction, or Order Grabbing Restriction. In this model, G represents a Number Group, to which you can add phone numbers.
 *
 * @description - Before you bind AXG Numbers, you must purchase X Numbers, create a G Number Group, and add Numbers to the group. To create a G Number Group, see [Set up G Number Group](https://help.aliyun.com/zh/pnp/user-guide/manage-phone-number-pools#section-9bb-xrg-c78) or call the [CreateAxgGroup](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-createaxggroup) API.
 * - Before binding AXG Numbers, define Role A and Role G for your business scenario. For example, on a recruitment platform, Role A can represent job applicants and Role G can represent the hiring team.
 * - When you call this API for Batch Binding of AXG Numbers, a single failed request does not affect others in the batch. The API returns a status code for each binding request.
 * ### QPS limit
 * The QPS limit for this API is 5,000 per user. Exceeding this limit results in throttling. Plan your API calls accordingly to avoid impacting your business.
 *
 * @param request BindBatchAxgRequest
 * @return BindBatchAxgResponse
 */
BindBatchAxgResponse Client::bindBatchAxg(const BindBatchAxgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindBatchAxgWithOptions(request, runtime);
}

/**
 * @summary Adds a binding relationship for a 700GXB private number. The 700GXB product is a privacy protection solutions designed for scenarios that require user-level classification, call scope restrictions, and order-grabbing restrictions. In this product, G represents a number group, and you can add numbers to the group as needed.
 *
 * @description Before calling this operation, make sure that you have purchased a private number in the console.
 * You can use this operation to bind numbers to a 700GXB private number, or bind numbers on the Number Management page in the console.
 * Before binding numbers for a 700GXB private number, clarify the G role and B role in your business scenario. For example, on a recruitment platform, B is the job applicant and G is the recruitment team.
 * QPS limit
 * The single-user QPS limit for this operation is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request BindGxb700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindGxb700Response
 */
BindGxb700Response Client::bindGxb700WithOptions(const BindGxb700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.getAudio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.getCallTimeout();
  }

  if (!!request.hasDefaultA()) {
    query["DefaultA"] = request.getDefaultA();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.getDtmfConfig();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.getIndustrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.getNeedAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.getNeedRecord();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.getOutOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasRecType()) {
    query["RecType"] = request.getRecType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindGxb700"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindGxb700Response>();
}

/**
 * @summary Adds a binding relationship for a 700GXB private number. The 700GXB product is a privacy protection solutions designed for scenarios that require user-level classification, call scope restrictions, and order-grabbing restrictions. In this product, G represents a number group, and you can add numbers to the group as needed.
 *
 * @description Before calling this operation, make sure that you have purchased a private number in the console.
 * You can use this operation to bind numbers to a 700GXB private number, or bind numbers on the Number Management page in the console.
 * Before binding numbers for a 700GXB private number, clarify the G role and B role in your business scenario. For example, on a recruitment platform, B is the job applicant and G is the recruitment team.
 * QPS limit
 * The single-user QPS limit for this operation is 5,000 calls per second. If this limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately.
 *
 * @param request BindGxb700Request
 * @return BindGxb700Response
 */
BindGxb700Response Client::bindGxb700(const BindGxb700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindGxb700WithOptions(request, runtime);
}

/**
 * @summary Establishes a binding relationship between a specified work number X and an employee number B on the work number platform. The binding takes effect only after the employee completes real-name verification for the work number. After the binding succeeds, all calls to the work number are forwarded to the employee number. The platform pushes the binding result to the caller through the asynchronous notification API.
 *
 * @param request BindXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindXBResponse
 */
BindXBResponse Client::bindXBWithOptions(const BindXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindXB"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindXBResponse>();
}

/**
 * @summary Establishes a binding relationship between a specified work number X and an employee number B on the work number platform. The binding takes effect only after the employee completes real-name verification for the work number. After the binding succeeds, all calls to the work number are forwarded to the employee number. The platform pushes the binding result to the caller through the asynchronous notification API.
 *
 * @param request BindXBRequest
 * @return BindXBResponse
 */
BindXBResponse Client::bindXB(const BindXBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindXBWithOptions(request, runtime);
}

/**
 * @summary Purchases a phone number.
 *
 * @description *   After you create a phone number pool in the Phone Number Protection console, the phone number pool is empty by default. You must purchase phone numbers and add them to the phone number pool.
 * *   Before you call this operation, make sure that you are familiar with the [pricing](https://help.aliyun.com/document_detail/59825.html) of Phone Number Protection.
 * *   When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before you call this operation to purchase a phone number, check the quantity of phone numbers available for purchase by using the [QuerySecretNoRemain](https://help.aliyun.com/document_detail/111699.html) operation.
 * *   The account used to purchase a phone number must be an enterprise account that has passed real-name verification. For more information about how to perform real-name verification, see [Enterprise verification FAQs](https://help.aliyun.com/document_detail/37172.html).
 *
 * @param request BuySecretNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuySecretNoResponse
 */
BuySecretNoResponse Client::buySecretNoWithOptions(const BuySecretNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasDisplayPool()) {
    query["DisplayPool"] = request.getDisplayPool();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BuySecretNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuySecretNoResponse>();
}

/**
 * @summary Purchases a phone number.
 *
 * @description *   After you create a phone number pool in the Phone Number Protection console, the phone number pool is empty by default. You must purchase phone numbers and add them to the phone number pool.
 * *   Before you call this operation, make sure that you are familiar with the [pricing](https://help.aliyun.com/document_detail/59825.html) of Phone Number Protection.
 * *   When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before you call this operation to purchase a phone number, check the quantity of phone numbers available for purchase by using the [QuerySecretNoRemain](https://help.aliyun.com/document_detail/111699.html) operation.
 * *   The account used to purchase a phone number must be an enterprise account that has passed real-name verification. For more information about how to perform real-name verification, see [Enterprise verification FAQs](https://help.aliyun.com/document_detail/37172.html).
 *
 * @param request BuySecretNoRequest
 * @return BuySecretNoResponse
 */
BuySecretNoResponse Client::buySecretNo(const BuySecretNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return buySecretNoWithOptions(request, runtime);
}

/**
 * @summary Cancels a door-to-door delivery order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelPickUpWaybillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelPickUpWaybillResponse
 */
CancelPickUpWaybillResponse Client::cancelPickUpWaybillWithOptions(const CancelPickUpWaybillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCancelDesc()) {
    query["CancelDesc"] = request.getCancelDesc();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.getOuterOrderCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelPickUpWaybill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelPickUpWaybillResponse>();
}

/**
 * @summary Cancels a door-to-door delivery order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelPickUpWaybillRequest
 * @return CancelPickUpWaybillResponse
 */
CancelPickUpWaybillResponse Client::cancelPickUpWaybill(const CancelPickUpWaybillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelPickUpWaybillWithOptions(request, runtime);
}

/**
 * @summary Configures an X number to independently manage communication features such as voice calls and enterprise business cards for a work number.
 *
 * @param tmpReq ConfigXRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigXResponse
 */
ConfigXResponse Client::configXWithOptions(const ConfigXRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ConfigXShrinkRequest request = ConfigXShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSequenceCalls()) {
    request.setSequenceCallsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSequenceCalls(), "SequenceCalls", "json"));
  }

  json query = {};
  if (!!request.hasCallAbility()) {
    query["CallAbility"] = request.getCallAbility();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasGNFlag()) {
    query["GNFlag"] = request.getGNFlag();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSequenceCallsShrink()) {
    query["SequenceCalls"] = request.getSequenceCallsShrink();
  }

  if (!!request.hasSequenceMode()) {
    query["SequenceMode"] = request.getSequenceMode();
  }

  if (!!request.hasSmsAbility()) {
    query["SmsAbility"] = request.getSmsAbility();
  }

  if (!!request.hasSmsSignMode()) {
    query["SmsSignMode"] = request.getSmsSignMode();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigX"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigXResponse>();
}

/**
 * @summary Configures an X number to independently manage communication features such as voice calls and enterprise business cards for a work number.
 *
 * @param request ConfigXRequest
 * @return ConfigXResponse
 */
ConfigXResponse Client::configX(const ConfigXRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configXWithOptions(request, runtime);
}

/**
 * @summary Creates number group G.
 *
 * @description Before you add an AXG binding, you must purchase phone number X, create number group G, and then add phone numbers to number group G. If you do not add phone numbers to number group G after you create number group G, you can call the [OperateAxgGroup](https://help.aliyun.com/document_detail/110252.htm) operation to add phone numbers to number group G.
 * >  Up to 2,000 number groups G can be added for a single phone number pool.
 *
 * @param request CreateAxgGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAxgGroupResponse
 */
CreateAxgGroupResponse Client::createAxgGroupWithOptions(const CreateAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNumbers()) {
    query["Numbers"] = request.getNumbers();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAxgGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAxgGroupResponse>();
}

/**
 * @summary Creates number group G.
 *
 * @description Before you add an AXG binding, you must purchase phone number X, create number group G, and then add phone numbers to number group G. If you do not add phone numbers to number group G after you create number group G, you can call the [OperateAxgGroup](https://help.aliyun.com/document_detail/110252.htm) operation to add phone numbers to number group G.
 * >  Up to 2,000 number groups G can be added for a single phone number pool.
 *
 * @param request CreateAxgGroupRequest
 * @return CreateAxgGroupResponse
 */
CreateAxgGroupResponse Client::createAxgGroup(const CreateAxgGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAxgGroupWithOptions(request, runtime);
}

/**
 * @summary Submit Individual Information of a landline number A through an API.
 *
 * @description Before invoking this API, you need to first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information for Number A via API](https://help.aliyun.com/document_detail/2880077.html).
 * ### queries per second (QPS) limit
 * The QPS limit for this API is 50 queries per second per user. If this limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request CreateFixedNoAReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFixedNoAReportResponse
 */
CreateFixedNoAReportResponse Client::createFixedNoAReportWithOptions(const CreateFixedNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.getANoWhiteGroupId();
  }

  if (!!request.hasCustName()) {
    query["CustName"] = request.getCustName();
  }

  if (!!request.hasCustPhoneNo()) {
    query["CustPhoneNo"] = request.getCustPhoneNo();
  }

  if (!!request.hasCustType()) {
    query["CustType"] = request.getCustType();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.getDocumentNumber();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.getDocumentType();
  }

  if (!!request.hasFixedLineWorkId()) {
    query["FixedLineWorkId"] = request.getFixedLineWorkId();
  }

  if (!!request.hasFixedNoA()) {
    query["FixedNoA"] = request.getFixedNoA();
  }

  if (!!request.hasIdCardAlivePhoto()) {
    query["IdCardAlivePhoto"] = request.getIdCardAlivePhoto();
  }

  if (!!request.hasIdCardBackPhoto()) {
    query["IdCardBackPhoto"] = request.getIdCardBackPhoto();
  }

  if (!!request.hasIdCardFrontPhoto()) {
    query["IdCardFrontPhoto"] = request.getIdCardFrontPhoto();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFixedNoAReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFixedNoAReportResponse>();
}

/**
 * @summary Submit Individual Information of a landline number A through an API.
 *
 * @description Before invoking this API, you need to first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information for Number A via API](https://help.aliyun.com/document_detail/2880077.html).
 * ### queries per second (QPS) limit
 * The QPS limit for this API is 50 queries per second per user. If this limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request CreateFixedNoAReportRequest
 * @return CreateFixedNoAReportResponse
 */
CreateFixedNoAReportResponse Client::createFixedNoAReport(const CreateFixedNoAReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFixedNoAReportWithOptions(request, runtime);
}

/**
 * @summary Submit Individual Information of an A-number mobile phone number through an API.
 *
 * @description Before invoking this API, you must first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information of an A-number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
 * ### QPS Limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request CreatePhoneNoAReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePhoneNoAReportResponse
 */
CreatePhoneNoAReportResponse Client::createPhoneNoAReportWithOptions(const CreatePhoneNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.getANoWhiteGroupId();
  }

  if (!!request.hasCustName()) {
    query["CustName"] = request.getCustName();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.getDocumentNumber();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.getDocumentType();
  }

  if (!!request.hasIdCardAlivePhoto()) {
    query["IdCardAlivePhoto"] = request.getIdCardAlivePhoto();
  }

  if (!!request.hasIdCardBackPhoto()) {
    query["IdCardBackPhoto"] = request.getIdCardBackPhoto();
  }

  if (!!request.hasIdCardFrontPhoto()) {
    query["IdCardFrontPhoto"] = request.getIdCardFrontPhoto();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePhoneNoAReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePhoneNoAReportResponse>();
}

/**
 * @summary Submit Individual Information of an A-number mobile phone number through an API.
 *
 * @description Before invoking this API, you must first call [GetDyplsOSSInfoForUploadFile](https://help.aliyun.com/document_detail/2880885.html) to upload the individual\\"s photo information to OSS. For the detailed operation flow, see [Submit Individual Real-name Information of an A-number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
 * ### QPS Limit
 * The queries per second (QPS) limit for this API is 50 requests per second per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request CreatePhoneNoAReportRequest
 * @return CreatePhoneNoAReportResponse
 */
CreatePhoneNoAReportResponse Client::createPhoneNoAReport(const CreatePhoneNoAReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPhoneNoAReportWithOptions(request, runtime);
}

/**
 * @summary Creates a door-to-door pickup order.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param tmpReq CreatePickUpWaybillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePickUpWaybillResponse
 */
CreatePickUpWaybillResponse Client::createPickUpWaybillWithOptions(const CreatePickUpWaybillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePickUpWaybillShrinkRequest request = CreatePickUpWaybillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConsigneeAddress()) {
    request.setConsigneeAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConsigneeAddress(), "ConsigneeAddress", "json"));
  }

  if (!!tmpReq.hasGoodsInfos()) {
    request.setGoodsInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGoodsInfos(), "GoodsInfos", "json"));
  }

  if (!!tmpReq.hasSendAddress()) {
    request.setSendAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSendAddress(), "SendAddress", "json"));
  }

  json query = {};
  if (!!request.hasAppointGotEndTime()) {
    query["AppointGotEndTime"] = request.getAppointGotEndTime();
  }

  if (!!request.hasAppointGotStartTime()) {
    query["AppointGotStartTime"] = request.getAppointGotStartTime();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasConsigneeAddressShrink()) {
    query["ConsigneeAddress"] = request.getConsigneeAddressShrink();
  }

  if (!!request.hasConsigneeMobile()) {
    query["ConsigneeMobile"] = request.getConsigneeMobile();
  }

  if (!!request.hasConsigneeName()) {
    query["ConsigneeName"] = request.getConsigneeName();
  }

  if (!!request.hasConsigneePhone()) {
    query["ConsigneePhone"] = request.getConsigneePhone();
  }

  if (!!request.hasCpCode()) {
    query["CpCode"] = request.getCpCode();
  }

  if (!!request.hasGoodsInfosShrink()) {
    query["GoodsInfos"] = request.getGoodsInfosShrink();
  }

  if (!!request.hasOrderChannels()) {
    query["OrderChannels"] = request.getOrderChannels();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.getOuterOrderCode();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSendAddressShrink()) {
    query["SendAddress"] = request.getSendAddressShrink();
  }

  if (!!request.hasSendMobile()) {
    query["SendMobile"] = request.getSendMobile();
  }

  if (!!request.hasSendName()) {
    query["SendName"] = request.getSendName();
  }

  if (!!request.hasSendPhone()) {
    query["SendPhone"] = request.getSendPhone();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePickUpWaybill"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePickUpWaybillResponse>();
}

/**
 * @summary Creates a door-to-door pickup order.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request CreatePickUpWaybillRequest
 * @return CreatePickUpWaybillResponse
 */
CreatePickUpWaybillResponse Client::createPickUpWaybill(const CreatePickUpWaybillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPickUpWaybillWithOptions(request, runtime);
}

/**
 * @summary Pre-queries shipping order information before placing an order.
 *
 * @description ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
 *
 * @param tmpReq CreatePickUpWaybillPreQueryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePickUpWaybillPreQueryResponse
 */
CreatePickUpWaybillPreQueryResponse Client::createPickUpWaybillPreQueryWithOptions(const CreatePickUpWaybillPreQueryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePickUpWaybillPreQueryShrinkRequest request = CreatePickUpWaybillPreQueryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConsigneeInfo()) {
    request.setConsigneeInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConsigneeInfo(), "ConsigneeInfo", "json"));
  }

  if (!!tmpReq.hasSenderInfo()) {
    request.setSenderInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSenderInfo(), "SenderInfo", "json"));
  }

  json query = {};
  if (!!request.hasConsigneeInfoShrink()) {
    query["ConsigneeInfo"] = request.getConsigneeInfoShrink();
  }

  if (!!request.hasCpCode()) {
    query["CpCode"] = request.getCpCode();
  }

  if (!!request.hasOrderChannels()) {
    query["OrderChannels"] = request.getOrderChannels();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.getOuterOrderCode();
  }

  if (!!request.hasPreWeight()) {
    query["PreWeight"] = request.getPreWeight();
  }

  if (!!request.hasSenderInfoShrink()) {
    query["SenderInfo"] = request.getSenderInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePickUpWaybillPreQuery"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePickUpWaybillPreQueryResponse>();
}

/**
 * @summary Pre-queries shipping order information before placing an order.
 *
 * @description ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. Exceeding this limit will trigger throttling, which may affect your business. Call this operation appropriately.
 *
 * @param request CreatePickUpWaybillPreQueryRequest
 * @return CreatePickUpWaybillPreQueryResponse
 */
CreatePickUpWaybillPreQueryResponse Client::createPickUpWaybillPreQuery(const CreatePickUpWaybillPreQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPickUpWaybillPreQueryWithOptions(request, runtime);
}

/**
 * @summary 对客提交号码迁移任务，两侧号池须为同一资质、同一场景且均为开启状态。
 *
 * @param request CreateSecretTransferRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecretTransferRecordResponse
 */
CreateSecretTransferRecordResponse Client::createSecretTransferRecordWithOptions(const CreateSecretTransferRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLastPartnerKey()) {
    query["LastPartnerKey"] = request.getLastPartnerKey();
  }

  if (!!request.hasNumberList()) {
    query["NumberList"] = request.getNumberList();
  }

  if (!!request.hasOriginPartnerKey()) {
    query["OriginPartnerKey"] = request.getOriginPartnerKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSecretTransferRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecretTransferRecordResponse>();
}

/**
 * @summary 对客提交号码迁移任务，两侧号池须为同一资质、同一场景且均为开启状态。
 *
 * @param request CreateSecretTransferRecordRequest
 * @return CreateSecretTransferRecordResponse
 */
CreateSecretTransferRecordResponse Client::createSecretTransferRecord(const CreateSecretTransferRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecretTransferRecordWithOptions(request, runtime);
}

/**
 * @summary Generates a text message delivery tag for scenarios where an employee sends a text message to a customer by using a work number. The client calls this operation to obtain the tag and appends it to the end of the message content. The work number platform then parses the actual called number from the tag and delivers the message to the customer.
 *
 * @param request CreateSmsSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSignWithOptions(const CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNo()) {
    query["CalledNo"] = request.getCalledNo();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCallingNo()) {
    query["CallingNo"] = request.getCallingNo();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsSignResponse>();
}

/**
 * @summary Generates a text message delivery tag for scenarios where an employee sends a text message to a customer by using a work number. The client calls this operation to obtain the tag and appends it to the end of the message content. The work number platform then parses the actual called number from the tag and delivers the message to the customer.
 *
 * @param request CreateSmsSignRequest
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSign(const CreateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsSignWithOptions(request, runtime);
}

/**
 * @summary Unbind a fixed-line AXB privacy number.
 *
 * @description - After unbinding a fixed-line AXB privacy number from an existing binding, your business continuity may be affected. Proceed with caution.
 * - Before releasing a number, you must unbind the number first.
 * - Unbinding a fixed-line AXB privacy number is supported only through this API. Unbinding through the console is currently not supported.
 *
 * @param request DeleteAxbBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxbBindFixedLineResponse
 */
DeleteAxbBindFixedLineResponse Client::deleteAxbBindFixedLineWithOptions(const DeleteAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAxbBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAxbBindFixedLineResponse>();
}

/**
 * @summary Unbind a fixed-line AXB privacy number.
 *
 * @description - After unbinding a fixed-line AXB privacy number from an existing binding, your business continuity may be affected. Proceed with caution.
 * - Before releasing a number, you must unbind the number first.
 * - Unbinding a fixed-line AXB privacy number is supported only through this API. Unbinding through the console is currently not supported.
 *
 * @param request DeleteAxbBindFixedLineRequest
 * @return DeleteAxbBindFixedLineResponse
 */
DeleteAxbBindFixedLineResponse Client::deleteAxbBindFixedLine(const DeleteAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Deletes a G group. G groups are supported only in Number Pools designated for the AXG privacy number type.
 *
 * @description - Deleted G groups cannot be recovered. Proceed with caution.
 * - Before calling this operation, verify the G group to be deleted and the Number Pool it belongs to.
 * - You cannot delete a G group that has active bindings. Before you delete the group, you must unbind the associated AXG privacy number. To do this, log on to the Phone Number Privacy Protection [Console](https://dyplsnext.console.aliyun.com/number/list), go to the **Number Management** page, filter by **AXG privacy number**, and click **Details** > Unbind. Alternatively, you can call the [UnbindSubscription](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-unbindsubscription) API to unbind the number.
 * - When you delete a G group, all phone numbers in the group are also deleted.
 * ### QPS limit
 * The single-user QPS limit for this API is 5,000 requests per second. API calls that exceed this limit are subject to throttling. Plan your API calls accordingly to prevent disruptions to your business.
 *
 * @param request DeleteAxgGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxgGroupResponse
 */
DeleteAxgGroupResponse Client::deleteAxgGroupWithOptions(const DeleteAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAxgGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAxgGroupResponse>();
}

/**
 * @summary Deletes a G group. G groups are supported only in Number Pools designated for the AXG privacy number type.
 *
 * @description - Deleted G groups cannot be recovered. Proceed with caution.
 * - Before calling this operation, verify the G group to be deleted and the Number Pool it belongs to.
 * - You cannot delete a G group that has active bindings. Before you delete the group, you must unbind the associated AXG privacy number. To do this, log on to the Phone Number Privacy Protection [Console](https://dyplsnext.console.aliyun.com/number/list), go to the **Number Management** page, filter by **AXG privacy number**, and click **Details** > Unbind. Alternatively, you can call the [UnbindSubscription](https://help.aliyun.com/zh/pnp/developer-reference/api-dyplsapi-2017-05-25-unbindsubscription) API to unbind the number.
 * - When you delete a G group, all phone numbers in the group are also deleted.
 * ### QPS limit
 * The single-user QPS limit for this API is 5,000 requests per second. API calls that exceed this limit are subject to throttling. Plan your API calls accordingly to prevent disruptions to your business.
 *
 * @param request DeleteAxgGroupRequest
 * @return DeleteAxgGroupResponse
 */
DeleteAxgGroupResponse Client::deleteAxgGroup(const DeleteAxgGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxgGroupWithOptions(request, runtime);
}

/**
 * @summary Unbinds a fixed-line AXN private number binding relationship.
 *
 * @description - After you unbind an existing fixed-line AXN private number binding relationship, your service continuity may be affected. Proceed with caution.
 * - Before releasing a number, unbind the number binding relationship.
 * - Unbinding a fixed-line AXN private number binding relationship is supported only through this API operation. The console does not support this operation.
 *
 * @param request DeleteAxnBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxnBindFixedLineResponse
 */
DeleteAxnBindFixedLineResponse Client::deleteAxnBindFixedLineWithOptions(const DeleteAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAxnBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAxnBindFixedLineResponse>();
}

/**
 * @summary Unbinds a fixed-line AXN private number binding relationship.
 *
 * @description - After you unbind an existing fixed-line AXN private number binding relationship, your service continuity may be affected. Proceed with caution.
 * - Before releasing a number, unbind the number binding relationship.
 * - Unbinding a fixed-line AXN private number binding relationship is supported only through this API operation. The console does not support this operation.
 *
 * @param request DeleteAxnBindFixedLineRequest
 * @return DeleteAxnBindFixedLineResponse
 */
DeleteAxnBindFixedLineResponse Client::deleteAxnBindFixedLine(const DeleteAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Unbind a fixed-line AXN extension number binding.
 *
 * @param request DeleteAxnExtensionBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxnExtensionBindFixedLineResponse
 */
DeleteAxnExtensionBindFixedLineResponse Client::deleteAxnExtensionBindFixedLineWithOptions(const DeleteAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAxnExtensionBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAxnExtensionBindFixedLineResponse>();
}

/**
 * @summary Unbind a fixed-line AXN extension number binding.
 *
 * @param request DeleteAxnExtensionBindFixedLineRequest
 * @return DeleteAxnExtensionBindFixedLineResponse
 */
DeleteAxnExtensionBindFixedLineResponse Client::deleteAxnExtensionBindFixedLine(const DeleteAxnExtensionBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxnExtensionBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Delete A-number filing data.
 *
 * @description - This API can only delete A-number filing records whose filing status is either "Reviewed and Passed" or "Review Failed." It does not support deleting A-number filing records with a filing status of "Under Review."
 * - After deleting an A-number filing record, the carrier will immediately impose call restrictions or deactivate the number, which may impact your business continuity. Proceed with caution.
 *
 * @param request DeleteSecretAPhoneNoToCustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretAPhoneNoToCustResponse
 */
DeleteSecretAPhoneNoToCustResponse Client::deleteSecretAPhoneNoToCustWithOptions(const DeleteSecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.getANoWhiteGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecretAPhoneNoToCust"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretAPhoneNoToCustResponse>();
}

/**
 * @summary Delete A-number filing data.
 *
 * @description - This API can only delete A-number filing records whose filing status is either "Reviewed and Passed" or "Review Failed." It does not support deleting A-number filing records with a filing status of "Under Review."
 * - After deleting an A-number filing record, the carrier will immediately impose call restrictions or deactivate the number, which may impact your business continuity. Proceed with caution.
 *
 * @param request DeleteSecretAPhoneNoToCustRequest
 * @return DeleteSecretAPhoneNoToCustResponse
 */
DeleteSecretAPhoneNoToCustResponse Client::deleteSecretAPhoneNoToCust(const DeleteSecretAPhoneNoToCustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretAPhoneNoToCustWithOptions(request, runtime);
}

/**
 * @summary Deletes the blacklist of a number pool. Only number pools of the AXN privacy number, AXN extension number, and 95AXN privacy number types support blacklists.
 *
 * @description - This operation is not a batch operation. It supports deleting only one pair of point-to-point blacklist numbers or one number pool blacklist number at a time.
 * - To add a blacklist, call the [AddSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-addsecretblacklist) operation.
 * ### QPS limit
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DeleteSecretBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretBlacklistResponse
 */
DeleteSecretBlacklistResponse Client::deleteSecretBlacklistWithOptions(const DeleteSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackNo()) {
    query["BlackNo"] = request.getBlackNo();
  }

  if (!!request.hasBlackType()) {
    query["BlackType"] = request.getBlackType();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasWayControl()) {
    query["WayControl"] = request.getWayControl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSecretBlacklist"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecretBlacklistResponse>();
}

/**
 * @summary Deletes the blacklist of a number pool. Only number pools of the AXN privacy number, AXN extension number, and 95AXN privacy number types support blacklists.
 *
 * @description - This operation is not a batch operation. It supports deleting only one pair of point-to-point blacklist numbers or one number pool blacklist number at a time.
 * - To add a blacklist, call the [AddSecretBlacklist](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-addsecretblacklist) operation.
 * ### QPS limit
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DeleteSecretBlacklistRequest
 * @return DeleteSecretBlacklistResponse
 */
DeleteSecretBlacklistResponse Client::deleteSecretBlacklist(const DeleteSecretBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretBlacklistWithOptions(request, runtime);
}

/**
 * @summary Obtain OSS resource configuration information. This configuration information will be used for subsequent OSS image upload operations.
 *
 * @description - When uploading personal filing photos for an A-number mobile phone number, you must upload a clear frontal portrait photo with the face unobscured, and optionally select to upload photos of both sides of your ID card. Uploading these photos helps reviewers understand your personal identity information. Supported formats are PNG, JPG, and JPEG. The image size must not exceed 2 MB.
 * - For the specific operation flow when submitting personal real-name filing for an A-number mobile phone number through the API, see [Submit Personal Real-Name Information for an A-Number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
 *
 * @param request GetDyplsOSSInfoForUploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDyplsOSSInfoForUploadFileResponse
 */
GetDyplsOSSInfoForUploadFileResponse Client::getDyplsOSSInfoForUploadFileWithOptions(const GetDyplsOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDyplsOSSInfoForUploadFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDyplsOSSInfoForUploadFileResponse>();
}

/**
 * @summary Obtain OSS resource configuration information. This configuration information will be used for subsequent OSS image upload operations.
 *
 * @description - When uploading personal filing photos for an A-number mobile phone number, you must upload a clear frontal portrait photo with the face unobscured, and optionally select to upload photos of both sides of your ID card. Uploading these photos helps reviewers understand your personal identity information. Supported formats are PNG, JPG, and JPEG. The image size must not exceed 2 MB.
 * - For the specific operation flow when submitting personal real-name filing for an A-number mobile phone number through the API, see [Submit Personal Real-Name Information for an A-Number Mobile Phone Number via API](https://help.aliyun.com/document_detail/2880077.html).
 *
 * @param request GetDyplsOSSInfoForUploadFileRequest
 * @return GetDyplsOSSInfoForUploadFileResponse
 */
GetDyplsOSSInfoForUploadFileResponse Client::getDyplsOSSInfoForUploadFile(const GetDyplsOSSInfoForUploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDyplsOSSInfoForUploadFileWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of the automatic speech recognition (ASR) result.
 *
 * @description Before you call the GetSecretAsrDetail operation, set the ASRStatus parameter to true in the [BindAxn operation](https://help.aliyun.com/document_detail/400483.html). This ensures that you can obtain the ASR result properly.
 * ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetSecretAsrDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecretAsrDetailResponse
 */
GetSecretAsrDetailResponse Client::getSecretAsrDetailWithOptions(const GetSecretAsrDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.getCallTime();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecretAsrDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecretAsrDetailResponse>();
}

/**
 * @summary Obtains the details of the automatic speech recognition (ASR) result.
 *
 * @description Before you call the GetSecretAsrDetail operation, set the ASRStatus parameter to true in the [BindAxn operation](https://help.aliyun.com/document_detail/400483.html). This ensures that you can obtain the ASR result properly.
 * ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetSecretAsrDetailRequest
 * @return GetSecretAsrDetailResponse
 */
GetSecretAsrDetailResponse Client::getSecretAsrDetail(const GetSecretAsrDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecretAsrDetailWithOptions(request, runtime);
}

/**
 * @summary Obtains the download URL of a recorded ringing tone.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetTotalPublicUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTotalPublicUrlResponse
 */
GetTotalPublicUrlResponse Client::getTotalPublicUrlWithOptions(const GetTotalPublicUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.getCallTime();
  }

  if (!!request.hasCheckSubs()) {
    query["CheckSubs"] = request.getCheckSubs();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPartnerKey()) {
    query["PartnerKey"] = request.getPartnerKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTotalPublicUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTotalPublicUrlResponse>();
}

/**
 * @summary Obtains the download URL of a recorded ringing tone.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetTotalPublicUrlRequest
 * @return GetTotalPublicUrlResponse
 */
GetTotalPublicUrlResponse Client::getTotalPublicUrl(const GetTotalPublicUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTotalPublicUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration information of the X number.
 *
 * @param request GetXConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetXConfigResponse
 */
GetXConfigResponse Client::getXConfigWithOptions(const GetXConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetXConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetXConfigResponse>();
}

/**
 * @summary Retrieves the configuration information of the X number.
 *
 * @param request GetXConfigRequest
 * @return GetXConfigResponse
 */
GetXConfigResponse Client::getXConfig(const GetXConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getXConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the default configurations of an X number.
 *
 * @param request GetXDefaultConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetXDefaultConfigResponse
 */
GetXDefaultConfigResponse Client::getXDefaultConfigWithOptions(const GetXDefaultConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetXDefaultConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetXDefaultConfigResponse>();
}

/**
 * @summary Retrieves the default configurations of an X number.
 *
 * @param request GetXDefaultConfigRequest
 * @return GetXDefaultConfigResponse
 */
GetXDefaultConfigResponse Client::getXDefaultConfig(const GetXDefaultConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getXDefaultConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the list of X numbers under a customer account.
 *
 * @param request ListXTelephonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListXTelephonesResponse
 */
ListXTelephonesResponse Client::listXTelephonesWithOptions(const ListXTelephonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListXTelephones"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListXTelephonesResponse>();
}

/**
 * @summary Queries the list of X numbers under a customer account.
 *
 * @param request ListXTelephonesRequest
 * @return ListXTelephonesResponse
 */
ListXTelephonesResponse Client::listXTelephones(const ListXTelephonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listXTelephonesWithOptions(request, runtime);
}

/**
 * @summary Locks a phone number.
 *
 * @description After a phone number is locked, the locked phone number cannot be selected when you call an operation to create a binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockSecretNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LockSecretNoResponse
 */
LockSecretNoResponse Client::lockSecretNoWithOptions(const LockSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LockSecretNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LockSecretNoResponse>();
}

/**
 * @summary Locks a phone number.
 *
 * @description After a phone number is locked, the locked phone number cannot be selected when you call an operation to create a binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request LockSecretNoRequest
 * @return LockSecretNoResponse
 */
LockSecretNoResponse Client::lockSecretNo(const LockSecretNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return lockSecretNoWithOptions(request, runtime);
}

/**
 * @summary Modifies number group G.
 *
 * @description After you create number group G, you can call the OperateAxgGroup operation to modify number group G. For example, you can add phone numbers to number group G, delete phone numbers from number group G, and replace all phone numbers in number group G.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request OperateAxgGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateAxgGroupResponse
 */
OperateAxgGroupResponse Client::operateAxgGroupWithOptions(const OperateAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasNumbers()) {
    query["Numbers"] = request.getNumbers();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateAxgGroup"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateAxgGroupResponse>();
}

/**
 * @summary Modifies number group G.
 *
 * @description After you create number group G, you can call the OperateAxgGroup operation to modify number group G. For example, you can add phone numbers to number group G, delete phone numbers from number group G, and replace all phone numbers in number group G.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request OperateAxgGroupRequest
 * @return OperateAxgGroupResponse
 */
OperateAxgGroupResponse Client::operateAxgGroup(const OperateAxgGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateAxgGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a phone number to a blacklist or deletes a phone number from a blacklist.
 *
 * @description The OperateBlackNo operation supports the following number pool types: AXN, AXN extension, and 95AXN.
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request OperateBlackNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateBlackNoResponse
 */
OperateBlackNoResponse Client::operateBlackNoWithOptions(const OperateBlackNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackNo()) {
    query["BlackNo"] = request.getBlackNo();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTips()) {
    query["Tips"] = request.getTips();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateBlackNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateBlackNoResponse>();
}

/**
 * @summary Adds a phone number to a blacklist or deletes a phone number from a blacklist.
 *
 * @description The OperateBlackNo operation supports the following number pool types: AXN, AXN extension, and 95AXN.
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request OperateBlackNoRequest
 * @return OperateBlackNoResponse
 */
OperateBlackNoResponse Client::operateBlackNo(const OperateBlackNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateBlackNoWithOptions(request, runtime);
}

/**
 * @summary Queries the binding information of an AXB landline privacy number.
 *
 * @param request QueryAxbBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxbBindFixedLineResponse
 */
QueryAxbBindFixedLineResponse Client::queryAxbBindFixedLineWithOptions(const QueryAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAxbBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAxbBindFixedLineResponse>();
}

/**
 * @summary Queries the binding information of an AXB landline privacy number.
 *
 * @param request QueryAxbBindFixedLineRequest
 * @return QueryAxbBindFixedLineResponse
 */
QueryAxbBindFixedLineResponse Client::queryAxbBindFixedLine(const QueryAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Queries the binding information of an AXN landline privacy number.
 *
 * @param request QueryAxnBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxnBindFixedLineResponse
 */
QueryAxnBindFixedLineResponse Client::queryAxnBindFixedLineWithOptions(const QueryAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAxnBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAxnBindFixedLineResponse>();
}

/**
 * @summary Queries the binding information of an AXN landline privacy number.
 *
 * @param request QueryAxnBindFixedLineRequest
 * @return QueryAxnBindFixedLineResponse
 */
QueryAxnBindFixedLineResponse Client::queryAxnBindFixedLine(const QueryAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Queries the binding information of a landline AXN extension number.
 *
 * @param request QueryAxnExtensionBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxnExtensionBindFixedLineResponse
 */
QueryAxnExtensionBindFixedLineResponse Client::queryAxnExtensionBindFixedLineWithOptions(const QueryAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.getQueryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAxnExtensionBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAxnExtensionBindFixedLineResponse>();
}

/**
 * @summary Queries the binding information of a landline AXN extension number.
 *
 * @param request QueryAxnExtensionBindFixedLineRequest
 * @return QueryAxnExtensionBindFixedLineResponse
 */
QueryAxnExtensionBindFixedLineResponse Client::queryAxnExtensionBindFixedLine(const QueryAxnExtensionBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAxnExtensionBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a tracking number.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryPhoneNoAByTrackNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPhoneNoAByTrackNoResponse
 */
QueryPhoneNoAByTrackNoResponse Client::queryPhoneNoAByTrackNoWithOptions(const QueryPhoneNoAByTrackNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCabinetNo()) {
    query["CabinetNo"] = request.getCabinetNo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrackNo()) {
    query["trackNo"] = request.getTrackNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPhoneNoAByTrackNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPhoneNoAByTrackNoResponse>();
}

/**
 * @summary Queries the details about a tracking number.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryPhoneNoAByTrackNoRequest
 * @return QueryPhoneNoAByTrackNoResponse
 */
QueryPhoneNoAByTrackNoResponse Client::queryPhoneNoAByTrackNo(const QueryPhoneNoAByTrackNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPhoneNoAByTrackNoWithOptions(request, runtime);
}

/**
 * @summary Obtains the download URL of a recording file.
 *
 * @description If the recording feature is enabled for a binding, all calls made by the bound phone numbers are recorded. You can obtain the download URL of a recording file by calling the QueryRecordFileDownloadUrl operation and download the recording file.
 * >  We recommend that you subscribe to [the recording status report SecretRecording](https://help.aliyun.com/document_detail/109198.html). The values of the response parameters in SecretRecording can be used as the values of the request parameters for downloading a recording file.
 * ### [](#)Procedure for obtaining a recording file
 * 1.  Specify the request parameter in an update or binding operation to enable the recording feature.
 * 2.  Subscribe to recording message receipts in the Phone Number Protection console.
 * 3.  After a recording message receipt is returned, call the QueryRecordFileDownloadUrl operation to obtain the download URL of the recording file, and download the recording file.
 * > 
 * *   A download URL is valid for 2 hours. Download the recording file as soon as possible after obtaining a download URL.
 * *   The storage period of recording files is 30 days. You can download only the recording files of calls recorded in the last 30 days.
 *
 * @param request QueryRecordFileDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecordFileDownloadUrlResponse
 */
QueryRecordFileDownloadUrlResponse Client::queryRecordFileDownloadUrlWithOptions(const QueryRecordFileDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.getCallTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRecordFileDownloadUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecordFileDownloadUrlResponse>();
}

/**
 * @summary Obtains the download URL of a recording file.
 *
 * @description If the recording feature is enabled for a binding, all calls made by the bound phone numbers are recorded. You can obtain the download URL of a recording file by calling the QueryRecordFileDownloadUrl operation and download the recording file.
 * >  We recommend that you subscribe to [the recording status report SecretRecording](https://help.aliyun.com/document_detail/109198.html). The values of the response parameters in SecretRecording can be used as the values of the request parameters for downloading a recording file.
 * ### [](#)Procedure for obtaining a recording file
 * 1.  Specify the request parameter in an update or binding operation to enable the recording feature.
 * 2.  Subscribe to recording message receipts in the Phone Number Protection console.
 * 3.  After a recording message receipt is returned, call the QueryRecordFileDownloadUrl operation to obtain the download URL of the recording file, and download the recording file.
 * > 
 * *   A download URL is valid for 2 hours. Download the recording file as soon as possible after obtaining a download URL.
 * *   The storage period of recording files is 30 days. You can download only the recording files of calls recorded in the last 30 days.
 *
 * @param request QueryRecordFileDownloadUrlRequest
 * @return QueryRecordFileDownloadUrlResponse
 */
QueryRecordFileDownloadUrlResponse Client::queryRecordFileDownloadUrl(const QueryRecordFileDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecordFileDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Query the reporting status of an A number.
 *
 * @description Before you invoke this API to query the reporting status of an A number, you must first submit the real-name information for the mobile or landline A number by calling the [CreatePhoneNoAReport](https://help.aliyun.com/document_detail/2880908.html) or [CreateFixedNoAReport](https://help.aliyun.com/document_detail/2881429.html) API. For detailed instructions, see [Submit real-name information for an A number via API](https://help.aliyun.com/document_detail/2880077.html).
 *
 * @param request QuerySecretAPhoneNoToCustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretAPhoneNoToCustResponse
 */
QuerySecretAPhoneNoToCustResponse Client::querySecretAPhoneNoToCustWithOptions(const QuerySecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.getANoWhiteGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySecretAPhoneNoToCust"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecretAPhoneNoToCustResponse>();
}

/**
 * @summary Query the reporting status of an A number.
 *
 * @description Before you invoke this API to query the reporting status of an A number, you must first submit the real-name information for the mobile or landline A number by calling the [CreatePhoneNoAReport](https://help.aliyun.com/document_detail/2880908.html) or [CreateFixedNoAReport](https://help.aliyun.com/document_detail/2881429.html) API. For detailed instructions, see [Submit real-name information for an A number via API](https://help.aliyun.com/document_detail/2880077.html).
 *
 * @param request QuerySecretAPhoneNoToCustRequest
 * @return QuerySecretAPhoneNoToCustResponse
 */
QuerySecretAPhoneNoToCustResponse Client::querySecretAPhoneNoToCust(const QuerySecretAPhoneNoToCustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecretAPhoneNoToCustWithOptions(request, runtime);
}

/**
 * @summary Queries the property information of a private number.
 *
 * @description - You can query information about a private number (X number), including the purchase time, carrier, province, city, and status.
 * - Before you call this operation, make sure that you have the private number (X number) that you want to query.
 * ### QPS limit
 * The single-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, the API call is throttled. Call this operation properly.
 *
 * @param request QuerySecretNoDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretNoDetailResponse
 */
QuerySecretNoDetailResponse Client::querySecretNoDetailWithOptions(const QuerySecretNoDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySecretNoDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecretNoDetailResponse>();
}

/**
 * @summary Queries the property information of a private number.
 *
 * @description - You can query information about a private number (X number), including the purchase time, carrier, province, city, and status.
 * - Before you call this operation, make sure that you have the private number (X number) that you want to query.
 * ### QPS limit
 * The single-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, the API call is throttled. Call this operation properly.
 *
 * @param request QuerySecretNoDetailRequest
 * @return QuerySecretNoDetailResponse
 */
QuerySecretNoDetailResponse Client::querySecretNoDetail(const QuerySecretNoDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecretNoDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the quantity of remaining phone numbers available for online purchase.
 *
 * @description When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before calling the [BuySecretNo](~~BuySecretNo~~) operation to purchase a phone number, call the [QuerySecretNoRemain](~~QuerySecretNoRemain~~) operation to query the quantity of remaining phone numbers available for online purchase.
 *
 * @param request QuerySecretNoRemainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretNoRemainResponse
 */
QuerySecretNoRemainResponse Client::querySecretNoRemainWithOptions(const QuerySecretNoRemainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.getSpecId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySecretNoRemain"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecretNoRemainResponse>();
}

/**
 * @summary Queries the quantity of remaining phone numbers available for online purchase.
 *
 * @description When purchasing a phone number, specify the home location. If no sufficient phone numbers are available for purchase in the home location, the purchase of the phone number fails. Before calling the [BuySecretNo](~~BuySecretNo~~) operation to purchase a phone number, call the [QuerySecretNoRemain](~~QuerySecretNoRemain~~) operation to query the quantity of remaining phone numbers available for online purchase.
 *
 * @param request QuerySecretNoRemainRequest
 * @return QuerySecretNoRemainResponse
 */
QuerySecretNoRemainResponse Client::querySecretNoRemain(const QuerySecretNoRemainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecretNoRemainWithOptions(request, runtime);
}

/**
 * @summary 对客分页查询指定迁移记录的明细，记录的来源与目标号池须均归属 aliUid。
 *
 * @param request QuerySecretTransferDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretTransferDetailsResponse
 */
QuerySecretTransferDetailsResponse Client::querySecretTransferDetailsWithOptions(const QuerySecretTransferDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySecretTransferDetails"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySecretTransferDetailsResponse>();
}

/**
 * @summary 对客分页查询指定迁移记录的明细，记录的来源与目标号池须均归属 aliUid。
 *
 * @param request QuerySecretTransferDetailsRequest
 * @return QuerySecretTransferDetailsResponse
 */
QuerySecretTransferDetailsResponse Client::querySecretTransferDetails(const QuerySecretTransferDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecretTransferDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the downloadable URL of a call recording by call ID.
 *
 * @param request QuerySoundRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySoundRecordResponse
 */
QuerySoundRecordResponse Client::querySoundRecordWithOptions(const QuerySoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.getCallId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySoundRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySoundRecordResponse>();
}

/**
 * @summary Queries the downloadable URL of a call recording by call ID.
 *
 * @param request QuerySoundRecordRequest
 * @return QuerySoundRecordResponse
 */
QuerySoundRecordResponse Client::querySoundRecord(const QuerySoundRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySoundRecordWithOptions(request, runtime);
}

/**
 * @summary Queries binding IDs.
 *
 * @description You can query binding IDs by phone number X. In the AXB product, multiple bindings may exist for the same phone number X. In this case, multiple binding IDs may be obtained for the same phone number X.
 *
 * @param request QuerySubsIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySubsIdResponse
 */
QuerySubsIdResponse Client::querySubsIdWithOptions(const QuerySubsIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySubsId"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySubsIdResponse>();
}

/**
 * @summary Queries binding IDs.
 *
 * @description You can query binding IDs by phone number X. In the AXB product, multiple bindings may exist for the same phone number X. In this case, multiple binding IDs may be obtained for the same phone number X.
 *
 * @param request QuerySubsIdRequest
 * @return QuerySubsIdResponse
 */
QuerySubsIdResponse Client::querySubsId(const QuerySubsIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySubsIdWithOptions(request, runtime);
}

/**
 * @summary Queries the binding details of a phone number. Retrieves information such as the binding relationship status, extension number, recording status, and ASR status.
 *
 * @description Before you call this operation, make sure that you have the private number (X number) to query and that the number has a binding relationship.
 * ### QPS limit 
 * The queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 * ### PoolKey and ProductType limit
 * Specify at least one of the PoolKey and ProductType parameters. If neither parameter is specified, an error is returned.
 * Former Alibaba Dayu users should specify the ProductType parameter, and Alibaba Cloud users should specify the PoolKey parameter.
 *
 * @param request QuerySubscriptionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySubscriptionDetailResponse
 */
QuerySubscriptionDetailResponse Client::querySubscriptionDetailWithOptions(const QuerySubscriptionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySubscriptionDetail"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySubscriptionDetailResponse>();
}

/**
 * @summary Queries the binding details of a phone number. Retrieves information such as the binding relationship status, extension number, recording status, and ASR status.
 *
 * @description Before you call this operation, make sure that you have the private number (X number) to query and that the number has a binding relationship.
 * ### QPS limit 
 * The queries per second (QPS) limit for a single user is 1,000. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 * ### PoolKey and ProductType limit
 * Specify at least one of the PoolKey and ProductType parameters. If neither parameter is specified, an error is returned.
 * Former Alibaba Dayu users should specify the ProductType parameter, and Alibaba Cloud users should specify the PoolKey parameter.
 *
 * @param request QuerySubscriptionDetailRequest
 * @return QuerySubscriptionDetailResponse
 */
QuerySubscriptionDetailResponse Client::querySubscriptionDetail(const QuerySubscriptionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySubscriptionDetailWithOptions(request, runtime);
}

/**
 * @summary Releases a phone number.
 *
 * @description *   After a phone number is released, it will no longer be charged from the following month.
 * *   Before you release a phone number, log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) to check whether the phone number is bound to other phone numbers. The phone number can be released only if it is not bound to other phone numbers.
 *
 * @param request ReleaseSecretNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseSecretNoResponse
 */
ReleaseSecretNoResponse Client::releaseSecretNoWithOptions(const ReleaseSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseSecretNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseSecretNoResponse>();
}

/**
 * @summary Releases a phone number.
 *
 * @description *   After a phone number is released, it will no longer be charged from the following month.
 * *   Before you release a phone number, log on to the [Phone Number Protection console](https://dypls.console.aliyun.com/dypls.htm#/account) to check whether the phone number is bound to other phone numbers. The phone number can be released only if it is not bound to other phone numbers.
 *
 * @param request ReleaseSecretNoRequest
 * @return ReleaseSecretNoResponse
 */
ReleaseSecretNoResponse Client::releaseSecretNo(const ReleaseSecretNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseSecretNoWithOptions(request, runtime);
}

/**
 * @summary Dissociates a specified call binding relationship (A, X, and B). After the call binding relationship is dissociated, Employee B cannot call Customer A through Work Number X.
 *
 * @param request UnBindAXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnBindAXBResponse
 */
UnBindAXBResponse Client::unBindAXBWithOptions(const UnBindAXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindId()) {
    query["BindId"] = request.getBindId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnBindAXB"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnBindAXBResponse>();
}

/**
 * @summary Dissociates a specified call binding relationship (A, X, and B). After the call binding relationship is dissociated, Employee B cannot call Customer A through Work Number X.
 *
 * @param request UnBindAXBRequest
 * @return UnBindAXBResponse
 */
UnBindAXBResponse Client::unBindAXB(const UnBindAXBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unBindAXBWithOptions(request, runtime);
}

/**
 * @summary Cancels the binding between work number X and employee number B. After the binding is canceled, calls to X are no longer forwarded to B.
 *
 * @param request UnBindXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnBindXBResponse
 */
UnBindXBResponse Client::unBindXBWithOptions(const UnBindXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthId()) {
    query["AuthId"] = request.getAuthId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.getCallerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.getCustomerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.getReqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnBindXB"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnBindXBResponse>();
}

/**
 * @summary Cancels the binding between work number X and employee number B. After the binding is canceled, calls to X are no longer forwarded to B.
 *
 * @param request UnBindXBRequest
 * @return UnBindXBResponse
 */
UnBindXBResponse Client::unBindXB(const UnBindXBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unBindXBWithOptions(request, runtime);
}

/**
 * @summary Unbinds a 700 number.
 *
 * @param request UnbindSubs700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSubs700Response
 */
UnbindSubs700Response Client::unbindSubs700WithOptions(const UnbindSubs700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.getIndustrialId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSubs700"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSubs700Response>();
}

/**
 * @summary Unbinds a 700 number.
 *
 * @param request UnbindSubs700Request
 * @return UnbindSubs700Response
 */
UnbindSubs700Response Client::unbindSubs700(const UnbindSubs700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindSubs700WithOptions(request, runtime);
}

/**
 * @summary Unbinds a phone number.
 *
 * @description Before releasing a phone number, you must call the UnbindSubscription operation to unbind the phone number.
 *
 * @param request UnbindSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSubscriptionResponse
 */
UnbindSubscriptionResponse Client::unbindSubscriptionWithOptions(const UnbindSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindSubscription"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindSubscriptionResponse>();
}

/**
 * @summary Unbinds a phone number.
 *
 * @description Before releasing a phone number, you must call the UnbindSubscription operation to unbind the phone number.
 *
 * @param request UnbindSubscriptionRequest
 * @return UnbindSubscriptionResponse
 */
UnbindSubscriptionResponse Client::unbindSubscription(const UnbindSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Unlocks a phone number.
 *
 * @description After a phone number is unlocked, you can reselect the unlocked phone number when you call an operation to create a binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockSecretNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnlockSecretNoResponse
 */
UnlockSecretNoResponse Client::unlockSecretNoWithOptions(const UnlockSecretNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.getSecretNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnlockSecretNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnlockSecretNoResponse>();
}

/**
 * @summary Unlocks a phone number.
 *
 * @description After a phone number is unlocked, you can reselect the unlocked phone number when you call an operation to create a binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UnlockSecretNoRequest
 * @return UnlockSecretNoResponse
 */
UnlockSecretNoResponse Client::unlockSecretNo(const UnlockSecretNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unlockSecretNoWithOptions(request, runtime);
}

/**
 * @summary Updates the binding information of an AXB privacy number for landlines.
 *
 * @description When you update an AXB privacy number for landlines, you cannot modify Number A and Number B at the same time. For example, if the original binding relationship is A1 and B1, you can change it to A1 and B2, or A2 and B1.
 *
 * @param tmpReq UpdateAxbBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAxbBindFixedLineResponse
 */
UpdateAxbBindFixedLineResponse Client::updateAxbBindFixedLineWithOptions(const UpdateAxbBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAxbBindFixedLineShrinkRequest request = UpdateAxbBindFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAxbBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAxbBindFixedLineResponse>();
}

/**
 * @summary Updates the binding information of an AXB privacy number for landlines.
 *
 * @description When you update an AXB privacy number for landlines, you cannot modify Number A and Number B at the same time. For example, if the original binding relationship is A1 and B1, you can change it to A1 and B2, or A2 and B1.
 *
 * @param request UpdateAxbBindFixedLineRequest
 * @return UpdateAxbBindFixedLineResponse
 */
UpdateAxbBindFixedLineResponse Client::updateAxbBindFixedLine(const UpdateAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Updates the binding information of a landline AXN privacy number.
 *
 * @param tmpReq UpdateAxnBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAxnBindFixedLineResponse
 */
UpdateAxnBindFixedLineResponse Client::updateAxnBindFixedLineWithOptions(const UpdateAxnBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAxnBindFixedLineShrinkRequest request = UpdateAxnBindFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAxnBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAxnBindFixedLineResponse>();
}

/**
 * @summary Updates the binding information of a landline AXN privacy number.
 *
 * @param request UpdateAxnBindFixedLineRequest
 * @return UpdateAxnBindFixedLineResponse
 */
UpdateAxnBindFixedLineResponse Client::updateAxnBindFixedLine(const UpdateAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Updates the binding relationship of a landline AXN extension number.
 *
 * @param tmpReq UpdateAxnExtensionBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAxnExtensionBindFixedLineResponse
 */
UpdateAxnExtensionBindFixedLineResponse Client::updateAxnExtensionBindFixedLineWithOptions(const UpdateAxnExtensionBindFixedLineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAxnExtensionBindFixedLineShrinkRequest request = UpdateAxnExtensionBindFixedLineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtraaxx()) {
    request.setExtraaxxShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtraaxx(), "Extraaxx", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.getAnucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.getAnucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExtraaxxShrink()) {
    query["Extraaxx"] = request.getExtraaxxShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.getSubId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.getSubts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.getTAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.getTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAxnExtensionBindFixedLine"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAxnExtensionBindFixedLineResponse>();
}

/**
 * @summary Updates the binding relationship of a landline AXN extension number.
 *
 * @param request UpdateAxnExtensionBindFixedLineRequest
 * @return UpdateAxnExtensionBindFixedLineResponse
 */
UpdateAxnExtensionBindFixedLineResponse Client::updateAxnExtensionBindFixedLine(const UpdateAxnExtensionBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxnExtensionBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary Modifies the binding relationship of a 700 number.
 *
 * @param request UpdateSubs700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubs700Response
 */
UpdateSubs700Response Client::updateSubs700WithOptions(const UpdateSubs700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.getAsrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.getAudio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasDefaultA()) {
    query["DefaultA"] = request.getDefaultA();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.getIndustrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.getNeedAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.getNeedRecord();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.getTelA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.getTelB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.getTelX();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSubs700"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubs700Response>();
}

/**
 * @summary Modifies the binding relationship of a 700 number.
 *
 * @param request UpdateSubs700Request
 * @return UpdateSubs700Response
 */
UpdateSubs700Response Client::updateSubs700(const UpdateSubs700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubs700WithOptions(request, runtime);
}

/**
 * @summary Modifies a phone number binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 10,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UpdateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const UpdateSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.getASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.getASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.getCallDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.getCallRestrict();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.getIsRecordingEnabled();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.getOperateType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.getPhoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.getPhoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.getPhoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.getPoolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.getRingConfig();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.getSubsId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary Modifies a phone number binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 10,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubscriptionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525