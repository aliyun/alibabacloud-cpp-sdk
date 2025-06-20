// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/safe_20220117.hpp>
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

using namespace Alibabacloud_Safe20220117;

Alibabacloud_Safe20220117::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("safe"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Safe20220117::Client::getEndpoint(shared_ptr<string> productId,
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

CancelBlockResponse Alibabacloud_Safe20220117::Client::cancelBlockWithOptions(shared_ptr<CancelBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->blockId)) {
    body->insert(pair<string, long>("BlockId", *request->blockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cancelBLockDesc)) {
    body->insert(pair<string, string>("CancelBLockDesc", *request->cancelBLockDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createEmpId)) {
    body->insert(pair<string, string>("CreateEmpId", *request->createEmpId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelBlock"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelBlockResponse(callApi(params, req, runtime));
}

CancelBlockResponse Alibabacloud_Safe20220117::Client::cancelBlock(shared_ptr<CancelBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelBlockWithOptions(request, runtime);
}

ChangeCancelResponse Alibabacloud_Safe20220117::Client::changeCancelWithOptions(shared_ptr<ChangeCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeCancel"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeCancelResponse(callApi(params, req, runtime));
}

ChangeCancelResponse Alibabacloud_Safe20220117::Client::changeCancel(shared_ptr<ChangeCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeCancelWithOptions(request, runtime);
}

ChangeCheckResponse Alibabacloud_Safe20220117::Client::changeCheckWithOptions(shared_ptr<ChangeCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ChangeCheckShrinkRequest> request = make_shared<ChangeCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ChangeCheckRequestDamagedChangeNotices>>(tmpReq->damagedChangeNotices)) {
    request->damagedChangeNoticesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->damagedChangeNotices, make_shared<string>("DamagedChangeNotices"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->affectCustomer)) {
    body->insert(pair<string, string>("AffectCustomer", *request->affectCustomer));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<ChangeCheckShrinkRequestApproveFlowParam>(request->approveFlowParam)) {
    bodyFlat->insert(pair<string, ChangeCheckShrinkRequestApproveFlowParam>("ApproveFlowParam", *request->approveFlowParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<ChangeCheckShrinkRequestBgCustomTemplateExtraDTO>(request->bgCustomTemplateExtraDTO)) {
    bodyFlat->insert(pair<string, ChangeCheckShrinkRequestBgCustomTemplateExtraDTO>("BgCustomTemplateExtraDTO", *request->bgCustomTemplateExtraDTO));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgVid)) {
    body->insert(pair<string, string>("BgVid", *request->bgVid));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ChangeCheckShrinkRequestBlockInfos>>(request->blockInfos)) {
    body->insert(pair<string, vector<ChangeCheckShrinkRequestBlockInfos>>("BlockInfos", *request->blockInfos));
  }
  if (!Darabonba_Util::Client::isUnset<ChangeCheckShrinkRequestCallBackInfo>(request->callBackInfo)) {
    bodyFlat->insert(pair<string, ChangeCheckShrinkRequestCallBackInfo>("CallBackInfo", *request->callBackInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeDataType)) {
    body->insert(pair<string, string>("ChangeDataType", *request->changeDataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeDesc)) {
    body->insert(pair<string, string>("ChangeDesc", *request->changeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    body->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeEnv)) {
    body->insert(pair<string, string>("ChangeEnv", *request->changeEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeItems)) {
    body->insert(pair<string, string>("ChangeItems", *request->changeItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeObject)) {
    body->insert(pair<string, string>("ChangeObject", *request->changeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptSubType)) {
    body->insert(pair<string, string>("ChangeOptSubType", *request->changeOptSubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptType)) {
    body->insert(pair<string, string>("ChangeOptType", *request->changeOptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeReason)) {
    body->insert(pair<string, string>("ChangeReason", *request->changeReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeRmarks)) {
    body->insert(pair<string, string>("ChangeRmarks", *request->changeRmarks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSchemes)) {
    body->insert(pair<string, string>("ChangeSchemes", *request->changeSchemes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeStartTime)) {
    body->insert(pair<string, long>("ChangeStartTime", *request->changeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSubTypeDesc)) {
    body->insert(pair<string, string>("ChangeSubTypeDesc", *request->changeSubTypeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSystem)) {
    body->insert(pair<string, string>("ChangeSystem", *request->changeSystem));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ChangeCheckShrinkRequestChangeTimes>>(request->changeTimes)) {
    body->insert(pair<string, vector<ChangeCheckShrinkRequestChangeTimes>>("ChangeTimes", *request->changeTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTitle)) {
    body->insert(pair<string, string>("ChangeTitle", *request->changeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeValidation)) {
    body->insert(pair<string, string>("ChangeValidation", *request->changeValidation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->damagedChangeNoticesShrink)) {
    body->insert(pair<string, string>("DamagedChangeNotices", *request->damagedChangeNoticesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    body->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->follower)) {
    body->insert(pair<string, vector<string>>("Follower", *request->follower));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayStatus)) {
    body->insert(pair<string, string>("GrayStatus", *request->grayStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmChangeNoticeEnum)) {
    body->insert(pair<string, string>("HarmChangeNoticeEnum", *request->harmChangeNoticeEnum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidence)) {
    body->insert(pair<string, string>("Incidence", *request->incidence));
  }
  if (!Darabonba_Util::Client::isUnset<ChangeCheckShrinkRequestInfluenceInfo>(request->influenceInfo)) {
    bodyFlat->insert(pair<string, ChangeCheckShrinkRequestInfluenceInfo>("InfluenceInfo", *request->influenceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<ChangeCheckShrinkRequestInstance>(request->instance)) {
    bodyFlat->insert(pair<string, ChangeCheckShrinkRequestInstance>("Instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needModifyDoc)) {
    body->insert(pair<string, string>("NeedModifyDoc", *request->needModifyDoc));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ChangeCheckShrinkRequestProduct>>(request->product)) {
    body->insert(pair<string, vector<ChangeCheckShrinkRequestProduct>>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ChangeCheckShrinkRequestReleasePackageInfos>>(request->releasePackageInfos)) {
    body->insert(pair<string, vector<ChangeCheckShrinkRequestReleasePackageInfos>>("ReleasePackageInfos", *request->releasePackageInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reuseSourceOrderId)) {
    body->insert(pair<string, string>("ReuseSourceOrderId", *request->reuseSourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskLevel)) {
    body->insert(pair<string, string>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rollback)) {
    body->insert(pair<string, string>("Rollback", *request->rollback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    body->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    body->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteType)) {
    body->insert(pair<string, long>("WhiteType", *request->whiteType));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeCheck"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeCheckResponse(callApi(params, req, runtime));
}

ChangeCheckResponse Alibabacloud_Safe20220117::Client::changeCheck(shared_ptr<ChangeCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeCheckWithOptions(request, runtime);
}

ChangeEndResponse Alibabacloud_Safe20220117::Client::changeEndWithOptions(shared_ptr<ChangeEndRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    query->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeResult)) {
    query->insert(pair<string, string>("ChangeResult", *request->changeResult));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->curBatchNo)) {
    query->insert(pair<string, long>("CurBatchNo", *request->curBatchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    query->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalBatchNo)) {
    query->insert(pair<string, long>("TotalBatchNo", *request->totalBatchNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeEnd"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeEndResponse(callApi(params, req, runtime));
}

ChangeEndResponse Alibabacloud_Safe20220117::Client::changeEnd(shared_ptr<ChangeEndRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeEndWithOptions(request, runtime);
}

ChangeStartResponse Alibabacloud_Safe20220117::Client::changeStartWithOptions(shared_ptr<ChangeStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    query->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeObject)) {
    query->insert(pair<string, string>("ChangeObject", *request->changeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptType)) {
    query->insert(pair<string, string>("ChangeOptType", *request->changeOptType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeStartTime)) {
    query->insert(pair<string, long>("ChangeStartTime", *request->changeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTitle)) {
    query->insert(pair<string, string>("ChangeTitle", *request->changeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    query->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->curBatchNo)) {
    query->insert(pair<string, long>("CurBatchNo", *request->curBatchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    query->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalBatchNo)) {
    query->insert(pair<string, long>("TotalBatchNo", *request->totalBatchNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ChangeStart"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ChangeStartResponse(callApi(params, req, runtime));
}

ChangeStartResponse Alibabacloud_Safe20220117::Client::changeStart(shared_ptr<ChangeStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeStartWithOptions(request, runtime);
}

CreateBlockResponse Alibabacloud_Safe20220117::Client::createBlockWithOptions(shared_ptr<CreateBlockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateBlockRequestApproveStrategyNodes>>(request->approveStrategyNodes)) {
    bodyFlat->insert(pair<string, vector<CreateBlockRequestApproveStrategyNodes>>("ApproveStrategyNodes", *request->approveStrategyNodes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->blockId)) {
    body->insert(pair<string, long>("BlockId", *request->blockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->director)) {
    body->insert(pair<string, string>("Director", *request->director));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isNeedApprove)) {
    body->insert(pair<string, long>("IsNeedApprove", *request->isNeedApprove));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isRecall)) {
    body->insert(pair<string, long>("IsRecall", *request->isRecall));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isTemplate)) {
    body->insert(pair<string, long>("IsTemplate", *request->isTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelName)) {
    body->insert(pair<string, string>("LabelName", *request->labelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noticeDesc)) {
    body->insert(pair<string, string>("NoticeDesc", *request->noticeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBlockRequestNoticeEnclosureInfos>>(request->noticeEnclosureInfos)) {
    bodyFlat->insert(pair<string, vector<CreateBlockRequestNoticeEnclosureInfos>>("NoticeEnclosureInfos", *request->noticeEnclosureInfos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->noticeRequestLink)) {
    body->insert(pair<string, string>("NoticeRequestLink", *request->noticeRequestLink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeType)) {
    body->insert(pair<string, long>("NoticeType", *request->noticeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scene)) {
    body->insert(pair<string, long>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateBlockRequestScopes>>(request->scopes)) {
    bodyFlat->insert(pair<string, vector<CreateBlockRequestScopes>>("Scopes", *request->scopes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionId)) {
    body->insert(pair<string, long>("VersionId", *request->versionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("creatorEmpId", *request->creatorEmpId));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateBlock"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateBlockResponse(callApi(params, req, runtime));
}

CreateBlockResponse Alibabacloud_Safe20220117::Client::createBlock(shared_ptr<CreateBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createBlockWithOptions(request, runtime);
}

CreateMaYiBlockResponse Alibabacloud_Safe20220117::Client::createMaYiBlockWithOptions(shared_ptr<CreateMaYiBlockRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMaYiBlockShrinkRequest> request = make_shared<CreateMaYiBlockShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateMaYiBlockRequestScope>(tmpReq->scope)) {
    request->scopeShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scope, make_shared<string>("Scope"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blockId)) {
    body->insert(pair<string, string>("BlockId", *request->blockId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMaYiBlockShrinkRequestBlockTimes>>(request->blockTimes)) {
    body->insert(pair<string, vector<CreateMaYiBlockShrinkRequestBlockTimes>>("BlockTimes", *request->blockTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockType)) {
    body->insert(pair<string, string>("BlockType", *request->blockType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->director)) {
    body->insert(pair<string, vector<string>>("Director", *request->director));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faultVersion)) {
    body->insert(pair<string, string>("FaultVersion", *request->faultVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->information)) {
    body->insert(pair<string, vector<string>>("Information", *request->information));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reason)) {
    body->insert(pair<string, string>("Reason", *request->reason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeShrink)) {
    body->insert(pair<string, string>("Scope", *request->scopeShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMaYiBlock"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMaYiBlockResponse(callApi(params, req, runtime));
}

CreateMaYiBlockResponse Alibabacloud_Safe20220117::Client::createMaYiBlock(shared_ptr<CreateMaYiBlockRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMaYiBlockWithOptions(request, runtime);
}

CreateOperatorResponse Alibabacloud_Safe20220117::Client::createOperatorWithOptions(shared_ptr<CreateOperatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgObject)) {
    body->insert(pair<string, string>("BgObject", *request->bgObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgSystem)) {
    body->insert(pair<string, string>("BgSystem", *request->bgSystem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    body->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->curEmpId)) {
    body->insert(pair<string, string>("CurEmpId", *request->curEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noCheck)) {
    body->insert(pair<string, bool>("NoCheck", *request->noCheck));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->noRisk)) {
    body->insert(pair<string, bool>("NoRisk", *request->noRisk));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOperator"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOperatorResponse(callApi(params, req, runtime));
}

CreateOperatorResponse Alibabacloud_Safe20220117::Client::createOperator(shared_ptr<CreateOperatorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOperatorWithOptions(request, runtime);
}

QueryResponse Alibabacloud_Safe20220117::Client::queryWithOptions(shared_ptr<QueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needValidate)) {
    query->insert(pair<string, bool>("NeedValidate", *request->needValidate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Query"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryResponse(callApi(params, req, runtime));
}

QueryResponse Alibabacloud_Safe20220117::Client::query(shared_ptr<QueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWithOptions(request, runtime);
}

QueryApproveFlowResponse Alibabacloud_Safe20220117::Client::queryApproveFlowWithOptions(shared_ptr<QueryApproveFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stage)) {
    query->insert(pair<string, string>("Stage", *request->stage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryApproveFlow"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryApproveFlowResponse(callApi(params, req, runtime));
}

QueryApproveFlowResponse Alibabacloud_Safe20220117::Client::queryApproveFlow(shared_ptr<QueryApproveFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryApproveFlowWithOptions(request, runtime);
}

QueryBlockEventResponse Alibabacloud_Safe20220117::Client::queryBlockEventWithOptions(shared_ptr<QueryBlockEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scope)) {
    query->insert(pair<string, vector<string>>("Scope", *request->scope));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgSystemName)) {
    body->insert(pair<string, string>("BgSystemName", *request->bgSystemName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blockHarm)) {
    body->insert(pair<string, string>("BlockHarm", *request->blockHarm));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deptNo)) {
    body->insert(pair<string, string>("DeptNo", *request->deptNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needRule)) {
    body->insert(pair<string, bool>("NeedRule", *request->needRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productCodes)) {
    body->insert(pair<string, vector<string>>("ProductCodes", *request->productCodes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryBlockEventRequestRegionReqs>>(request->regionReqs)) {
    body->insert(pair<string, vector<QueryBlockEventRequestRegionReqs>>("RegionReqs", *request->regionReqs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBlockEvent"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBlockEventResponse(callApi(params, req, runtime));
}

QueryBlockEventResponse Alibabacloud_Safe20220117::Client::queryBlockEvent(shared_ptr<QueryBlockEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBlockEventWithOptions(request, runtime);
}

QueryChangeInfoResponse Alibabacloud_Safe20220117::Client::queryChangeInfoWithOptions(shared_ptr<QueryChangeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->az)) {
    body->insert(pair<string, vector<string>>("Az", *request->az));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgVid)) {
    body->insert(pair<string, string>("BgVid", *request->bgVid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buId)) {
    body->insert(pair<string, string>("BuId", *request->buId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSystem)) {
    body->insert(pair<string, string>("ChangeSystem", *request->changeSystem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<QueryChangeInfoRequestLevelTree>(request->levelTree)) {
    bodyFlat->insert(pair<string, QueryChangeInfoRequestLevelTree>("LevelTree", *request->levelTree));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->product)) {
    body->insert(pair<string, vector<string>>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->region)) {
    body->insert(pair<string, vector<string>>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryChangeInfo"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryChangeInfoResponse(callApi(params, req, runtime));
}

QueryChangeInfoResponse Alibabacloud_Safe20220117::Client::queryChangeInfo(shared_ptr<QueryChangeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryChangeInfoWithOptions(request, runtime);
}

QueryCheckInfoResponse Alibabacloud_Safe20220117::Client::queryCheckInfoWithOptions(shared_ptr<QueryCheckInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCheckInfo"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCheckInfoResponse(callApi(params, req, runtime));
}

QueryCheckInfoResponse Alibabacloud_Safe20220117::Client::queryCheckInfo(shared_ptr<QueryCheckInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCheckInfoWithOptions(request, runtime);
}

QueryCustomerResponse Alibabacloud_Safe20220117::Client::queryCustomerWithOptions(shared_ptr<QueryCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->product)) {
    body->insert(pair<string, vector<string>>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCustomer"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCustomerResponse(callApi(params, req, runtime));
}

QueryCustomerResponse Alibabacloud_Safe20220117::Client::queryCustomer(shared_ptr<QueryCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCustomerWithOptions(request, runtime);
}

QueryExecuteInfoResponse Alibabacloud_Safe20220117::Client::queryExecuteInfoWithOptions(shared_ptr<QueryExecuteInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->az)) {
    body->insert(pair<string, vector<string>>("Az", *request->az));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgVid)) {
    body->insert(pair<string, string>("BgVid", *request->bgVid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buId)) {
    body->insert(pair<string, string>("BuId", *request->buId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->exVid)) {
    body->insert(pair<string, string>("ExVid", *request->exVid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<QueryExecuteInfoRequestLevelTree>(request->levelTree)) {
    bodyFlat->insert(pair<string, QueryExecuteInfoRequestLevelTree>("LevelTree", *request->levelTree));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->product)) {
    body->insert(pair<string, vector<string>>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->region)) {
    body->insert(pair<string, vector<string>>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    body->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryExecuteInfo"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryExecuteInfoResponse(callApi(params, req, runtime));
}

QueryExecuteInfoResponse Alibabacloud_Safe20220117::Client::queryExecuteInfo(shared_ptr<QueryExecuteInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryExecuteInfoWithOptions(request, runtime);
}

QueryInnerProductInfoResponse Alibabacloud_Safe20220117::Client::queryInnerProductInfoWithOptions(shared_ptr<QueryInnerProductInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryInnerProductInfo"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryInnerProductInfoResponse(callApi(params, req, runtime));
}

QueryInnerProductInfoResponse Alibabacloud_Safe20220117::Client::queryInnerProductInfo(shared_ptr<QueryInnerProductInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInnerProductInfoWithOptions(request, runtime);
}

QueryRegionAzResponse Alibabacloud_Safe20220117::Client::queryRegionAzWithOptions(shared_ptr<QueryRegionAzRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    body->insert(pair<string, string>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRegionAz"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRegionAzResponse(callApi(params, req, runtime));
}

QueryRegionAzResponse Alibabacloud_Safe20220117::Client::queryRegionAz(shared_ptr<QueryRegionAzRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRegionAzWithOptions(request, runtime);
}

SafeChangeCancelResponse Alibabacloud_Safe20220117::Client::safeChangeCancelWithOptions(shared_ptr<SafeChangeCancelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bgVid)) {
    body->insert(pair<string, string>("BgVid", *request->bgVid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateEmpNo)) {
    body->insert(pair<string, string>("OperateEmpNo", *request->operateEmpNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeCancel"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeCancelResponse(callApi(params, req, runtime));
}

SafeChangeCancelResponse Alibabacloud_Safe20220117::Client::safeChangeCancel(shared_ptr<SafeChangeCancelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeCancelWithOptions(request, runtime);
}

SafeChangeCheckResponse Alibabacloud_Safe20220117::Client::safeChangeCheckWithOptions(shared_ptr<SafeChangeCheckRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SafeChangeCheckShrinkRequest> request = make_shared<SafeChangeCheckShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckRequestHarmNoticeCombineParam>(tmpReq->harmNoticeCombineParam)) {
    request->harmNoticeCombineParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->harmNoticeCombineParam, make_shared<string>("HarmNoticeCombineParam"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->checker)) {
    query->insert(pair<string, vector<string>>("Checker", *request->checker));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmChangeNoticeEnum)) {
    query->insert(pair<string, string>("HarmChangeNoticeEnum", *request->harmChangeNoticeEnum));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->affectCustomer)) {
    body->insert(pair<string, string>("AffectCustomer", *request->affectCustomer));
  }
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckShrinkRequestApproveFlowParam>(request->approveFlowParam)) {
    bodyFlat->insert(pair<string, SafeChangeCheckShrinkRequestApproveFlowParam>("ApproveFlowParam", *request->approveFlowParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO>(request->bgCustomTemplateExtraDTO)) {
    bodyFlat->insert(pair<string, SafeChangeCheckShrinkRequestBgCustomTemplateExtraDTO>("BgCustomTemplateExtraDTO", *request->bgCustomTemplateExtraDTO));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SafeChangeCheckShrinkRequestBlockInfos>>(request->blockInfos)) {
    body->insert(pair<string, vector<SafeChangeCheckShrinkRequestBlockInfos>>("BlockInfos", *request->blockInfos));
  }
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckShrinkRequestCallBackInfo>(request->callBackInfo)) {
    bodyFlat->insert(pair<string, SafeChangeCheckShrinkRequestCallBackInfo>("CallBackInfo", *request->callBackInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeDataType)) {
    body->insert(pair<string, string>("ChangeDataType", *request->changeDataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeDesc)) {
    body->insert(pair<string, string>("ChangeDesc", *request->changeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    body->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeEnv)) {
    body->insert(pair<string, string>("ChangeEnv", *request->changeEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeItems)) {
    body->insert(pair<string, string>("ChangeItems", *request->changeItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeObject)) {
    body->insert(pair<string, string>("ChangeObject", *request->changeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptSubType)) {
    body->insert(pair<string, string>("ChangeOptSubType", *request->changeOptSubType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptType)) {
    body->insert(pair<string, string>("ChangeOptType", *request->changeOptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeReason)) {
    body->insert(pair<string, string>("ChangeReason", *request->changeReason));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeRmarks)) {
    body->insert(pair<string, string>("ChangeRmarks", *request->changeRmarks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSchemes)) {
    body->insert(pair<string, string>("ChangeSchemes", *request->changeSchemes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeStartTime)) {
    body->insert(pair<string, long>("ChangeStartTime", *request->changeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSubTypeDesc)) {
    body->insert(pair<string, string>("ChangeSubTypeDesc", *request->changeSubTypeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeSystem)) {
    body->insert(pair<string, string>("ChangeSystem", *request->changeSystem));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SafeChangeCheckShrinkRequestChangeTimes>>(request->changeTimes)) {
    body->insert(pair<string, vector<SafeChangeCheckShrinkRequestChangeTimes>>("ChangeTimes", *request->changeTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTitle)) {
    body->insert(pair<string, string>("ChangeTitle", *request->changeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeValidation)) {
    body->insert(pair<string, string>("ChangeValidation", *request->changeValidation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SafeChangeCheckShrinkRequestDamagedChangeNotices>>(request->damagedChangeNotices)) {
    bodyFlat->insert(pair<string, vector<SafeChangeCheckShrinkRequestDamagedChangeNotices>>("DamagedChangeNotices", *request->damagedChangeNotices));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    body->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->follower)) {
    body->insert(pair<string, vector<string>>("Follower", *request->follower));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayStatus)) {
    body->insert(pair<string, string>("GrayStatus", *request->grayStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->harmNoticeCombineParamShrink)) {
    body->insert(pair<string, string>("HarmNoticeCombineParam", *request->harmNoticeCombineParamShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->incidence)) {
    body->insert(pair<string, string>("Incidence", *request->incidence));
  }
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckShrinkRequestInfluenceInfo>(request->influenceInfo)) {
    bodyFlat->insert(pair<string, SafeChangeCheckShrinkRequestInfluenceInfo>("InfluenceInfo", *request->influenceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<SafeChangeCheckShrinkRequestInstance>(request->instance)) {
    bodyFlat->insert(pair<string, SafeChangeCheckShrinkRequestInstance>("Instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->needModifyDoc)) {
    body->insert(pair<string, string>("NeedModifyDoc", *request->needModifyDoc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operateEmpNo)) {
    body->insert(pair<string, string>("OperateEmpNo", *request->operateEmpNo));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SafeChangeCheckShrinkRequestProduct>>(request->product)) {
    body->insert(pair<string, vector<SafeChangeCheckShrinkRequestProduct>>("Product", *request->product));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SafeChangeCheckShrinkRequestReleasePackageInfos>>(request->releasePackageInfos)) {
    body->insert(pair<string, vector<SafeChangeCheckShrinkRequestReleasePackageInfos>>("ReleasePackageInfos", *request->releasePackageInfos));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reuseSourceOrderId)) {
    body->insert(pair<string, string>("ReuseSourceOrderId", *request->reuseSourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskLevel)) {
    body->insert(pair<string, string>("RiskLevel", *request->riskLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rollback)) {
    body->insert(pair<string, string>("Rollback", *request->rollback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    body->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    body->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->whiteType)) {
    body->insert(pair<string, long>("whiteType", *request->whiteType));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeCheck"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeCheckResponse(callApi(params, req, runtime));
}

SafeChangeCheckResponse Alibabacloud_Safe20220117::Client::safeChangeCheck(shared_ptr<SafeChangeCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeCheckWithOptions(request, runtime);
}

SafeChangeEndResponse Alibabacloud_Safe20220117::Client::safeChangeEndWithOptions(shared_ptr<SafeChangeEndRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    body->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeResult)) {
    body->insert(pair<string, string>("ChangeResult", *request->changeResult));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->curBatchNo)) {
    body->insert(pair<string, long>("CurBatchNo", *request->curBatchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    body->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalBatchNo)) {
    body->insert(pair<string, long>("TotalBatchNo", *request->totalBatchNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeEnd"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeEndResponse(callApi(params, req, runtime));
}

SafeChangeEndResponse Alibabacloud_Safe20220117::Client::safeChangeEnd(shared_ptr<SafeChangeEndRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeEndWithOptions(request, runtime);
}

SafeChangeQueryResponse Alibabacloud_Safe20220117::Client::safeChangeQueryWithOptions(shared_ptr<SafeChangeQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->returnType)) {
    query->insert(pair<string, bool>("ReturnType", *request->returnType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needValidate)) {
    body->insert(pair<string, bool>("NeedValidate", *request->needValidate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    body->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeQuery"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeQueryResponse(callApi(params, req, runtime));
}

SafeChangeQueryResponse Alibabacloud_Safe20220117::Client::safeChangeQuery(shared_ptr<SafeChangeQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeQueryWithOptions(request, runtime);
}

SafeChangeQueryApproveFlowResponse Alibabacloud_Safe20220117::Client::safeChangeQueryApproveFlowWithOptions(shared_ptr<SafeChangeQueryApproveFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stage)) {
    body->insert(pair<string, string>("Stage", *request->stage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeQueryApproveFlow"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeQueryApproveFlowResponse(callApi(params, req, runtime));
}

SafeChangeQueryApproveFlowResponse Alibabacloud_Safe20220117::Client::safeChangeQueryApproveFlow(shared_ptr<SafeChangeQueryApproveFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeQueryApproveFlowWithOptions(request, runtime);
}

SafeChangeStartResponse Alibabacloud_Safe20220117::Client::safeChangeStartWithOptions(shared_ptr<SafeChangeStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeEndTime)) {
    body->insert(pair<string, long>("ChangeEndTime", *request->changeEndTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeObject)) {
    body->insert(pair<string, string>("ChangeObject", *request->changeObject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeOptType)) {
    body->insert(pair<string, string>("ChangeOptType", *request->changeOptType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->changeStartTime)) {
    body->insert(pair<string, long>("ChangeStartTime", *request->changeStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->changeTitle)) {
    body->insert(pair<string, string>("ChangeTitle", *request->changeTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->curBatchNo)) {
    body->insert(pair<string, long>("CurBatchNo", *request->curBatchNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->executorEmpId)) {
    body->insert(pair<string, string>("ExecutorEmpId", *request->executorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalBatchNo)) {
    body->insert(pair<string, long>("TotalBatchNo", *request->totalBatchNo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeStart"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeStartResponse(callApi(params, req, runtime));
}

SafeChangeStartResponse Alibabacloud_Safe20220117::Client::safeChangeStart(shared_ptr<SafeChangeStartRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeStartWithOptions(request, runtime);
}

SafeChangeStartApproveResponse Alibabacloud_Safe20220117::Client::safeChangeStartApproveWithOptions(shared_ptr<SafeChangeStartApproveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    body->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    body->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeChangeStartApprove"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeChangeStartApproveResponse(callApi(params, req, runtime));
}

SafeChangeStartApproveResponse Alibabacloud_Safe20220117::Client::safeChangeStartApprove(shared_ptr<SafeChangeStartApproveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeChangeStartApproveWithOptions(request, runtime);
}

SafeScopeDataResponse Alibabacloud_Safe20220117::Client::safeScopeDataWithOptions(shared_ptr<SafeScopeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeList)) {
    body->insert(pair<string, string>("CodeList", *request->codeList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->factor)) {
    body->insert(pair<string, string>("Factor", *request->factor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupBy)) {
    body->insert(pair<string, string>("GroupBy", *request->groupBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idList)) {
    body->insert(pair<string, string>("IdList", *request->idList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->item)) {
    body->insert(pair<string, string>("Item", *request->item));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needTotalCount)) {
    body->insert(pair<string, bool>("NeedTotalCount", *request->needTotalCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    body->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDirection)) {
    body->insert(pair<string, string>("OrderDirection", *request->orderDirection));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    body->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentCode)) {
    body->insert(pair<string, string>("ParentCode", *request->parentCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    body->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    body->insert(pair<string, long>("ProductId", *request->productId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionNameEn)) {
    body->insert(pair<string, string>("RegionNameEn", *request->regionNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    body->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    body->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SafeScopeData"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SafeScopeDataResponse(callApi(params, req, runtime));
}

SafeScopeDataResponse Alibabacloud_Safe20220117::Client::safeScopeData(shared_ptr<SafeScopeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return safeScopeDataWithOptions(request, runtime);
}

StartApproveResponse Alibabacloud_Safe20220117::Client::startApproveWithOptions(shared_ptr<StartApproveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    query->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorEmpId)) {
    query->insert(pair<string, string>("CreatorEmpId", *request->creatorEmpId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    query->insert(pair<string, string>("ExtraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    query->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOrderId)) {
    query->insert(pair<string, string>("SourceOrderId", *request->sourceOrderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartApprove"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartApproveResponse(callApi(params, req, runtime));
}

StartApproveResponse Alibabacloud_Safe20220117::Client::startApprove(shared_ptr<StartApproveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startApproveWithOptions(request, runtime);
}

SyncProductResponse Alibabacloud_Safe20220117::Client::syncProductWithOptions(shared_ptr<SyncProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    body->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSign)) {
    body->insert(pair<string, string>("AuthSign", *request->authSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reqTimestamp)) {
    body->insert(pair<string, long>("ReqTimestamp", *request->reqTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SyncProductRequestSyncProductList>>(request->syncProductList)) {
    body->insert(pair<string, vector<SyncProductRequestSyncProductList>>("SyncProductList", *request->syncProductList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncProduct"))},
    {"version", boost::any(string("2022-01-17"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncProductResponse(callApi(params, req, runtime));
}

SyncProductResponse Alibabacloud_Safe20220117::Client::syncProduct(shared_ptr<SyncProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncProductWithOptions(request, runtime);
}

