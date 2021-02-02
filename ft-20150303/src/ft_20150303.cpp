// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ft_20150303.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Ft20150303;

Alibabacloud_Ft20150303::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Ft20150303::Client::getEndpoint(shared_ptr<string> productId,
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

RpcNoDefaultErrorCodeApiResponse Alibabacloud_Ft20150303::Client::rpcNoDefaultErrorCodeApiWithOptions(shared_ptr<RpcNoDefaultErrorCodeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RpcNoDefaultErrorCodeApiResponse(doRPCRequest(make_shared<string>("RpcNoDefaultErrorCodeApi"), make_shared<string>("2015-03-03"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RpcNoDefaultErrorCodeApiResponse Alibabacloud_Ft20150303::Client::rpcNoDefaultErrorCodeApi(shared_ptr<RpcNoDefaultErrorCodeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rpcNoDefaultErrorCodeApiWithOptions(request, runtime);
}

