#include <darabonba/Core.hpp>
#include <alibabacloud/Dyplsapi20170525.hpp>
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
using namespace AlibabaCloud::Dyplsapi20170525::Models;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{

AlibabaCloud::Dyplsapi20170525::Client::Client(Config &config): OpenApiClient(config){
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
  }

  if (!!request.hasTrackNo()) {
    query["trackNo"] = request.trackNo();
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
 * @summary Adds a blacklist.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddSecretBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSecretBlacklistResponse
 */
AddSecretBlacklistResponse Client::addSecretBlacklistWithOptions(const AddSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackNo()) {
    query["BlackNo"] = request.blackNo();
  }

  if (!!request.hasBlackType()) {
    query["BlackType"] = request.blackType();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasWayControl()) {
    query["WayControl"] = request.wayControl();
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
 * @summary Adds a blacklist.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request AddSecretBlacklistRequest
 * @return AddSecretBlacklistResponse
 */
AddSecretBlacklistResponse Client::addSecretBlacklist(const AddSecretBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSecretBlacklistWithOptions(request, runtime);
}

/**
 * @summary 调用本接口向工作号平台请求为员工B的工作号X建立呼叫绑定（B，X，A），允许B通过X呼叫客户A
 *
 * @param request BindAXBCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAXBCallResponse
 */
BindAXBCallResponse Client::bindAXBCallWithOptions(const BindAXBCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthId()) {
    query["AuthId"] = request.authId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary 调用本接口向工作号平台请求为员工B的工作号X建立呼叫绑定（B，X，A），允许B通过X呼叫客户A
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
    query["ASRModelId"] = request.ASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.ASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.callDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.callTimeout();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.dtmfConfig();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.expectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.isRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.phoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.ringConfig();
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
 * @summary 创建700绑定关系
 *
 * @param request BindAxb700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxb700Response
 */
BindAxb700Response Client::bindAxb700WithOptions(const BindAxb700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.audio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.callTimeout();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.dtmfConfig();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.industrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.needAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.needRecord();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasRecType()) {
    query["RecType"] = request.recType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 创建700绑定关系
 *
 * @param request BindAxb700Request
 * @return BindAxb700Response
 */
BindAxb700Response Client::bindAxb700(const BindAxb700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxb700WithOptions(request, runtime);
}

/**
 * @summary 固话AxB绑定
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
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.areacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.bindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.extraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 固话AxB绑定
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
    query["ASRModelId"] = request.ASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.ASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.callDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.expectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.isRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.phoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.ringConfig();
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
 * @summary Adds an AXN binding.
 *
 * @description >  An AXN private number is a dedicated private number assigned to phone number A. When an N-side number is used to call phone number X, the call is forwarded to phone number A.
 *
 * @param request BindAxnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnResponse
 */
BindAxnResponse Client::bindAxnWithOptions(const BindAxnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.ASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.ASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.callDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.callTimeout();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.expectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.isRecordingEnabled();
  }

  if (!!request.hasNoType()) {
    query["NoType"] = request.noType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.phoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.ringConfig();
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
 * @summary Adds an AXN binding.
 *
 * @description >  An AXN private number is a dedicated private number assigned to phone number A. When an N-side number is used to call phone number X, the call is forwarded to phone number A.
 *
 * @param request BindAxnRequest
 * @return BindAxnResponse
 */
BindAxnResponse Client::bindAxn(const BindAxnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnWithOptions(request, runtime);
}

/**
 * @summary Adds an AXN extension binding.
 *
 * @description Before you add an AXN extension binding, confirm phone number A and phone number N in the business scenario. Phone number A belongs to a customer, and phone number X is the private number assigned to the customer. When any other phone number is used to call phone number X and the extension, the call is transferred to phone number A. When phone number A is used to call phone number X, the call is transferred to the default phone number B that is specified during the phone number binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxnExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAxnExtensionResponse
 */
BindAxnExtensionResponse Client::bindAxnExtensionWithOptions(const BindAxnExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasASRModelId()) {
    query["ASRModelId"] = request.ASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.ASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.callDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasExpectCity()) {
    query["ExpectCity"] = request.expectCity();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtend()) {
    query["Extend"] = request.extend();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.isRecordingEnabled();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.phoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.ringConfig();
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
 * @summary Adds an AXN extension binding.
 *
 * @description Before you add an AXN extension binding, confirm phone number A and phone number N in the business scenario. Phone number A belongs to a customer, and phone number X is the private number assigned to the customer. When any other phone number is used to call phone number X and the extension, the call is transferred to phone number A. When phone number A is used to call phone number X, the call is transferred to the default phone number B that is specified during the phone number binding.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request BindAxnExtensionRequest
 * @return BindAxnExtensionResponse
 */
BindAxnExtensionResponse Client::bindAxnExtension(const BindAxnExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnExtensionWithOptions(request, runtime);
}

/**
 * @summary AXN分机号-号码绑定
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
    request.setExtraaxxShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extraaxx(), "Extraaxx", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.areacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.bindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraaxxShrink()) {
    query["Extraaxx"] = request.extraaxxShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasTelXext()) {
    query["TelXext"] = request.telXext();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary AXN分机号-号码绑定
 *
 * @param request BindAxnExtensionFixedLineRequest
 * @return BindAxnExtensionFixedLineResponse
 */
BindAxnExtensionFixedLineResponse Client::bindAxnExtensionFixedLine(const BindAxnExtensionFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnExtensionFixedLineWithOptions(request, runtime);
}

/**
 * @summary AXN模式绑定，分配X号码
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
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAreacode()) {
    query["Areacode"] = request.areacode();
  }

  if (!!request.hasBindType()) {
    query["BindType"] = request.bindType();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.extraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary AXN模式绑定，分配X号码
 *
 * @param request BindAxnFixedLineRequest
 * @return BindAxnFixedLineResponse
 */
BindAxnFixedLineResponse Client::bindAxnFixedLine(const BindAxnFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAxnFixedLineWithOptions(request, runtime);
}

/**
 * @param tmpReq BindBatchAxgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindBatchAxgResponse
 */
BindBatchAxgResponse Client::bindBatchAxgWithOptions(const BindBatchAxgRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BindBatchAxgShrinkRequest request = BindBatchAxgShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAxgBindList()) {
    request.setAxgBindListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.axgBindList(), "AxgBindList", "json"));
  }

  json query = {};
  if (!!request.hasAxgBindListShrink()) {
    query["AxgBindList"] = request.axgBindListShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @param request BindBatchAxgRequest
 * @return BindBatchAxgResponse
 */
BindBatchAxgResponse Client::bindBatchAxg(const BindBatchAxgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindBatchAxgWithOptions(request, runtime);
}

/**
 * @summary 创建700Gxb绑定关系
 *
 * @param request BindGxb700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindGxb700Response
 */
BindGxb700Response Client::bindGxb700WithOptions(const BindGxb700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.audio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasCallTimeout()) {
    query["CallTimeout"] = request.callTimeout();
  }

  if (!!request.hasDefaultA()) {
    query["DefaultA"] = request.defaultA();
  }

  if (!!request.hasDtmfConfig()) {
    query["DtmfConfig"] = request.dtmfConfig();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.industrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.needAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.needRecord();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOutOrderId()) {
    query["OutOrderId"] = request.outOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasRecType()) {
    query["RecType"] = request.recType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 创建700Gxb绑定关系
 *
 * @param request BindGxb700Request
 * @return BindGxb700Response
 */
BindGxb700Response Client::bindGxb700(const BindGxb700Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindGxb700WithOptions(request, runtime);
}

/**
 * @summary 平台指定工作号X 和员工号B建立关联，完成X 实名认证，绑定生效后，所有X 的呼叫都会转接到B
 *
 * @param request BindXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindXBResponse
 */
BindXBResponse Client::bindXBWithOptions(const BindXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
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
 * @summary 平台指定工作号X 和员工号B建立关联，完成X 实名认证，绑定生效后，所有X 的呼叫都会转接到B
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
    query["City"] = request.city();
  }

  if (!!request.hasDisplayPool()) {
    query["DisplayPool"] = request.displayPool();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.specId();
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
    query["CancelDesc"] = request.cancelDesc();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.outerOrderCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 配置X号码，单独对工作号的话音呼叫、企业名片等通信功能进行配置操作
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
    request.setSequenceCallsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sequenceCalls(), "SequenceCalls", "json"));
  }

  json query = {};
  if (!!request.hasCallAbility()) {
    query["CallAbility"] = request.callAbility();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasGNFlag()) {
    query["GNFlag"] = request.GNFlag();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSequenceCallsShrink()) {
    query["SequenceCalls"] = request.sequenceCallsShrink();
  }

  if (!!request.hasSequenceMode()) {
    query["SequenceMode"] = request.sequenceMode();
  }

  if (!!request.hasSmsAbility()) {
    query["SmsAbility"] = request.smsAbility();
  }

  if (!!request.hasSmsSignMode()) {
    query["SmsSignMode"] = request.smsSignMode();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 配置X号码，单独对工作号的话音呼叫、企业名片等通信功能进行配置操作
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
    query["Name"] = request.name();
  }

  if (!!request.hasNumbers()) {
    query["Numbers"] = request.numbers();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 通过API收集小号a号码固话
 *
 * @param request CreateFixedNoAReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFixedNoAReportResponse
 */
CreateFixedNoAReportResponse Client::createFixedNoAReportWithOptions(const CreateFixedNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.ANoWhiteGroupId();
  }

  if (!!request.hasCustName()) {
    query["CustName"] = request.custName();
  }

  if (!!request.hasCustPhoneNo()) {
    query["CustPhoneNo"] = request.custPhoneNo();
  }

  if (!!request.hasCustType()) {
    query["CustType"] = request.custType();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.documentNumber();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.documentType();
  }

  if (!!request.hasFixedLineWorkId()) {
    query["FixedLineWorkId"] = request.fixedLineWorkId();
  }

  if (!!request.hasFixedNoA()) {
    query["FixedNoA"] = request.fixedNoA();
  }

  if (!!request.hasIdCardAlivePhoto()) {
    query["IdCardAlivePhoto"] = request.idCardAlivePhoto();
  }

  if (!!request.hasIdCardBackPhoto()) {
    query["IdCardBackPhoto"] = request.idCardBackPhoto();
  }

  if (!!request.hasIdCardFrontPhoto()) {
    query["IdCardFrontPhoto"] = request.idCardFrontPhoto();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 通过API收集小号a号码固话
 *
 * @param request CreateFixedNoAReportRequest
 * @return CreateFixedNoAReportResponse
 */
CreateFixedNoAReportResponse Client::createFixedNoAReport(const CreateFixedNoAReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFixedNoAReportWithOptions(request, runtime);
}

/**
 * @summary 通过API收集小号a号码手机号
 *
 * @param request CreatePhoneNoAReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePhoneNoAReportResponse
 */
CreatePhoneNoAReportResponse Client::createPhoneNoAReportWithOptions(const CreatePhoneNoAReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.ANoWhiteGroupId();
  }

  if (!!request.hasCustName()) {
    query["CustName"] = request.custName();
  }

  if (!!request.hasDocumentNumber()) {
    query["DocumentNumber"] = request.documentNumber();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.documentType();
  }

  if (!!request.hasIdCardAlivePhoto()) {
    query["IdCardAlivePhoto"] = request.idCardAlivePhoto();
  }

  if (!!request.hasIdCardBackPhoto()) {
    query["IdCardBackPhoto"] = request.idCardBackPhoto();
  }

  if (!!request.hasIdCardFrontPhoto()) {
    query["IdCardFrontPhoto"] = request.idCardFrontPhoto();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 通过API收集小号a号码手机号
 *
 * @param request CreatePhoneNoAReportRequest
 * @return CreatePhoneNoAReportResponse
 */
CreatePhoneNoAReportResponse Client::createPhoneNoAReport(const CreatePhoneNoAReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPhoneNoAReportWithOptions(request, runtime);
}

/**
 * @summary Creates a door-to-door delivery order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
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
    request.setConsigneeAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.consigneeAddress(), "ConsigneeAddress", "json"));
  }

  if (!!tmpReq.hasGoodsInfos()) {
    request.setGoodsInfosShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.goodsInfos(), "GoodsInfos", "json"));
  }

  if (!!tmpReq.hasSendAddress()) {
    request.setSendAddressShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sendAddress(), "SendAddress", "json"));
  }

  json query = {};
  if (!!request.hasAppointGotEndTime()) {
    query["AppointGotEndTime"] = request.appointGotEndTime();
  }

  if (!!request.hasAppointGotStartTime()) {
    query["AppointGotStartTime"] = request.appointGotStartTime();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasConsigneeAddressShrink()) {
    query["ConsigneeAddress"] = request.consigneeAddressShrink();
  }

  if (!!request.hasConsigneeMobile()) {
    query["ConsigneeMobile"] = request.consigneeMobile();
  }

  if (!!request.hasConsigneeName()) {
    query["ConsigneeName"] = request.consigneeName();
  }

  if (!!request.hasConsigneePhone()) {
    query["ConsigneePhone"] = request.consigneePhone();
  }

  if (!!request.hasCpCode()) {
    query["CpCode"] = request.cpCode();
  }

  if (!!request.hasGoodsInfosShrink()) {
    query["GoodsInfos"] = request.goodsInfosShrink();
  }

  if (!!request.hasOrderChannels()) {
    query["OrderChannels"] = request.orderChannels();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.outerOrderCode();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasSendAddressShrink()) {
    query["SendAddress"] = request.sendAddressShrink();
  }

  if (!!request.hasSendMobile()) {
    query["SendMobile"] = request.sendMobile();
  }

  if (!!request.hasSendName()) {
    query["SendName"] = request.sendName();
  }

  if (!!request.hasSendPhone()) {
    query["SendPhone"] = request.sendPhone();
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
 * @summary Creates a door-to-door delivery order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreatePickUpWaybillRequest
 * @return CreatePickUpWaybillResponse
 */
CreatePickUpWaybillResponse Client::createPickUpWaybill(const CreatePickUpWaybillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPickUpWaybillWithOptions(request, runtime);
}

/**
 * @summary Queries a pickup order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
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
    request.setConsigneeInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.consigneeInfo(), "ConsigneeInfo", "json"));
  }

  if (!!tmpReq.hasSenderInfo()) {
    request.setSenderInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.senderInfo(), "SenderInfo", "json"));
  }

  json query = {};
  if (!!request.hasConsigneeInfoShrink()) {
    query["ConsigneeInfo"] = request.consigneeInfoShrink();
  }

  if (!!request.hasCpCode()) {
    query["CpCode"] = request.cpCode();
  }

  if (!!request.hasOrderChannels()) {
    query["OrderChannels"] = request.orderChannels();
  }

  if (!!request.hasOuterOrderCode()) {
    query["OuterOrderCode"] = request.outerOrderCode();
  }

  if (!!request.hasPreWeight()) {
    query["PreWeight"] = request.preWeight();
  }

  if (!!request.hasSenderInfoShrink()) {
    query["SenderInfo"] = request.senderInfoShrink();
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
 * @summary Queries a pickup order.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreatePickUpWaybillPreQueryRequest
 * @return CreatePickUpWaybillPreQueryResponse
 */
CreatePickUpWaybillPreQueryResponse Client::createPickUpWaybillPreQuery(const CreatePickUpWaybillPreQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPickUpWaybillPreQueryWithOptions(request, runtime);
}

/**
 * @summary B向A 发短信，客户端获取“短信标签”，尾部添加“标签”。通过“标签”解析被叫A，发短信到A。
 *
 * @param request CreateSmsSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSignWithOptions(const CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNo()) {
    query["CalledNo"] = request.calledNo();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCallingNo()) {
    query["CallingNo"] = request.callingNo();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary B向A 发短信，客户端获取“短信标签”，尾部添加“标签”。通过“标签”解析被叫A，发短信到A。
 *
 * @param request CreateSmsSignRequest
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSign(const CreateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsSignWithOptions(request, runtime);
}

/**
 * @summary 固话AxB解绑
 *
 * @param request DeleteAxbBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxbBindFixedLineResponse
 */
DeleteAxbBindFixedLineResponse Client::deleteAxbBindFixedLineWithOptions(const DeleteAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 固话AxB解绑
 *
 * @param request DeleteAxbBindFixedLineRequest
 * @return DeleteAxbBindFixedLineResponse
 */
DeleteAxbBindFixedLineResponse Client::deleteAxbBindFixedLine(const DeleteAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @param request DeleteAxgGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxgGroupResponse
 */
DeleteAxgGroupResponse Client::deleteAxgGroupWithOptions(const DeleteAxgGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @param request DeleteAxgGroupRequest
 * @return DeleteAxgGroupResponse
 */
DeleteAxgGroupResponse Client::deleteAxgGroup(const DeleteAxgGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxgGroupWithOptions(request, runtime);
}

/**
 * @summary 解绑已有Axn绑定
 *
 * @param request DeleteAxnBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxnBindFixedLineResponse
 */
DeleteAxnBindFixedLineResponse Client::deleteAxnBindFixedLineWithOptions(const DeleteAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 解绑已有Axn绑定
 *
 * @param request DeleteAxnBindFixedLineRequest
 * @return DeleteAxnBindFixedLineResponse
 */
DeleteAxnBindFixedLineResponse Client::deleteAxnBindFixedLine(const DeleteAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 解绑已有AXN分机号绑定
 *
 * @param request DeleteAxnExtensionBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAxnExtensionBindFixedLineResponse
 */
DeleteAxnExtensionBindFixedLineResponse Client::deleteAxnExtensionBindFixedLineWithOptions(const DeleteAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 解绑已有AXN分机号绑定
 *
 * @param request DeleteAxnExtensionBindFixedLineRequest
 * @return DeleteAxnExtensionBindFixedLineResponse
 */
DeleteAxnExtensionBindFixedLineResponse Client::deleteAxnExtensionBindFixedLine(const DeleteAxnExtensionBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAxnExtensionBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary A号码报备数据删除
 *
 * @param request DeleteSecretAPhoneNoToCustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretAPhoneNoToCustResponse
 */
DeleteSecretAPhoneNoToCustResponse Client::deleteSecretAPhoneNoToCustWithOptions(const DeleteSecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.ANoWhiteGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary A号码报备数据删除
 *
 * @param request DeleteSecretAPhoneNoToCustRequest
 * @return DeleteSecretAPhoneNoToCustResponse
 */
DeleteSecretAPhoneNoToCustResponse Client::deleteSecretAPhoneNoToCust(const DeleteSecretAPhoneNoToCustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretAPhoneNoToCustWithOptions(request, runtime);
}

/**
 * @summary Deletes a blacklist.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteSecretBlacklistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecretBlacklistResponse
 */
DeleteSecretBlacklistResponse Client::deleteSecretBlacklistWithOptions(const DeleteSecretBlacklistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBlackNo()) {
    query["BlackNo"] = request.blackNo();
  }

  if (!!request.hasBlackType()) {
    query["BlackType"] = request.blackType();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasWayControl()) {
    query["WayControl"] = request.wayControl();
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
 * @summary Deletes a blacklist.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteSecretBlacklistRequest
 * @return DeleteSecretBlacklistResponse
 */
DeleteSecretBlacklistResponse Client::deleteSecretBlacklist(const DeleteSecretBlacklistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecretBlacklistWithOptions(request, runtime);
}

/**
 * @summary 隐私号上传文件，获取 OSS 信息
 *
 * @param request GetDyplsOSSInfoForUploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDyplsOSSInfoForUploadFileResponse
 */
GetDyplsOSSInfoForUploadFileResponse Client::getDyplsOSSInfoForUploadFileWithOptions(const GetDyplsOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 隐私号上传文件，获取 OSS 信息
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
    query["CallId"] = request.callId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.callTime();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
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
    query["CallId"] = request.callId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.callTime();
  }

  if (!!request.hasCheckSubs()) {
    query["CheckSubs"] = request.checkSubs();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPartnerKey()) {
    query["PartnerKey"] = request.partnerKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 获取X号码配置信息
 *
 * @param request GetXConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetXConfigResponse
 */
GetXConfigResponse Client::getXConfigWithOptions(const GetXConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 获取X号码配置信息
 *
 * @param request GetXConfigRequest
 * @return GetXConfigResponse
 */
GetXConfigResponse Client::getXConfig(const GetXConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getXConfigWithOptions(request, runtime);
}

/**
 * @summary 获取X号码默认配置信息
 *
 * @param request GetXDefaultConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetXDefaultConfigResponse
 */
GetXDefaultConfigResponse Client::getXDefaultConfigWithOptions(const GetXDefaultConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 获取X号码默认配置信息
 *
 * @param request GetXDefaultConfigRequest
 * @return GetXDefaultConfigResponse
 */
GetXDefaultConfigResponse Client::getXDefaultConfig(const GetXDefaultConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getXDefaultConfigWithOptions(request, runtime);
}

/**
 * @summary 查询客户名下X号码列表
 *
 * @param request ListXTelephonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListXTelephonesResponse
 */
ListXTelephonesResponse Client::listXTelephonesWithOptions(const ListXTelephonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 查询客户名下X号码列表
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
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
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasNumbers()) {
    query["Numbers"] = request.numbers();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    query["BlackNo"] = request.blackNo();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTips()) {
    query["Tips"] = request.tips();
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
 * @summary 固话AxB查询
 *
 * @param request QueryAxbBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxbBindFixedLineResponse
 */
QueryAxbBindFixedLineResponse Client::queryAxbBindFixedLineWithOptions(const QueryAxbBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 固话AxB查询
 *
 * @param request QueryAxbBindFixedLineRequest
 * @return QueryAxbBindFixedLineResponse
 */
QueryAxbBindFixedLineResponse Client::queryAxbBindFixedLine(const QueryAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 查询Axn绑定关系
 *
 * @param request QueryAxnBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxnBindFixedLineResponse
 */
QueryAxnBindFixedLineResponse Client::queryAxnBindFixedLineWithOptions(const QueryAxnBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 查询Axn绑定关系
 *
 * @param request QueryAxnBindFixedLineRequest
 * @return QueryAxnBindFixedLineResponse
 */
QueryAxnBindFixedLineResponse Client::queryAxnBindFixedLine(const QueryAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 查询AXN分机号绑定关系
 *
 * @param request QueryAxnExtensionBindFixedLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAxnExtensionBindFixedLineResponse
 */
QueryAxnExtensionBindFixedLineResponse Client::queryAxnExtensionBindFixedLineWithOptions(const QueryAxnExtensionBindFixedLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 查询AXN分机号绑定关系
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
    query["CabinetNo"] = request.cabinetNo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTrackNo()) {
    query["trackNo"] = request.trackNo();
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
    query["CallId"] = request.callId();
  }

  if (!!request.hasCallTime()) {
    query["CallTime"] = request.callTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary A号码报备状态查询
 *
 * @param request QuerySecretAPhoneNoToCustRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretAPhoneNoToCustResponse
 */
QuerySecretAPhoneNoToCustResponse Client::querySecretAPhoneNoToCustWithOptions(const QuerySecretAPhoneNoToCustRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasANoWhiteGroupId()) {
    query["ANoWhiteGroupId"] = request.ANoWhiteGroupId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary A号码报备状态查询
 *
 * @param request QuerySecretAPhoneNoToCustRequest
 * @return QuerySecretAPhoneNoToCustResponse
 */
QuerySecretAPhoneNoToCustResponse Client::querySecretAPhoneNoToCust(const QuerySecretAPhoneNoToCustRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySecretAPhoneNoToCustWithOptions(request, runtime);
}

/**
 * @summary Queries the attributes of a private number.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QuerySecretNoDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySecretNoDetailResponse
 */
QuerySecretNoDetailResponse Client::querySecretNoDetailWithOptions(const QuerySecretNoDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
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
 * @summary Queries the attributes of a private number.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. We recommend that you take note of the limit when you call this operation.
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
    query["City"] = request.city();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
  }

  if (!!request.hasSpecId()) {
    query["SpecId"] = request.specId();
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
 * @summary 查询通话录音链接
 *
 * @param request QuerySoundRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySoundRecordResponse
 */
QuerySoundRecordResponse Client::querySoundRecordWithOptions(const QuerySoundRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallId()) {
    query["CallId"] = request.callId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 查询通话录音链接
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary Queries the details about a phone number binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 * ### [](#poolkeyproducttype)Limits on PoolKey and ProductType
 * You must specify either PoolKey or ProductType. If both parameters are not specified, an error is reported when you call the QuerySubscriptionDetail operation. We recommend that you specify the ProductType parameter for the original key accounts of Alibaba Cloud and the PoolKey parameter for Alibaba Cloud users.
 *
 * @param request QuerySubscriptionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySubscriptionDetailResponse
 */
QuerySubscriptionDetailResponse Client::querySubscriptionDetailWithOptions(const QuerySubscriptionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
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
 * @summary Queries the details about a phone number binding.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 * ### [](#poolkeyproducttype)Limits on PoolKey and ProductType
 * You must specify either PoolKey or ProductType. If both parameters are not specified, an error is reported when you call the QuerySubscriptionDetail operation. We recommend that you specify the ProductType parameter for the original key accounts of Alibaba Cloud and the PoolKey parameter for Alibaba Cloud users.
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
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
 * @summary 解除指定的呼叫绑定关系（A，X，B），解决呼叫绑定关系后，员工B不能通过工作号X呼叫到客户A。
 *
 * @param request UnBindAXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnBindAXBResponse
 */
UnBindAXBResponse Client::unBindAXBWithOptions(const UnBindAXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBindId()) {
    query["BindId"] = request.bindId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
 * @summary 解除指定的呼叫绑定关系（A，X，B），解决呼叫绑定关系后，员工B不能通过工作号X呼叫到客户A。
 *
 * @param request UnBindAXBRequest
 * @return UnBindAXBResponse
 */
UnBindAXBResponse Client::unBindAXB(const UnBindAXBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unBindAXBWithOptions(request, runtime);
}

/**
 * @summary 调用本接口可取消工作号X与员工号码B的绑定。绑定解除后，对X的呼叫都不会转接给B。
 *
 * @param request UnBindXBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnBindXBResponse
 */
UnBindXBResponse Client::unBindXBWithOptions(const UnBindXBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthId()) {
    query["AuthId"] = request.authId();
  }

  if (!!request.hasCallerParentId()) {
    query["CallerParentId"] = request.callerParentId();
  }

  if (!!request.hasCustomerPoolKey()) {
    query["CustomerPoolKey"] = request.customerPoolKey();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReqId()) {
    query["ReqId"] = request.reqId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 调用本接口可取消工作号X与员工号码B的绑定。绑定解除后，对X的呼叫都不会转接给B。
 *
 * @param request UnBindXBRequest
 * @return UnBindXBResponse
 */
UnBindXBResponse Client::unBindXB(const UnBindXBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unBindXBWithOptions(request, runtime);
}

/**
 * @summary 解除700绑定关系
 *
 * @param request UnbindSubs700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindSubs700Response
 */
UnbindSubs700Response Client::unbindSubs700WithOptions(const UnbindSubs700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 解除700绑定关系
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
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
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecretNo()) {
    query["SecretNo"] = request.secretNo();
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
 * @summary 固话AxB绑定更新
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
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.extraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 固话AxB绑定更新
 *
 * @param request UpdateAxbBindFixedLineRequest
 * @return UpdateAxbBindFixedLineResponse
 */
UpdateAxbBindFixedLineResponse Client::updateAxbBindFixedLine(const UpdateAxbBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxbBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 更新Axn绑定关系
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
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extra(), "Extra", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraShrink()) {
    query["Extra"] = request.extraShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 更新Axn绑定关系
 *
 * @param request UpdateAxnBindFixedLineRequest
 * @return UpdateAxnBindFixedLineResponse
 */
UpdateAxnBindFixedLineResponse Client::updateAxnBindFixedLine(const UpdateAxnBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxnBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 更新AXN分机号绑定关系
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
    request.setExtraaxxShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.extraaxx(), "Extraaxx", "json"));
  }

  json query = {};
  if (!!request.hasAnucode()) {
    query["Anucode"] = request.anucode();
  }

  if (!!request.hasAnucodecalled()) {
    query["Anucodecalled"] = request.anucodecalled();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExtraaxxShrink()) {
    query["Extraaxx"] = request.extraaxxShrink();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubId()) {
    query["SubId"] = request.subId();
  }

  if (!!request.hasSubts()) {
    query["Subts"] = request.subts();
  }

  if (!!request.hasTAnucodeConnect()) {
    query["TAnucodeConnect"] = request.TAnucodeConnect();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTs()) {
    query["Ts"] = request.ts();
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
 * @summary 更新AXN分机号绑定关系
 *
 * @param request UpdateAxnExtensionBindFixedLineRequest
 * @return UpdateAxnExtensionBindFixedLineResponse
 */
UpdateAxnExtensionBindFixedLineResponse Client::updateAxnExtensionBindFixedLine(const UpdateAxnExtensionBindFixedLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAxnExtensionBindFixedLineWithOptions(request, runtime);
}

/**
 * @summary 更新700绑定关系
 *
 * @param request UpdateSubs700Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubs700Response
 */
UpdateSubs700Response Client::updateSubs700WithOptions(const UpdateSubs700Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsrModelId()) {
    query["AsrModelId"] = request.asrModelId();
  }

  if (!!request.hasAudio()) {
    query["Audio"] = request.audio();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasDefaultA()) {
    query["DefaultA"] = request.defaultA();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIndustrialId()) {
    query["IndustrialId"] = request.industrialId();
  }

  if (!!request.hasNeedAsr()) {
    query["NeedAsr"] = request.needAsr();
  }

  if (!!request.hasNeedRecord()) {
    query["NeedRecord"] = request.needRecord();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
  }

  if (!!request.hasTelA()) {
    query["TelA"] = request.telA();
  }

  if (!!request.hasTelB()) {
    query["TelB"] = request.telB();
  }

  if (!!request.hasTelX()) {
    query["TelX"] = request.telX();
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
 * @summary 更新700绑定关系
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
    query["ASRModelId"] = request.ASRModelId();
  }

  if (!!request.hasASRStatus()) {
    query["ASRStatus"] = request.ASRStatus();
  }

  if (!!request.hasCallDisplayType()) {
    query["CallDisplayType"] = request.callDisplayType();
  }

  if (!!request.hasCallRestrict()) {
    query["CallRestrict"] = request.callRestrict();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasIsRecordingEnabled()) {
    query["IsRecordingEnabled"] = request.isRecordingEnabled();
  }

  if (!!request.hasOperateType()) {
    query["OperateType"] = request.operateType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNoA()) {
    query["PhoneNoA"] = request.phoneNoA();
  }

  if (!!request.hasPhoneNoB()) {
    query["PhoneNoB"] = request.phoneNoB();
  }

  if (!!request.hasPhoneNoX()) {
    query["PhoneNoX"] = request.phoneNoX();
  }

  if (!!request.hasPoolKey()) {
    query["PoolKey"] = request.poolKey();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRingConfig()) {
    query["RingConfig"] = request.ringConfig();
  }

  if (!!request.hasSubsId()) {
    query["SubsId"] = request.subsId();
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