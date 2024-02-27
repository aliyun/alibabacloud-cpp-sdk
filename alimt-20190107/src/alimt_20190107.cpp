// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alimt_20190107.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Alimt20190107;

Alibabacloud_Alimt20190107::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "mt.cn-hangzhou.aliyuncs.com"},
    {"ap-northeast-1", "mt.aliyuncs.com"},
    {"ap-northeast-2-pop", "mt.aliyuncs.com"},
    {"ap-south-1", "mt.aliyuncs.com"},
    {"ap-southeast-1", "mt.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "mt.aliyuncs.com"},
    {"ap-southeast-3", "mt.aliyuncs.com"},
    {"ap-southeast-5", "mt.aliyuncs.com"},
    {"cn-beijing", "mt.aliyuncs.com"},
    {"cn-beijing-finance-1", "mt.aliyuncs.com"},
    {"cn-beijing-finance-pop", "mt.aliyuncs.com"},
    {"cn-beijing-gov-1", "mt.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "mt.aliyuncs.com"},
    {"cn-chengdu", "mt.aliyuncs.com"},
    {"cn-edge-1", "mt.aliyuncs.com"},
    {"cn-fujian", "mt.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "mt.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "mt.aliyuncs.com"},
    {"cn-hangzhou-finance", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "mt.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "mt.aliyuncs.com"},
    {"cn-hangzhou-test-306", "mt.aliyuncs.com"},
    {"cn-hongkong", "mt.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "mt.aliyuncs.com"},
    {"cn-huhehaote", "mt.aliyuncs.com"},
    {"cn-north-2-gov-1", "mt.aliyuncs.com"},
    {"cn-qingdao", "mt.aliyuncs.com"},
    {"cn-qingdao-nebula", "mt.aliyuncs.com"},
    {"cn-shanghai", "mt.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "mt.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "mt.aliyuncs.com"},
    {"cn-shanghai-finance-1", "mt.aliyuncs.com"},
    {"cn-shanghai-inner", "mt.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "mt.aliyuncs.com"},
    {"cn-shenzhen", "mt.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "mt.aliyuncs.com"},
    {"cn-shenzhen-inner", "mt.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "mt.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "mt.aliyuncs.com"},
    {"cn-wuhan", "mt.aliyuncs.com"},
    {"cn-yushanfang", "mt.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "mt.aliyuncs.com"},
    {"cn-zhangjiakou", "mt.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "mt.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "mt.aliyuncs.com"},
    {"eu-central-1", "mt.aliyuncs.com"},
    {"eu-west-1", "mt.aliyuncs.com"},
    {"eu-west-1-oxs", "mt.aliyuncs.com"},
    {"me-east-1", "mt.aliyuncs.com"},
    {"rus-west-1-pop", "mt.aliyuncs.com"},
    {"us-east-1", "mt.aliyuncs.com"},
    {"us-west-1", "mt.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("alimt"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Alimt20190107::Client::getEndpoint(shared_ptr<string> productId,
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

TranslateECommerceResponse Alibabacloud_Alimt20190107::Client::translateECommerceWithOptions(shared_ptr<TranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    query->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    query->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    query->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    query->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateECommerce"))},
    {"version", boost::any(string("2019-01-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateECommerceResponse(callApi(params, req, runtime));
}

TranslateECommerceResponse Alibabacloud_Alimt20190107::Client::translateECommerce(shared_ptr<TranslateECommerceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateECommerceWithOptions(request, runtime);
}

TranslateGeneralResponse Alibabacloud_Alimt20190107::Client::translateGeneralWithOptions(shared_ptr<TranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->formatType)) {
    query->insert(pair<string, string>("FormatType", *request->formatType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    query->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    query->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    query->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateGeneral"))},
    {"version", boost::any(string("2019-01-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateGeneralResponse(callApi(params, req, runtime));
}

TranslateGeneralResponse Alibabacloud_Alimt20190107::Client::translateGeneral(shared_ptr<TranslateGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateGeneralWithOptions(request, runtime);
}

