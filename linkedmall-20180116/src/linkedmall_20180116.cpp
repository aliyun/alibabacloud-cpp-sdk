// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkedmall_20180116.hpp>
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

using namespace Alibabacloud_Linkedmall20180116;

Alibabacloud_Linkedmall20180116::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "linkedmall.aliyuncs.com"},
    {"cn-shanghai", "linkedmall.aliyuncs.com"},
    {"ap-northeast-1", "linkedmall.aliyuncs.com"},
    {"ap-northeast-2-pop", "linkedmall.aliyuncs.com"},
    {"ap-south-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-1", "linkedmall.aliyuncs.com"},
    {"ap-southeast-2", "linkedmall.aliyuncs.com"},
    {"ap-southeast-3", "linkedmall.aliyuncs.com"},
    {"ap-southeast-5", "linkedmall.aliyuncs.com"},
    {"cn-beijing", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-beijing-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "linkedmall.aliyuncs.com"},
    {"cn-chengdu", "linkedmall.aliyuncs.com"},
    {"cn-edge-1", "linkedmall.aliyuncs.com"},
    {"cn-fujian", "linkedmall.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-finance", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "linkedmall.aliyuncs.com"},
    {"cn-hangzhou-test-306", "linkedmall.aliyuncs.com"},
    {"cn-hongkong", "linkedmall.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "linkedmall.aliyuncs.com"},
    {"cn-huhehaote", "linkedmall.aliyuncs.com"},
    {"cn-north-2-gov-1", "linkedmall.aliyuncs.com"},
    {"cn-qingdao", "linkedmall.aliyuncs.com"},
    {"cn-qingdao-nebula", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-inner", "linkedmall.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-inner", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "linkedmall.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "linkedmall.aliyuncs.com"},
    {"cn-wuhan", "linkedmall.aliyuncs.com"},
    {"cn-yushanfang", "linkedmall.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou", "linkedmall.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "linkedmall.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "linkedmall.aliyuncs.com"},
    {"eu-central-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1", "linkedmall.aliyuncs.com"},
    {"eu-west-1-oxs", "linkedmall.aliyuncs.com"},
    {"me-east-1", "linkedmall.aliyuncs.com"},
    {"rus-west-1-pop", "linkedmall.aliyuncs.com"},
    {"us-east-1", "linkedmall.aliyuncs.com"},
    {"us-west-1", "linkedmall.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkedmall"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkedmall20180116::Client::getEndpoint(shared_ptr<string> productId,
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

AddAddressResponse Alibabacloud_Linkedmall20180116::Client::addAddressWithOptions(shared_ptr<AddAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddAddressResponse(doRPCRequest(make_shared<string>("AddAddress"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddAddressResponse Alibabacloud_Linkedmall20180116::Client::addAddress(shared_ptr<AddAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAddressWithOptions(request, runtime);
}

AddItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::addItemLimitRuleWithOptions(shared_ptr<AddItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddItemLimitRuleResponse(doRPCRequest(make_shared<string>("AddItemLimitRule"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::addItemLimitRule(shared_ptr<AddItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addItemLimitRuleWithOptions(request, runtime);
}

AddItemToSubBizsResponse Alibabacloud_Linkedmall20180116::Client::addItemToSubBizsWithOptions(shared_ptr<AddItemToSubBizsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddItemToSubBizsShrinkRequest> request = make_shared<AddItemToSubBizsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subBizIds)) {
    request->subBizIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subBizIds, make_shared<string>("SubBizIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddItemToSubBizsResponse(doRPCRequest(make_shared<string>("AddItemToSubBizs"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddItemToSubBizsResponse Alibabacloud_Linkedmall20180116::Client::addItemToSubBizs(shared_ptr<AddItemToSubBizsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addItemToSubBizsWithOptions(request, runtime);
}

AddSupplierNewItemsResponse Alibabacloud_Linkedmall20180116::Client::addSupplierNewItemsWithOptions(shared_ptr<AddSupplierNewItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddSupplierNewItemsResponse(doRPCRequest(make_shared<string>("AddSupplierNewItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddSupplierNewItemsResponse Alibabacloud_Linkedmall20180116::Client::addSupplierNewItems(shared_ptr<AddSupplierNewItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSupplierNewItemsWithOptions(request, runtime);
}

ApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::applyRefundWithOptions(shared_ptr<ApplyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyRefundResponse(doRPCRequest(make_shared<string>("ApplyRefund"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::applyRefund(shared_ptr<ApplyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyRefundWithOptions(request, runtime);
}

BatchRegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::batchRegistAnonymousTbAccountWithOptions(shared_ptr<BatchRegistAnonymousTbAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchRegistAnonymousTbAccountResponse(doRPCRequest(make_shared<string>("BatchRegistAnonymousTbAccount"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchRegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::batchRegistAnonymousTbAccount(shared_ptr<BatchRegistAnonymousTbAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegistAnonymousTbAccountWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_Linkedmall20180116::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOrderResponse(doRPCRequest(make_shared<string>("CancelOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOrderResponse Alibabacloud_Linkedmall20180116::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

CancelRefundResponse Alibabacloud_Linkedmall20180116::Client::cancelRefundWithOptions(shared_ptr<CancelRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelRefundResponse(doRPCRequest(make_shared<string>("CancelRefund"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelRefundResponse Alibabacloud_Linkedmall20180116::Client::cancelRefund(shared_ptr<CancelRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelRefundWithOptions(request, runtime);
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburseWithOptions(shared_ptr<ConfirmDisburseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConfirmDisburseResponse(doRPCRequest(make_shared<string>("ConfirmDisburse"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConfirmDisburseResponse Alibabacloud_Linkedmall20180116::Client::confirmDisburse(shared_ptr<ConfirmDisburseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmDisburseWithOptions(request, runtime);
}

CreateMovieTicketOrderResponse Alibabacloud_Linkedmall20180116::Client::createMovieTicketOrderWithOptions(shared_ptr<CreateMovieTicketOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return CreateMovieTicketOrderResponse(doRPCRequest(make_shared<string>("CreateMovieTicketOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateMovieTicketOrderResponse Alibabacloud_Linkedmall20180116::Client::createMovieTicketOrder(shared_ptr<CreateMovieTicketOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMovieTicketOrderWithOptions(request, runtime);
}

CreateOrderResponse Alibabacloud_Linkedmall20180116::Client::createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOrderResponse(doRPCRequest(make_shared<string>("CreateOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOrderResponse Alibabacloud_Linkedmall20180116::Client::createOrder(shared_ptr<CreateOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderWithOptions(request, runtime);
}

CreateOrderV2Response Alibabacloud_Linkedmall20180116::Client::createOrderV2WithOptions(shared_ptr<CreateOrderV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOrderV2Response(doRPCRequest(make_shared<string>("CreateOrderV2"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOrderV2Response Alibabacloud_Linkedmall20180116::Client::createOrderV2(shared_ptr<CreateOrderV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOrderV2WithOptions(request, runtime);
}

CreatePayUrlResponse Alibabacloud_Linkedmall20180116::Client::createPayUrlWithOptions(shared_ptr<CreatePayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreatePayUrlResponse(doRPCRequest(make_shared<string>("CreatePayUrl"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreatePayUrlResponse Alibabacloud_Linkedmall20180116::Client::createPayUrl(shared_ptr<CreatePayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPayUrlWithOptions(request, runtime);
}

CreateVirtualProductOrderResponse Alibabacloud_Linkedmall20180116::Client::createVirtualProductOrderWithOptions(shared_ptr<CreateVirtualProductOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVirtualProductOrderResponse(doRPCRequest(make_shared<string>("CreateVirtualProductOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVirtualProductOrderResponse Alibabacloud_Linkedmall20180116::Client::createVirtualProductOrder(shared_ptr<CreateVirtualProductOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVirtualProductOrderWithOptions(request, runtime);
}

CreateWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::createWithholdTradeWithOptions(shared_ptr<CreateWithholdTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateWithholdTradeResponse(doRPCRequest(make_shared<string>("CreateWithholdTrade"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::createWithholdTrade(shared_ptr<CreateWithholdTradeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWithholdTradeWithOptions(request, runtime);
}

DeleteBizItemsResponse Alibabacloud_Linkedmall20180116::Client::deleteBizItemsWithOptions(shared_ptr<DeleteBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteBizItemsResponse(doRPCRequest(make_shared<string>("DeleteBizItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteBizItemsResponse Alibabacloud_Linkedmall20180116::Client::deleteBizItems(shared_ptr<DeleteBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBizItemsWithOptions(request, runtime);
}

DeleteItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::deleteItemLimitRuleWithOptions(shared_ptr<DeleteItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteItemLimitRuleResponse(doRPCRequest(make_shared<string>("DeleteItemLimitRule"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::deleteItemLimitRule(shared_ptr<DeleteItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteItemLimitRuleWithOptions(request, runtime);
}

EnableOrderResponse Alibabacloud_Linkedmall20180116::Client::enableOrderWithOptions(shared_ptr<EnableOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableOrderResponse(doRPCRequest(make_shared<string>("EnableOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableOrderResponse Alibabacloud_Linkedmall20180116::Client::enableOrder(shared_ptr<EnableOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableOrderWithOptions(request, runtime);
}

ExecuteNodeResponse Alibabacloud_Linkedmall20180116::Client::executeNodeWithOptions(shared_ptr<ExecuteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ExecuteNodeResponse(doRPCRequest(make_shared<string>("ExecuteNode"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ExecuteNodeResponse Alibabacloud_Linkedmall20180116::Client::executeNode(shared_ptr<ExecuteNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return executeNodeWithOptions(request, runtime);
}

GetCategoryChainResponse Alibabacloud_Linkedmall20180116::Client::getCategoryChainWithOptions(shared_ptr<GetCategoryChainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCategoryChainResponse(doRPCRequest(make_shared<string>("GetCategoryChain"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCategoryChainResponse Alibabacloud_Linkedmall20180116::Client::getCategoryChain(shared_ptr<GetCategoryChainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoryChainWithOptions(request, runtime);
}

GetCategoryListResponse Alibabacloud_Linkedmall20180116::Client::getCategoryListWithOptions(shared_ptr<GetCategoryListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCategoryListResponse(doRPCRequest(make_shared<string>("GetCategoryList"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCategoryListResponse Alibabacloud_Linkedmall20180116::Client::getCategoryList(shared_ptr<GetCategoryListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoryListWithOptions(request, runtime);
}

GetCustomServiceUrlResponse Alibabacloud_Linkedmall20180116::Client::getCustomServiceUrlWithOptions(shared_ptr<GetCustomServiceUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCustomServiceUrlResponse(doRPCRequest(make_shared<string>("GetCustomServiceUrl"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCustomServiceUrlResponse Alibabacloud_Linkedmall20180116::Client::getCustomServiceUrl(shared_ptr<GetCustomServiceUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomServiceUrlWithOptions(request, runtime);
}

GetGuidePageResponse Alibabacloud_Linkedmall20180116::Client::getGuidePageWithOptions(shared_ptr<GetGuidePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetGuidePageResponse(doRPCRequest(make_shared<string>("GetGuidePage"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGuidePageResponse Alibabacloud_Linkedmall20180116::Client::getGuidePage(shared_ptr<GetGuidePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGuidePageWithOptions(request, runtime);
}

GetItemPromotionResponse Alibabacloud_Linkedmall20180116::Client::getItemPromotionWithOptions(shared_ptr<GetItemPromotionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetItemPromotionResponse(doRPCRequest(make_shared<string>("GetItemPromotion"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetItemPromotionResponse Alibabacloud_Linkedmall20180116::Client::getItemPromotion(shared_ptr<GetItemPromotionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getItemPromotionWithOptions(request, runtime);
}

GetLoginPageResponse Alibabacloud_Linkedmall20180116::Client::getLoginPageWithOptions(shared_ptr<GetLoginPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoginPageResponse(doRPCRequest(make_shared<string>("GetLoginPage"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoginPageResponse Alibabacloud_Linkedmall20180116::Client::getLoginPage(shared_ptr<GetLoginPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoginPageWithOptions(request, runtime);
}

GetSwitchUrlResponse Alibabacloud_Linkedmall20180116::Client::getSwitchUrlWithOptions(shared_ptr<GetSwitchUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSwitchUrlResponse(doRPCRequest(make_shared<string>("GetSwitchUrl"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSwitchUrlResponse Alibabacloud_Linkedmall20180116::Client::getSwitchUrl(shared_ptr<GetSwitchUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSwitchUrlWithOptions(request, runtime);
}

GetUserInfoResponse Alibabacloud_Linkedmall20180116::Client::getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetUserInfoResponse(doRPCRequest(make_shared<string>("GetUserInfo"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetUserInfoResponse Alibabacloud_Linkedmall20180116::Client::getUserInfo(shared_ptr<GetUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserInfoWithOptions(request, runtime);
}

GetWithholdSignPageUrlResponse Alibabacloud_Linkedmall20180116::Client::getWithholdSignPageUrlWithOptions(shared_ptr<GetWithholdSignPageUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetWithholdSignPageUrlResponse(doRPCRequest(make_shared<string>("GetWithholdSignPageUrl"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetWithholdSignPageUrlResponse Alibabacloud_Linkedmall20180116::Client::getWithholdSignPageUrl(shared_ptr<GetWithholdSignPageUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWithholdSignPageUrlWithOptions(request, runtime);
}

InitApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefundWithOptions(shared_ptr<InitApplyRefundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitApplyRefundResponse(doRPCRequest(make_shared<string>("InitApplyRefund"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitApplyRefundResponse Alibabacloud_Linkedmall20180116::Client::initApplyRefund(shared_ptr<InitApplyRefundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initApplyRefundWithOptions(request, runtime);
}

ListItemActivitiesResponse Alibabacloud_Linkedmall20180116::Client::listItemActivitiesWithOptions(shared_ptr<ListItemActivitiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListItemActivitiesShrinkRequest> request = make_shared<ListItemActivitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListItemActivitiesResponse(doRPCRequest(make_shared<string>("ListItemActivities"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListItemActivitiesResponse Alibabacloud_Linkedmall20180116::Client::listItemActivities(shared_ptr<ListItemActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listItemActivitiesWithOptions(request, runtime);
}

ModifyBasicAndBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicAndBizItemsWithOptions(shared_ptr<ModifyBasicAndBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBasicAndBizItemsResponse(doRPCRequest(make_shared<string>("ModifyBasicAndBizItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBasicAndBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBasicAndBizItems(shared_ptr<ModifyBasicAndBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBasicAndBizItemsWithOptions(request, runtime);
}

ModifyBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBizItemsWithOptions(shared_ptr<ModifyBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyBizItemsResponse(doRPCRequest(make_shared<string>("ModifyBizItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyBizItemsResponse Alibabacloud_Linkedmall20180116::Client::modifyBizItems(shared_ptr<ModifyBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyBizItemsWithOptions(request, runtime);
}

ModifyItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::modifyItemLimitRuleWithOptions(shared_ptr<ModifyItemLimitRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyItemLimitRuleResponse(doRPCRequest(make_shared<string>("ModifyItemLimitRule"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyItemLimitRuleResponse Alibabacloud_Linkedmall20180116::Client::modifyItemLimitRule(shared_ptr<ModifyItemLimitRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyItemLimitRuleWithOptions(request, runtime);
}

NotifyPayOrderStatusResponse Alibabacloud_Linkedmall20180116::Client::notifyPayOrderStatusWithOptions(shared_ptr<NotifyPayOrderStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return NotifyPayOrderStatusResponse(doRPCRequest(make_shared<string>("NotifyPayOrderStatus"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

NotifyPayOrderStatusResponse Alibabacloud_Linkedmall20180116::Client::notifyPayOrderStatus(shared_ptr<NotifyPayOrderStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyPayOrderStatusWithOptions(request, runtime);
}

NotifyWithholdFundResponse Alibabacloud_Linkedmall20180116::Client::notifyWithholdFundWithOptions(shared_ptr<NotifyWithholdFundRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return NotifyWithholdFundResponse(doRPCRequest(make_shared<string>("NotifyWithholdFund"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

NotifyWithholdFundResponse Alibabacloud_Linkedmall20180116::Client::notifyWithholdFund(shared_ptr<NotifyWithholdFundRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyWithholdFundWithOptions(request, runtime);
}

QueryActivityItemsResponse Alibabacloud_Linkedmall20180116::Client::queryActivityItemsWithOptions(shared_ptr<QueryActivityItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryActivityItemsResponse(doRPCRequest(make_shared<string>("QueryActivityItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryActivityItemsResponse Alibabacloud_Linkedmall20180116::Client::queryActivityItems(shared_ptr<QueryActivityItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryActivityItemsWithOptions(request, runtime);
}

QueryAddressResponse Alibabacloud_Linkedmall20180116::Client::queryAddressWithOptions(shared_ptr<QueryAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAddressResponse(doRPCRequest(make_shared<string>("QueryAddress"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAddressResponse Alibabacloud_Linkedmall20180116::Client::queryAddress(shared_ptr<QueryAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressWithOptions(request, runtime);
}

QueryAddressDetailResponse Alibabacloud_Linkedmall20180116::Client::queryAddressDetailWithOptions(shared_ptr<QueryAddressDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAddressDetailResponse(doRPCRequest(make_shared<string>("QueryAddressDetail"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAddressDetailResponse Alibabacloud_Linkedmall20180116::Client::queryAddressDetail(shared_ptr<QueryAddressDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressDetailWithOptions(request, runtime);
}

QueryAddressListResponse Alibabacloud_Linkedmall20180116::Client::queryAddressListWithOptions(shared_ptr<QueryAddressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAddressListResponse(doRPCRequest(make_shared<string>("QueryAddressList"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAddressListResponse Alibabacloud_Linkedmall20180116::Client::queryAddressList(shared_ptr<QueryAddressListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAddressListWithOptions(request, runtime);
}

QueryAdvertisementSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryAdvertisementSettleInfoWithOptions(shared_ptr<QueryAdvertisementSettleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAdvertisementSettleInfoResponse(doRPCRequest(make_shared<string>("QueryAdvertisementSettleInfo"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAdvertisementSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryAdvertisementSettleInfo(shared_ptr<QueryAdvertisementSettleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAdvertisementSettleInfoWithOptions(request, runtime);
}

QueryAgreementResponse Alibabacloud_Linkedmall20180116::Client::queryAgreementWithOptions(shared_ptr<QueryAgreementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAgreementResponse(doRPCRequest(make_shared<string>("QueryAgreement"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAgreementResponse Alibabacloud_Linkedmall20180116::Client::queryAgreement(shared_ptr<QueryAgreementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAgreementWithOptions(request, runtime);
}

QueryAllCinemasResponse Alibabacloud_Linkedmall20180116::Client::queryAllCinemasWithOptions(shared_ptr<QueryAllCinemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAllCinemasResponse(doRPCRequest(make_shared<string>("QueryAllCinemas"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAllCinemasResponse Alibabacloud_Linkedmall20180116::Client::queryAllCinemas(shared_ptr<QueryAllCinemasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllCinemasWithOptions(request, runtime);
}

QueryAllCitiesResponse Alibabacloud_Linkedmall20180116::Client::queryAllCitiesWithOptions(shared_ptr<QueryAllCitiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryAllCitiesShrinkRequest> request = make_shared<QueryAllCitiesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extJson)) {
    request->extJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extJson, make_shared<string>("ExtJson"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAllCitiesResponse(doRPCRequest(make_shared<string>("QueryAllCities"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAllCitiesResponse Alibabacloud_Linkedmall20180116::Client::queryAllCities(shared_ptr<QueryAllCitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAllCitiesWithOptions(request, runtime);
}

QueryBatchRegistAnonymousTbAccountResultResponse Alibabacloud_Linkedmall20180116::Client::queryBatchRegistAnonymousTbAccountResultWithOptions(shared_ptr<QueryBatchRegistAnonymousTbAccountResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBatchRegistAnonymousTbAccountResultResponse(doRPCRequest(make_shared<string>("QueryBatchRegistAnonymousTbAccountResult"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBatchRegistAnonymousTbAccountResultResponse Alibabacloud_Linkedmall20180116::Client::queryBatchRegistAnonymousTbAccountResult(shared_ptr<QueryBatchRegistAnonymousTbAccountResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBatchRegistAnonymousTbAccountResultWithOptions(request, runtime);
}

QueryBestSession4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBestSession4ItemsWithOptions(shared_ptr<QueryBestSession4ItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBestSession4ItemsShrinkRequest> request = make_shared<QueryBestSession4ItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBestSession4ItemsResponse(doRPCRequest(make_shared<string>("QueryBestSession4Items"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBestSession4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBestSession4Items(shared_ptr<QueryBestSession4ItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBestSession4ItemsWithOptions(request, runtime);
}

QueryBizItemListResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemListWithOptions(shared_ptr<QueryBizItemListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemListShrinkRequest> request = make_shared<QueryBizItemListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBizItemListResponse(doRPCRequest(make_shared<string>("QueryBizItemList"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBizItemListResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemList(shared_ptr<QueryBizItemListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemListWithOptions(request, runtime);
}

QueryBizItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithOptions(shared_ptr<QueryBizItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBizItemsResponse(doRPCRequest(make_shared<string>("QueryBizItems"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBizItemsResponse Alibabacloud_Linkedmall20180116::Client::queryBizItems(shared_ptr<QueryBizItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemsWithOptions(request, runtime);
}

QueryBizItemsWithActivityResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithActivityWithOptions(shared_ptr<QueryBizItemsWithActivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryBizItemsWithActivityShrinkRequest> request = make_shared<QueryBizItemsWithActivityShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryBizItemsWithActivityResponse(doRPCRequest(make_shared<string>("QueryBizItemsWithActivity"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBizItemsWithActivityResponse Alibabacloud_Linkedmall20180116::Client::queryBizItemsWithActivity(shared_ptr<QueryBizItemsWithActivityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBizItemsWithActivityWithOptions(request, runtime);
}

QueryGuideItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOptions(shared_ptr<QueryGuideItemGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryGuideItemGroupResponse(doRPCRequest(make_shared<string>("QueryGuideItemGroup"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryGuideItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroup(shared_ptr<QueryGuideItemGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGuideItemGroupWithOptions(request, runtime);
}

QueryGuideItemGroupWithOutInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOutInventoryWithOptions(shared_ptr<QueryGuideItemGroupWithOutInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryGuideItemGroupWithOutInventoryResponse(doRPCRequest(make_shared<string>("QueryGuideItemGroupWithOutInventory"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryGuideItemGroupWithOutInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryGuideItemGroupWithOutInventory(shared_ptr<QueryGuideItemGroupWithOutInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryGuideItemGroupWithOutInventoryWithOptions(request, runtime);
}

QueryHotMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryHotMoviesWithOptions(shared_ptr<QueryHotMoviesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryHotMoviesResponse(doRPCRequest(make_shared<string>("QueryHotMovies"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryHotMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryHotMovies(shared_ptr<QueryHotMoviesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryHotMoviesWithOptions(request, runtime);
}

QueryInventoryOfItemsInBizItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryInventoryOfItemsInBizItemGroupWithOptions(shared_ptr<QueryInventoryOfItemsInBizItemGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryInventoryOfItemsInBizItemGroupShrinkRequest> request = make_shared<QueryInventoryOfItemsInBizItemGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryInventoryOfItemsInBizItemGroupResponse(doRPCRequest(make_shared<string>("QueryInventoryOfItemsInBizItemGroup"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInventoryOfItemsInBizItemGroupResponse Alibabacloud_Linkedmall20180116::Client::queryInventoryOfItemsInBizItemGroup(shared_ptr<QueryInventoryOfItemsInBizItemGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInventoryOfItemsInBizItemGroupWithOptions(request, runtime);
}

QueryItemDetailResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailWithOptions(shared_ptr<QueryItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryItemDetailResponse(doRPCRequest(make_shared<string>("QueryItemDetail"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryItemDetailResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetail(shared_ptr<QueryItemDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailWithOptions(request, runtime);
}

QueryItemDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailInnerWithOptions(shared_ptr<QueryItemDetailInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryItemDetailInnerResponse(doRPCRequest(make_shared<string>("QueryItemDetailInner"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryItemDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryItemDetailInner(shared_ptr<QueryItemDetailInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemDetailInnerWithOptions(request, runtime);
}

QueryItemInSubBizsResponse Alibabacloud_Linkedmall20180116::Client::queryItemInSubBizsWithOptions(shared_ptr<QueryItemInSubBizsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryItemInSubBizsShrinkRequest> request = make_shared<QueryItemInSubBizsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subBizIds)) {
    request->subBizIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subBizIds, make_shared<string>("SubBizIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryItemInSubBizsResponse(doRPCRequest(make_shared<string>("QueryItemInSubBizs"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryItemInSubBizsResponse Alibabacloud_Linkedmall20180116::Client::queryItemInSubBizs(shared_ptr<QueryItemInSubBizsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemInSubBizsWithOptions(request, runtime);
}

QueryItemInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryItemInventoryWithOptions(shared_ptr<QueryItemInventoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryItemInventoryResponse(doRPCRequest(make_shared<string>("QueryItemInventory"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryItemInventoryResponse Alibabacloud_Linkedmall20180116::Client::queryItemInventory(shared_ptr<QueryItemInventoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryItemInventoryWithOptions(request, runtime);
}

QueryLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryLogisticsWithOptions(shared_ptr<QueryLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryLogisticsResponse(doRPCRequest(make_shared<string>("QueryLogistics"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryLogistics(shared_ptr<QueryLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLogisticsWithOptions(request, runtime);
}

QueryMediaSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryMediaSettleInfoWithOptions(shared_ptr<QueryMediaSettleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMediaSettleInfoResponse(doRPCRequest(make_shared<string>("QueryMediaSettleInfo"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMediaSettleInfoResponse Alibabacloud_Linkedmall20180116::Client::queryMediaSettleInfo(shared_ptr<QueryMediaSettleInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaSettleInfoWithOptions(request, runtime);
}

QueryMessagesResponse Alibabacloud_Linkedmall20180116::Client::queryMessagesWithOptions(shared_ptr<QueryMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMessagesResponse(doRPCRequest(make_shared<string>("QueryMessages"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMessagesResponse Alibabacloud_Linkedmall20180116::Client::queryMessages(shared_ptr<QueryMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessagesWithOptions(request, runtime);
}

QueryMovieCommentsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieCommentsWithOptions(shared_ptr<QueryMovieCommentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMovieCommentsResponse(doRPCRequest(make_shared<string>("QueryMovieComments"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMovieCommentsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieComments(shared_ptr<QueryMovieCommentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieCommentsWithOptions(request, runtime);
}

QueryMovieSchedulesResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSchedulesWithOptions(shared_ptr<QueryMovieSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMovieSchedulesResponse(doRPCRequest(make_shared<string>("QueryMovieSchedules"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMovieSchedulesResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSchedules(shared_ptr<QueryMovieSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieSchedulesWithOptions(request, runtime);
}

QueryMovieSeatsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSeatsWithOptions(shared_ptr<QueryMovieSeatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMovieSeatsResponse(doRPCRequest(make_shared<string>("QueryMovieSeats"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMovieSeatsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieSeats(shared_ptr<QueryMovieSeatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieSeatsWithOptions(request, runtime);
}

QueryMovieTicketsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieTicketsWithOptions(shared_ptr<QueryMovieTicketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryMovieTicketsResponse(doRPCRequest(make_shared<string>("QueryMovieTickets"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMovieTicketsResponse Alibabacloud_Linkedmall20180116::Client::queryMovieTickets(shared_ptr<QueryMovieTicketsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMovieTicketsWithOptions(request, runtime);
}

QueryOrderAndPaymentListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentListWithOptions(shared_ptr<QueryOrderAndPaymentListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderAndPaymentListResponse(doRPCRequest(make_shared<string>("QueryOrderAndPaymentList"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderAndPaymentListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderAndPaymentList(shared_ptr<QueryOrderAndPaymentListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderAndPaymentListWithOptions(request, runtime);
}

QueryOrderCommissionRateResponse Alibabacloud_Linkedmall20180116::Client::queryOrderCommissionRateWithOptions(shared_ptr<QueryOrderCommissionRateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderCommissionRateResponse(doRPCRequest(make_shared<string>("QueryOrderCommissionRate"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderCommissionRateResponse Alibabacloud_Linkedmall20180116::Client::queryOrderCommissionRate(shared_ptr<QueryOrderCommissionRateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderCommissionRateWithOptions(request, runtime);
}

QueryOrderDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryOrderDetailInnerWithOptions(shared_ptr<QueryOrderDetailInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderDetailInnerResponse(doRPCRequest(make_shared<string>("QueryOrderDetailInner"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderDetailInnerResponse Alibabacloud_Linkedmall20180116::Client::queryOrderDetailInner(shared_ptr<QueryOrderDetailInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderDetailInnerWithOptions(request, runtime);
}

QueryOrderIdByPayIdResponse Alibabacloud_Linkedmall20180116::Client::queryOrderIdByPayIdWithOptions(shared_ptr<QueryOrderIdByPayIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderIdByPayIdResponse(doRPCRequest(make_shared<string>("QueryOrderIdByPayId"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderIdByPayIdResponse Alibabacloud_Linkedmall20180116::Client::queryOrderIdByPayId(shared_ptr<QueryOrderIdByPayIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderIdByPayIdWithOptions(request, runtime);
}

QueryOrderInfoAfterSaleResponse Alibabacloud_Linkedmall20180116::Client::queryOrderInfoAfterSaleWithOptions(shared_ptr<QueryOrderInfoAfterSaleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryOrderInfoAfterSaleResponse(doRPCRequest(make_shared<string>("QueryOrderInfoAfterSale"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderInfoAfterSaleResponse Alibabacloud_Linkedmall20180116::Client::queryOrderInfoAfterSale(shared_ptr<QueryOrderInfoAfterSaleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderInfoAfterSaleWithOptions(request, runtime);
}

QueryOrderItemInfoByPaymentIdForAiZhanYouResponse Alibabacloud_Linkedmall20180116::Client::queryOrderItemInfoByPaymentIdForAiZhanYouWithOptions(shared_ptr<QueryOrderItemInfoByPaymentIdForAiZhanYouRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderItemInfoByPaymentIdForAiZhanYouResponse(doRPCRequest(make_shared<string>("QueryOrderItemInfoByPaymentIdForAiZhanYou"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderItemInfoByPaymentIdForAiZhanYouResponse Alibabacloud_Linkedmall20180116::Client::queryOrderItemInfoByPaymentIdForAiZhanYou(shared_ptr<QueryOrderItemInfoByPaymentIdForAiZhanYouRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderItemInfoByPaymentIdForAiZhanYouWithOptions(request, runtime);
}

QueryOrderListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderListWithOptions(shared_ptr<QueryOrderListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderListResponse(doRPCRequest(make_shared<string>("QueryOrderList"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderListResponse Alibabacloud_Linkedmall20180116::Client::queryOrderList(shared_ptr<QueryOrderListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderListWithOptions(request, runtime);
}

QueryOrderLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogisticsWithOptions(shared_ptr<QueryOrderLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrderLogisticsResponse(doRPCRequest(make_shared<string>("QueryOrderLogistics"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrderLogisticsResponse Alibabacloud_Linkedmall20180116::Client::queryOrderLogistics(shared_ptr<QueryOrderLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrderLogisticsWithOptions(request, runtime);
}

QueryRefundApplicationDetailResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplicationDetailWithOptions(shared_ptr<QueryRefundApplicationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRefundApplicationDetailResponse(doRPCRequest(make_shared<string>("QueryRefundApplicationDetail"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRefundApplicationDetailResponse Alibabacloud_Linkedmall20180116::Client::queryRefundApplicationDetail(shared_ptr<QueryRefundApplicationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRefundApplicationDetailWithOptions(request, runtime);
}

QueryStatementsResponse Alibabacloud_Linkedmall20180116::Client::queryStatementsWithOptions(shared_ptr<QueryStatementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryStatementsResponse(doRPCRequest(make_shared<string>("QueryStatements"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryStatementsResponse Alibabacloud_Linkedmall20180116::Client::queryStatements(shared_ptr<QueryStatementsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStatementsWithOptions(request, runtime);
}

QueryUnfinishedActivitiesResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedActivitiesWithOptions(shared_ptr<QueryUnfinishedActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUnfinishedActivitiesResponse(doRPCRequest(make_shared<string>("QueryUnfinishedActivities"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUnfinishedActivitiesResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedActivities(shared_ptr<QueryUnfinishedActivitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedActivitiesWithOptions(request, runtime);
}

QueryUnfinishedSessionsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessionsWithOptions(shared_ptr<QueryUnfinishedSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUnfinishedSessionsResponse(doRPCRequest(make_shared<string>("QueryUnfinishedSessions"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUnfinishedSessionsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions(shared_ptr<QueryUnfinishedSessionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedSessionsWithOptions(request, runtime);
}

QueryUnfinishedSessions4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions4ItemsWithOptions(shared_ptr<QueryUnfinishedSessions4ItemsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUnfinishedSessions4ItemsShrinkRequest> request = make_shared<QueryUnfinishedSessions4ItemsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->lmItemIds)) {
    request->lmItemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->lmItemIds, make_shared<string>("LmItemIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->itemIds)) {
    request->itemIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->itemIds, make_shared<string>("ItemIds"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUnfinishedSessions4ItemsResponse(doRPCRequest(make_shared<string>("QueryUnfinishedSessions4Items"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUnfinishedSessions4ItemsResponse Alibabacloud_Linkedmall20180116::Client::queryUnfinishedSessions4Items(shared_ptr<QueryUnfinishedSessions4ItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUnfinishedSessions4ItemsWithOptions(request, runtime);
}

QueryUpcomingMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryUpcomingMoviesWithOptions(shared_ptr<QueryUpcomingMoviesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<QueryUpcomingMoviesShrinkRequest> request = make_shared<QueryUpcomingMoviesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->extJson)) {
    request->extJsonShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extJson, make_shared<string>("ExtJson"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUpcomingMoviesResponse(doRPCRequest(make_shared<string>("QueryUpcomingMovies"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUpcomingMoviesResponse Alibabacloud_Linkedmall20180116::Client::queryUpcomingMovies(shared_ptr<QueryUpcomingMoviesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUpcomingMoviesWithOptions(request, runtime);
}

QueryWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::queryWithholdTradeWithOptions(shared_ptr<QueryWithholdTradeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryWithholdTradeResponse(doRPCRequest(make_shared<string>("QueryWithholdTrade"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryWithholdTradeResponse Alibabacloud_Linkedmall20180116::Client::queryWithholdTrade(shared_ptr<QueryWithholdTradeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryWithholdTradeWithOptions(request, runtime);
}

RefundOrderResponse Alibabacloud_Linkedmall20180116::Client::refundOrderWithOptions(shared_ptr<RefundOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefundOrderResponse(doRPCRequest(make_shared<string>("RefundOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefundOrderResponse Alibabacloud_Linkedmall20180116::Client::refundOrder(shared_ptr<RefundOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundOrderWithOptions(request, runtime);
}

RefundPointResponse Alibabacloud_Linkedmall20180116::Client::refundPointWithOptions(shared_ptr<RefundPointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefundPointResponse(doRPCRequest(make_shared<string>("RefundPoint"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefundPointResponse Alibabacloud_Linkedmall20180116::Client::refundPoint(shared_ptr<RefundPointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refundPointWithOptions(request, runtime);
}

RefuseMerchantSyncTaskResponse Alibabacloud_Linkedmall20180116::Client::refuseMerchantSyncTaskWithOptions(shared_ptr<RefuseMerchantSyncTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefuseMerchantSyncTaskResponse(doRPCRequest(make_shared<string>("RefuseMerchantSyncTask"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefuseMerchantSyncTaskResponse Alibabacloud_Linkedmall20180116::Client::refuseMerchantSyncTask(shared_ptr<RefuseMerchantSyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refuseMerchantSyncTaskWithOptions(request, runtime);
}

RegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::registAnonymousTbAccountWithOptions(shared_ptr<RegistAnonymousTbAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegistAnonymousTbAccountResponse(doRPCRequest(make_shared<string>("RegistAnonymousTbAccount"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegistAnonymousTbAccountResponse Alibabacloud_Linkedmall20180116::Client::registAnonymousTbAccount(shared_ptr<RegistAnonymousTbAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registAnonymousTbAccountWithOptions(request, runtime);
}

ReleaseMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::releaseMovieSeatWithOptions(shared_ptr<ReleaseMovieSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseMovieSeatResponse(doRPCRequest(make_shared<string>("ReleaseMovieSeat"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::releaseMovieSeat(shared_ptr<ReleaseMovieSeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseMovieSeatWithOptions(request, runtime);
}

RemoveAddressResponse Alibabacloud_Linkedmall20180116::Client::removeAddressWithOptions(shared_ptr<RemoveAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveAddressResponse(doRPCRequest(make_shared<string>("RemoveAddress"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveAddressResponse Alibabacloud_Linkedmall20180116::Client::removeAddress(shared_ptr<RemoveAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAddressWithOptions(request, runtime);
}

RemoveMessagesResponse Alibabacloud_Linkedmall20180116::Client::removeMessagesWithOptions(shared_ptr<RemoveMessagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveMessagesResponse(doRPCRequest(make_shared<string>("RemoveMessages"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveMessagesResponse Alibabacloud_Linkedmall20180116::Client::removeMessages(shared_ptr<RemoveMessagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeMessagesWithOptions(request, runtime);
}

RenderH5OrderResponse Alibabacloud_Linkedmall20180116::Client::renderH5OrderWithOptions(shared_ptr<RenderH5OrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenderH5OrderResponse(doRPCRequest(make_shared<string>("RenderH5Order"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenderH5OrderResponse Alibabacloud_Linkedmall20180116::Client::renderH5Order(shared_ptr<RenderH5OrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderH5OrderWithOptions(request, runtime);
}

RenderOrderResponse Alibabacloud_Linkedmall20180116::Client::renderOrderWithOptions(shared_ptr<RenderOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenderOrderResponse(doRPCRequest(make_shared<string>("RenderOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenderOrderResponse Alibabacloud_Linkedmall20180116::Client::renderOrder(shared_ptr<RenderOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renderOrderWithOptions(request, runtime);
}

RepayForPayUrlResponse Alibabacloud_Linkedmall20180116::Client::repayForPayUrlWithOptions(shared_ptr<RepayForPayUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RepayForPayUrlResponse(doRPCRequest(make_shared<string>("RepayForPayUrl"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RepayForPayUrlResponse Alibabacloud_Linkedmall20180116::Client::repayForPayUrl(shared_ptr<RepayForPayUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return repayForPayUrlWithOptions(request, runtime);
}

RepayOrderResponse Alibabacloud_Linkedmall20180116::Client::repayOrderWithOptions(shared_ptr<RepayOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RepayOrderResponse(doRPCRequest(make_shared<string>("RepayOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RepayOrderResponse Alibabacloud_Linkedmall20180116::Client::repayOrder(shared_ptr<RepayOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return repayOrderWithOptions(request, runtime);
}

ReserveMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::reserveMovieSeatWithOptions(shared_ptr<ReserveMovieSeatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReserveMovieSeatResponse(doRPCRequest(make_shared<string>("ReserveMovieSeat"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReserveMovieSeatResponse Alibabacloud_Linkedmall20180116::Client::reserveMovieSeat(shared_ptr<ReserveMovieSeatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reserveMovieSeatWithOptions(request, runtime);
}

SettleOrderResponse Alibabacloud_Linkedmall20180116::Client::settleOrderWithOptions(shared_ptr<SettleOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SettleOrderResponse(doRPCRequest(make_shared<string>("SettleOrder"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SettleOrderResponse Alibabacloud_Linkedmall20180116::Client::settleOrder(shared_ptr<SettleOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return settleOrderWithOptions(request, runtime);
}

SubmitReturnGoodLogisticsResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogisticsWithOptions(shared_ptr<SubmitReturnGoodLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubmitReturnGoodLogisticsResponse(doRPCRequest(make_shared<string>("SubmitReturnGoodLogistics"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubmitReturnGoodLogisticsResponse Alibabacloud_Linkedmall20180116::Client::submitReturnGoodLogistics(shared_ptr<SubmitReturnGoodLogisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitReturnGoodLogisticsWithOptions(request, runtime);
}

SyncMerchantInfoResponse Alibabacloud_Linkedmall20180116::Client::syncMerchantInfoWithOptions(shared_ptr<SyncMerchantInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncMerchantInfoResponse(doRPCRequest(make_shared<string>("SyncMerchantInfo"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncMerchantInfoResponse Alibabacloud_Linkedmall20180116::Client::syncMerchantInfo(shared_ptr<SyncMerchantInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncMerchantInfoWithOptions(request, runtime);
}

UnsignWithholdAgreementResponse Alibabacloud_Linkedmall20180116::Client::unsignWithholdAgreementWithOptions(shared_ptr<UnsignWithholdAgreementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnsignWithholdAgreementResponse(doRPCRequest(make_shared<string>("UnsignWithholdAgreement"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnsignWithholdAgreementResponse Alibabacloud_Linkedmall20180116::Client::unsignWithholdAgreement(shared_ptr<UnsignWithholdAgreementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsignWithholdAgreementWithOptions(request, runtime);
}

UpdateAddressResponse Alibabacloud_Linkedmall20180116::Client::updateAddressWithOptions(shared_ptr<UpdateAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAddressResponse(doRPCRequest(make_shared<string>("UpdateAddress"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAddressResponse Alibabacloud_Linkedmall20180116::Client::updateAddress(shared_ptr<UpdateAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAddressWithOptions(request, runtime);
}

ValidateTaobaoAccountResponse Alibabacloud_Linkedmall20180116::Client::validateTaobaoAccountWithOptions(shared_ptr<ValidateTaobaoAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ValidateTaobaoAccountResponse(doRPCRequest(make_shared<string>("ValidateTaobaoAccount"), make_shared<string>("2018-01-16"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ValidateTaobaoAccountResponse Alibabacloud_Linkedmall20180116::Client::validateTaobaoAccount(shared_ptr<ValidateTaobaoAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return validateTaobaoAccountWithOptions(request, runtime);
}

