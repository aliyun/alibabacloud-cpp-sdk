// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/agency_20250227.hpp>
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

using namespace Alibabacloud_Agency20250227;

Alibabacloud_Agency20250227::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "agency.aliyuncs.com"},
    {"ap-northeast-2-pop", "agency.aliyuncs.com"},
    {"ap-south-1", "agency.aliyuncs.com"},
    {"ap-southeast-2", "agency.aliyuncs.com"},
    {"ap-southeast-3", "agency.aliyuncs.com"},
    {"ap-southeast-5", "agency.aliyuncs.com"},
    {"cn-beijing", "agency.aliyuncs.com"},
    {"cn-beijing-finance-1", "agency.aliyuncs.com"},
    {"cn-beijing-finance-pop", "agency.aliyuncs.com"},
    {"cn-beijing-gov-1", "agency.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "agency.aliyuncs.com"},
    {"cn-chengdu", "agency.aliyuncs.com"},
    {"cn-edge-1", "agency.aliyuncs.com"},
    {"cn-fujian", "agency.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "agency.aliyuncs.com"},
    {"cn-hangzhou", "agency.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "agency.aliyuncs.com"},
    {"cn-hangzhou-finance", "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "agency.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "agency.aliyuncs.com"},
    {"cn-hangzhou-test-306", "agency.aliyuncs.com"},
    {"cn-hongkong", "agency.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "agency.aliyuncs.com"},
    {"cn-huhehaote", "agency.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "agency.aliyuncs.com"},
    {"cn-north-2-gov-1", "agency.aliyuncs.com"},
    {"cn-qingdao", "agency.aliyuncs.com"},
    {"cn-qingdao-nebula", "agency.aliyuncs.com"},
    {"cn-shanghai", "agency.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "agency.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "agency.aliyuncs.com"},
    {"cn-shanghai-finance-1", "agency.aliyuncs.com"},
    {"cn-shanghai-inner", "agency.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "agency.aliyuncs.com"},
    {"cn-shenzhen", "agency.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "agency.aliyuncs.com"},
    {"cn-shenzhen-inner", "agency.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "agency.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "agency.aliyuncs.com"},
    {"cn-wuhan", "agency.aliyuncs.com"},
    {"cn-wulanchabu", "agency.aliyuncs.com"},
    {"cn-yushanfang", "agency.aliyuncs.com"},
    {"cn-zhangbei", "agency.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "agency.aliyuncs.com"},
    {"cn-zhangjiakou", "agency.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "agency.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "agency.aliyuncs.com"},
    {"eu-central-1", "agency.aliyuncs.com"},
    {"eu-west-1", "agency.aliyuncs.com"},
    {"eu-west-1-oxs", "agency.aliyuncs.com"},
    {"me-east-1", "agency.aliyuncs.com"},
    {"rus-west-1-pop", "agency.aliyuncs.com"},
    {"us-east-1", "agency.aliyuncs.com"},
    {"us-west-1", "agency.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("agency"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Agency20250227::Client::getEndpoint(shared_ptr<string> productId,
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

GetBillDetailFileListResponse Alibabacloud_Agency20250227::Client::getBillDetailFileListWithOptions(shared_ptr<GetBillDetailFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billMonth)) {
    query->insert(pair<string, string>("BillMonth", *request->billMonth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAccessKeyId)) {
    query->insert(pair<string, string>("OssAccessKeyId", *request->ossAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAccessKeySecret)) {
    query->insert(pair<string, string>("OssAccessKeySecret", *request->ossAccessKeySecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossRegion)) {
    query->insert(pair<string, string>("OssRegion", *request->ossRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossSecurityToken)) {
    query->insert(pair<string, string>("OssSecurityToken", *request->ossSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBillDetailFileList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBillDetailFileListResponse(callApi(params, req, runtime));
}

GetBillDetailFileListResponse Alibabacloud_Agency20250227::Client::getBillDetailFileList(shared_ptr<GetBillDetailFileListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBillDetailFileListWithOptions(request, runtime);
}

GetCommissionDetailFileListResponse Alibabacloud_Agency20250227::Client::getCommissionDetailFileListWithOptions(shared_ptr<GetCommissionDetailFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billMonth)) {
    query->insert(pair<string, string>("BillMonth", *request->billMonth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAccessKeyId)) {
    query->insert(pair<string, string>("OssAccessKeyId", *request->ossAccessKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossAccessKeySecret)) {
    query->insert(pair<string, string>("OssAccessKeySecret", *request->ossAccessKeySecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossRegion)) {
    query->insert(pair<string, string>("OssRegion", *request->ossRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossSecurityToken)) {
    query->insert(pair<string, string>("OssSecurityToken", *request->ossSecurityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCommissionDetailFileList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCommissionDetailFileListResponse(callApi(params, req, runtime));
}

GetCommissionDetailFileListResponse Alibabacloud_Agency20250227::Client::getCommissionDetailFileList(shared_ptr<GetCommissionDetailFileListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCommissionDetailFileListWithOptions(request, runtime);
}

GetCustomerOrderListResponse Alibabacloud_Agency20250227::Client::getCustomerOrderListWithOptions(shared_ptr<GetCustomerOrderListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetCustomerOrderListShrinkRequest> request = make_shared<GetCustomerOrderListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->orderTypeList)) {
    request->orderTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderTypeList, make_shared<string>("OrderTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerAccount)) {
    query->insert(pair<string, string>("CustomerAccount", *request->customerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->customerUid)) {
    query->insert(pair<string, long>("CustomerUid", *request->customerUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderCreateAfter)) {
    query->insert(pair<string, long>("OrderCreateAfter", *request->orderCreateAfter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderCreateBefore)) {
    query->insert(pair<string, long>("OrderCreateBefore", *request->orderCreateBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPayAfter)) {
    query->insert(pair<string, long>("OrderPayAfter", *request->orderPayAfter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPayBefore)) {
    query->insert(pair<string, long>("OrderPayBefore", *request->orderPayBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderStatus)) {
    query->insert(pair<string, long>("OrderStatus", *request->orderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderTypeListShrink)) {
    query->insert(pair<string, string>("OrderTypeList", *request->orderTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->payAmountAfter)) {
    query->insert(pair<string, double>("PayAmountAfter", *request->payAmountAfter));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->payAmountBefore)) {
    query->insert(pair<string, double>("PayAmountBefore", *request->payAmountBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payType)) {
    query->insert(pair<string, long>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ramAccountForCustomerManager)) {
    query->insert(pair<string, string>("RamAccountForCustomerManager", *request->ramAccountForCustomerManager));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomerOrderList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomerOrderListResponse(callApi(params, req, runtime));
}

GetCustomerOrderListResponse Alibabacloud_Agency20250227::Client::getCustomerOrderList(shared_ptr<GetCustomerOrderListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerOrderListWithOptions(request, runtime);
}

GetRenewalRateListResponse Alibabacloud_Agency20250227::Client::getRenewalRateListWithOptions(shared_ptr<GetRenewalRateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fiscalYearAndQuarter)) {
    query->insert(pair<string, string>("FiscalYearAndQuarter", *request->fiscalYearAndQuarter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRenewalRateList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRenewalRateListResponse(callApi(params, req, runtime));
}

GetRenewalRateListResponse Alibabacloud_Agency20250227::Client::getRenewalRateList(shared_ptr<GetRenewalRateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRenewalRateListWithOptions(request, runtime);
}

GetSubPartnerListResponse Alibabacloud_Agency20250227::Client::getSubPartnerListWithOptions(shared_ptr<GetSubPartnerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subPartnerCompanyName)) {
    query->insert(pair<string, string>("SubPartnerCompanyName", *request->subPartnerCompanyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subPartnerPid)) {
    query->insert(pair<string, string>("SubPartnerPid", *request->subPartnerPid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubPartnerList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubPartnerListResponse(callApi(params, req, runtime));
}

GetSubPartnerListResponse Alibabacloud_Agency20250227::Client::getSubPartnerList(shared_ptr<GetSubPartnerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubPartnerListWithOptions(request, runtime);
}

GetSubPartnerOrderListResponse Alibabacloud_Agency20250227::Client::getSubPartnerOrderListWithOptions(shared_ptr<GetSubPartnerOrderListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetSubPartnerOrderListShrinkRequest> request = make_shared<GetSubPartnerOrderListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->orderTypeList)) {
    request->orderTypeListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->orderTypeList, make_shared<string>("OrderTypeList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->orderCreateAfter)) {
    query->insert(pair<string, long>("OrderCreateAfter", *request->orderCreateAfter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderCreateBefore)) {
    query->insert(pair<string, long>("OrderCreateBefore", *request->orderCreateBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderId)) {
    query->insert(pair<string, long>("OrderId", *request->orderId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPayAfter)) {
    query->insert(pair<string, long>("OrderPayAfter", *request->orderPayAfter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderPayBefore)) {
    query->insert(pair<string, long>("OrderPayBefore", *request->orderPayBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderStatus)) {
    query->insert(pair<string, long>("OrderStatus", *request->orderStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderTypeListShrink)) {
    query->insert(pair<string, string>("OrderTypeList", *request->orderTypeListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payAmountAfter)) {
    query->insert(pair<string, long>("PayAmountAfter", *request->payAmountAfter));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payAmountBefore)) {
    query->insert(pair<string, long>("PayAmountBefore", *request->payAmountBefore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payType)) {
    query->insert(pair<string, long>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->projectId)) {
    query->insert(pair<string, long>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subPartnerName)) {
    query->insert(pair<string, string>("SubPartnerName", *request->subPartnerName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subPartnerUid)) {
    query->insert(pair<string, long>("SubPartnerUid", *request->subPartnerUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubPartnerOrderList"))},
    {"version", boost::any(string("2025-02-27"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubPartnerOrderListResponse(callApi(params, req, runtime));
}

GetSubPartnerOrderListResponse Alibabacloud_Agency20250227::Client::getSubPartnerOrderList(shared_ptr<GetSubPartnerOrderListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubPartnerOrderListWithOptions(request, runtime);
}

