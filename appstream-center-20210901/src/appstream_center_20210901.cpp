// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/appstream_center_20210901.hpp>
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

using namespace Alibabacloud_Appstream-center20210901;

Alibabacloud_Appstream-center20210901::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("appstream-center"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Appstream-center20210901::Client::getEndpoint(shared_ptr<string> productId,
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

AccessPageSetAclResponse Alibabacloud_Appstream-center20210901::Client::accessPageSetAclWithOptions(shared_ptr<AccessPageSetAclRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessMode)) {
    query->insert(pair<string, string>("AccessMode", *request->accessMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageId)) {
    query->insert(pair<string, string>("AccessPageId", *request->accessPageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageName)) {
    query->insert(pair<string, string>("AccessPageName", *request->accessPageName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectTime)) {
    query->insert(pair<string, long>("EffectTime", *request->effectTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    query->insert(pair<string, string>("Unit", *request->unit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AccessPageSetAcl"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AccessPageSetAclResponse(callApi(params, req, runtime));
  }
  else {
    return AccessPageSetAclResponse(execute(params, req, runtime));
  }
}

AccessPageSetAclResponse Alibabacloud_Appstream-center20210901::Client::accessPageSetAcl(shared_ptr<AccessPageSetAclRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return accessPageSetAclWithOptions(request, runtime);
}

ApproveOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::approveOtaTaskWithOptions(shared_ptr<ApproveOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaType)) {
    body->insert(pair<string, string>("OtaType", *request->otaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApproveOtaTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApproveOtaTaskResponse(callApi(params, req, runtime));
  }
  else {
    return ApproveOtaTaskResponse(execute(params, req, runtime));
  }
}

ApproveOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::approveOtaTask(shared_ptr<ApproveOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return approveOtaTaskWithOptions(request, runtime);
}

AskSessionPackagePriceResponse Alibabacloud_Appstream-center20210901::Client::askSessionPackagePriceWithOptions(shared_ptr<AskSessionPackagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSessions)) {
    query->insert(pair<string, long>("MaxSessions", *request->maxSessions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPackageType)) {
    query->insert(pair<string, string>("SessionPackageType", *request->sessionPackageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionSpec)) {
    query->insert(pair<string, string>("SessionSpec", *request->sessionSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionType)) {
    query->insert(pair<string, string>("SessionType", *request->sessionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AskSessionPackagePrice"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AskSessionPackagePriceResponse(callApi(params, req, runtime));
  }
  else {
    return AskSessionPackagePriceResponse(execute(params, req, runtime));
  }
}

AskSessionPackagePriceResponse Alibabacloud_Appstream-center20210901::Client::askSessionPackagePrice(shared_ptr<AskSessionPackagePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return askSessionPackagePriceWithOptions(request, runtime);
}

AuthorizeInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::authorizeInstanceGroupWithOptions(shared_ptr<AuthorizeInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AuthorizeInstanceGroupShrinkRequest> request = make_shared<AuthorizeInstanceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AuthorizeInstanceGroupRequestUserMeta>(tmpReq->userMeta)) {
    request->userMetaShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userMeta, make_shared<string>("UserMeta"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstancePersistentId)) {
    body->insert(pair<string, string>("AppInstancePersistentId", *request->appInstancePersistentId));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->authorizeUserIds)) {
    bodyFlat->insert(pair<string, vector<string>>("AuthorizeUserIds", *request->authorizeUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unAuthorizeUserIds)) {
    bodyFlat->insert(pair<string, vector<string>>("UnAuthorizeUserIds", *request->unAuthorizeUserIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userMetaShrink)) {
    body->insert(pair<string, string>("UserMeta", *request->userMetaShrink));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthorizeInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AuthorizeInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return AuthorizeInstanceGroupResponse(execute(params, req, runtime));
  }
}

AuthorizeInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::authorizeInstanceGroup(shared_ptr<AuthorizeInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authorizeInstanceGroupWithOptions(request, runtime);
}

BuySessionPackageResponse Alibabacloud_Appstream-center20210901::Client::buySessionPackageWithOptions(shared_ptr<BuySessionPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxSessions)) {
    query->insert(pair<string, long>("MaxSessions", *request->maxSessions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPackageName)) {
    query->insert(pair<string, string>("SessionPackageName", *request->sessionPackageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPackageType)) {
    query->insert(pair<string, string>("SessionPackageType", *request->sessionPackageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionSpec)) {
    query->insert(pair<string, string>("SessionSpec", *request->sessionSpec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionType)) {
    query->insert(pair<string, string>("SessionType", *request->sessionType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BuySessionPackage"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BuySessionPackageResponse(callApi(params, req, runtime));
  }
  else {
    return BuySessionPackageResponse(execute(params, req, runtime));
  }
}

BuySessionPackageResponse Alibabacloud_Appstream-center20210901::Client::buySessionPackage(shared_ptr<BuySessionPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return buySessionPackageWithOptions(request, runtime);
}

CreateAccessPageResponse Alibabacloud_Appstream-center20210901::Client::createAccessPageWithOptions(shared_ptr<CreateAccessPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageName)) {
    query->insert(pair<string, string>("AccessPageName", *request->accessPageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudEnvId)) {
    query->insert(pair<string, string>("CloudEnvId", *request->cloudEnvId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->effectTime)) {
    query->insert(pair<string, long>("EffectTime", *request->effectTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectName)) {
    query->insert(pair<string, string>("ProjectName", *request->projectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    query->insert(pair<string, string>("Unit", *request->unit));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAccessPage"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAccessPageResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAccessPageResponse(execute(params, req, runtime));
  }
}

CreateAccessPageResponse Alibabacloud_Appstream-center20210901::Client::createAccessPage(shared_ptr<CreateAccessPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAccessPageWithOptions(request, runtime);
}

CreateAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createAppInstanceGroupWithOptions(shared_ptr<CreateAppInstanceGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppInstanceGroupShrinkRequest> request = make_shared<CreateAppInstanceGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestNetwork>(tmpReq->network)) {
    request->networkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->network, make_shared<string>("Network"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestNodePool>(tmpReq->nodePool)) {
    request->nodePoolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePool, make_shared<string>("NodePool"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestRuntimePolicy>(tmpReq->runtimePolicy)) {
    request->runtimePolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runtimePolicy, make_shared<string>("RuntimePolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestSecurityPolicy>(tmpReq->securityPolicy)) {
    request->securityPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityPolicy, make_shared<string>("SecurityPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestStoragePolicy>(tmpReq->storagePolicy)) {
    request->storagePolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->storagePolicy, make_shared<string>("StoragePolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestUserDefinePolicy>(tmpReq->userDefinePolicy)) {
    request->userDefinePolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userDefinePolicy, make_shared<string>("UserDefinePolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestUserInfo>(tmpReq->userInfo)) {
    request->userInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userInfo, make_shared<string>("UserInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateAppInstanceGroupRequestVideoPolicy>(tmpReq->videoPolicy)) {
    request->videoPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoPolicy, make_shared<string>("VideoPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userDefinePolicyShrink)) {
    query->insert(pair<string, string>("UserDefinePolicy", *request->userDefinePolicyShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    body->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    body->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appPackageType)) {
    body->insert(pair<string, string>("AppPackageType", *request->appPackageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appPolicyId)) {
    body->insert(pair<string, string>("AppPolicyId", *request->appPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authMode)) {
    body->insert(pair<string, string>("AuthMode", *request->authMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    body->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    body->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeResourceMode)) {
    body->insert(pair<string, string>("ChargeResourceMode", *request->chargeResourceMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    body->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clusterId)) {
    body->insert(pair<string, string>("ClusterId", *request->clusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkShrink)) {
    body->insert(pair<string, string>("Network", *request->networkShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolShrink)) {
    body->insert(pair<string, string>("NodePool", *request->nodePoolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    body->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preOpenAppId)) {
    body->insert(pair<string, string>("PreOpenAppId", *request->preOpenAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    body->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimePolicyShrink)) {
    body->insert(pair<string, string>("RuntimePolicy", *request->runtimePolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyShrink)) {
    body->insert(pair<string, string>("SecurityPolicy", *request->securityPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    body->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storagePolicyShrink)) {
    body->insert(pair<string, string>("StoragePolicy", *request->storagePolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subPayType)) {
    body->insert(pair<string, string>("SubPayType", *request->subPayType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userInfoShrink)) {
    body->insert(pair<string, string>("UserInfo", *request->userInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    body->insert(pair<string, vector<string>>("Users", *request->users));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoPolicyShrink)) {
    body->insert(pair<string, string>("VideoPolicy", *request->videoPolicyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

CreateAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createAppInstanceGroup(shared_ptr<CreateAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppInstanceGroupWithOptions(request, runtime);
}

CreateImageFromAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createImageFromAppInstanceGroupWithOptions(shared_ptr<CreateImageFromAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageName)) {
    body->insert(pair<string, string>("AppCenterImageName", *request->appCenterImageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageFromAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateImageFromAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateImageFromAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

CreateImageFromAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::createImageFromAppInstanceGroup(shared_ptr<CreateImageFromAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageFromAppInstanceGroupWithOptions(request, runtime);
}

DeleteAccessPageResponse Alibabacloud_Appstream-center20210901::Client::deleteAccessPageWithOptions(shared_ptr<DeleteAccessPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageId)) {
    query->insert(pair<string, string>("AccessPageId", *request->accessPageId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAccessPage"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAccessPageResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAccessPageResponse(execute(params, req, runtime));
  }
}

DeleteAccessPageResponse Alibabacloud_Appstream-center20210901::Client::deleteAccessPage(shared_ptr<DeleteAccessPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAccessPageWithOptions(request, runtime);
}

DeleteAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstanceGroupWithOptions(shared_ptr<DeleteAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

DeleteAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstanceGroup(shared_ptr<DeleteAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInstanceGroupWithOptions(request, runtime);
}

DeleteAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstancesWithOptions(shared_ptr<DeleteAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceIds)) {
    body->insert(pair<string, vector<string>>("AppInstanceIds", *request->appInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppInstances"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAppInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAppInstancesResponse(execute(params, req, runtime));
  }
}

DeleteAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::deleteAppInstances(shared_ptr<DeleteAppInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppInstancesWithOptions(request, runtime);
}

GetAccessPageSessionResponse Alibabacloud_Appstream-center20210901::Client::getAccessPageSessionWithOptions(shared_ptr<GetAccessPageSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageId)) {
    query->insert(pair<string, string>("AccessPageId", *request->accessPageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageToken)) {
    query->insert(pair<string, string>("AccessPageToken", *request->accessPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->externalUserId)) {
    query->insert(pair<string, string>("ExternalUserId", *request->externalUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccessPageSession"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAccessPageSessionResponse(callApi(params, req, runtime));
  }
  else {
    return GetAccessPageSessionResponse(execute(params, req, runtime));
  }
}

GetAccessPageSessionResponse Alibabacloud_Appstream-center20210901::Client::getAccessPageSession(shared_ptr<GetAccessPageSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccessPageSessionWithOptions(request, runtime);
}

GetAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::getAppInstanceGroupWithOptions(shared_ptr<GetAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

GetAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::getAppInstanceGroup(shared_ptr<GetAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAppInstanceGroupWithOptions(request, runtime);
}

GetConnectionTicketResponse Alibabacloud_Appstream-center20210901::Client::getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceGroupIdList)) {
    body->insert(pair<string, vector<string>>("AppInstanceGroupIdList", *request->appInstanceGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    body->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstancePersistentId)) {
    body->insert(pair<string, string>("AppInstancePersistentId", *request->appInstancePersistentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appStartParam)) {
    body->insert(pair<string, string>("AppStartParam", *request->appStartParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    body->insert(pair<string, string>("AppVersion", *request->appVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnectionTicket"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetConnectionTicketResponse(callApi(params, req, runtime));
  }
  else {
    return GetConnectionTicketResponse(execute(params, req, runtime));
  }
}

GetConnectionTicketResponse Alibabacloud_Appstream-center20210901::Client::getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionTicketWithOptions(request, runtime);
}

GetDebugAppInstanceResponse Alibabacloud_Appstream-center20210901::Client::getDebugAppInstanceWithOptions(shared_ptr<GetDebugAppInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDebugAppInstance"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDebugAppInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return GetDebugAppInstanceResponse(execute(params, req, runtime));
  }
}

GetDebugAppInstanceResponse Alibabacloud_Appstream-center20210901::Client::getDebugAppInstance(shared_ptr<GetDebugAppInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDebugAppInstanceWithOptions(request, runtime);
}

GetOtaTaskByTaskIdResponse Alibabacloud_Appstream-center20210901::Client::getOtaTaskByTaskIdWithOptions(shared_ptr<GetOtaTaskByTaskIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOtaTaskByTaskId"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOtaTaskByTaskIdResponse(callApi(params, req, runtime));
  }
  else {
    return GetOtaTaskByTaskIdResponse(execute(params, req, runtime));
  }
}

GetOtaTaskByTaskIdResponse Alibabacloud_Appstream-center20210901::Client::getOtaTaskByTaskId(shared_ptr<GetOtaTaskByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOtaTaskByTaskIdWithOptions(request, runtime);
}

GetResourcePriceResponse Alibabacloud_Appstream-center20210901::Client::getResourcePriceWithOptions(shared_ptr<GetResourcePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->amount)) {
    query->insert(pair<string, long>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceType)) {
    query->insert(pair<string, string>("AppInstanceType", *request->appInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceType)) {
    query->insert(pair<string, string>("NodeInstanceType", *request->nodeInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourcePrice"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourcePriceResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourcePriceResponse(execute(params, req, runtime));
  }
}

GetResourcePriceResponse Alibabacloud_Appstream-center20210901::Client::getResourcePrice(shared_ptr<GetResourcePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePriceWithOptions(request, runtime);
}

GetResourceRenewPriceResponse Alibabacloud_Appstream-center20210901::Client::getResourceRenewPriceWithOptions(shared_ptr<GetResourceRenewPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceRenewPrice"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetResourceRenewPriceResponse(callApi(params, req, runtime));
  }
  else {
    return GetResourceRenewPriceResponse(execute(params, req, runtime));
  }
}

GetResourceRenewPriceResponse Alibabacloud_Appstream-center20210901::Client::getResourceRenewPrice(shared_ptr<GetResourceRenewPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceRenewPriceWithOptions(request, runtime);
}

ListAccessPagesResponse Alibabacloud_Appstream-center20210901::Client::listAccessPagesWithOptions(shared_ptr<ListAccessPagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageId)) {
    query->insert(pair<string, string>("AccessPageId", *request->accessPageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessPageName)) {
    query->insert(pair<string, string>("AccessPageName", *request->accessPageName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAccessPages"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAccessPagesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAccessPagesResponse(execute(params, req, runtime));
  }
}

ListAccessPagesResponse Alibabacloud_Appstream-center20210901::Client::listAccessPages(shared_ptr<ListAccessPagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAccessPagesWithOptions(request, runtime);
}

ListAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::listAppInstanceGroupWithOptions(shared_ptr<ListAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    query->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    query->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceType)) {
    query->insert(pair<string, string>("NodeInstanceType", *request->nodeInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->officeSiteId)) {
    query->insert(pair<string, string>("OfficeSiteId", *request->officeSiteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    body->insert(pair<string, vector<string>>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return ListAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

ListAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::listAppInstanceGroup(shared_ptr<ListAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInstanceGroupWithOptions(request, runtime);
}

ListAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::listAppInstancesWithOptions(shared_ptr<ListAppInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeDeleted)) {
    query->insert(pair<string, bool>("IncludeDeleted", *request->includeDeleted));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userIdList)) {
    query->insert(pair<string, vector<string>>("UserIdList", *request->userIdList));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceIdList)) {
    body->insert(pair<string, vector<string>>("AppInstanceIdList", *request->appInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->status)) {
    body->insert(pair<string, vector<string>>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAppInstances"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAppInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAppInstancesResponse(execute(params, req, runtime));
  }
}

ListAppInstancesResponse Alibabacloud_Appstream-center20210901::Client::listAppInstances(shared_ptr<ListAppInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAppInstancesWithOptions(request, runtime);
}

ListBindInfoResponse Alibabacloud_Appstream-center20210901::Client::listBindInfoWithOptions(shared_ptr<ListBindInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appIdList)) {
    body->insert(pair<string, vector<string>>("AppIdList", *request->appIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceGroupIdList)) {
    body->insert(pair<string, vector<string>>("AppInstanceGroupIdList", *request->appInstanceGroupIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->appInstanceIdList)) {
    body->insert(pair<string, vector<string>>("AppInstanceIdList", *request->appInstanceIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userIdList)) {
    body->insert(pair<string, vector<string>>("UserIdList", *request->userIdList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->wyIdList)) {
    body->insert(pair<string, vector<string>>("WyIdList", *request->wyIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBindInfo"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBindInfoResponse(callApi(params, req, runtime));
  }
  else {
    return ListBindInfoResponse(execute(params, req, runtime));
  }
}

ListBindInfoResponse Alibabacloud_Appstream-center20210901::Client::listBindInfo(shared_ptr<ListBindInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBindInfoWithOptions(request, runtime);
}

ListNodeInstanceTypeResponse Alibabacloud_Appstream-center20210901::Client::listNodeInstanceTypeWithOptions(shared_ptr<ListNodeInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->cpu)) {
    query->insert(pair<string, double>("Cpu", *request->cpu));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->gpu)) {
    query->insert(pair<string, double>("Gpu", *request->gpu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->gpuMemory)) {
    query->insert(pair<string, long>("GpuMemory", *request->gpuMemory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memory)) {
    query->insert(pair<string, long>("Memory", *request->memory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceType)) {
    query->insert(pair<string, string>("NodeInstanceType", *request->nodeInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeInstanceTypeFamily)) {
    query->insert(pair<string, string>("NodeInstanceTypeFamily", *request->nodeInstanceTypeFamily));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osType)) {
    query->insert(pair<string, string>("OsType", *request->osType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodeInstanceType"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListNodeInstanceTypeResponse(callApi(params, req, runtime));
  }
  else {
    return ListNodeInstanceTypeResponse(execute(params, req, runtime));
  }
}

ListNodeInstanceTypeResponse Alibabacloud_Appstream-center20210901::Client::listNodeInstanceType(shared_ptr<ListNodeInstanceTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodeInstanceTypeWithOptions(request, runtime);
}

ListNodesResponse Alibabacloud_Appstream-center20210901::Client::listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNodes"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListNodesResponse(callApi(params, req, runtime));
  }
  else {
    return ListNodesResponse(execute(params, req, runtime));
  }
}

ListNodesResponse Alibabacloud_Appstream-center20210901::Client::listNodes(shared_ptr<ListNodesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNodesWithOptions(request, runtime);
}

ListOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::listOtaTaskWithOptions(shared_ptr<ListOtaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otaType)) {
    body->insert(pair<string, string>("OtaType", *request->otaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOtaTask"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOtaTaskResponse(callApi(params, req, runtime));
  }
  else {
    return ListOtaTaskResponse(execute(params, req, runtime));
  }
}

ListOtaTaskResponse Alibabacloud_Appstream-center20210901::Client::listOtaTask(shared_ptr<ListOtaTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOtaTaskWithOptions(request, runtime);
}

ListRegionsResponse Alibabacloud_Appstream-center20210901::Client::listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizSource)) {
    query->insert(pair<string, string>("BizSource", *request->bizSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRegions"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRegionsResponse(execute(params, req, runtime));
  }
}

ListRegionsResponse Alibabacloud_Appstream-center20210901::Client::listRegions(shared_ptr<ListRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRegionsWithOptions(request, runtime);
}

ListSessionPackagesResponse Alibabacloud_Appstream-center20210901::Client::listSessionPackagesWithOptions(shared_ptr<ListSessionPackagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPackageId)) {
    query->insert(pair<string, string>("SessionPackageId", *request->sessionPackageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionPackageName)) {
    query->insert(pair<string, string>("SessionPackageName", *request->sessionPackageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->stateList)) {
    query->insert(pair<string, vector<long>>("StateList", *request->stateList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSessionPackages"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSessionPackagesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSessionPackagesResponse(execute(params, req, runtime));
  }
}

ListSessionPackagesResponse Alibabacloud_Appstream-center20210901::Client::listSessionPackages(shared_ptr<ListSessionPackagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSessionPackagesWithOptions(request, runtime);
}

ListTagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::listTagCloudResourcesWithOptions(shared_ptr<ListTagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    body->insert(pair<string, string>("Scope", *request->scope));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagCloudResources"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagCloudResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagCloudResourcesResponse(execute(params, req, runtime));
  }
}

ListTagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::listTagCloudResources(shared_ptr<ListTagCloudResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagCloudResourcesWithOptions(request, runtime);
}

ListTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::listTenantConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTenantConfig"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTenantConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ListTenantConfigResponse(execute(params, req, runtime));
  }
}

ListTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::listTenantConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTenantConfigWithOptions(runtime);
}

LogOffAllSessionsInAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::logOffAllSessionsInAppInstanceGroupWithOptions(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LogOffAllSessionsInAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return LogOffAllSessionsInAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return LogOffAllSessionsInAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

LogOffAllSessionsInAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::logOffAllSessionsInAppInstanceGroup(shared_ptr<LogOffAllSessionsInAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return logOffAllSessionsInAppInstanceGroupWithOptions(request, runtime);
}

ModifyAppInstanceGroupAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyAppInstanceGroupAttributeWithOptions(shared_ptr<ModifyAppInstanceGroupAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAppInstanceGroupAttributeShrinkRequest> request = make_shared<ModifyAppInstanceGroupAttributeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyAppInstanceGroupAttributeRequestNetwork>(tmpReq->network)) {
    request->networkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->network, make_shared<string>("Network"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAppInstanceGroupAttributeRequestNodePool>(tmpReq->nodePool)) {
    request->nodePoolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePool, make_shared<string>("NodePool"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAppInstanceGroupAttributeRequestSecurityPolicy>(tmpReq->securityPolicy)) {
    request->securityPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityPolicy, make_shared<string>("SecurityPolicy"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<ModifyAppInstanceGroupAttributeRequestStoragePolicy>(tmpReq->storagePolicy)) {
    request->storagePolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->storagePolicy, make_shared<string>("StoragePolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupName)) {
    query->insert(pair<string, string>("AppInstanceGroupName", *request->appInstanceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolShrink)) {
    query->insert(pair<string, string>("NodePool", *request->nodePoolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sessionTimeout)) {
    query->insert(pair<string, long>("SessionTimeout", *request->sessionTimeout));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->networkShrink)) {
    body->insert(pair<string, string>("Network", *request->networkShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->perSessionPerApp)) {
    body->insert(pair<string, bool>("PerSessionPerApp", *request->perSessionPerApp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preOpenAppId)) {
    body->insert(pair<string, string>("PreOpenAppId", *request->preOpenAppId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preOpenMode)) {
    body->insert(pair<string, string>("PreOpenMode", *request->preOpenMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityPolicyShrink)) {
    body->insert(pair<string, string>("SecurityPolicy", *request->securityPolicyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storagePolicyShrink)) {
    body->insert(pair<string, string>("StoragePolicy", *request->storagePolicyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppInstanceGroupAttribute"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAppInstanceGroupAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAppInstanceGroupAttributeResponse(execute(params, req, runtime));
  }
}

ModifyAppInstanceGroupAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyAppInstanceGroupAttribute(shared_ptr<ModifyAppInstanceGroupAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppInstanceGroupAttributeWithOptions(request, runtime);
}

ModifyAppPolicyResponse Alibabacloud_Appstream-center20210901::Client::modifyAppPolicyWithOptions(shared_ptr<ModifyAppPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAppPolicyShrinkRequest> request = make_shared<ModifyAppPolicyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyAppPolicyRequestVideoPolicy>(tmpReq->videoPolicy)) {
    request->videoPolicyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoPolicy, make_shared<string>("VideoPolicy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appPolicyId)) {
    query->insert(pair<string, string>("AppPolicyId", *request->appPolicyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoPolicyShrink)) {
    query->insert(pair<string, string>("VideoPolicy", *request->videoPolicyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppPolicy"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyAppPolicyResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyAppPolicyResponse(execute(params, req, runtime));
  }
}

ModifyAppPolicyResponse Alibabacloud_Appstream-center20210901::Client::modifyAppPolicy(shared_ptr<ModifyAppPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppPolicyWithOptions(request, runtime);
}

ModifyNodePoolAmountResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAmountWithOptions(shared_ptr<ModifyNodePoolAmountRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyNodePoolAmountShrinkRequest> request = make_shared<ModifyNodePoolAmountShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyNodePoolAmountRequestNodePool>(tmpReq->nodePool)) {
    request->nodePoolShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePool, make_shared<string>("NodePool"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolShrink)) {
    body->insert(pair<string, string>("NodePool", *request->nodePoolShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodePoolAmount"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyNodePoolAmountResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyNodePoolAmountResponse(execute(params, req, runtime));
  }
}

ModifyNodePoolAmountResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAmount(shared_ptr<ModifyNodePoolAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNodePoolAmountWithOptions(request, runtime);
}

ModifyNodePoolAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAttributeWithOptions(shared_ptr<ModifyNodePoolAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyNodePoolAttributeShrinkRequest> request = make_shared<ModifyNodePoolAttributeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyNodePoolAttributeRequestNodePoolStrategy>(tmpReq->nodePoolStrategy)) {
    request->nodePoolStrategyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->nodePoolStrategy, make_shared<string>("NodePoolStrategy"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    body->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeCapacity)) {
    body->insert(pair<string, long>("NodeCapacity", *request->nodeCapacity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodePoolStrategyShrink)) {
    body->insert(pair<string, string>("NodePoolStrategy", *request->nodePoolStrategyShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolId)) {
    body->insert(pair<string, string>("PoolId", *request->poolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyNodePoolAttribute"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyNodePoolAttributeResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyNodePoolAttributeResponse(execute(params, req, runtime));
  }
}

ModifyNodePoolAttributeResponse Alibabacloud_Appstream-center20210901::Client::modifyNodePoolAttribute(shared_ptr<ModifyNodePoolAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyNodePoolAttributeWithOptions(request, runtime);
}

ModifyTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::modifyTenantConfigWithOptions(shared_ptr<ModifyTenantConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appInstanceGroupExpireRemind)) {
    body->insert(pair<string, bool>("AppInstanceGroupExpireRemind", *request->appInstanceGroupExpireRemind));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTenantConfig"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyTenantConfigResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyTenantConfigResponse(execute(params, req, runtime));
  }
}

ModifyTenantConfigResponse Alibabacloud_Appstream-center20210901::Client::modifyTenantConfig(shared_ptr<ModifyTenantConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTenantConfigWithOptions(request, runtime);
}

PageListAppInstanceGroupUserResponse Alibabacloud_Appstream-center20210901::Client::pageListAppInstanceGroupUserWithOptions(shared_ptr<PageListAppInstanceGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageListAppInstanceGroupUser"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PageListAppInstanceGroupUserResponse(callApi(params, req, runtime));
  }
  else {
    return PageListAppInstanceGroupUserResponse(execute(params, req, runtime));
  }
}

PageListAppInstanceGroupUserResponse Alibabacloud_Appstream-center20210901::Client::pageListAppInstanceGroupUser(shared_ptr<PageListAppInstanceGroupUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageListAppInstanceGroupUserWithOptions(request, runtime);
}

RenewAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::renewAppInstanceGroupWithOptions(shared_ptr<RenewAppInstanceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodUnit)) {
    query->insert(pair<string, string>("PeriodUnit", *request->periodUnit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promotionId)) {
    query->insert(pair<string, string>("PromotionId", *request->promotionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewAppInstanceGroup"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RenewAppInstanceGroupResponse(callApi(params, req, runtime));
  }
  else {
    return RenewAppInstanceGroupResponse(execute(params, req, runtime));
  }
}

RenewAppInstanceGroupResponse Alibabacloud_Appstream-center20210901::Client::renewAppInstanceGroup(shared_ptr<RenewAppInstanceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewAppInstanceGroupWithOptions(request, runtime);
}

TagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::tagCloudResourcesWithOptions(shared_ptr<TagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagCloudResourcesRequestTags>>(request->tags)) {
    body->insert(pair<string, vector<TagCloudResourcesRequestTags>>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagCloudResources"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TagCloudResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return TagCloudResourcesResponse(execute(params, req, runtime));
  }
}

TagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::tagCloudResources(shared_ptr<TagCloudResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagCloudResourcesWithOptions(request, runtime);
}

UnbindResponse Alibabacloud_Appstream-center20210901::Client::unbindWithOptions(shared_ptr<UnbindRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    body->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    body->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstancePersistentId)) {
    body->insert(pair<string, string>("AppInstancePersistentId", *request->appInstancePersistentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endUserId)) {
    body->insert(pair<string, string>("EndUserId", *request->endUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    body->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Unbind"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UnbindResponse(callApi(params, req, runtime));
  }
  else {
    return UnbindResponse(execute(params, req, runtime));
  }
}

UnbindResponse Alibabacloud_Appstream-center20210901::Client::unbind(shared_ptr<UnbindRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindWithOptions(request, runtime);
}

UntagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::untagCloudResourcesWithOptions(shared_ptr<UntagCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceIds)) {
    body->insert(pair<string, vector<string>>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    body->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKeys)) {
    body->insert(pair<string, vector<string>>("TagKeys", *request->tagKeys));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagCloudResources"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagCloudResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagCloudResourcesResponse(execute(params, req, runtime));
  }
}

UntagCloudResourcesResponse Alibabacloud_Appstream-center20210901::Client::untagCloudResources(shared_ptr<UntagCloudResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagCloudResourcesWithOptions(request, runtime);
}

UpdateAppInstanceGroupImageResponse Alibabacloud_Appstream-center20210901::Client::updateAppInstanceGroupImageWithOptions(shared_ptr<UpdateAppInstanceGroupImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCenterImageId)) {
    query->insert(pair<string, string>("AppCenterImageId", *request->appCenterImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceGroupId)) {
    query->insert(pair<string, string>("AppInstanceGroupId", *request->appInstanceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizRegionId)) {
    query->insert(pair<string, string>("BizRegionId", *request->bizRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAppInstanceGroupImage"))},
    {"version", boost::any(string("2021-09-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAppInstanceGroupImageResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAppInstanceGroupImageResponse(execute(params, req, runtime));
  }
}

UpdateAppInstanceGroupImageResponse Alibabacloud_Appstream-center20210901::Client::updateAppInstanceGroupImage(shared_ptr<UpdateAppInstanceGroupImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppInstanceGroupImageWithOptions(request, runtime);
}

