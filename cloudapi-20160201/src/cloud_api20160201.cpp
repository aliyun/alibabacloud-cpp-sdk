// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloud_api20160201.hpp>
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

using namespace Alibabacloud_CloudAPI20160201;

Alibabacloud_CloudAPI20160201::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "apigateway.cn-qingdao.aliyuncs.com"},
    {"cn-beijing", "apigateway.cn-beijing.aliyuncs.com"},
    {"cn-zhangjiakou", "apigateway.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "apigateway.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu", "apigateway.cn-wulanchabu.aliyuncs.com"},
    {"cn-hangzhou", "apigateway.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "apigateway.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen", "apigateway.cn-shenzhen.aliyuncs.com"},
    {"cn-heyuan", "apigateway.cn-heyuan.aliyuncs.com"},
    {"cn-guangzhou", "apigateway.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu", "apigateway.cn-chengdu.aliyuncs.com"},
    {"cn-hongkong", "apigateway.cn-hongkong.aliyuncs.com"},
    {"ap-northeast-1", "apigateway.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-1", "apigateway.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "apigateway.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "apigateway.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "apigateway.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-6", "apigateway.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-7", "apigateway.ap-southeast-7.aliyuncs.com"},
    {"us-east-1", "apigateway.us-east-1.aliyuncs.com"},
    {"us-west-1", "apigateway.us-west-1.aliyuncs.com"},
    {"eu-west-1", "apigateway.eu-west-1.aliyuncs.com"},
    {"eu-central-1", "apigateway.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "apigateway.ap-south-1.aliyuncs.com"},
    {"me-east-1", "apigateway.me-east-1.aliyuncs.com"},
    {"me-central-1", "apigateway.me-central-1.aliyuncs.com"},
    {"cn-hangzhou-finance", "apigateway.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-shanghai-finance-1", "apigateway.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "apigateway.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-north-2-gov-1", "apigateway.cn-north-2-gov-1.aliyuncs.com"},
    {"ap-northeast-2-pop", "apigateway.aliyuncs.com"},
    {"cn-beijing-finance-1", "apigateway.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing-finance-pop", "apigateway.aliyuncs.com"},
    {"cn-beijing-gov-1", "apigateway.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "apigateway.aliyuncs.com"},
    {"cn-edge-1", "apigateway.aliyuncs.com"},
    {"cn-fujian", "apigateway.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "apigateway.aliyuncs.com"},
    {"cn-hangzhou-test-306", "apigateway.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "apigateway.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "apigateway.aliyuncs.com"},
    {"cn-qingdao-nebula", "apigateway.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "apigateway.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "apigateway.aliyuncs.com"},
    {"cn-shanghai-inner", "apigateway.cn-shanghai-inner.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "apigateway.aliyuncs.com"},
    {"cn-shenzhen-inner", "apigateway.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "apigateway.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "apigateway.aliyuncs.com"},
    {"cn-wuhan", "apigateway.aliyuncs.com"},
    {"cn-yushanfang", "apigateway.aliyuncs.com"},
    {"cn-zhangbei", "apigateway.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "apigateway.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "apigateway.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "apigateway.aliyuncs.com"},
    {"eu-west-1-oxs", "apigateway.aliyuncs.com"},
    {"rus-west-1-pop", "apigateway.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_CloudAPI20160201::Client::getEndpoint(shared_ptr<string> productId,
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

AbolishApiResponse Alibabacloud_CloudAPI20160201::Client::abolishApiWithOptions(shared_ptr<AbolishApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbolishApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbolishApiResponse(callApi(params, req, runtime));
}

AbolishApiResponse Alibabacloud_CloudAPI20160201::Client::abolishApi(shared_ptr<AbolishApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishApiWithOptions(request, runtime);
}

AbolishApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::abolishApiForInnerWithOptions(shared_ptr<AbolishApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AbolishApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AbolishApiForInnerResponse(callApi(params, req, runtime));
}

AbolishApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::abolishApiForInner(shared_ptr<AbolishApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return abolishApiForInnerWithOptions(request, runtime);
}

AddBlackListResponse Alibabacloud_CloudAPI20160201::Client::addBlackListWithOptions(shared_ptr<AddBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackContent)) {
    query->insert(pair<string, string>("BlackContent", *request->blackContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBlackList"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBlackListResponse(callApi(params, req, runtime));
}

AddBlackListResponse Alibabacloud_CloudAPI20160201::Client::addBlackList(shared_ptr<AddBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBlackListWithOptions(request, runtime);
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::addTrafficSpecialControlWithOptions(shared_ptr<AddTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->specialKey)) {
    query->insert(pair<string, string>("SpecialKey", *request->specialKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specialType)) {
    query->insert(pair<string, string>("SpecialType", *request->specialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->trafficValue)) {
    query->insert(pair<string, long>("TrafficValue", *request->trafficValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTrafficSpecialControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTrafficSpecialControlResponse(callApi(params, req, runtime));
}

AddTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::addTrafficSpecialControl(shared_ptr<AddTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTrafficSpecialControlWithOptions(request, runtime);
}

CheckAccountForInnerResponse Alibabacloud_CloudAPI20160201::Client::checkAccountForInnerWithOptions(shared_ptr<CheckAccountForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAccountForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAccountForInnerResponse(callApi(params, req, runtime));
}

CheckAccountForInnerResponse Alibabacloud_CloudAPI20160201::Client::checkAccountForInner(shared_ptr<CheckAccountForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAccountForInnerWithOptions(request, runtime);
}

CheckAoneAppAuditResponse Alibabacloud_CloudAPI20160201::Client::checkAoneAppAuditWithOptions(shared_ptr<CheckAoneAppAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aoneAppName)) {
    query->insert(pair<string, string>("AoneAppName", *request->aoneAppName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAoneAppAudit"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckAoneAppAuditResponse(callApi(params, req, runtime));
}

CheckAoneAppAuditResponse Alibabacloud_CloudAPI20160201::Client::checkAoneAppAudit(shared_ptr<CheckAoneAppAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAoneAppAuditWithOptions(request, runtime);
}

CopyConsumerOpenForInnerResponse Alibabacloud_CloudAPI20160201::Client::copyConsumerOpenForInnerWithOptions(shared_ptr<CopyConsumerOpenForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->copyList)) {
    query->insert(pair<string, string>("CopyList", *request->copyList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyConsumerOpenForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyConsumerOpenForInnerResponse(callApi(params, req, runtime));
}

CopyConsumerOpenForInnerResponse Alibabacloud_CloudAPI20160201::Client::copyConsumerOpenForInner(shared_ptr<CopyConsumerOpenForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyConsumerOpenForInnerWithOptions(request, runtime);
}

CreateApiResponse Alibabacloud_CloudAPI20160201::Client::createApiWithOptions(shared_ptr<CreateApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    query->insert(pair<string, string>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyFormat)) {
    query->insert(pair<string, string>("BodyFormat", *request->bodyFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->constantParameters)) {
    query->insert(pair<string, string>("ConstantParameters", *request->constantParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpMethod)) {
    query->insert(pair<string, string>("HttpMethod", *request->httpMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpProtocol)) {
    query->insert(pair<string, string>("HttpProtocol", *request->httpProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathParameters)) {
    query->insert(pair<string, string>("PathParameters", *request->pathParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postBodyDescription)) {
    query->insert(pair<string, string>("PostBodyDescription", *request->postBodyDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postBodyType)) {
    query->insert(pair<string, string>("PostBodyType", *request->postBodyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestBody)) {
    query->insert(pair<string, string>("RequestBody", *request->requestBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeaders)) {
    query->insert(pair<string, string>("RequestHeaders", *request->requestHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestQueries)) {
    query->insert(pair<string, string>("RequestQueries", *request->requestQueries));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSample)) {
    query->insert(pair<string, string>("ResultSample", *request->resultSample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultType)) {
    query->insert(pair<string, string>("ResultType", *request->resultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAddress)) {
    query->insert(pair<string, string>("ServiceAddress", *request->serviceAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceProtocol)) {
    query->insert(pair<string, string>("ServiceProtocol", *request->serviceProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceTimeout)) {
    query->insert(pair<string, long>("ServiceTimeout", *request->serviceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemParameters)) {
    query->insert(pair<string, string>("SystemParameters", *request->systemParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiResponse(callApi(params, req, runtime));
}

CreateApiResponse Alibabacloud_CloudAPI20160201::Client::createApi(shared_ptr<CreateApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiWithOptions(request, runtime);
}

CreateApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::createApiForInnerWithOptions(shared_ptr<CreateApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    query->insert(pair<string, string>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestConfig)) {
    query->insert(pair<string, string>("RequestConfig", *request->requestConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestParamters)) {
    query->insert(pair<string, string>("RequestParamters", *request->requestParamters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSample)) {
    query->insert(pair<string, string>("ResultSample", *request->resultSample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultType)) {
    query->insert(pair<string, string>("ResultType", *request->resultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceConfig)) {
    query->insert(pair<string, string>("ServiceConfig", *request->serviceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParametersMap)) {
    query->insert(pair<string, string>("ServiceParametersMap", *request->serviceParametersMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiForInnerResponse(callApi(params, req, runtime));
}

CreateApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::createApiForInner(shared_ptr<CreateApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiForInnerWithOptions(request, runtime);
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160201::Client::createApiGroupWithOptions(shared_ptr<CreateApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiGroup"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiGroupResponse(callApi(params, req, runtime));
}

CreateApiGroupResponse Alibabacloud_CloudAPI20160201::Client::createApiGroup(shared_ptr<CreateApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiGroupWithOptions(request, runtime);
}

CreateApiGroupForInnerResponse Alibabacloud_CloudAPI20160201::Client::createApiGroupForInnerWithOptions(shared_ptr<CreateApiGroupForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiGroupForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiGroupForInnerResponse(callApi(params, req, runtime));
}

CreateApiGroupForInnerResponse Alibabacloud_CloudAPI20160201::Client::createApiGroupForInner(shared_ptr<CreateApiGroupForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiGroupForInnerWithOptions(request, runtime);
}

CreateAppResponse Alibabacloud_CloudAPI20160201::Client::createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppResponse(callApi(params, req, runtime));
}

CreateAppResponse Alibabacloud_CloudAPI20160201::Client::createApp(shared_ptr<CreateAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppWithOptions(request, runtime);
}

CreateAppForBackendResponse Alibabacloud_CloudAPI20160201::Client::createAppForBackendWithOptions(shared_ptr<CreateAppForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppForBackendResponse(callApi(params, req, runtime));
}

CreateAppForBackendResponse Alibabacloud_CloudAPI20160201::Client::createAppForBackend(shared_ptr<CreateAppForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppForBackendWithOptions(request, runtime);
}

CreateAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::createAppForInnerWithOptions(shared_ptr<CreateAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    query->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("AppSecret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppForInnerResponse(callApi(params, req, runtime));
}

CreateAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::createAppForInner(shared_ptr<CreateAppForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppForInnerWithOptions(request, runtime);
}

CreateInstanceResponse Alibabacloud_CloudAPI20160201::Client::createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->accountQuantity)) {
    query->insert(pair<string, long>("AccountQuantity", *request->accountQuantity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alarmQuota)) {
    query->insert(pair<string, long>("AlarmQuota", *request->alarmQuota));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingType)) {
    query->insert(pair<string, string>("BillingType", *request->billingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudMarketInstanceId)) {
    query->insert(pair<string, string>("CloudMarketInstanceId", *request->cloudMarketInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredOn)) {
    query->insert(pair<string, string>("ExpiredOn", *request->expiredOn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceAttributes)) {
    query->insert(pair<string, string>("InstanceAttributes", *request->instanceAttributes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skuId)) {
    query->insert(pair<string, string>("SkuId", *request->skuId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInstance"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInstanceResponse(callApi(params, req, runtime));
}

CreateInstanceResponse Alibabacloud_CloudAPI20160201::Client::createInstance(shared_ptr<CreateInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInstanceWithOptions(request, runtime);
}

CreateRaceWorkForInnerResponse Alibabacloud_CloudAPI20160201::Client::createRaceWorkForInnerWithOptions(shared_ptr<CreateRaceWorkForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commodityCode)) {
    query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keywords)) {
    query->insert(pair<string, string>("Keywords", *request->keywords));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logoUrl)) {
    query->insert(pair<string, string>("LogoUrl", *request->logoUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shortDescription)) {
    query->insert(pair<string, string>("ShortDescription", *request->shortDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workName)) {
    query->insert(pair<string, string>("WorkName", *request->workName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRaceWorkForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRaceWorkForInnerResponse(callApi(params, req, runtime));
}

CreateRaceWorkForInnerResponse Alibabacloud_CloudAPI20160201::Client::createRaceWorkForInner(shared_ptr<CreateRaceWorkForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRaceWorkForInnerWithOptions(request, runtime);
}

CreateSecretKeyResponse Alibabacloud_CloudAPI20160201::Client::createSecretKeyWithOptions(shared_ptr<CreateSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKey)) {
    query->insert(pair<string, string>("SecretKey", *request->secretKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyName)) {
    query->insert(pair<string, string>("SecretKeyName", *request->secretKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretValue)) {
    query->insert(pair<string, string>("SecretValue", *request->secretValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSecretKey"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSecretKeyResponse(callApi(params, req, runtime));
}

CreateSecretKeyResponse Alibabacloud_CloudAPI20160201::Client::createSecretKey(shared_ptr<CreateSecretKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSecretKeyWithOptions(request, runtime);
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::createTrafficControlWithOptions(shared_ptr<CreateTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiDefault)) {
    query->insert(pair<string, long>("ApiDefault", *request->apiDefault));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appDefault)) {
    query->insert(pair<string, long>("AppDefault", *request->appDefault));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlName)) {
    query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlUnit)) {
    query->insert(pair<string, string>("TrafficControlUnit", *request->trafficControlUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userDefault)) {
    query->insert(pair<string, long>("UserDefault", *request->userDefault));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrafficControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTrafficControlResponse(callApi(params, req, runtime));
}

CreateTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::createTrafficControl(shared_ptr<CreateTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTrafficControlWithOptions(request, runtime);
}

CreateUserWhiteListResponse Alibabacloud_CloudAPI20160201::Client::createUserWhiteListWithOptions(shared_ptr<CreateUserWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aoneId)) {
    query->insert(pair<string, string>("AoneId", *request->aoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limitCount)) {
    query->insert(pair<string, long>("LimitCount", *request->limitCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserWhiteList"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUserWhiteListResponse(callApi(params, req, runtime));
}

CreateUserWhiteListResponse Alibabacloud_CloudAPI20160201::Client::createUserWhiteList(shared_ptr<CreateUserWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserWhiteListWithOptions(request, runtime);
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::deleteAllTrafficSpecialControlWithOptions(shared_ptr<DeleteAllTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAllTrafficSpecialControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAllTrafficSpecialControlResponse(callApi(params, req, runtime));
}

DeleteAllTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::deleteAllTrafficSpecialControl(shared_ptr<DeleteAllTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAllTrafficSpecialControlWithOptions(request, runtime);
}

DeleteApiResponse Alibabacloud_CloudAPI20160201::Client::deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiResponse(callApi(params, req, runtime));
}

DeleteApiResponse Alibabacloud_CloudAPI20160201::Client::deleteApi(shared_ptr<DeleteApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiWithOptions(request, runtime);
}

DeleteApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::deleteApiForInnerWithOptions(shared_ptr<DeleteApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiForInnerResponse(callApi(params, req, runtime));
}

DeleteApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::deleteApiForInner(shared_ptr<DeleteApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiForInnerWithOptions(request, runtime);
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160201::Client::deleteApiGroupWithOptions(shared_ptr<DeleteApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApiGroup"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiGroupResponse(callApi(params, req, runtime));
}

DeleteApiGroupResponse Alibabacloud_CloudAPI20160201::Client::deleteApiGroup(shared_ptr<DeleteApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiGroupWithOptions(request, runtime);
}

DeleteAppResponse Alibabacloud_CloudAPI20160201::Client::deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppResponse(callApi(params, req, runtime));
}

DeleteAppResponse Alibabacloud_CloudAPI20160201::Client::deleteApp(shared_ptr<DeleteAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppWithOptions(request, runtime);
}

DeleteAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::deleteAppForInnerWithOptions(shared_ptr<DeleteAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppForInnerResponse(callApi(params, req, runtime));
}

DeleteAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::deleteAppForInner(shared_ptr<DeleteAppForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppForInnerWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_CloudAPI20160201::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomain"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainResponse(callApi(params, req, runtime));
}

DeleteDomainResponse Alibabacloud_CloudAPI20160201::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160201::Client::deleteDomainCertificateWithOptions(shared_ptr<DeleteDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateId)) {
    query->insert(pair<string, string>("CertificateId", *request->certificateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainCertificate"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainCertificateResponse(callApi(params, req, runtime));
}

DeleteDomainCertificateResponse Alibabacloud_CloudAPI20160201::Client::deleteDomainCertificate(shared_ptr<DeleteDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainCertificateWithOptions(request, runtime);
}

DeleteSecretKeyResponse Alibabacloud_CloudAPI20160201::Client::deleteSecretKeyWithOptions(shared_ptr<DeleteSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyId)) {
    query->insert(pair<string, string>("SecretKeyId", *request->secretKeyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSecretKey"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSecretKeyResponse(callApi(params, req, runtime));
}

DeleteSecretKeyResponse Alibabacloud_CloudAPI20160201::Client::deleteSecretKey(shared_ptr<DeleteSecretKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSecretKeyWithOptions(request, runtime);
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::deleteTrafficControlWithOptions(shared_ptr<DeleteTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficControlResponse(callApi(params, req, runtime));
}

DeleteTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::deleteTrafficControl(shared_ptr<DeleteTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficControlWithOptions(request, runtime);
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::deleteTrafficSpecialControlWithOptions(shared_ptr<DeleteTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->specialKey)) {
    query->insert(pair<string, string>("SpecialKey", *request->specialKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specialType)) {
    query->insert(pair<string, string>("SpecialType", *request->specialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrafficSpecialControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTrafficSpecialControlResponse(callApi(params, req, runtime));
}

DeleteTrafficSpecialControlResponse Alibabacloud_CloudAPI20160201::Client::deleteTrafficSpecialControl(shared_ptr<DeleteTrafficSpecialControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTrafficSpecialControlWithOptions(request, runtime);
}

DeleteUserWhiteListByTypeResponse Alibabacloud_CloudAPI20160201::Client::deleteUserWhiteListByTypeWithOptions(shared_ptr<DeleteUserWhiteListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserWhiteListByType"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteUserWhiteListByTypeResponse(callApi(params, req, runtime));
}

DeleteUserWhiteListByTypeResponse Alibabacloud_CloudAPI20160201::Client::deleteUserWhiteListByType(shared_ptr<DeleteUserWhiteListByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserWhiteListByTypeWithOptions(request, runtime);
}

DeployApiResponse Alibabacloud_CloudAPI20160201::Client::deployApiWithOptions(shared_ptr<DeployApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployApiResponse(callApi(params, req, runtime));
}

DeployApiResponse Alibabacloud_CloudAPI20160201::Client::deployApi(shared_ptr<DeployApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployApiWithOptions(request, runtime);
}

DeployApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::deployApiForInnerWithOptions(shared_ptr<DeployApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeployApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeployApiForInnerResponse(callApi(params, req, runtime));
}

DeployApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::deployApiForInner(shared_ptr<DeployApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deployApiForInnerWithOptions(request, runtime);
}

DescribeApiResponse Alibabacloud_CloudAPI20160201::Client::describeApiWithOptions(shared_ptr<DescribeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiResponse(callApi(params, req, runtime));
}

DescribeApiResponse Alibabacloud_CloudAPI20160201::Client::describeApi(shared_ptr<DescribeApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiWithOptions(request, runtime);
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160201::Client::describeApiDocWithOptions(shared_ptr<DescribeApiDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiDoc"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiDocResponse(callApi(params, req, runtime));
}

DescribeApiDocResponse Alibabacloud_CloudAPI20160201::Client::describeApiDoc(shared_ptr<DescribeApiDocRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiDocWithOptions(request, runtime);
}

DescribeApiDocsResponse Alibabacloud_CloudAPI20160201::Client::describeApiDocsWithOptions(shared_ptr<DescribeApiDocsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiDocs"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiDocsResponse(callApi(params, req, runtime));
}

DescribeApiDocsResponse Alibabacloud_CloudAPI20160201::Client::describeApiDocs(shared_ptr<DescribeApiDocsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiDocsWithOptions(request, runtime);
}

DescribeApiDocsForBackendResponse Alibabacloud_CloudAPI20160201::Client::describeApiDocsForBackendWithOptions(shared_ptr<DescribeApiDocsForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiDocsForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiDocsForBackendResponse(callApi(params, req, runtime));
}

DescribeApiDocsForBackendResponse Alibabacloud_CloudAPI20160201::Client::describeApiDocsForBackend(shared_ptr<DescribeApiDocsForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiDocsForBackendWithOptions(request, runtime);
}

DescribeApiErrorResponse Alibabacloud_CloudAPI20160201::Client::describeApiErrorWithOptions(shared_ptr<DescribeApiErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiError"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiErrorResponse(callApi(params, req, runtime));
}

DescribeApiErrorResponse Alibabacloud_CloudAPI20160201::Client::describeApiError(shared_ptr<DescribeApiErrorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiErrorWithOptions(request, runtime);
}

DescribeApiGroupDetailResponse Alibabacloud_CloudAPI20160201::Client::describeApiGroupDetailWithOptions(shared_ptr<DescribeApiGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroupDetail"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupDetailResponse(callApi(params, req, runtime));
}

DescribeApiGroupDetailResponse Alibabacloud_CloudAPI20160201::Client::describeApiGroupDetail(shared_ptr<DescribeApiGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupDetailWithOptions(request, runtime);
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160201::Client::describeApiGroupsWithOptions(shared_ptr<DescribeApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiGroups"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiGroupsResponse(callApi(params, req, runtime));
}

DescribeApiGroupsResponse Alibabacloud_CloudAPI20160201::Client::describeApiGroups(shared_ptr<DescribeApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiGroupsWithOptions(request, runtime);
}

DescribeApiLatencyResponse Alibabacloud_CloudAPI20160201::Client::describeApiLatencyWithOptions(shared_ptr<DescribeApiLatencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiLatency"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiLatencyResponse(callApi(params, req, runtime));
}

DescribeApiLatencyResponse Alibabacloud_CloudAPI20160201::Client::describeApiLatency(shared_ptr<DescribeApiLatencyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiLatencyWithOptions(request, runtime);
}

DescribeApiMarketInstanceResponse Alibabacloud_CloudAPI20160201::Client::describeApiMarketInstanceWithOptions(shared_ptr<DescribeApiMarketInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiMarketInstance"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiMarketInstanceResponse(callApi(params, req, runtime));
}

DescribeApiMarketInstanceResponse Alibabacloud_CloudAPI20160201::Client::describeApiMarketInstance(shared_ptr<DescribeApiMarketInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiMarketInstanceWithOptions(request, runtime);
}

DescribeApiQpsResponse Alibabacloud_CloudAPI20160201::Client::describeApiQpsWithOptions(shared_ptr<DescribeApiQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiQps"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiQpsResponse(callApi(params, req, runtime));
}

DescribeApiQpsResponse Alibabacloud_CloudAPI20160201::Client::describeApiQps(shared_ptr<DescribeApiQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiQpsWithOptions(request, runtime);
}

DescribeApiRulesResponse Alibabacloud_CloudAPI20160201::Client::describeApiRulesWithOptions(shared_ptr<DescribeApiRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiIds)) {
    query->insert(pair<string, string>("ApiIds", *request->apiIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiRules"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiRulesResponse(callApi(params, req, runtime));
}

DescribeApiRulesResponse Alibabacloud_CloudAPI20160201::Client::describeApiRules(shared_ptr<DescribeApiRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiRulesWithOptions(request, runtime);
}

DescribeApiTrafficResponse Alibabacloud_CloudAPI20160201::Client::describeApiTrafficWithOptions(shared_ptr<DescribeApiTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApiTraffic"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApiTrafficResponse(callApi(params, req, runtime));
}

DescribeApiTrafficResponse Alibabacloud_CloudAPI20160201::Client::describeApiTraffic(shared_ptr<DescribeApiTrafficRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApiTrafficWithOptions(request, runtime);
}

DescribeApisResponse Alibabacloud_CloudAPI20160201::Client::describeApisWithOptions(shared_ptr<DescribeApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisResponse(callApi(params, req, runtime));
}

DescribeApisResponse Alibabacloud_CloudAPI20160201::Client::describeApis(shared_ptr<DescribeApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisWithOptions(request, runtime);
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160201::Client::describeApisByAppWithOptions(shared_ptr<DescribeApisByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisByApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisByAppResponse(callApi(params, req, runtime));
}

DescribeApisByAppResponse Alibabacloud_CloudAPI20160201::Client::describeApisByApp(shared_ptr<DescribeApisByAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByAppWithOptions(request, runtime);
}

DescribeApisByRuleResponse Alibabacloud_CloudAPI20160201::Client::describeApisByRuleWithOptions(shared_ptr<DescribeApisByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisByRule"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisByRuleResponse(callApi(params, req, runtime));
}

DescribeApisByRuleResponse Alibabacloud_CloudAPI20160201::Client::describeApisByRule(shared_ptr<DescribeApisByRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisByRuleWithOptions(request, runtime);
}

DescribeApisForConsoleResponse Alibabacloud_CloudAPI20160201::Client::describeApisForConsoleWithOptions(shared_ptr<DescribeApisForConsoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApisForConsole"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeApisForConsoleResponse(callApi(params, req, runtime));
}

DescribeApisForConsoleResponse Alibabacloud_CloudAPI20160201::Client::describeApisForConsole(shared_ptr<DescribeApisForConsoleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeApisForConsoleWithOptions(request, runtime);
}

DescribeAppResponse Alibabacloud_CloudAPI20160201::Client::describeAppWithOptions(shared_ptr<DescribeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppResponse(callApi(params, req, runtime));
}

DescribeAppResponse Alibabacloud_CloudAPI20160201::Client::describeApp(shared_ptr<DescribeAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppWithOptions(request, runtime);
}

DescribeAppSecuritiesResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecuritiesWithOptions(shared_ptr<DescribeAppSecuritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppSecurities"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppSecuritiesResponse(callApi(params, req, runtime));
}

DescribeAppSecuritiesResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecurities(shared_ptr<DescribeAppSecuritiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppSecuritiesWithOptions(request, runtime);
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecurityWithOptions(shared_ptr<DescribeAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppSecurity"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppSecurityResponse(callApi(params, req, runtime));
}

DescribeAppSecurityResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecurity(shared_ptr<DescribeAppSecurityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppSecurityWithOptions(request, runtime);
}

DescribeAppSecurityForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecurityForInnerWithOptions(shared_ptr<DescribeAppSecurityForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppSecurityForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppSecurityForInnerResponse(callApi(params, req, runtime));
}

DescribeAppSecurityForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeAppSecurityForInner(shared_ptr<DescribeAppSecurityForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppSecurityForInnerWithOptions(request, runtime);
}

DescribeAppsResponse Alibabacloud_CloudAPI20160201::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsResponse(callApi(params, req, runtime));
}

DescribeAppsResponse Alibabacloud_CloudAPI20160201::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

DescribeAppsByApiResponse Alibabacloud_CloudAPI20160201::Client::describeAppsByApiWithOptions(shared_ptr<DescribeAppsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppsByApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsByApiResponse(callApi(params, req, runtime));
}

DescribeAppsByApiResponse Alibabacloud_CloudAPI20160201::Client::describeAppsByApi(shared_ptr<DescribeAppsByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsByApiWithOptions(request, runtime);
}

DescribeAppsForProviderResponse Alibabacloud_CloudAPI20160201::Client::describeAppsForProviderWithOptions(shared_ptr<DescribeAppsForProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appOwner)) {
    query->insert(pair<string, string>("AppOwner", *request->appOwner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppsForProvider"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsForProviderResponse(callApi(params, req, runtime));
}

DescribeAppsForProviderResponse Alibabacloud_CloudAPI20160201::Client::describeAppsForProvider(shared_ptr<DescribeAppsForProviderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsForProviderWithOptions(request, runtime);
}

DescribeAvailableVipsResponse Alibabacloud_CloudAPI20160201::Client::describeAvailableVipsWithOptions(shared_ptr<DescribeAvailableVipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vip)) {
    query->insert(pair<string, string>("Vip", *request->vip));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAvailableVips"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAvailableVipsResponse(callApi(params, req, runtime));
}

DescribeAvailableVipsResponse Alibabacloud_CloudAPI20160201::Client::describeAvailableVips(shared_ptr<DescribeAvailableVipsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAvailableVipsWithOptions(request, runtime);
}

DescribeBidByUserIdForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeBidByUserIdForInnerWithOptions(shared_ptr<DescribeBidByUserIdForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBidByUserIdForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBidByUserIdForInnerResponse(callApi(params, req, runtime));
}

DescribeBidByUserIdForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeBidByUserIdForInner(shared_ptr<DescribeBidByUserIdForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBidByUserIdForInnerWithOptions(request, runtime);
}

DescribeBlackListsResponse Alibabacloud_CloudAPI20160201::Client::describeBlackListsWithOptions(shared_ptr<DescribeBlackListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBlackLists"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBlackListsResponse(callApi(params, req, runtime));
}

DescribeBlackListsResponse Alibabacloud_CloudAPI20160201::Client::describeBlackLists(shared_ptr<DescribeBlackListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBlackListsWithOptions(request, runtime);
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160201::Client::describeDeployedApiWithOptions(shared_ptr<DescribeDeployedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeployedApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeployedApiResponse(callApi(params, req, runtime));
}

DescribeDeployedApiResponse Alibabacloud_CloudAPI20160201::Client::describeDeployedApi(shared_ptr<DescribeDeployedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApiWithOptions(request, runtime);
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160201::Client::describeDeployedApisWithOptions(shared_ptr<DescribeDeployedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeployedApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeployedApisResponse(callApi(params, req, runtime));
}

DescribeDeployedApisResponse Alibabacloud_CloudAPI20160201::Client::describeDeployedApis(shared_ptr<DescribeDeployedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeployedApisWithOptions(request, runtime);
}

DescribeDomainResponse Alibabacloud_CloudAPI20160201::Client::describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomain"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainResponse(callApi(params, req, runtime));
}

DescribeDomainResponse Alibabacloud_CloudAPI20160201::Client::describeDomain(shared_ptr<DescribeDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithOptions(request, runtime);
}

DescribeDomainResolutionResponse Alibabacloud_CloudAPI20160201::Client::describeDomainResolutionWithOptions(shared_ptr<DescribeDomainResolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainResolution"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainResolutionResponse(callApi(params, req, runtime));
}

DescribeDomainResolutionResponse Alibabacloud_CloudAPI20160201::Client::describeDomainResolution(shared_ptr<DescribeDomainResolutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainResolutionWithOptions(request, runtime);
}

DescribeHistoryApiResponse Alibabacloud_CloudAPI20160201::Client::describeHistoryApiWithOptions(shared_ptr<DescribeHistoryApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHistoryApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHistoryApiResponse(callApi(params, req, runtime));
}

DescribeHistoryApiResponse Alibabacloud_CloudAPI20160201::Client::describeHistoryApi(shared_ptr<DescribeHistoryApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryApiWithOptions(request, runtime);
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160201::Client::describeHistoryApisWithOptions(shared_ptr<DescribeHistoryApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHistoryApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHistoryApisResponse(callApi(params, req, runtime));
}

DescribeHistoryApisResponse Alibabacloud_CloudAPI20160201::Client::describeHistoryApis(shared_ptr<DescribeHistoryApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryApisWithOptions(request, runtime);
}

DescribeModelsForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeModelsForInnerWithOptions(shared_ptr<DescribeModelsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    query->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeModelsForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeModelsForInnerResponse(callApi(params, req, runtime));
}

DescribeModelsForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeModelsForInner(shared_ptr<DescribeModelsForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModelsForInnerWithOptions(request, runtime);
}

DescribePurchasedApiResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApiWithOptions(shared_ptr<DescribePurchasedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApiResponse(callApi(params, req, runtime));
}

DescribePurchasedApiResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApi(shared_ptr<DescribePurchasedApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiWithOptions(request, runtime);
}

DescribePurchasedApiGroupDetailResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApiGroupDetailWithOptions(shared_ptr<DescribePurchasedApiGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApiGroupDetail"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApiGroupDetailResponse(callApi(params, req, runtime));
}

DescribePurchasedApiGroupDetailResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApiGroupDetail(shared_ptr<DescribePurchasedApiGroupDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupDetailWithOptions(request, runtime);
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApiGroupsWithOptions(shared_ptr<DescribePurchasedApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIds)) {
    query->insert(pair<string, string>("GroupIds", *request->groupIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApiGroups"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApiGroupsResponse(callApi(params, req, runtime));
}

DescribePurchasedApiGroupsResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApiGroups(shared_ptr<DescribePurchasedApiGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApiGroupsWithOptions(request, runtime);
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApisWithOptions(shared_ptr<DescribePurchasedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurchasedApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePurchasedApisResponse(callApi(params, req, runtime));
}

DescribePurchasedApisResponse Alibabacloud_CloudAPI20160201::Client::describePurchasedApis(shared_ptr<DescribePurchasedApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurchasedApisWithOptions(request, runtime);
}

DescribeRaceWorkForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeRaceWorkForInnerWithOptions(shared_ptr<DescribeRaceWorkForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRaceWorkForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRaceWorkForInnerResponse(callApi(params, req, runtime));
}

DescribeRaceWorkForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeRaceWorkForInner(shared_ptr<DescribeRaceWorkForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRaceWorkForInnerWithOptions(request, runtime);
}

DescribeRaceWorksForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeRaceWorksForInnerWithOptions(shared_ptr<DescribeRaceWorksForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRaceWorksForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRaceWorksForInnerResponse(callApi(params, req, runtime));
}

DescribeRaceWorksForInnerResponse Alibabacloud_CloudAPI20160201::Client::describeRaceWorksForInner(shared_ptr<DescribeRaceWorksForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRaceWorksForInnerWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160201::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionsResponse(callApi(params, req, runtime));
}

DescribeRegionsResponse Alibabacloud_CloudAPI20160201::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeRulesByApiResponse Alibabacloud_CloudAPI20160201::Client::describeRulesByApiWithOptions(shared_ptr<DescribeRulesByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRulesByApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRulesByApiResponse(callApi(params, req, runtime));
}

DescribeRulesByApiResponse Alibabacloud_CloudAPI20160201::Client::describeRulesByApi(shared_ptr<DescribeRulesByApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRulesByApiWithOptions(request, runtime);
}

DescribeSecretKeysResponse Alibabacloud_CloudAPI20160201::Client::describeSecretKeysWithOptions(shared_ptr<DescribeSecretKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyId)) {
    query->insert(pair<string, string>("SecretKeyId", *request->secretKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyName)) {
    query->insert(pair<string, string>("SecretKeyName", *request->secretKeyName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSecretKeys"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSecretKeysResponse(callApi(params, req, runtime));
}

DescribeSecretKeysResponse Alibabacloud_CloudAPI20160201::Client::describeSecretKeys(shared_ptr<DescribeSecretKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSecretKeysWithOptions(request, runtime);
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160201::Client::describeSystemParametersWithOptions(shared_ptr<DescribeSystemParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSystemParameters"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSystemParametersResponse(callApi(params, req, runtime));
}

DescribeSystemParametersResponse Alibabacloud_CloudAPI20160201::Client::describeSystemParameters(shared_ptr<DescribeSystemParametersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSystemParametersWithOptions(request, runtime);
}

DescribeSystemParamsResponse Alibabacloud_CloudAPI20160201::Client::describeSystemParamsWithOptions(shared_ptr<DescribeSystemParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSystemParams"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSystemParamsResponse(callApi(params, req, runtime));
}

DescribeSystemParamsResponse Alibabacloud_CloudAPI20160201::Client::describeSystemParams(shared_ptr<DescribeSystemParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSystemParamsWithOptions(request, runtime);
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160201::Client::describeTrafficControlsWithOptions(shared_ptr<DescribeTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiUid)) {
    query->insert(pair<string, string>("ApiUid", *request->apiUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlName)) {
    query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTrafficControls"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTrafficControlsResponse(callApi(params, req, runtime));
}

DescribeTrafficControlsResponse Alibabacloud_CloudAPI20160201::Client::describeTrafficControls(shared_ptr<DescribeTrafficControlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTrafficControlsWithOptions(request, runtime);
}

DescribeUserWhiteListsResponse Alibabacloud_CloudAPI20160201::Client::describeUserWhiteListsWithOptions(shared_ptr<DescribeUserWhiteListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUserWhiteLists"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserWhiteListsResponse(callApi(params, req, runtime));
}

DescribeUserWhiteListsResponse Alibabacloud_CloudAPI20160201::Client::describeUserWhiteLists(shared_ptr<DescribeUserWhiteListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserWhiteListsWithOptions(request, runtime);
}

IsIncludedByUserWhitelistResponse Alibabacloud_CloudAPI20160201::Client::isIncludedByUserWhitelistWithOptions(shared_ptr<IsIncludedByUserWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IsIncludedByUserWhitelist"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IsIncludedByUserWhitelistResponse(callApi(params, req, runtime));
}

IsIncludedByUserWhitelistResponse Alibabacloud_CloudAPI20160201::Client::isIncludedByUserWhitelist(shared_ptr<IsIncludedByUserWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return isIncludedByUserWhitelistWithOptions(request, runtime);
}

ModifyApiResponse Alibabacloud_CloudAPI20160201::Client::modifyApiWithOptions(shared_ptr<ModifyApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    query->insert(pair<string, string>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyFormat)) {
    query->insert(pair<string, string>("BodyFormat", *request->bodyFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->constantParameters)) {
    query->insert(pair<string, string>("ConstantParameters", *request->constantParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpMethod)) {
    query->insert(pair<string, string>("HttpMethod", *request->httpMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpProtocol)) {
    query->insert(pair<string, string>("HttpProtocol", *request->httpProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pathParameters)) {
    query->insert(pair<string, string>("PathParameters", *request->pathParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postBodyDescription)) {
    query->insert(pair<string, string>("PostBodyDescription", *request->postBodyDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postBodyType)) {
    query->insert(pair<string, string>("PostBodyType", *request->postBodyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestBody)) {
    query->insert(pair<string, string>("RequestBody", *request->requestBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeaders)) {
    query->insert(pair<string, string>("RequestHeaders", *request->requestHeaders));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestQueries)) {
    query->insert(pair<string, string>("RequestQueries", *request->requestQueries));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSample)) {
    query->insert(pair<string, string>("ResultSample", *request->resultSample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultType)) {
    query->insert(pair<string, string>("ResultType", *request->resultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceAddress)) {
    query->insert(pair<string, string>("ServiceAddress", *request->serviceAddress));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceProtocol)) {
    query->insert(pair<string, string>("ServiceProtocol", *request->serviceProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceTimeout)) {
    query->insert(pair<string, long>("ServiceTimeout", *request->serviceTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->systemParameters)) {
    query->insert(pair<string, string>("SystemParameters", *request->systemParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiResponse(callApi(params, req, runtime));
}

ModifyApiResponse Alibabacloud_CloudAPI20160201::Client::modifyApi(shared_ptr<ModifyApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiWithOptions(request, runtime);
}

ModifyApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::modifyApiForInnerWithOptions(shared_ptr<ModifyApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiName)) {
    query->insert(pair<string, string>("ApiName", *request->apiName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    query->insert(pair<string, string>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestConfig)) {
    query->insert(pair<string, string>("RequestConfig", *request->requestConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestParamters)) {
    query->insert(pair<string, string>("RequestParamters", *request->requestParamters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultSample)) {
    query->insert(pair<string, string>("ResultSample", *request->resultSample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resultType)) {
    query->insert(pair<string, string>("ResultType", *request->resultType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceConfig)) {
    query->insert(pair<string, string>("ServiceConfig", *request->serviceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParameters)) {
    query->insert(pair<string, string>("ServiceParameters", *request->serviceParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceParametersMap)) {
    query->insert(pair<string, string>("ServiceParametersMap", *request->serviceParametersMap));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->visibility)) {
    query->insert(pair<string, string>("Visibility", *request->visibility));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiForInnerResponse(callApi(params, req, runtime));
}

ModifyApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::modifyApiForInner(shared_ptr<ModifyApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiForInnerWithOptions(request, runtime);
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160201::Client::modifyApiGroupWithOptions(shared_ptr<ModifyApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiGroup"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiGroupResponse(callApi(params, req, runtime));
}

ModifyApiGroupResponse Alibabacloud_CloudAPI20160201::Client::modifyApiGroup(shared_ptr<ModifyApiGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiGroupWithOptions(request, runtime);
}

ModifyApiMarketInstanceAttributeResponse Alibabacloud_CloudAPI20160201::Client::modifyApiMarketInstanceAttributeWithOptions(shared_ptr<ModifyApiMarketInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceAttributes)) {
    query->insert(pair<string, string>("InstanceAttributes", *request->instanceAttributes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApiMarketInstanceAttribute"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyApiMarketInstanceAttributeResponse(callApi(params, req, runtime));
}

ModifyApiMarketInstanceAttributeResponse Alibabacloud_CloudAPI20160201::Client::modifyApiMarketInstanceAttribute(shared_ptr<ModifyApiMarketInstanceAttributeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyApiMarketInstanceAttributeWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_CloudAPI20160201::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppResponse(callApi(params, req, runtime));
}

ModifyAppResponse Alibabacloud_CloudAPI20160201::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

ModifyAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::modifyAppForInnerWithOptions(shared_ptr<ModifyAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extend)) {
    query->insert(pair<string, string>("Extend", *request->extend));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppForInnerResponse(callApi(params, req, runtime));
}

ModifyAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::modifyAppForInner(shared_ptr<ModifyAppForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppForInnerWithOptions(request, runtime);
}

ModifyGroupAuthAppCodeForBackendResponse Alibabacloud_CloudAPI20160201::Client::modifyGroupAuthAppCodeForBackendWithOptions(shared_ptr<ModifyGroupAuthAppCodeForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authAppCode)) {
    query->insert(pair<string, string>("AuthAppCode", *request->authAppCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGroupAuthAppCodeForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGroupAuthAppCodeForBackendResponse(callApi(params, req, runtime));
}

ModifyGroupAuthAppCodeForBackendResponse Alibabacloud_CloudAPI20160201::Client::modifyGroupAuthAppCodeForBackend(shared_ptr<ModifyGroupAuthAppCodeForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGroupAuthAppCodeForBackendWithOptions(request, runtime);
}

ModifySecretKeyResponse Alibabacloud_CloudAPI20160201::Client::modifySecretKeyWithOptions(shared_ptr<ModifySecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKey)) {
    query->insert(pair<string, string>("SecretKey", *request->secretKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyId)) {
    query->insert(pair<string, string>("SecretKeyId", *request->secretKeyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretKeyName)) {
    query->insert(pair<string, string>("SecretKeyName", *request->secretKeyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->secretValue)) {
    query->insert(pair<string, string>("SecretValue", *request->secretValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySecretKey"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySecretKeyResponse(callApi(params, req, runtime));
}

ModifySecretKeyResponse Alibabacloud_CloudAPI20160201::Client::modifySecretKey(shared_ptr<ModifySecretKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySecretKeyWithOptions(request, runtime);
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::modifyTrafficControlWithOptions(shared_ptr<ModifyTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->apiDefault)) {
    query->insert(pair<string, long>("ApiDefault", *request->apiDefault));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appDefault)) {
    query->insert(pair<string, long>("AppDefault", *request->appDefault));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlId)) {
    query->insert(pair<string, string>("TrafficControlId", *request->trafficControlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlName)) {
    query->insert(pair<string, string>("TrafficControlName", *request->trafficControlName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trafficControlUnit)) {
    query->insert(pair<string, string>("TrafficControlUnit", *request->trafficControlUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userDefault)) {
    query->insert(pair<string, long>("UserDefault", *request->userDefault));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyTrafficControl"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyTrafficControlResponse(callApi(params, req, runtime));
}

ModifyTrafficControlResponse Alibabacloud_CloudAPI20160201::Client::modifyTrafficControl(shared_ptr<ModifyTrafficControlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyTrafficControlWithOptions(request, runtime);
}

ModifyUserWhiteListValueByTypeResponse Alibabacloud_CloudAPI20160201::Client::modifyUserWhiteListValueByTypeWithOptions(shared_ptr<ModifyUserWhiteListValueByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    query->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyUserWhiteListValueByType"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyUserWhiteListValueByTypeResponse(callApi(params, req, runtime));
}

ModifyUserWhiteListValueByTypeResponse Alibabacloud_CloudAPI20160201::Client::modifyUserWhiteListValueByType(shared_ptr<ModifyUserWhiteListValueByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyUserWhiteListValueByTypeWithOptions(request, runtime);
}

ReactivateDomainForBackendResponse Alibabacloud_CloudAPI20160201::Client::reactivateDomainForBackendWithOptions(shared_ptr<ReactivateDomainForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliuid)) {
    query->insert(pair<string, long>("Aliuid", *request->aliuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReactivateDomainForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReactivateDomainForBackendResponse(callApi(params, req, runtime));
}

ReactivateDomainForBackendResponse Alibabacloud_CloudAPI20160201::Client::reactivateDomainForBackend(shared_ptr<ReactivateDomainForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reactivateDomainForBackendWithOptions(request, runtime);
}

RecoverApiFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoverApiFromHistoricalWithOptions(shared_ptr<RecoverApiFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoverApiFromHistorical"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoverApiFromHistoricalResponse(callApi(params, req, runtime));
}

RecoverApiFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoverApiFromHistorical(shared_ptr<RecoverApiFromHistoricalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoverApiFromHistoricalWithOptions(request, runtime);
}

RecoveryApiDefineFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoveryApiDefineFromHistoricalWithOptions(shared_ptr<RecoveryApiDefineFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoveryApiDefineFromHistorical"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoveryApiDefineFromHistoricalResponse(callApi(params, req, runtime));
}

RecoveryApiDefineFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoveryApiDefineFromHistorical(shared_ptr<RecoveryApiDefineFromHistoricalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryApiDefineFromHistoricalWithOptions(request, runtime);
}

RecoveryApiFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoveryApiFromHistoricalWithOptions(shared_ptr<RecoveryApiFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoveryApiFromHistorical"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoveryApiFromHistoricalResponse(callApi(params, req, runtime));
}

RecoveryApiFromHistoricalResponse Alibabacloud_CloudAPI20160201::Client::recoveryApiFromHistorical(shared_ptr<RecoveryApiFromHistoricalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryApiFromHistoricalWithOptions(request, runtime);
}

RefreshDomainResponse Alibabacloud_CloudAPI20160201::Client::refreshDomainWithOptions(shared_ptr<RefreshDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshDomain"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshDomainResponse(callApi(params, req, runtime));
}

RefreshDomainResponse Alibabacloud_CloudAPI20160201::Client::refreshDomain(shared_ptr<RefreshDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDomainWithOptions(request, runtime);
}

RemoveAccessPermissionByApisResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByApisWithOptions(shared_ptr<RemoveAccessPermissionByApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiIds)) {
    query->insert(pair<string, string>("ApiIds", *request->apiIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAccessPermissionByApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAccessPermissionByApisResponse(callApi(params, req, runtime));
}

RemoveAccessPermissionByApisResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByApis(shared_ptr<RemoveAccessPermissionByApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAccessPermissionByApisWithOptions(request, runtime);
}

RemoveAccessPermissionByAppsResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByAppsWithOptions(shared_ptr<RemoveAccessPermissionByAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAccessPermissionByApps"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAccessPermissionByAppsResponse(callApi(params, req, runtime));
}

RemoveAccessPermissionByAppsResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByApps(shared_ptr<RemoveAccessPermissionByAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAccessPermissionByAppsWithOptions(request, runtime);
}

RemoveAccessPermissionByAppsForInnerResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByAppsForInnerWithOptions(shared_ptr<RemoveAccessPermissionByAppsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAccessPermissionByAppsForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAccessPermissionByAppsForInnerResponse(callApi(params, req, runtime));
}

RemoveAccessPermissionByAppsForInnerResponse Alibabacloud_CloudAPI20160201::Client::removeAccessPermissionByAppsForInner(shared_ptr<RemoveAccessPermissionByAppsForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAccessPermissionByAppsForInnerWithOptions(request, runtime);
}

RemoveAllBlackListResponse Alibabacloud_CloudAPI20160201::Client::removeAllBlackListWithOptions(shared_ptr<RemoveAllBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAllBlackList"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAllBlackListResponse(callApi(params, req, runtime));
}

RemoveAllBlackListResponse Alibabacloud_CloudAPI20160201::Client::removeAllBlackList(shared_ptr<RemoveAllBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAllBlackListWithOptions(request, runtime);
}

RemoveApiRuleResponse Alibabacloud_CloudAPI20160201::Client::removeApiRuleWithOptions(shared_ptr<RemoveApiRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiIds)) {
    query->insert(pair<string, string>("ApiIds", *request->apiIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveApiRule"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveApiRuleResponse(callApi(params, req, runtime));
}

RemoveApiRuleResponse Alibabacloud_CloudAPI20160201::Client::removeApiRule(shared_ptr<RemoveApiRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeApiRuleWithOptions(request, runtime);
}

RemoveAppsFromApiResponse Alibabacloud_CloudAPI20160201::Client::removeAppsFromApiWithOptions(shared_ptr<RemoveAppsFromApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveAppsFromApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveAppsFromApiResponse(callApi(params, req, runtime));
}

RemoveAppsFromApiResponse Alibabacloud_CloudAPI20160201::Client::removeAppsFromApi(shared_ptr<RemoveAppsFromApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeAppsFromApiWithOptions(request, runtime);
}

RemoveBlackListResponse Alibabacloud_CloudAPI20160201::Client::removeBlackListWithOptions(shared_ptr<RemoveBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->blackContent)) {
    query->insert(pair<string, string>("BlackContent", *request->blackContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->blackType)) {
    query->insert(pair<string, string>("BlackType", *request->blackType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveBlackList"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveBlackListResponse(callApi(params, req, runtime));
}

RemoveBlackListResponse Alibabacloud_CloudAPI20160201::Client::removeBlackList(shared_ptr<RemoveBlackListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeBlackListWithOptions(request, runtime);
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160201::Client::resetAppCodeWithOptions(shared_ptr<ResetAppCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    query->insert(pair<string, string>("AppCode", *request->appCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAppCode"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAppCodeResponse(callApi(params, req, runtime));
}

ResetAppCodeResponse Alibabacloud_CloudAPI20160201::Client::resetAppCode(shared_ptr<ResetAppCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppCodeWithOptions(request, runtime);
}

ResetAppCodeForInnerResponse Alibabacloud_CloudAPI20160201::Client::resetAppCodeForInnerWithOptions(shared_ptr<ResetAppCodeForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appCode)) {
    query->insert(pair<string, string>("AppCode", *request->appCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAppCode)) {
    query->insert(pair<string, string>("NewAppCode", *request->newAppCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAppCodeForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAppCodeForInnerResponse(callApi(params, req, runtime));
}

ResetAppCodeForInnerResponse Alibabacloud_CloudAPI20160201::Client::resetAppCodeForInner(shared_ptr<ResetAppCodeForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppCodeForInnerWithOptions(request, runtime);
}

ResetAppKeySecretResponse Alibabacloud_CloudAPI20160201::Client::resetAppKeySecretWithOptions(shared_ptr<ResetAppKeySecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetAppKeySecret"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetAppKeySecretResponse(callApi(params, req, runtime));
}

ResetAppKeySecretResponse Alibabacloud_CloudAPI20160201::Client::resetAppKeySecret(shared_ptr<ResetAppKeySecretRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetAppKeySecretWithOptions(request, runtime);
}

ResetSecretByAppKeyForInnerResponse Alibabacloud_CloudAPI20160201::Client::resetSecretByAppKeyForInnerWithOptions(shared_ptr<ResetSecretByAppKeyForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAppKey)) {
    query->insert(pair<string, string>("NewAppKey", *request->newAppKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newAppSecret)) {
    query->insert(pair<string, string>("NewAppSecret", *request->newAppSecret));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSecretByAppKeyForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetSecretByAppKeyForInnerResponse(callApi(params, req, runtime));
}

ResetSecretByAppKeyForInnerResponse Alibabacloud_CloudAPI20160201::Client::resetSecretByAppKeyForInner(shared_ptr<ResetSecretByAppKeyForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSecretByAppKeyForInnerWithOptions(request, runtime);
}

SetAccessPermissionByApisResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionByApisWithOptions(shared_ptr<SetAccessPermissionByApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiIds)) {
    query->insert(pair<string, string>("ApiIds", *request->apiIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessPermissionByApis"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessPermissionByApisResponse(callApi(params, req, runtime));
}

SetAccessPermissionByApisResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionByApis(shared_ptr<SetAccessPermissionByApisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessPermissionByApisWithOptions(request, runtime);
}

SetAccessPermissionByGroupForBackendResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionByGroupForBackendWithOptions(shared_ptr<SetAccessPermissionByGroupForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->appId)) {
    query->insert(pair<string, long>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessPermissionByGroupForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessPermissionByGroupForBackendResponse(callApi(params, req, runtime));
}

SetAccessPermissionByGroupForBackendResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionByGroupForBackend(shared_ptr<SetAccessPermissionByGroupForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessPermissionByGroupForBackendWithOptions(request, runtime);
}

SetAccessPermissionsResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionsWithOptions(shared_ptr<SetAccessPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessPermissions"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessPermissionsResponse(callApi(params, req, runtime));
}

SetAccessPermissionsResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissions(shared_ptr<SetAccessPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessPermissionsWithOptions(request, runtime);
}

SetAccessPermissionsForInnerResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionsForInnerWithOptions(shared_ptr<SetAccessPermissionsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appIds)) {
    query->insert(pair<string, string>("AppIds", *request->appIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAccessPermissionsForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAccessPermissionsForInnerResponse(callApi(params, req, runtime));
}

SetAccessPermissionsForInnerResponse Alibabacloud_CloudAPI20160201::Client::setAccessPermissionsForInner(shared_ptr<SetAccessPermissionsForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAccessPermissionsForInnerWithOptions(request, runtime);
}

SetApiRuleResponse Alibabacloud_CloudAPI20160201::Client::setApiRuleWithOptions(shared_ptr<SetApiRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiIds)) {
    query->insert(pair<string, string>("ApiIds", *request->apiIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleType)) {
    query->insert(pair<string, string>("RuleType", *request->ruleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetApiRule"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetApiRuleResponse(callApi(params, req, runtime));
}

SetApiRuleResponse Alibabacloud_CloudAPI20160201::Client::setApiRule(shared_ptr<SetApiRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setApiRuleWithOptions(request, runtime);
}

SetDomainResponse Alibabacloud_CloudAPI20160201::Client::setDomainWithOptions(shared_ptr<SetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateBody)) {
    query->insert(pair<string, string>("CertificateBody", *request->certificateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateName)) {
    query->insert(pair<string, string>("CertificateName", *request->certificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomain"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainResponse(callApi(params, req, runtime));
}

SetDomainResponse Alibabacloud_CloudAPI20160201::Client::setDomain(shared_ptr<SetDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainWithOptions(request, runtime);
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160201::Client::setDomainCertificateWithOptions(shared_ptr<SetDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateBody)) {
    query->insert(pair<string, string>("CertificateBody", *request->certificateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateName)) {
    query->insert(pair<string, string>("CertificateName", *request->certificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    query->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainCertificate"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainCertificateResponse(callApi(params, req, runtime));
}

SetDomainCertificateResponse Alibabacloud_CloudAPI20160201::Client::setDomainCertificate(shared_ptr<SetDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainCertificateWithOptions(request, runtime);
}

SetDomainForBackendResponse Alibabacloud_CloudAPI20160201::Client::setDomainForBackendWithOptions(shared_ptr<SetDomainForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateBody)) {
    query->insert(pair<string, string>("CertificateBody", *request->certificateBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificateName)) {
    query->insert(pair<string, string>("CertificateName", *request->certificateName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificatePrivateKey)) {
    query->insert(pair<string, string>("CertificatePrivateKey", *request->certificatePrivateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDomainForBackend"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDomainForBackendResponse(callApi(params, req, runtime));
}

SetDomainForBackendResponse Alibabacloud_CloudAPI20160201::Client::setDomainForBackend(shared_ptr<SetDomainForBackendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainForBackendWithOptions(request, runtime);
}

SetMockIntegrationResponse Alibabacloud_CloudAPI20160201::Client::setMockIntegrationWithOptions(shared_ptr<SetMockIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mock)) {
    query->insert(pair<string, string>("Mock", *request->mock));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mockResult)) {
    query->insert(pair<string, string>("MockResult", *request->mockResult));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetMockIntegration"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetMockIntegrationResponse(callApi(params, req, runtime));
}

SetMockIntegrationResponse Alibabacloud_CloudAPI20160201::Client::setMockIntegration(shared_ptr<SetMockIntegrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setMockIntegrationWithOptions(request, runtime);
}

SetPurchasedApiGroupStatusResponse Alibabacloud_CloudAPI20160201::Client::setPurchasedApiGroupStatusWithOptions(shared_ptr<SetPurchasedApiGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->billingStatus)) {
    query->insert(pair<string, string>("BillingStatus", *request->billingStatus));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->closeOrder)) {
    query->insert(pair<string, bool>("CloseOrder", *request->closeOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetPurchasedApiGroupStatus"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetPurchasedApiGroupStatusResponse(callApi(params, req, runtime));
}

SetPurchasedApiGroupStatusResponse Alibabacloud_CloudAPI20160201::Client::setPurchasedApiGroupStatus(shared_ptr<SetPurchasedApiGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setPurchasedApiGroupStatusWithOptions(request, runtime);
}

SwitchApiResponse Alibabacloud_CloudAPI20160201::Client::switchApiWithOptions(shared_ptr<SwitchApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchApi"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchApiResponse(callApi(params, req, runtime));
}

SwitchApiResponse Alibabacloud_CloudAPI20160201::Client::switchApi(shared_ptr<SwitchApiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchApiWithOptions(request, runtime);
}

SwitchApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::switchApiForInnerWithOptions(shared_ptr<SwitchApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->historyVersion)) {
    query->insert(pair<string, string>("HistoryVersion", *request->historyVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stageName)) {
    query->insert(pair<string, string>("StageName", *request->stageName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchApiForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchApiForInnerResponse(callApi(params, req, runtime));
}

SwitchApiForInnerResponse Alibabacloud_CloudAPI20160201::Client::switchApiForInner(shared_ptr<SwitchApiForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchApiForInnerWithOptions(request, runtime);
}

SynCreateAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::synCreateAppForInnerWithOptions(shared_ptr<SynCreateAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->aliUid)) {
    query->insert(pair<string, long>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->appKey)) {
    query->insert(pair<string, long>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appSecret)) {
    query->insert(pair<string, string>("AppSecret", *request->appSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SynCreateAppForInner"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SynCreateAppForInnerResponse(callApi(params, req, runtime));
}

SynCreateAppForInnerResponse Alibabacloud_CloudAPI20160201::Client::synCreateAppForInner(shared_ptr<SynCreateAppForInnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return synCreateAppForInnerWithOptions(request, runtime);
}

TagResourcesSystemTagsResponse Alibabacloud_CloudAPI20160201::Client::tagResourcesSystemTagsWithOptions(shared_ptr<TagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesSystemTagsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesSystemTagsRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOwnerBid)) {
    query->insert(pair<string, string>("TagOwnerBid", *request->tagOwnerBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagOwnerUid)) {
    query->insert(pair<string, long>("TagOwnerUid", *request->tagOwnerUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResourcesSystemTags"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesSystemTagsResponse(callApi(params, req, runtime));
}

TagResourcesSystemTagsResponse Alibabacloud_CloudAPI20160201::Client::tagResourcesSystemTags(shared_ptr<TagResourcesSystemTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesSystemTagsWithOptions(request, runtime);
}

UntagResourcesSystemTagsResponse Alibabacloud_CloudAPI20160201::Client::untagResourcesSystemTagsWithOptions(shared_ptr<UntagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagOwnerBid)) {
    query->insert(pair<string, string>("TagOwnerBid", *request->tagOwnerBid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagOwnerUid)) {
    query->insert(pair<string, long>("TagOwnerUid", *request->tagOwnerUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResourcesSystemTags"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesSystemTagsResponse(callApi(params, req, runtime));
}

UntagResourcesSystemTagsResponse Alibabacloud_CloudAPI20160201::Client::untagResourcesSystemTags(shared_ptr<UntagResourcesSystemTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesSystemTagsWithOptions(request, runtime);
}

VipMigrationResponse Alibabacloud_CloudAPI20160201::Client::vipMigrationWithOptions(shared_ptr<VipMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newVip)) {
    query->insert(pair<string, string>("NewVip", *request->newVip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalVip)) {
    query->insert(pair<string, string>("OriginalVip", *request->originalVip));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VipMigration"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return VipMigrationResponse(callApi(params, req, runtime));
}

VipMigrationResponse Alibabacloud_CloudAPI20160201::Client::vipMigration(shared_ptr<VipMigrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vipMigrationWithOptions(request, runtime);
}

VipMigrationByUidResponse Alibabacloud_CloudAPI20160201::Client::vipMigrationByUidWithOptions(shared_ptr<VipMigrationByUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->newVip)) {
    query->insert(pair<string, string>("NewVip", *request->newVip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalVip)) {
    query->insert(pair<string, string>("OriginalVip", *request->originalVip));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VipMigrationByUid"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VipMigrationByUidResponse(callApi(params, req, runtime));
}

VipMigrationByUidResponse Alibabacloud_CloudAPI20160201::Client::vipMigrationByUid(shared_ptr<VipMigrationByUidRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vipMigrationByUidWithOptions(request, runtime);
}

VpcAddAppServerResponse Alibabacloud_CloudAPI20160201::Client::vpcAddAppServerWithOptions(shared_ptr<VpcAddAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressPoolId)) {
    query->insert(pair<string, string>("AddressPoolId", *request->addressPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    query->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcAddAppServer"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcAddAppServerResponse(callApi(params, req, runtime));
}

VpcAddAppServerResponse Alibabacloud_CloudAPI20160201::Client::vpcAddAppServer(shared_ptr<VpcAddAppServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcAddAppServerWithOptions(request, runtime);
}

VpcCreateAddressPoolResponse Alibabacloud_CloudAPI20160201::Client::vpcCreateAddressPoolWithOptions(shared_ptr<VpcCreateAddressPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcCreateAddressPool"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcCreateAddressPoolResponse(callApi(params, req, runtime));
}

VpcCreateAddressPoolResponse Alibabacloud_CloudAPI20160201::Client::vpcCreateAddressPool(shared_ptr<VpcCreateAddressPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcCreateAddressPoolWithOptions(request, runtime);
}

VpcQueryAppServersResponse Alibabacloud_CloudAPI20160201::Client::vpcQueryAppServersWithOptions(shared_ptr<VpcQueryAppServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addressPoolId)) {
    query->insert(pair<string, string>("AddressPoolId", *request->addressPoolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    query->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcQueryAppServers"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcQueryAppServersResponse(callApi(params, req, runtime));
}

VpcQueryAppServersResponse Alibabacloud_CloudAPI20160201::Client::vpcQueryAppServers(shared_ptr<VpcQueryAppServersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcQueryAppServersWithOptions(request, runtime);
}

VpcRegisterAppResponse Alibabacloud_CloudAPI20160201::Client::vpcRegisterAppWithOptions(shared_ptr<VpcRegisterAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcRegisterApp"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcRegisterAppResponse(callApi(params, req, runtime));
}

VpcRegisterAppResponse Alibabacloud_CloudAPI20160201::Client::vpcRegisterApp(shared_ptr<VpcRegisterAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcRegisterAppWithOptions(request, runtime);
}

VpcRemoveAppServerResponse Alibabacloud_CloudAPI20160201::Client::vpcRemoveAppServerWithOptions(shared_ptr<VpcRemoveAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serverIp)) {
    query->insert(pair<string, string>("ServerIp", *request->serverIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VpcRemoveAppServer"))},
    {"version", boost::any(string("2016-02-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VpcRemoveAppServerResponse(callApi(params, req, runtime));
}

VpcRemoveAppServerResponse Alibabacloud_CloudAPI20160201::Client::vpcRemoveAppServer(shared_ptr<VpcRemoveAppServerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vpcRemoveAppServerWithOptions(request, runtime);
}

