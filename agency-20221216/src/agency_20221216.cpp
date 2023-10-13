// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/agency_20221216.hpp>
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

using namespace Alibabacloud_Agency20221216;

Alibabacloud_Agency20221216::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Agency20221216::Client::getEndpoint(shared_ptr<string> productId,
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

CancelSubscriptionBillResponse Alibabacloud_Agency20221216::Client::cancelSubscriptionBillWithOptions(shared_ptr<CancelSubscriptionBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeType)) {
    query->insert(pair<string, string>("SubscribeType", *request->subscribeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelSubscriptionBill"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelSubscriptionBillResponse(callApi(params, req, runtime));
}

CancelSubscriptionBillResponse Alibabacloud_Agency20221216::Client::cancelSubscriptionBill(shared_ptr<CancelSubscriptionBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelSubscriptionBillWithOptions(request, runtime);
}

CreateCustomerResponse Alibabacloud_Agency20221216::Client::createCustomerWithOptions(shared_ptr<CreateCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerName)) {
    query->insert(pair<string, string>("CustomerName", *request->customerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerSource)) {
    query->insert(pair<string, string>("CustomerSource", *request->customerSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerSubTrade)) {
    query->insert(pair<string, string>("CustomerSubTrade", *request->customerSubTrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerTrade)) {
    query->insert(pair<string, string>("CustomerTrade", *request->customerTrade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nation)) {
    query->insert(pair<string, string>("Nation", *request->nation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomer"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomerResponse(callApi(params, req, runtime));
}

CreateCustomerResponse Alibabacloud_Agency20221216::Client::createCustomer(shared_ptr<CreateCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomerWithOptions(request, runtime);
}

DeductOutstandingBalanceResponse Alibabacloud_Agency20221216::Client::deductOutstandingBalanceWithOptions(shared_ptr<DeductOutstandingBalanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deductAmount)) {
    query->insert(pair<string, string>("DeductAmount", *request->deductAmount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeductOutstandingBalance"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeductOutstandingBalanceResponse(callApi(params, req, runtime));
}

DeductOutstandingBalanceResponse Alibabacloud_Agency20221216::Client::deductOutstandingBalance(shared_ptr<DeductOutstandingBalanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deductOutstandingBalanceWithOptions(request, runtime);
}

EditEndUserStatusResponse Alibabacloud_Agency20221216::Client::editEndUserStatusWithOptions(shared_ptr<EditEndUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditEndUserStatus"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditEndUserStatusResponse(callApi(params, req, runtime));
}

EditEndUserStatusResponse Alibabacloud_Agency20221216::Client::editEndUserStatus(shared_ptr<EditEndUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editEndUserStatusWithOptions(request, runtime);
}

EditNewBuyStatusResponse Alibabacloud_Agency20221216::Client::editNewBuyStatusWithOptions(shared_ptr<EditNewBuyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newBuyStatus)) {
    query->insert(pair<string, string>("NewBuyStatus", *request->newBuyStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditNewBuyStatus"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditNewBuyStatusResponse(callApi(params, req, runtime));
}

EditNewBuyStatusResponse Alibabacloud_Agency20221216::Client::editNewBuyStatus(shared_ptr<EditNewBuyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editNewBuyStatusWithOptions(request, runtime);
}

EditZeroCreditShutdownResponse Alibabacloud_Agency20221216::Client::editZeroCreditShutdownWithOptions(shared_ptr<EditZeroCreditShutdownRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->shutdownPolicy)) {
    query->insert(pair<string, string>("ShutdownPolicy", *request->shutdownPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditZeroCreditShutdown"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditZeroCreditShutdownResponse(callApi(params, req, runtime));
}

EditZeroCreditShutdownResponse Alibabacloud_Agency20221216::Client::editZeroCreditShutdown(shared_ptr<EditZeroCreditShutdownRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editZeroCreditShutdownWithOptions(request, runtime);
}

GetAccountInfoResponse Alibabacloud_Agency20221216::Client::getAccountInfoWithOptions(shared_ptr<GetAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountInfo"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountInfoResponse(callApi(params, req, runtime));
}

GetAccountInfoResponse Alibabacloud_Agency20221216::Client::getAccountInfo(shared_ptr<GetAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAccountInfoWithOptions(request, runtime);
}

GetCreditInfoResponse Alibabacloud_Agency20221216::Client::getCreditInfoWithOptions(shared_ptr<GetCreditInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCreditInfo"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCreditInfoResponse(callApi(params, req, runtime));
}

GetCreditInfoResponse Alibabacloud_Agency20221216::Client::getCreditInfo(shared_ptr<GetCreditInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCreditInfoWithOptions(request, runtime);
}

GetDailyBillResponse Alibabacloud_Agency20221216::Client::getDailyBillWithOptions(shared_ptr<GetDailyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billOwner)) {
    query->insert(pair<string, string>("BillOwner", *request->billOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billType)) {
    query->insert(pair<string, string>("BillType", *request->billType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->date)) {
    query->insert(pair<string, string>("Date", *request->date));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDailyBill"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDailyBillResponse(callApi(params, req, runtime));
}

GetDailyBillResponse Alibabacloud_Agency20221216::Client::getDailyBill(shared_ptr<GetDailyBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDailyBillWithOptions(request, runtime);
}

GetInviteStatusResponse Alibabacloud_Agency20221216::Client::getInviteStatusWithOptions(shared_ptr<GetInviteStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<GetInviteStatusRequestInviteStatusList>>(request->inviteStatusList)) {
    query->insert(pair<string, vector<GetInviteStatusRequestInviteStatusList>>("InviteStatusList", *request->inviteStatusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInviteStatus"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInviteStatusResponse(callApi(params, req, runtime));
}

GetInviteStatusResponse Alibabacloud_Agency20221216::Client::getInviteStatus(shared_ptr<GetInviteStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInviteStatusWithOptions(request, runtime);
}

GetMonthlyBillResponse Alibabacloud_Agency20221216::Client::getMonthlyBillWithOptions(shared_ptr<GetMonthlyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->billOwner)) {
    query->insert(pair<string, string>("BillOwner", *request->billOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billType)) {
    query->insert(pair<string, string>("BillType", *request->billType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->month)) {
    query->insert(pair<string, string>("Month", *request->month));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMonthlyBill"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMonthlyBillResponse(callApi(params, req, runtime));
}

GetMonthlyBillResponse Alibabacloud_Agency20221216::Client::getMonthlyBill(shared_ptr<GetMonthlyBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMonthlyBillWithOptions(request, runtime);
}

GetUnassociatedCustomerResponse Alibabacloud_Agency20221216::Client::getUnassociatedCustomerWithOptions(shared_ptr<GetUnassociatedCustomerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUnassociatedCustomer"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUnassociatedCustomerResponse(callApi(params, req, runtime));
}

GetUnassociatedCustomerResponse Alibabacloud_Agency20221216::Client::getUnassociatedCustomer(shared_ptr<GetUnassociatedCustomerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUnassociatedCustomerWithOptions(request, runtime);
}

InviteSubAccountResponse Alibabacloud_Agency20221216::Client::inviteSubAccountWithOptions(shared_ptr<InviteSubAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<InviteSubAccountRequestAccountInfoList>>(request->accountInfoList)) {
    query->insert(pair<string, vector<InviteSubAccountRequestAccountInfoList>>("AccountInfoList", *request->accountInfoList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InviteSubAccount"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InviteSubAccountResponse(callApi(params, req, runtime));
}

InviteSubAccountResponse Alibabacloud_Agency20221216::Client::inviteSubAccount(shared_ptr<InviteSubAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return inviteSubAccountWithOptions(request, runtime);
}

ListCountriesResponse Alibabacloud_Agency20221216::Client::listCountriesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCountries"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCountriesResponse(callApi(params, req, runtime));
}

ListCountriesResponse Alibabacloud_Agency20221216::Client::listCountries() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCountriesWithOptions(runtime);
}

ResendEmailResponse Alibabacloud_Agency20221216::Client::resendEmailWithOptions(shared_ptr<ResendEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->inviteId)) {
    query->insert(pair<string, long>("InviteId", *request->inviteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResendEmail"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResendEmailResponse(callApi(params, req, runtime));
}

ResendEmailResponse Alibabacloud_Agency20221216::Client::resendEmail(shared_ptr<ResendEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resendEmailWithOptions(request, runtime);
}

SetAccountInfoResponse Alibabacloud_Agency20221216::Client::setAccountInfoWithOptions(shared_ptr<SetAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountNickname)) {
    query->insert(pair<string, string>("AccountNickname", *request->accountNickname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccountInfo"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccountInfoResponse(callApi(params, req, runtime));
}

SetAccountInfoResponse Alibabacloud_Agency20221216::Client::setAccountInfo(shared_ptr<SetAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccountInfoWithOptions(request, runtime);
}

SetCreditLineResponse Alibabacloud_Agency20221216::Client::setCreditLineWithOptions(shared_ptr<SetCreditLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->creditLine)) {
    query->insert(pair<string, string>("CreditLine", *request->creditLine));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCreditLine"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCreditLineResponse(callApi(params, req, runtime));
}

SetCreditLineResponse Alibabacloud_Agency20221216::Client::setCreditLine(shared_ptr<SetCreditLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCreditLineWithOptions(request, runtime);
}

SetWarningThresholdResponse Alibabacloud_Agency20221216::Client::setWarningThresholdWithOptions(shared_ptr<SetWarningThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->warningValue)) {
    query->insert(pair<string, string>("WarningValue", *request->warningValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetWarningThreshold"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetWarningThresholdResponse(callApi(params, req, runtime));
}

SetWarningThresholdResponse Alibabacloud_Agency20221216::Client::setWarningThreshold(shared_ptr<SetWarningThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setWarningThresholdWithOptions(request, runtime);
}

SubscriptionBillResponse Alibabacloud_Agency20221216::Client::subscriptionBillWithOptions(shared_ptr<SubscriptionBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginBillingCycle)) {
    query->insert(pair<string, string>("BeginBillingCycle", *request->beginBillingCycle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billFormat)) {
    query->insert(pair<string, string>("BillFormat", *request->billFormat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->bucketOwnerId)) {
    query->insert(pair<string, long>("BucketOwnerId", *request->bucketOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeBucket)) {
    query->insert(pair<string, string>("SubscribeBucket", *request->subscribeBucket));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscribeSegmentSize)) {
    query->insert(pair<string, long>("SubscribeSegmentSize", *request->subscribeSegmentSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeType)) {
    query->insert(pair<string, string>("SubscribeType", *request->subscribeType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubscriptionBill"))},
    {"version", boost::any(string("2022-12-16"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscriptionBillResponse(callApi(params, req, runtime));
}

SubscriptionBillResponse Alibabacloud_Agency20221216::Client::subscriptionBill(shared_ptr<SubscriptionBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscriptionBillWithOptions(request, runtime);
}

