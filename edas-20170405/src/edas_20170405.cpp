// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/edas_20170405.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Edas20170405;

Alibabacloud_Edas20170405::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-3", "edas.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5", "edas.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1", "edas.aliyuncs.com"},
    {"cn-beijing-finance-pop", "edas.aliyuncs.com"},
    {"cn-beijing-gov-1", "edas.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "edas.aliyuncs.com"},
    {"cn-chengdu", "edas.aliyuncs.com"},
    {"cn-edge-1", "edas.aliyuncs.com"},
    {"cn-fujian", "edas.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "edas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "edas.aliyuncs.com"},
    {"cn-hangzhou-finance", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "edas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "edas.aliyuncs.com"},
    {"cn-hangzhou-test-306", "edas.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "edas.aliyuncs.com"},
    {"cn-huhehaote", "edas.aliyuncs.com"},
    {"cn-qingdao-nebula", "edas.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "edas.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "edas.aliyuncs.com"},
    {"cn-shanghai-finance-1", "edas.aliyuncs.com"},
    {"cn-shanghai-inner", "edas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "edas.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "edas.aliyuncs.com"},
    {"cn-shenzhen-inner", "edas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "edas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "edas.aliyuncs.com"},
    {"cn-wuhan", "edas.aliyuncs.com"},
    {"cn-yushanfang", "edas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "edas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "edas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "edas.aliyuncs.com"},
    {"eu-west-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"eu-west-1-oxs", "edas.ap-northeast-1.aliyuncs.com"},
    {"me-east-1", "edas.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop", "edas.ap-northeast-1.aliyuncs.com"},
    {"us-west-1", "edas.ap-northeast-1.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("edas"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Edas20170405::Client::getEndpoint(shared_ptr<string> productId,
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

EdasProduceResponse Alibabacloud_Edas20170405::Client::edasProduceWithOptions(shared_ptr<EdasProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFlag)) {
    query->insert(pair<string, string>("sourceFlag", *request->sourceFlag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EdasProduce"))},
    {"version", boost::any(string("2017-04-05"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EdasProduceResponse(callApi(params, req, runtime));
}

EdasProduceResponse Alibabacloud_Edas20170405::Client::edasProduce(shared_ptr<EdasProduceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return edasProduceWithOptions(request, runtime);
}

