// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/bss_open_api_20171214.hpp>
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

using namespace Alibabacloud_BssOpenApi20171214;

Alibabacloud_BssOpenApi20171214::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "business.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1", "business.ap-southeast-1.aliyuncs.com"},
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
    {"cn-hangzhou", "business.aliyuncs.com"},
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
    {"cn-north-2-gov-1", "business.aliyuncs.com"},
    {"cn-qingdao", "business.aliyuncs.com"},
    {"cn-qingdao-nebula", "business.aliyuncs.com"},
    {"cn-shanghai", "business.aliyuncs.com"},
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
    {"cn-yushanfang", "business.aliyuncs.com"},
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

string Alibabacloud_BssOpenApi20171214::Client::getEndpoint(shared_ptr<string> productId,
                                                            shared_ptr<string> regionId,
                                                            shared_ptr<string> endpointRule,
                                                            shared_ptr<string> network,
                                                            shared_ptr<string> suffix,
                                                            shared_ptr<map<string, string>> endpointMap,
                                                            shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)["[object Object]"]))) {
    return (*endpointMap)["[object Object]"];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AllocateCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::allocateCostUnitResourceWithOptions(shared_ptr<AllocateCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AllocateCostUnitResourceResponse(doRPCRequest(make_shared<string>("AllocateCostUnitResource"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AllocateCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::allocateCostUnitResource(shared_ptr<AllocateCostUnitResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allocateCostUnitResourceWithOptions(request, runtime);
}

ApplyInvoiceResponse Alibabacloud_BssOpenApi20171214::Client::applyInvoiceWithOptions(shared_ptr<ApplyInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ApplyInvoiceResponse(doRPCRequest(make_shared<string>("ApplyInvoice"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ApplyInvoiceResponse Alibabacloud_BssOpenApi20171214::Client::applyInvoice(shared_ptr<ApplyInvoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyInvoiceWithOptions(request, runtime);
}

CancelOrderResponse Alibabacloud_BssOpenApi20171214::Client::cancelOrderWithOptions(shared_ptr<CancelOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOrderResponse(doRPCRequest(make_shared<string>("CancelOrder"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOrderResponse Alibabacloud_BssOpenApi20171214::Client::cancelOrder(shared_ptr<CancelOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOrderWithOptions(request, runtime);
}

ChangeResellerConsumeAmountResponse Alibabacloud_BssOpenApi20171214::Client::changeResellerConsumeAmountWithOptions(shared_ptr<ChangeResellerConsumeAmountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ChangeResellerConsumeAmountResponse(doRPCRequest(make_shared<string>("ChangeResellerConsumeAmount"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ChangeResellerConsumeAmountResponse Alibabacloud_BssOpenApi20171214::Client::changeResellerConsumeAmount(shared_ptr<ChangeResellerConsumeAmountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return changeResellerConsumeAmountWithOptions(request, runtime);
}

ConvertChargeTypeResponse Alibabacloud_BssOpenApi20171214::Client::convertChargeTypeWithOptions(shared_ptr<ConvertChargeTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ConvertChargeTypeResponse(doRPCRequest(make_shared<string>("ConvertChargeType"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ConvertChargeTypeResponse Alibabacloud_BssOpenApi20171214::Client::convertChargeType(shared_ptr<ConvertChargeTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertChargeTypeWithOptions(request, runtime);
}

CreateAgAccountResponse Alibabacloud_BssOpenApi20171214::Client::createAgAccountWithOptions(shared_ptr<CreateAgAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAgAccountResponse(doRPCRequest(make_shared<string>("CreateAgAccount"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAgAccountResponse Alibabacloud_BssOpenApi20171214::Client::createAgAccount(shared_ptr<CreateAgAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAgAccountWithOptions(request, runtime);
}

CreateCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::createCostUnitWithOptions(shared_ptr<CreateCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCostUnitResponse(doRPCRequest(make_shared<string>("CreateCostUnit"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::createCostUnit(shared_ptr<CreateCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCostUnitWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateInstanceResponse(doRPCRequest(make_shared<string>("CreateInstance"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateInstanceResponse Alibabacloud_BssOpenApi20171214::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::createResellerUserQuotaWithOptions(shared_ptr<CreateResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateResellerUserQuotaResponse(doRPCRequest(make_shared<string>("CreateResellerUserQuota"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::createResellerUserQuota(shared_ptr<CreateResellerUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResellerUserQuotaWithOptions(request, runtime);
}

CreateResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::createResourcePackageWithOptions(shared_ptr<CreateResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateResourcePackageResponse(doRPCRequest(make_shared<string>("CreateResourcePackage"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::createResourcePackage(shared_ptr<CreateResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createResourcePackageWithOptions(request, runtime);
}

DeleteCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::deleteCostUnitWithOptions(shared_ptr<DeleteCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteCostUnitResponse(doRPCRequest(make_shared<string>("DeleteCostUnit"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::deleteCostUnit(shared_ptr<DeleteCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCostUnitWithOptions(request, runtime);
}

DescribeInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceBillWithOptions(shared_ptr<DescribeInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceBillResponse(doRPCRequest(make_shared<string>("DescribeInstanceBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::describeInstanceBill(shared_ptr<DescribeInstanceBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceBillWithOptions(request, runtime);
}

DescribeResourcePackageProductResponse Alibabacloud_BssOpenApi20171214::Client::describeResourcePackageProductWithOptions(shared_ptr<DescribeResourcePackageProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeResourcePackageProductResponse(doRPCRequest(make_shared<string>("DescribeResourcePackageProduct"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeResourcePackageProductResponse Alibabacloud_BssOpenApi20171214::Client::describeResourcePackageProduct(shared_ptr<DescribeResourcePackageProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourcePackageProductWithOptions(request, runtime);
}

DescribeSplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::describeSplitItemBillWithOptions(shared_ptr<DescribeSplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSplitItemBillResponse(doRPCRequest(make_shared<string>("DescribeSplitItemBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::describeSplitItemBill(shared_ptr<DescribeSplitItemBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSplitItemBillWithOptions(request, runtime);
}

EnableBillGenerationResponse Alibabacloud_BssOpenApi20171214::Client::enableBillGenerationWithOptions(shared_ptr<EnableBillGenerationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableBillGenerationResponse(doRPCRequest(make_shared<string>("EnableBillGeneration"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableBillGenerationResponse Alibabacloud_BssOpenApi20171214::Client::enableBillGeneration(shared_ptr<EnableBillGenerationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableBillGenerationWithOptions(request, runtime);
}

GetCustomerAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerAccountInfoWithOptions(shared_ptr<GetCustomerAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetCustomerAccountInfoResponse(doRPCRequest(make_shared<string>("GetCustomerAccountInfo"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCustomerAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerAccountInfo(shared_ptr<GetCustomerAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerAccountInfoWithOptions(request, runtime);
}

GetCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return GetCustomerListResponse(doRPCRequest(make_shared<string>("GetCustomerList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::getCustomerList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomerListWithOptions(runtime);
}

GetOrderDetailResponse Alibabacloud_BssOpenApi20171214::Client::getOrderDetailWithOptions(shared_ptr<GetOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetOrderDetailResponse(doRPCRequest(make_shared<string>("GetOrderDetail"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetOrderDetailResponse Alibabacloud_BssOpenApi20171214::Client::getOrderDetail(shared_ptr<GetOrderDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOrderDetailWithOptions(request, runtime);
}

GetPayAsYouGoPriceResponse Alibabacloud_BssOpenApi20171214::Client::getPayAsYouGoPriceWithOptions(shared_ptr<GetPayAsYouGoPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetPayAsYouGoPriceResponse(doRPCRequest(make_shared<string>("GetPayAsYouGoPrice"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetPayAsYouGoPriceResponse Alibabacloud_BssOpenApi20171214::Client::getPayAsYouGoPrice(shared_ptr<GetPayAsYouGoPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPayAsYouGoPriceWithOptions(request, runtime);
}

GetResourcePackagePriceResponse Alibabacloud_BssOpenApi20171214::Client::getResourcePackagePriceWithOptions(shared_ptr<GetResourcePackagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetResourcePackagePriceResponse(doRPCRequest(make_shared<string>("GetResourcePackagePrice"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetResourcePackagePriceResponse Alibabacloud_BssOpenApi20171214::Client::getResourcePackagePrice(shared_ptr<GetResourcePackagePriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourcePackagePriceWithOptions(request, runtime);
}

GetSubscriptionPriceResponse Alibabacloud_BssOpenApi20171214::Client::getSubscriptionPriceWithOptions(shared_ptr<GetSubscriptionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSubscriptionPriceResponse(doRPCRequest(make_shared<string>("GetSubscriptionPrice"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSubscriptionPriceResponse Alibabacloud_BssOpenApi20171214::Client::getSubscriptionPrice(shared_ptr<GetSubscriptionPriceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubscriptionPriceWithOptions(request, runtime);
}

ModifyCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::modifyCostUnitWithOptions(shared_ptr<ModifyCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyCostUnitResponse(doRPCRequest(make_shared<string>("ModifyCostUnit"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::modifyCostUnit(shared_ptr<ModifyCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCostUnitWithOptions(request, runtime);
}

ModifyInstanceResponse Alibabacloud_BssOpenApi20171214::Client::modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyInstanceResponse(doRPCRequest(make_shared<string>("ModifyInstance"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyInstanceResponse Alibabacloud_BssOpenApi20171214::Client::modifyInstance(shared_ptr<ModifyInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyInstanceWithOptions(request, runtime);
}

QueryAccountBalanceResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBalanceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryAccountBalanceResponse(doRPCRequest(make_shared<string>("QueryAccountBalance"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAccountBalanceResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBalance() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountBalanceWithOptions(runtime);
}

QueryAccountBillResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBillWithOptions(shared_ptr<QueryAccountBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAccountBillResponse(doRPCRequest(make_shared<string>("QueryAccountBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAccountBillResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountBill(shared_ptr<QueryAccountBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountBillWithOptions(request, runtime);
}

QueryAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionDetailsWithOptions(shared_ptr<QueryAccountTransactionDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAccountTransactionDetailsResponse(doRPCRequest(make_shared<string>("QueryAccountTransactionDetails"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAccountTransactionDetailsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionDetails(shared_ptr<QueryAccountTransactionDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountTransactionDetailsWithOptions(request, runtime);
}

QueryAccountTransactionsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactionsWithOptions(shared_ptr<QueryAccountTransactionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAccountTransactionsResponse(doRPCRequest(make_shared<string>("QueryAccountTransactions"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAccountTransactionsResponse Alibabacloud_BssOpenApi20171214::Client::queryAccountTransactions(shared_ptr<QueryAccountTransactionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAccountTransactionsWithOptions(request, runtime);
}

QueryAvailableInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryAvailableInstancesWithOptions(shared_ptr<QueryAvailableInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAvailableInstancesResponse(doRPCRequest(make_shared<string>("QueryAvailableInstances"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAvailableInstancesResponse Alibabacloud_BssOpenApi20171214::Client::queryAvailableInstances(shared_ptr<QueryAvailableInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAvailableInstancesWithOptions(request, runtime);
}

QueryBillResponse Alibabacloud_BssOpenApi20171214::Client::queryBillWithOptions(shared_ptr<QueryBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBillResponse(doRPCRequest(make_shared<string>("QueryBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBillResponse Alibabacloud_BssOpenApi20171214::Client::queryBill(shared_ptr<QueryBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillWithOptions(request, runtime);
}

QueryBillOverviewResponse Alibabacloud_BssOpenApi20171214::Client::queryBillOverviewWithOptions(shared_ptr<QueryBillOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBillOverviewResponse(doRPCRequest(make_shared<string>("QueryBillOverview"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBillOverviewResponse Alibabacloud_BssOpenApi20171214::Client::queryBillOverview(shared_ptr<QueryBillOverviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillOverviewWithOptions(request, runtime);
}

QueryBillToOSSSubscriptionResponse Alibabacloud_BssOpenApi20171214::Client::queryBillToOSSSubscriptionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return QueryBillToOSSSubscriptionResponse(doRPCRequest(make_shared<string>("QueryBillToOSSSubscription"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBillToOSSSubscriptionResponse Alibabacloud_BssOpenApi20171214::Client::queryBillToOSSSubscription() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBillToOSSSubscriptionWithOptions(runtime);
}

QueryCashCouponsResponse Alibabacloud_BssOpenApi20171214::Client::queryCashCouponsWithOptions(shared_ptr<QueryCashCouponsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCashCouponsResponse(doRPCRequest(make_shared<string>("QueryCashCoupons"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCashCouponsResponse Alibabacloud_BssOpenApi20171214::Client::queryCashCoupons(shared_ptr<QueryCashCouponsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCashCouponsWithOptions(request, runtime);
}

QueryCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitWithOptions(shared_ptr<QueryCostUnitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCostUnitResponse(doRPCRequest(make_shared<string>("QueryCostUnit"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCostUnitResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnit(shared_ptr<QueryCostUnitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCostUnitWithOptions(request, runtime);
}

QueryCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitResourceWithOptions(shared_ptr<QueryCostUnitResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCostUnitResourceResponse(doRPCRequest(make_shared<string>("QueryCostUnitResource"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCostUnitResourceResponse Alibabacloud_BssOpenApi20171214::Client::queryCostUnitResource(shared_ptr<QueryCostUnitResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCostUnitResourceWithOptions(request, runtime);
}

QueryCustomerAddressListResponse Alibabacloud_BssOpenApi20171214::Client::queryCustomerAddressListWithOptions(shared_ptr<QueryCustomerAddressListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCustomerAddressListResponse(doRPCRequest(make_shared<string>("QueryCustomerAddressList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCustomerAddressListResponse Alibabacloud_BssOpenApi20171214::Client::queryCustomerAddressList(shared_ptr<QueryCustomerAddressListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCustomerAddressListWithOptions(request, runtime);
}

QueryEvaluateListResponse Alibabacloud_BssOpenApi20171214::Client::queryEvaluateListWithOptions(shared_ptr<QueryEvaluateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEvaluateListResponse(doRPCRequest(make_shared<string>("QueryEvaluateList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEvaluateListResponse Alibabacloud_BssOpenApi20171214::Client::queryEvaluateList(shared_ptr<QueryEvaluateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEvaluateListWithOptions(request, runtime);
}

QueryFinancialAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::queryFinancialAccountInfoWithOptions(shared_ptr<QueryFinancialAccountInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryFinancialAccountInfoResponse(doRPCRequest(make_shared<string>("QueryFinancialAccountInfo"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryFinancialAccountInfoResponse Alibabacloud_BssOpenApi20171214::Client::queryFinancialAccountInfo(shared_ptr<QueryFinancialAccountInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFinancialAccountInfoWithOptions(request, runtime);
}

QueryInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceBillWithOptions(shared_ptr<QueryInstanceBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInstanceBillResponse(doRPCRequest(make_shared<string>("QueryInstanceBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInstanceBillResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceBill(shared_ptr<QueryInstanceBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceBillWithOptions(request, runtime);
}

QueryInstanceByTagResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceByTagWithOptions(shared_ptr<QueryInstanceByTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInstanceByTagResponse(doRPCRequest(make_shared<string>("QueryInstanceByTag"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInstanceByTagResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceByTag(shared_ptr<QueryInstanceByTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceByTagWithOptions(request, runtime);
}

QueryInstanceGaapCostResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceGaapCostWithOptions(shared_ptr<QueryInstanceGaapCostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInstanceGaapCostResponse(doRPCRequest(make_shared<string>("QueryInstanceGaapCost"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInstanceGaapCostResponse Alibabacloud_BssOpenApi20171214::Client::queryInstanceGaapCost(shared_ptr<QueryInstanceGaapCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInstanceGaapCostWithOptions(request, runtime);
}

QueryInvoicingCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::queryInvoicingCustomerListWithOptions(shared_ptr<QueryInvoicingCustomerListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryInvoicingCustomerListResponse(doRPCRequest(make_shared<string>("QueryInvoicingCustomerList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryInvoicingCustomerListResponse Alibabacloud_BssOpenApi20171214::Client::queryInvoicingCustomerList(shared_ptr<QueryInvoicingCustomerListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryInvoicingCustomerListWithOptions(request, runtime);
}

QueryMonthlyBillResponse Alibabacloud_BssOpenApi20171214::Client::queryMonthlyBillWithOptions(shared_ptr<QueryMonthlyBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMonthlyBillResponse(doRPCRequest(make_shared<string>("QueryMonthlyBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMonthlyBillResponse Alibabacloud_BssOpenApi20171214::Client::queryMonthlyBill(shared_ptr<QueryMonthlyBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonthlyBillWithOptions(request, runtime);
}

QueryMonthlyInstanceConsumptionResponse Alibabacloud_BssOpenApi20171214::Client::queryMonthlyInstanceConsumptionWithOptions(shared_ptr<QueryMonthlyInstanceConsumptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryMonthlyInstanceConsumptionResponse(doRPCRequest(make_shared<string>("QueryMonthlyInstanceConsumption"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryMonthlyInstanceConsumptionResponse Alibabacloud_BssOpenApi20171214::Client::queryMonthlyInstanceConsumption(shared_ptr<QueryMonthlyInstanceConsumptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonthlyInstanceConsumptionWithOptions(request, runtime);
}

QueryOrdersResponse Alibabacloud_BssOpenApi20171214::Client::queryOrdersWithOptions(shared_ptr<QueryOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOrdersResponse(doRPCRequest(make_shared<string>("QueryOrders"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOrdersResponse Alibabacloud_BssOpenApi20171214::Client::queryOrders(shared_ptr<QueryOrdersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOrdersWithOptions(request, runtime);
}

QueryPermissionListResponse Alibabacloud_BssOpenApi20171214::Client::queryPermissionListWithOptions(shared_ptr<QueryPermissionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPermissionListResponse(doRPCRequest(make_shared<string>("QueryPermissionList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPermissionListResponse Alibabacloud_BssOpenApi20171214::Client::queryPermissionList(shared_ptr<QueryPermissionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPermissionListWithOptions(request, runtime);
}

QueryPrepaidCardsResponse Alibabacloud_BssOpenApi20171214::Client::queryPrepaidCardsWithOptions(shared_ptr<QueryPrepaidCardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPrepaidCardsResponse(doRPCRequest(make_shared<string>("QueryPrepaidCards"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPrepaidCardsResponse Alibabacloud_BssOpenApi20171214::Client::queryPrepaidCards(shared_ptr<QueryPrepaidCardsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPrepaidCardsWithOptions(request, runtime);
}

QueryProductListResponse Alibabacloud_BssOpenApi20171214::Client::queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryProductListResponse(doRPCRequest(make_shared<string>("QueryProductList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryProductListResponse Alibabacloud_BssOpenApi20171214::Client::queryProductList(shared_ptr<QueryProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductListWithOptions(request, runtime);
}

QueryRedeemResponse Alibabacloud_BssOpenApi20171214::Client::queryRedeemWithOptions(shared_ptr<QueryRedeemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryRedeemResponse(doRPCRequest(make_shared<string>("QueryRedeem"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRedeemResponse Alibabacloud_BssOpenApi20171214::Client::queryRedeem(shared_ptr<QueryRedeemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRedeemWithOptions(request, runtime);
}

QueryRelationListResponse Alibabacloud_BssOpenApi20171214::Client::queryRelationListWithOptions(shared_ptr<QueryRelationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRelationListResponse(doRPCRequest(make_shared<string>("QueryRelationList"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRelationListResponse Alibabacloud_BssOpenApi20171214::Client::queryRelationList(shared_ptr<QueryRelationListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRelationListWithOptions(request, runtime);
}

QueryResellerAvailableQuotaResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerAvailableQuotaWithOptions(shared_ptr<QueryResellerAvailableQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryResellerAvailableQuotaResponse(doRPCRequest(make_shared<string>("QueryResellerAvailableQuota"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryResellerAvailableQuotaResponse Alibabacloud_BssOpenApi20171214::Client::queryResellerAvailableQuota(shared_ptr<QueryResellerAvailableQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryResellerAvailableQuotaWithOptions(request, runtime);
}

QueryRIUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryRIUtilizationDetailWithOptions(shared_ptr<QueryRIUtilizationDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryRIUtilizationDetailResponse(doRPCRequest(make_shared<string>("QueryRIUtilizationDetail"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryRIUtilizationDetailResponse Alibabacloud_BssOpenApi20171214::Client::queryRIUtilizationDetail(shared_ptr<QueryRIUtilizationDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRIUtilizationDetailWithOptions(request, runtime);
}

QuerySavingsPlansDeductLogResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDeductLogWithOptions(shared_ptr<QuerySavingsPlansDeductLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySavingsPlansDeductLogResponse(doRPCRequest(make_shared<string>("QuerySavingsPlansDeductLog"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySavingsPlansDeductLogResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansDeductLog(shared_ptr<QuerySavingsPlansDeductLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySavingsPlansDeductLogWithOptions(request, runtime);
}

QuerySavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansInstanceWithOptions(shared_ptr<QuerySavingsPlansInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySavingsPlansInstanceResponse(doRPCRequest(make_shared<string>("QuerySavingsPlansInstance"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySavingsPlansInstanceResponse Alibabacloud_BssOpenApi20171214::Client::querySavingsPlansInstance(shared_ptr<QuerySavingsPlansInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySavingsPlansInstanceWithOptions(request, runtime);
}

QuerySettleBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettleBillWithOptions(shared_ptr<QuerySettleBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySettleBillResponse(doRPCRequest(make_shared<string>("QuerySettleBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySettleBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettleBill(shared_ptr<QuerySettleBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySettleBillWithOptions(request, runtime);
}

QuerySettlementBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettlementBillWithOptions(shared_ptr<QuerySettlementBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySettlementBillResponse(doRPCRequest(make_shared<string>("QuerySettlementBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySettlementBillResponse Alibabacloud_BssOpenApi20171214::Client::querySettlementBill(shared_ptr<QuerySettlementBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySettlementBillWithOptions(request, runtime);
}

QuerySplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::querySplitItemBillWithOptions(shared_ptr<QuerySplitItemBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySplitItemBillResponse(doRPCRequest(make_shared<string>("QuerySplitItemBill"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySplitItemBillResponse Alibabacloud_BssOpenApi20171214::Client::querySplitItemBill(shared_ptr<QuerySplitItemBillRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySplitItemBillWithOptions(request, runtime);
}

QueryUserOmsDataResponse Alibabacloud_BssOpenApi20171214::Client::queryUserOmsDataWithOptions(shared_ptr<QueryUserOmsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryUserOmsDataResponse(doRPCRequest(make_shared<string>("QueryUserOmsData"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryUserOmsDataResponse Alibabacloud_BssOpenApi20171214::Client::queryUserOmsData(shared_ptr<QueryUserOmsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryUserOmsDataWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_BssOpenApi20171214::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewInstanceResponse(doRPCRequest(make_shared<string>("RenewInstance"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewInstanceResponse Alibabacloud_BssOpenApi20171214::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

RenewResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::renewResourcePackageWithOptions(shared_ptr<RenewResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RenewResourcePackageResponse(doRPCRequest(make_shared<string>("RenewResourcePackage"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RenewResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::renewResourcePackage(shared_ptr<RenewResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewResourcePackageWithOptions(request, runtime);
}

SaveUserCreditResponse Alibabacloud_BssOpenApi20171214::Client::saveUserCreditWithOptions(shared_ptr<SaveUserCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveUserCreditResponse(doRPCRequest(make_shared<string>("SaveUserCredit"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveUserCreditResponse Alibabacloud_BssOpenApi20171214::Client::saveUserCredit(shared_ptr<SaveUserCreditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveUserCreditWithOptions(request, runtime);
}

SetCreditLabelActionResponse Alibabacloud_BssOpenApi20171214::Client::setCreditLabelActionWithOptions(shared_ptr<SetCreditLabelActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetCreditLabelActionResponse(doRPCRequest(make_shared<string>("SetCreditLabelAction"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetCreditLabelActionResponse Alibabacloud_BssOpenApi20171214::Client::setCreditLabelAction(shared_ptr<SetCreditLabelActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCreditLabelActionWithOptions(request, runtime);
}

SetRenewalResponse Alibabacloud_BssOpenApi20171214::Client::setRenewalWithOptions(shared_ptr<SetRenewalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetRenewalResponse(doRPCRequest(make_shared<string>("SetRenewal"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetRenewalResponse Alibabacloud_BssOpenApi20171214::Client::setRenewal(shared_ptr<SetRenewalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setRenewalWithOptions(request, runtime);
}

SetResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserAlarmThresholdWithOptions(shared_ptr<SetResellerUserAlarmThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetResellerUserAlarmThresholdResponse(doRPCRequest(make_shared<string>("SetResellerUserAlarmThreshold"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetResellerUserAlarmThresholdResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserAlarmThreshold(shared_ptr<SetResellerUserAlarmThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserAlarmThresholdWithOptions(request, runtime);
}

SetResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserQuotaWithOptions(shared_ptr<SetResellerUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetResellerUserQuotaResponse(doRPCRequest(make_shared<string>("SetResellerUserQuota"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetResellerUserQuotaResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserQuota(shared_ptr<SetResellerUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserQuotaWithOptions(request, runtime);
}

SetResellerUserStatusResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserStatusWithOptions(shared_ptr<SetResellerUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetResellerUserStatusResponse(doRPCRequest(make_shared<string>("SetResellerUserStatus"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetResellerUserStatusResponse Alibabacloud_BssOpenApi20171214::Client::setResellerUserStatus(shared_ptr<SetResellerUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setResellerUserStatusWithOptions(request, runtime);
}

SubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::subscribeBillToOSSWithOptions(shared_ptr<SubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SubscribeBillToOSSResponse(doRPCRequest(make_shared<string>("SubscribeBillToOSS"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::subscribeBillToOSS(shared_ptr<SubscribeBillToOSSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscribeBillToOSSWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TagResourcesResponse(doRPCRequest(make_shared<string>("TagResources"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

UnsubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::unsubscribeBillToOSSWithOptions(shared_ptr<UnsubscribeBillToOSSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnsubscribeBillToOSSResponse(doRPCRequest(make_shared<string>("UnsubscribeBillToOSS"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnsubscribeBillToOSSResponse Alibabacloud_BssOpenApi20171214::Client::unsubscribeBillToOSS(shared_ptr<UnsubscribeBillToOSSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unsubscribeBillToOSSWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UntagResourcesResponse(doRPCRequest(make_shared<string>("UntagResources"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UntagResourcesResponse Alibabacloud_BssOpenApi20171214::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::upgradeResourcePackageWithOptions(shared_ptr<UpgradeResourcePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpgradeResourcePackageResponse(doRPCRequest(make_shared<string>("UpgradeResourcePackage"), make_shared<string>("2017-12-14"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpgradeResourcePackageResponse Alibabacloud_BssOpenApi20171214::Client::upgradeResourcePackage(shared_ptr<UpgradeResourcePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeResourcePackageWithOptions(request, runtime);
}

