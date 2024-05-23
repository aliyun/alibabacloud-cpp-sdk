// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/alimt_20180807.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

using namespace Alibabacloud_Alimt20180807;

Alibabacloud_Alimt20180807::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Alimt20180807::Client::getEndpoint(shared_ptr<string> productId,
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

MachineTranslateECommerceResponse Alibabacloud_Alimt20180807::Client::machineTranslateECommerceWithOptions(shared_ptr<MachineTranslateECommerceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentFormat)) {
    body->insert(pair<string, string>("ContentFormat", *request->contentFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MachineTranslateECommerce"))},
    {"version", boost::any(string("2018-08-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MachineTranslateECommerceResponse(callApi(params, req, runtime));
}

MachineTranslateECommerceResponse Alibabacloud_Alimt20180807::Client::machineTranslateECommerce(shared_ptr<MachineTranslateECommerceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return machineTranslateECommerceWithOptions(request, runtime);
}

MachineTranslateGeneralResponse Alibabacloud_Alimt20180807::Client::machineTranslateGeneralWithOptions(shared_ptr<MachineTranslateGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentFormat)) {
    body->insert(pair<string, string>("ContentFormat", *request->contentFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLanguage)) {
    body->insert(pair<string, string>("SourceLanguage", *request->sourceLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceText)) {
    body->insert(pair<string, string>("SourceText", *request->sourceText));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetLanguage)) {
    body->insert(pair<string, string>("TargetLanguage", *request->targetLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MachineTranslateGeneral"))},
    {"version", boost::any(string("2018-08-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MachineTranslateGeneralResponse(callApi(params, req, runtime));
}

MachineTranslateGeneralResponse Alibabacloud_Alimt20180807::Client::machineTranslateGeneral(shared_ptr<MachineTranslateGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return machineTranslateGeneralWithOptions(request, runtime);
}

