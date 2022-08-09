// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkcard_20210520.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Linkcard20210520;

Alibabacloud_Linkcard20210520::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkcard"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkcard20210520::Client::getEndpoint(shared_ptr<string> productId,
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

AddDirectionalCardResponse Alibabacloud_Linkcard20210520::Client::addDirectionalCardWithOptions(shared_ptr<AddDirectionalCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddDirectionalCardShrinkRequest> request = make_shared<AddDirectionalCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->orderList)) {
    request->orderListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderList, make_shared<string>("OrderList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagList)) {
    request->tagListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagList, make_shared<string>("TagList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileUri)) {
    query->insert(pair<string, string>("FileUri", *request->fileUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderListShrink)) {
    query->insert(pair<string, string>("OrderList", *request->orderListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagListShrink)) {
    query->insert(pair<string, string>("TagList", *request->tagListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadMethod)) {
    query->insert(pair<string, string>("UploadMethod", *request->uploadMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDirectionalCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDirectionalCardResponse(callApi(params, req, runtime));
}

AddDirectionalCardResponse Alibabacloud_Linkcard20210520::Client::addDirectionalCard(shared_ptr<AddDirectionalCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDirectionalCardWithOptions(request, runtime);
}

AddDirectionalGroupResponse Alibabacloud_Linkcard20210520::Client::addDirectionalGroupWithOptions(shared_ptr<AddDirectionalGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDirectionalGroup"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDirectionalGroupResponse(callApi(params, req, runtime));
}

AddDirectionalGroupResponse Alibabacloud_Linkcard20210520::Client::addDirectionalGroup(shared_ptr<AddDirectionalGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDirectionalGroupWithOptions(request, runtime);
}

BatchAddDirectionalAddressResponse Alibabacloud_Linkcard20210520::Client::batchAddDirectionalAddressWithOptions(shared_ptr<BatchAddDirectionalAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressType)) {
    query->insert(pair<string, string>("AddressType", *request->addressType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    query->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->listAddress)) {
    query->insert(pair<string, vector<string>>("ListAddress", *request->listAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddDirectionalAddress"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddDirectionalAddressResponse(callApi(params, req, runtime));
}

BatchAddDirectionalAddressResponse Alibabacloud_Linkcard20210520::Client::batchAddDirectionalAddress(shared_ptr<BatchAddDirectionalAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDirectionalAddressWithOptions(request, runtime);
}

CardStatisticsResponse Alibabacloud_Linkcard20210520::Client::cardStatisticsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CardStatistics"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CardStatisticsResponse(callApi(params, req, runtime));
}

CardStatisticsResponse Alibabacloud_Linkcard20210520::Client::cardStatistics() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cardStatisticsWithOptions(runtime);
}

ForceActivationResponse Alibabacloud_Linkcard20210520::Client::forceActivationWithOptions(shared_ptr<ForceActivationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dateType)) {
    query->insert(pair<string, string>("DateType", *request->dateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForceActivation"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForceActivationResponse(callApi(params, req, runtime));
}

ForceActivationResponse Alibabacloud_Linkcard20210520::Client::forceActivation(shared_ptr<ForceActivationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forceActivationWithOptions(request, runtime);
}

GetCardDetailResponse Alibabacloud_Linkcard20210520::Client::getCardDetailWithOptions(shared_ptr<GetCardDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->destroyCard)) {
    query->insert(pair<string, bool>("DestroyCard", *request->destroyCard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showPsim)) {
    query->insert(pair<string, bool>("ShowPsim", *request->showPsim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardDetail"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardDetailResponse(callApi(params, req, runtime));
}

GetCardDetailResponse Alibabacloud_Linkcard20210520::Client::getCardDetail(shared_ptr<GetCardDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardDetailWithOptions(request, runtime);
}

GetCardFlowInfoResponse Alibabacloud_Linkcard20210520::Client::getCardFlowInfoWithOptions(shared_ptr<GetCardFlowInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dateList)) {
    query->insert(pair<string, vector<string>>("DateList", *request->dateList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCardFlowInfo"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCardFlowInfoResponse(callApi(params, req, runtime));
}

GetCardFlowInfoResponse Alibabacloud_Linkcard20210520::Client::getCardFlowInfo(shared_ptr<GetCardFlowInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCardFlowInfoWithOptions(request, runtime);
}

GetCredentialPoolStatisticsResponse Alibabacloud_Linkcard20210520::Client::getCredentialPoolStatisticsWithOptions(shared_ptr<GetCredentialPoolStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialNO)) {
    query->insert(pair<string, string>("CredentialNO", *request->credentialNO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("Date", *request->date));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCredentialPoolStatistics"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCredentialPoolStatisticsResponse(callApi(params, req, runtime));
}

GetCredentialPoolStatisticsResponse Alibabacloud_Linkcard20210520::Client::getCredentialPoolStatistics(shared_ptr<GetCredentialPoolStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCredentialPoolStatisticsWithOptions(request, runtime);
}

ListCardInfoResponse Alibabacloud_Linkcard20210520::Client::listCardInfoWithOptions(shared_ptr<ListCardInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->activeTimeEnd)) {
    query->insert(pair<string, string>("ActiveTimeEnd", *request->activeTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->activeTimeStart)) {
    query->insert(pair<string, string>("ActiveTimeStart", *request->activeTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliFee)) {
    query->insert(pair<string, string>("AliFee", *request->aliFee));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunOrderId)) {
    query->insert(pair<string, string>("AliyunOrderId", *request->aliyunOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apnName)) {
    query->insert(pair<string, string>("ApnName", *request->apnName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyType)) {
    query->insert(pair<string, string>("CertifyType", *request->certifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credentialNo)) {
    query->insert(pair<string, string>("CredentialNo", *request->credentialNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataLevel)) {
    query->insert(pair<string, string>("DataLevel", *request->dataLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->directionalGroupId)) {
    query->insert(pair<string, string>("DirectionalGroupId", *request->directionalGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTimeEnd)) {
    query->insert(pair<string, string>("ExpireTimeEnd", *request->expireTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTimeStart)) {
    query->insert(pair<string, string>("ExpireTimeStart", *request->expireTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imsi)) {
    query->insert(pair<string, string>("Imsi", *request->imsi));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAutoRecharge)) {
    query->insert(pair<string, bool>("IsAutoRecharge", *request->isAutoRecharge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxFlow)) {
    query->insert(pair<string, string>("MaxFlow", *request->maxFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->minFlow)) {
    query->insert(pair<string, string>("MinFlow", *request->minFlow));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msisdn)) {
    query->insert(pair<string, string>("Msisdn", *request->msisdn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyId)) {
    query->insert(pair<string, string>("NotifyId", *request->notifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->osStatus)) {
    query->insert(pair<string, string>("OsStatus", *request->osStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->poolId)) {
    query->insert(pair<string, string>("PoolId", *request->poolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->simType)) {
    query->insert(pair<string, string>("SimType", *request->simType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vendor)) {
    query->insert(pair<string, string>("Vendor", *request->vendor));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCardInfo"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCardInfoResponse(callApi(params, req, runtime));
}

ListCardInfoResponse Alibabacloud_Linkcard20210520::Client::listCardInfo(shared_ptr<ListCardInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCardInfoWithOptions(request, runtime);
}

ListDirectionalAddressResponse Alibabacloud_Linkcard20210520::Client::listDirectionalAddressWithOptions(shared_ptr<ListDirectionalAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDirectionalAddress"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDirectionalAddressResponse(callApi(params, req, runtime));
}

ListDirectionalAddressResponse Alibabacloud_Linkcard20210520::Client::listDirectionalAddress(shared_ptr<ListDirectionalAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectionalAddressWithOptions(request, runtime);
}

ListDirectionalDetailResponse Alibabacloud_Linkcard20210520::Client::listDirectionalDetailWithOptions(shared_ptr<ListDirectionalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDirectionalDetail"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDirectionalDetailResponse(callApi(params, req, runtime));
}

ListDirectionalDetailResponse Alibabacloud_Linkcard20210520::Client::listDirectionalDetail(shared_ptr<ListDirectionalDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDirectionalDetailWithOptions(request, runtime);
}

ListOrderResponse Alibabacloud_Linkcard20210520::Client::listOrderWithOptions(shared_ptr<ListOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderStatus)) {
    query->insert(pair<string, string>("OrderStatus", *request->orderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOrder"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOrderResponse(callApi(params, req, runtime));
}

ListOrderResponse Alibabacloud_Linkcard20210520::Client::listOrder(shared_ptr<ListOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOrderWithOptions(request, runtime);
}

RebindResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::rebindResumeSingleCardWithOptions(shared_ptr<RebindResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RebindResumeSingleCardShrinkRequest> request = make_shared<RebindResumeSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebindResumeSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RebindResumeSingleCardResponse(callApi(params, req, runtime));
}

RebindResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::rebindResumeSingleCard(shared_ptr<RebindResumeSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebindResumeSingleCardWithOptions(request, runtime);
}

RenewResponse Alibabacloud_Linkcard20210520::Client::renewWithOptions(shared_ptr<RenewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->buyNum)) {
    query->insert(pair<string, long>("BuyNum", *request->buyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->offerCode)) {
    query->insert(pair<string, string>("OfferCode", *request->offerCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rechargeType)) {
    query->insert(pair<string, string>("RechargeType", *request->rechargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serialNo)) {
    query->insert(pair<string, string>("SerialNo", *request->serialNo));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiProduct)) {
    body->insert(pair<string, string>("ApiProduct", *request->apiProduct));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiRevision)) {
    body->insert(pair<string, string>("ApiRevision", *request->apiRevision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Renew"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewResponse(callApi(params, req, runtime));
}

RenewResponse Alibabacloud_Linkcard20210520::Client::renew(shared_ptr<RenewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewWithOptions(request, runtime);
}

ResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::resumeSingleCardWithOptions(shared_ptr<ResumeSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ResumeSingleCardShrinkRequest> request = make_shared<ResumeSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeSingleCardResponse(callApi(params, req, runtime));
}

ResumeSingleCardResponse Alibabacloud_Linkcard20210520::Client::resumeSingleCard(shared_ptr<ResumeSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeSingleCardWithOptions(request, runtime);
}

SetCardStopRuleResponse Alibabacloud_Linkcard20210520::Client::setCardStopRuleWithOptions(shared_ptr<SetCardStopRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRestore)) {
    query->insert(pair<string, bool>("AutoRestore", *request->autoRestore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flowLimit)) {
    query->insert(pair<string, long>("FlowLimit", *request->flowLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCardStopRule"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCardStopRuleResponse(callApi(params, req, runtime));
}

SetCardStopRuleResponse Alibabacloud_Linkcard20210520::Client::setCardStopRule(shared_ptr<SetCardStopRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCardStopRuleWithOptions(request, runtime);
}

StopSingleCardResponse Alibabacloud_Linkcard20210520::Client::stopSingleCardWithOptions(shared_ptr<StopSingleCardRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopSingleCardShrinkRequest> request = make_shared<StopSingleCardShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->optMsisdns)) {
    request->optMsisdnsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->optMsisdns, make_shared<string>("OptMsisdns"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optMsisdnsShrink)) {
    query->insert(pair<string, string>("OptMsisdns", *request->optMsisdnsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopSingleCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopSingleCardResponse(callApi(params, req, runtime));
}

StopSingleCardResponse Alibabacloud_Linkcard20210520::Client::stopSingleCard(shared_ptr<StopSingleCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopSingleCardWithOptions(request, runtime);
}

UpdateAutoRechargeSwitchResponse Alibabacloud_Linkcard20210520::Client::updateAutoRechargeSwitchWithOptions(shared_ptr<UpdateAutoRechargeSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->open)) {
    query->insert(pair<string, bool>("Open", *request->open));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutoRechargeSwitch"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutoRechargeSwitchResponse(callApi(params, req, runtime));
}

UpdateAutoRechargeSwitchResponse Alibabacloud_Linkcard20210520::Client::updateAutoRechargeSwitch(shared_ptr<UpdateAutoRechargeSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoRechargeSwitchWithOptions(request, runtime);
}

VerifyIotCardResponse Alibabacloud_Linkcard20210520::Client::verifyIotCardWithOptions(shared_ptr<VerifyIotCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iccid)) {
    query->insert(pair<string, string>("Iccid", *request->iccid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyIotCard"))},
    {"version", boost::any(string("2021-05-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyIotCardResponse(callApi(params, req, runtime));
}

VerifyIotCardResponse Alibabacloud_Linkcard20210520::Client::verifyIotCard(shared_ptr<VerifyIotCardRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyIotCardWithOptions(request, runtime);
}

