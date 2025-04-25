// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bss_open_api_20230930.hpp>
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

using namespace Alibabacloud_BssOpenApi20230930;

Alibabacloud_BssOpenApi20230930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "business.aliyuncs.com"},
    {"cn-shanghai", "business.aliyuncs.com"},
    {"ap-southeast-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "business.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing", "business.aliyuncs.com"},
    {"cn-beijing-finance-1", "business.aliyuncs.com"},
    {"cn-beijing-finance-pop", "business.aliyuncs.com"},
    {"cn-beijing-gov-1", "business.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "business.aliyuncs.com"},
    {"cn-chengdu", "business.aliyuncs.com"},
    {"cn-edge-1", "business.aliyuncs.com"},
    {"cn-fujian", "business.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "business.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "business.aliyuncs.com"},
    {"cn-hangzhou-finance", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "business.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "business.aliyuncs.com"},
    {"cn-hangzhou-test-306", "business.aliyuncs.com"},
    {"cn-hongkong", "business.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "business.aliyuncs.com"},
    {"cn-huhehaote", "business.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "business.aliyuncs.com"},
    {"cn-north-2-gov-1", "business.aliyuncs.com"},
    {"cn-qingdao", "business.aliyuncs.com"},
    {"cn-qingdao-nebula", "business.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "business.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "business.aliyuncs.com"},
    {"cn-shanghai-finance-1", "business.aliyuncs.com"},
    {"cn-shanghai-inner", "business.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "business.aliyuncs.com"},
    {"cn-shenzhen", "business.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "business.aliyuncs.com"},
    {"cn-shenzhen-inner", "business.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "business.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "business.aliyuncs.com"},
    {"cn-wuhan", "business.aliyuncs.com"},
    {"cn-wulanchabu", "business.aliyuncs.com"},
    {"cn-yushanfang", "business.aliyuncs.com"},
    {"cn-zhangbei", "business.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "business.aliyuncs.com"},
    {"cn-zhangjiakou", "business.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "business.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "business.aliyuncs.com"},
    {"eu-central-1", "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "business.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "business.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "business.ap-southeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "business.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "business.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "business.ap-southeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("bssopenapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_BssOpenApi20230930::Client::getEndpoint(shared_ptr<string> productId,
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

AddCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::addCouponDeductTagWithOptions(shared_ptr<AddCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddCouponDeductTagShrinkRequest> request = make_shared<AddCouponDeductTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<AddCouponDeductTagRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddCouponDeductTagRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("Tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponId)) {
    query->insert(pair<string, string>("CouponId", *request->couponId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    query->insert(pair<string, string>("Tags", *request->tagsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCouponDeductTag"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCouponDeductTagResponse(callApi(params, req, runtime));
}

AddCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::addCouponDeductTag(shared_ptr<AddCouponDeductTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCouponDeductTagWithOptions(request, runtime);
}

CancelFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::cancelFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFundAccountLowAvailableAmountAlarm"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelFundAccountLowAvailableAmountAlarmResponse(callApi(params, req, runtime));
}

CancelFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::cancelFundAccountLowAvailableAmountAlarm(shared_ptr<CancelFundAccountLowAvailableAmountAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

CreateFundAccountTransferResponse Alibabacloud_BssOpenApi20230930::Client::createFundAccountTransferWithOptions(shared_ptr<CreateFundAccountTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->amount)) {
    body->insert(pair<string, string>("Amount", *request->amount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->financeType)) {
    body->insert(pair<string, string>("FinanceType", *request->financeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fromFundAccountId)) {
    body->insert(pair<string, long>("FromFundAccountId", *request->fromFundAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    body->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->toFundAccountId)) {
    body->insert(pair<string, long>("ToFundAccountId", *request->toFundAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferType)) {
    body->insert(pair<string, string>("TransferType", *request->transferType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFundAccountTransfer"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFundAccountTransferResponse(callApi(params, req, runtime));
}

CreateFundAccountTransferResponse Alibabacloud_BssOpenApi20230930::Client::createFundAccountTransfer(shared_ptr<CreateFundAccountTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFundAccountTransferWithOptions(request, runtime);
}

DeleteCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::deleteCouponDeductTagWithOptions(shared_ptr<DeleteCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteCouponDeductTagShrinkRequest> request = make_shared<DeleteCouponDeductTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DeleteCouponDeductTagRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->tagKeys)) {
    request->tagKeysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagKeys, make_shared<string>("TagKeys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponId)) {
    query->insert(pair<string, string>("CouponId", *request->couponId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagKeysShrink)) {
    query->insert(pair<string, string>("TagKeys", *request->tagKeysShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCouponDeductTag"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCouponDeductTagResponse(callApi(params, req, runtime));
}

DeleteCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::deleteCouponDeductTag(shared_ptr<DeleteCouponDeductTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCouponDeductTagWithOptions(request, runtime);
}

DescribeCouponResponse Alibabacloud_BssOpenApi20230930::Client::describeCouponWithOptions(shared_ptr<DescribeCouponRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCouponShrinkRequest> request = make_shared<DescribeCouponShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCouponRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCoupon"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCouponResponse(callApi(params, req, runtime));
}

DescribeCouponResponse Alibabacloud_BssOpenApi20230930::Client::describeCoupon(shared_ptr<DescribeCouponRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCouponWithOptions(request, runtime);
}

DescribeCouponItemListResponse Alibabacloud_BssOpenApi20230930::Client::describeCouponItemListWithOptions(shared_ptr<DescribeCouponItemListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeCouponItemListShrinkRequest> request = make_shared<DescribeCouponItemListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribeCouponItemListRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCouponItemList"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCouponItemListResponse(callApi(params, req, runtime));
}

DescribeCouponItemListResponse Alibabacloud_BssOpenApi20230930::Client::describeCouponItemList(shared_ptr<DescribeCouponItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCouponItemListWithOptions(request, runtime);
}

DescribeUserSpnSummaryInfoResponse Alibabacloud_BssOpenApi20230930::Client::describeUserSpnSummaryInfoWithOptions(shared_ptr<DescribeUserSpnSummaryInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeUserSpnSummaryInfoShrinkRequest> request = make_shared<DescribeUserSpnSummaryInfoShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<DescribeUserSpnSummaryInfoRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserSpnSummaryInfo"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserSpnSummaryInfoResponse(callApi(params, req, runtime));
}

DescribeUserSpnSummaryInfoResponse Alibabacloud_BssOpenApi20230930::Client::describeUserSpnSummaryInfo(shared_ptr<DescribeUserSpnSummaryInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserSpnSummaryInfoWithOptions(request, runtime);
}

GetFundAccountAvailableAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountAvailableAmountWithOptions(shared_ptr<GetFundAccountAvailableAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fundAccountId)) {
    body->insert(pair<string, string>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountAvailableAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountAvailableAmountResponse(callApi(params, req, runtime));
}

GetFundAccountAvailableAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountAvailableAmount(shared_ptr<GetFundAccountAvailableAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountAvailableAmountWithOptions(request, runtime);
}

GetFundAccountCanAllocateCreditAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanAllocateCreditAmountWithOptions(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountCanAllocateCreditAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountCanAllocateCreditAmountResponse(callApi(params, req, runtime));
}

GetFundAccountCanAllocateCreditAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanAllocateCreditAmount(shared_ptr<GetFundAccountCanAllocateCreditAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountCanAllocateCreditAmountWithOptions(request, runtime);
}

GetFundAccountCanRecycleAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanRecycleAmountWithOptions(shared_ptr<GetFundAccountCanRecycleAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recycleFromFundAccountId)) {
    body->insert(pair<string, string>("RecycleFromFundAccountId", *request->recycleFromFundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountCanRecycleAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountCanRecycleAmountResponse(callApi(params, req, runtime));
}

GetFundAccountCanRecycleAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanRecycleAmount(shared_ptr<GetFundAccountCanRecycleAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountCanRecycleAmountWithOptions(request, runtime);
}

GetFundAccountCanTransferAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanTransferAmountWithOptions(shared_ptr<GetFundAccountCanTransferAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fundAccountId)) {
    body->insert(pair<string, string>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountCanTransferAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountCanTransferAmountResponse(callApi(params, req, runtime));
}

GetFundAccountCanTransferAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanTransferAmount(shared_ptr<GetFundAccountCanTransferAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountCanTransferAmountWithOptions(request, runtime);
}

GetFundAccountCanWithdrawAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanWithdrawAmountWithOptions(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountCanWithdrawAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountCanWithdrawAmountResponse(callApi(params, req, runtime));
}

GetFundAccountCanWithdrawAmountResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountCanWithdrawAmount(shared_ptr<GetFundAccountCanWithdrawAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountCanWithdrawAmountWithOptions(request, runtime);
}

GetFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountLowAvailableAmountAlarm"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountLowAvailableAmountAlarmResponse(callApi(params, req, runtime));
}

GetFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountLowAvailableAmountAlarm(shared_ptr<GetFundAccountLowAvailableAmountAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

GetFundAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountTransactionDetailsWithOptions(shared_ptr<GetFundAccountTransactionDetailsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetFundAccountTransactionDetailsShrinkRequest> request = make_shared<GetFundAccountTransactionDetailsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->transactionChannelList)) {
    request->transactionChannelListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transactionChannelList, make_shared<string>("TransactionChannelList"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->transactionTypeList)) {
    request->transactionTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transactionTypeList, make_shared<string>("TransactionTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billNumber)) {
    body->insert(pair<string, string>("BillNumber", *request->billNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelTransactionNumber)) {
    body->insert(pair<string, string>("ChannelTransactionNumber", *request->channelTransactionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionChannelListShrink)) {
    body->insert(pair<string, string>("TransactionChannelList", *request->transactionChannelListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionDirection)) {
    body->insert(pair<string, string>("TransactionDirection", *request->transactionDirection));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transactionNumber)) {
    body->insert(pair<string, long>("TransactionNumber", *request->transactionNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionType)) {
    body->insert(pair<string, string>("TransactionType", *request->transactionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transactionTypeListShrink)) {
    body->insert(pair<string, string>("TransactionTypeList", *request->transactionTypeListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFundAccountTransactionDetails"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFundAccountTransactionDetailsResponse(callApi(params, req, runtime));
}

GetFundAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20230930::Client::getFundAccountTransactionDetails(shared_ptr<GetFundAccountTransactionDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFundAccountTransactionDetailsWithOptions(request, runtime);
}

GetSavingPlanDeductableCommodityResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanDeductableCommodityWithOptions(shared_ptr<GetSavingPlanDeductableCommodityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSavingPlanDeductableCommodityShrinkRequest> request = make_shared<GetSavingPlanDeductableCommodityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavingPlanDeductableCommodity"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavingPlanDeductableCommodityResponse(callApi(params, req, runtime));
}

GetSavingPlanDeductableCommodityResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanDeductableCommodity(shared_ptr<GetSavingPlanDeductableCommodityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSavingPlanDeductableCommodityWithOptions(request, runtime);
}

GetSavingPlanShareAccountsResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanShareAccountsWithOptions(shared_ptr<GetSavingPlanShareAccountsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSavingPlanShareAccountsShrinkRequest> request = make_shared<GetSavingPlanShareAccountsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetSavingPlanShareAccountsRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spnInstanceCode)) {
    query->insert(pair<string, string>("SpnInstanceCode", *request->spnInstanceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavingPlanShareAccounts"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavingPlanShareAccountsResponse(callApi(params, req, runtime));
}

GetSavingPlanShareAccountsResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanShareAccounts(shared_ptr<GetSavingPlanShareAccountsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSavingPlanShareAccountsWithOptions(request, runtime);
}

GetSavingPlanUserDeductRuleResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanUserDeductRuleWithOptions(shared_ptr<GetSavingPlanUserDeductRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSavingPlanUserDeductRuleShrinkRequest> request = make_shared<GetSavingPlanUserDeductRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GetSavingPlanUserDeductRuleRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->spnInstanceCode)) {
    query->insert(pair<string, string>("SpnInstanceCode", *request->spnInstanceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSavingPlanUserDeductRule"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSavingPlanUserDeductRuleResponse(callApi(params, req, runtime));
}

GetSavingPlanUserDeductRuleResponse Alibabacloud_BssOpenApi20230930::Client::getSavingPlanUserDeductRule(shared_ptr<GetSavingPlanUserDeductRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSavingPlanUserDeductRuleWithOptions(request, runtime);
}

ListCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::listCouponDeductTagWithOptions(shared_ptr<ListCouponDeductTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListCouponDeductTagShrinkRequest> request = make_shared<ListCouponDeductTagShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListCouponDeductTagRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->couponId)) {
    query->insert(pair<string, string>("CouponId", *request->couponId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCouponDeductTag"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCouponDeductTagResponse(callApi(params, req, runtime));
}

ListCouponDeductTagResponse Alibabacloud_BssOpenApi20230930::Client::listCouponDeductTag(shared_ptr<ListCouponDeductTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCouponDeductTagWithOptions(request, runtime);
}

ListFundAccountResponse Alibabacloud_BssOpenApi20230930::Client::listFundAccountWithOptions(shared_ptr<ListFundAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryOnlyInUse)) {
    body->insert(pair<string, bool>("QueryOnlyInUse", *request->queryOnlyInUse));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryOnlyManage)) {
    body->insert(pair<string, bool>("QueryOnlyManage", *request->queryOnlyManage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFundAccount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFundAccountResponse(callApi(params, req, runtime));
}

ListFundAccountResponse Alibabacloud_BssOpenApi20230930::Client::listFundAccount(shared_ptr<ListFundAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFundAccountWithOptions(request, runtime);
}

ListFundAccountPayRelationResponse Alibabacloud_BssOpenApi20230930::Client::listFundAccountPayRelationWithOptions(shared_ptr<ListFundAccountPayRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fundAccountId)) {
    body->insert(pair<string, string>("FundAccountId", *request->fundAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFundAccountPayRelation"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFundAccountPayRelationResponse(callApi(params, req, runtime));
}

ListFundAccountPayRelationResponse Alibabacloud_BssOpenApi20230930::Client::listFundAccountPayRelation(shared_ptr<ListFundAccountPayRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listFundAccountPayRelationWithOptions(request, runtime);
}

SetFundAccountCreditAmountResponse Alibabacloud_BssOpenApi20230930::Client::setFundAccountCreditAmountWithOptions(shared_ptr<SetFundAccountCreditAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creditAmount)) {
    body->insert(pair<string, string>("CreditAmount", *request->creditAmount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currency)) {
    body->insert(pair<string, string>("Currency", *request->currency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetFundAccountCreditAmount"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetFundAccountCreditAmountResponse(callApi(params, req, runtime));
}

SetFundAccountCreditAmountResponse Alibabacloud_BssOpenApi20230930::Client::setFundAccountCreditAmount(shared_ptr<SetFundAccountCreditAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setFundAccountCreditAmountWithOptions(request, runtime);
}

SetFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::setFundAccountLowAvailableAmountAlarmWithOptions(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->fundAccountId)) {
    body->insert(pair<string, long>("FundAccountId", *request->fundAccountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thresholdAmount)) {
    body->insert(pair<string, string>("ThresholdAmount", *request->thresholdAmount));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetFundAccountLowAvailableAmountAlarm"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetFundAccountLowAvailableAmountAlarmResponse(callApi(params, req, runtime));
}

SetFundAccountLowAvailableAmountAlarmResponse Alibabacloud_BssOpenApi20230930::Client::setFundAccountLowAvailableAmountAlarm(shared_ptr<SetFundAccountLowAvailableAmountAlarmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setFundAccountLowAvailableAmountAlarmWithOptions(request, runtime);
}

SetSavingPlanUserDeductRuleResponse Alibabacloud_BssOpenApi20230930::Client::setSavingPlanUserDeductRuleWithOptions(shared_ptr<SetSavingPlanUserDeductRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetSavingPlanUserDeductRuleShrinkRequest> request = make_shared<SetSavingPlanUserDeductRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>>(tmpReq->ecIdAccountIds)) {
    request->ecIdAccountIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ecIdAccountIds, make_shared<string>("EcIdAccountIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>>(tmpReq->userDeductRules)) {
    request->userDeductRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userDeductRules, make_shared<string>("UserDeductRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ecIdAccountIdsShrink)) {
    query->insert(pair<string, string>("EcIdAccountIds", *request->ecIdAccountIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nbid)) {
    query->insert(pair<string, string>("Nbid", *request->nbid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->spnInstanceCode)) {
    body->insert(pair<string, string>("SpnInstanceCode", *request->spnInstanceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeductRulesShrink)) {
    body->insert(pair<string, string>("UserDeductRules", *request->userDeductRulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSavingPlanUserDeductRule"))},
    {"version", boost::any(string("2023-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSavingPlanUserDeductRuleResponse(callApi(params, req, runtime));
}

SetSavingPlanUserDeductRuleResponse Alibabacloud_BssOpenApi20230930::Client::setSavingPlanUserDeductRule(shared_ptr<SetSavingPlanUserDeductRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSavingPlanUserDeductRuleWithOptions(request, runtime);
}

