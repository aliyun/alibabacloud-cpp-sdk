// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ft_20180713.hpp>
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

using namespace Alibabacloud_Ft20180713;

Alibabacloud_Ft20180713::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "ft.aliyuncs.com"},
    {"ap-south-1", "ft.aliyuncs.com"},
    {"ap-southeast-1", "ft.aliyuncs.com"},
    {"ap-southeast-2", "ft.aliyuncs.com"},
    {"ap-southeast-3", "ft.aliyuncs.com"},
    {"ap-southeast-5", "ft.aliyuncs.com"},
    {"cn-beijing", "ft.aliyuncs.com"},
    {"cn-beijing-finance-1", "ft.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ft.aliyuncs.com"},
    {"cn-beijing-gov-1", "ft.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ft.aliyuncs.com"},
    {"cn-chengdu", "ft.aliyuncs.com"},
    {"cn-edge-1", "ft.aliyuncs.com"},
    {"cn-fujian", "ft.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ft.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ft.aliyuncs.com"},
    {"cn-hangzhou-finance", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ft.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ft.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ft.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ft.aliyuncs.com"},
    {"cn-huhehaote", "ft.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ft.aliyuncs.com"},
    {"cn-qingdao", "ft.aliyuncs.com"},
    {"cn-qingdao-nebula", "ft.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ft.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ft.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ft.aliyuncs.com"},
    {"cn-shanghai-inner", "ft.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ft.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ft.aliyuncs.com"},
    {"cn-shenzhen-inner", "ft.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ft.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ft.aliyuncs.com"},
    {"cn-wuhan", "ft.aliyuncs.com"},
    {"cn-wulanchabu", "ft.aliyuncs.com"},
    {"cn-yushanfang", "ft.aliyuncs.com"},
    {"cn-zhangbei", "ft.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ft.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ft.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ft.aliyuncs.com"},
    {"eu-central-1", "ft.aliyuncs.com"},
    {"eu-west-1", "ft.aliyuncs.com"},
    {"eu-west-1-oxs", "ft.aliyuncs.com"},
    {"me-east-1", "ft.aliyuncs.com"},
    {"rus-west-1-pop", "ft.aliyuncs.com"},
    {"us-west-1", "ft.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ft"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Ft20180713::Client::getEndpoint(shared_ptr<string> productId,
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

BatchAuditTest01Response Alibabacloud_Ft20180713::Client::batchAuditTest01WithOptions(shared_ptr<BatchAuditTest01Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchAuditTest01Response(doRPCRequest(make_shared<string>("BatchAuditTest01"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchAuditTest01Response Alibabacloud_Ft20180713::Client::batchAuditTest01(shared_ptr<BatchAuditTest01Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAuditTest01WithOptions(request, runtime);
}

FTApiAliasApiResponse Alibabacloud_Ft20180713::Client::fTApiAliasApiWithOptions(shared_ptr<FTApiAliasApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FTApiAliasApiResponse(doRPCRequest(make_shared<string>("FTApiAliasApi"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FTApiAliasApiResponse Alibabacloud_Ft20180713::Client::fTApiAliasApi(shared_ptr<FTApiAliasApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return fTApiAliasApiWithOptions(request, runtime);
}

FtDynamicAddressDubboResponse Alibabacloud_Ft20180713::Client::ftDynamicAddressDubboWithOptions(shared_ptr<FtDynamicAddressDubboRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtDynamicAddressDubboResponse(doRPCRequest(make_shared<string>("FtDynamicAddressDubbo"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtDynamicAddressDubboResponse Alibabacloud_Ft20180713::Client::ftDynamicAddressDubbo(shared_ptr<FtDynamicAddressDubboRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftDynamicAddressDubboWithOptions(request, runtime);
}

FtDynamicAddressHsfResponse Alibabacloud_Ft20180713::Client::ftDynamicAddressHsfWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return FtDynamicAddressHsfResponse(doRPCRequest(make_shared<string>("FtDynamicAddressHsf"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtDynamicAddressHsfResponse Alibabacloud_Ft20180713::Client::ftDynamicAddressHsf() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftDynamicAddressHsfWithOptions(runtime);
}

FtEagleEyeResponse Alibabacloud_Ft20180713::Client::ftEagleEyeWithOptions(shared_ptr<FtEagleEyeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtEagleEyeResponse(doRPCRequest(make_shared<string>("FtEagleEye"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtEagleEyeResponse Alibabacloud_Ft20180713::Client::ftEagleEye(shared_ptr<FtEagleEyeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftEagleEyeWithOptions(request, runtime);
}

FtFlowSpecialResponse Alibabacloud_Ft20180713::Client::ftFlowSpecialWithOptions(shared_ptr<FtFlowSpecialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtFlowSpecialResponse(doRPCRequest(make_shared<string>("FtFlowSpecial"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtFlowSpecialResponse Alibabacloud_Ft20180713::Client::ftFlowSpecial(shared_ptr<FtFlowSpecialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftFlowSpecialWithOptions(request, runtime);
}

FtGatedLaunchPolicy4Response Alibabacloud_Ft20180713::Client::ftGatedLaunchPolicy4WithOptions(shared_ptr<FtGatedLaunchPolicy4Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtGatedLaunchPolicy4Response(doRPCRequest(make_shared<string>("FtGatedLaunchPolicy4"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtGatedLaunchPolicy4Response Alibabacloud_Ft20180713::Client::ftGatedLaunchPolicy4(shared_ptr<FtGatedLaunchPolicy4Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftGatedLaunchPolicy4WithOptions(request, runtime);
}

FtIpFlowControlResponse Alibabacloud_Ft20180713::Client::ftIpFlowControlWithOptions(shared_ptr<FtIpFlowControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtIpFlowControlResponse(doRPCRequest(make_shared<string>("FtIpFlowControl"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtIpFlowControlResponse Alibabacloud_Ft20180713::Client::ftIpFlowControl(shared_ptr<FtIpFlowControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftIpFlowControlWithOptions(request, runtime);
}

FtParamListResponse Alibabacloud_Ft20180713::Client::ftParamListWithOptions(shared_ptr<FtParamListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return FtParamListResponse(doRPCRequest(make_shared<string>("FtParamList"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

FtParamListResponse Alibabacloud_Ft20180713::Client::ftParamList(shared_ptr<FtParamListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ftParamListWithOptions(request, runtime);
}

TestFlowStrategy01Response Alibabacloud_Ft20180713::Client::testFlowStrategy01WithOptions(shared_ptr<TestFlowStrategy01Request> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TestFlowStrategy01ShrinkRequest> request = make_shared<TestFlowStrategy01ShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->names)) {
    request->namesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->names, make_shared<string>("Names"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TestFlowStrategy01Response(doRPCRequest(make_shared<string>("TestFlowStrategy01"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("PUT"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TestFlowStrategy01Response Alibabacloud_Ft20180713::Client::testFlowStrategy01(shared_ptr<TestFlowStrategy01Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testFlowStrategy01WithOptions(request, runtime);
}

TestHttpApiResponse Alibabacloud_Ft20180713::Client::testHttpApiWithOptions(shared_ptr<TestHttpApiRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TestHttpApiShrinkRequest> request = make_shared<TestHttpApiShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->stringValue)) {
    request->stringValueShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stringValue, make_shared<string>("StringValue"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->defaultValue)) {
    request->defaultValueShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultValue, make_shared<string>("DefaultValue"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->otherParam)) {
    request->otherParamShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->otherParam, make_shared<string>("OtherParam"), make_shared<string>("json")));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TestHttpApiResponse(doRPCRequest(make_shared<string>("TestHttpApi"), make_shared<string>("2018-07-13"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TestHttpApiResponse Alibabacloud_Ft20180713::Client::testHttpApi(shared_ptr<TestHttpApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testHttpApiWithOptions(request, runtime);
}

