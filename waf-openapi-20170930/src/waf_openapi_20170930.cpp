// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20170930.hpp>
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

using namespace Alibabacloud_Waf-openapi20170930;

Alibabacloud_Waf-openapi20170930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-beijing", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-chengdu", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-zhangjiakou", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-huhehaote", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shanghai", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-heyuan", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-wulanchabu", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-3", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-west-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"us-east-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"me-east-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1", "wafopenapi.ap-southeast-1.aliyuncs.com"},
    {"cn-shanghai-finance-1", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "wafopenapi.cn-hangzhou.aliyuncs.com"},
    {"cn-north-2-gov-1", "wafopenapi.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("waf-openapi"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Waf-openapi20170930::Client::getEndpoint(shared_ptr<string> productId,
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

AppOpenAckResponse Alibabacloud_Waf-openapi20170930::Client::appOpenAckWithOptions(shared_ptr<AppOpenAckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ack)) {
    query->insert(pair<string, string>("Ack", *request->ack));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->asyncMethod)) {
    query->insert(pair<string, string>("AsyncMethod", *request->asyncMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceId)) {
    query->insert(pair<string, string>("ServiceId", *request->serviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AppOpenAck"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AppOpenAckResponse(callApi(params, req, runtime));
}

AppOpenAckResponse Alibabacloud_Waf-openapi20170930::Client::appOpenAck(shared_ptr<AppOpenAckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return appOpenAckWithOptions(request, runtime);
}

CreateDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::createDomainConfigWithOptions(shared_ptr<CreateDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpPort)) {
    query->insert(pair<string, string>("HttpPort", *request->httpPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpToUserIp)) {
    query->insert(pair<string, long>("HttpToUserIp", *request->httpToUserIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsPort)) {
    query->insert(pair<string, string>("HttpsPort", *request->httpsPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpsRedirect)) {
    query->insert(pair<string, long>("HttpsRedirect", *request->httpsRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isAccessProduct)) {
    query->insert(pair<string, long>("IsAccessProduct", *request->isAccessProduct));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isNonStandardPort)) {
    query->insert(pair<string, long>("IsNonStandardPort", *request->isNonStandardPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancing)) {
    query->insert(pair<string, long>("LoadBalancing", *request->loadBalancing));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocols)) {
    query->insert(pair<string, string>("Protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rsType)) {
    query->insert(pair<string, long>("RsType", *request->rsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIps)) {
    query->insert(pair<string, string>("SourceIps", *request->sourceIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDomainConfig"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDomainConfigResponse(callApi(params, req, runtime));
}

CreateDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::createDomainConfig(shared_ptr<CreateDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainConfigWithOptions(request, runtime);
}

DeleteDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::deleteDomainConfigWithOptions(shared_ptr<DeleteDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDomainConfig"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDomainConfigResponse(callApi(params, req, runtime));
}

DeleteDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::deleteDomainConfig(shared_ptr<DeleteDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainConfigWithOptions(request, runtime);
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20170930::Client::describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainNames"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainNamesResponse(callApi(params, req, runtime));
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20170930::Client::describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainNamesWithOptions(request, runtime);
}

DescribeDomainTransferConfigResponse Alibabacloud_Waf-openapi20170930::Client::describeDomainTransferConfigWithOptions(shared_ptr<DescribeDomainTransferConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainTransferConfig"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainTransferConfigResponse(callApi(params, req, runtime));
}

DescribeDomainTransferConfigResponse Alibabacloud_Waf-openapi20170930::Client::describeDomainTransferConfig(shared_ptr<DescribeDomainTransferConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainTransferConfigWithOptions(request, runtime);
}

DescribeDomainsResponse Alibabacloud_Waf-openapi20170930::Client::describeDomainsWithOptions(shared_ptr<DescribeDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomains"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainsResponse(callApi(params, req, runtime));
}

DescribeDomainsResponse Alibabacloud_Waf-openapi20170930::Client::describeDomains(shared_ptr<DescribeDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainsWithOptions(request, runtime);
}

DescribeHttpsCertInUseResponse Alibabacloud_Waf-openapi20170930::Client::describeHttpsCertInUseWithOptions(shared_ptr<DescribeHttpsCertInUseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHttpsCertInUse"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHttpsCertInUseResponse(callApi(params, req, runtime));
}

DescribeHttpsCertInUseResponse Alibabacloud_Waf-openapi20170930::Client::describeHttpsCertInUse(shared_ptr<DescribeHttpsCertInUseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHttpsCertInUseWithOptions(request, runtime);
}

DescribeNeedUpgradeDomainLimitResponse Alibabacloud_Waf-openapi20170930::Client::describeNeedUpgradeDomainLimitWithOptions(shared_ptr<DescribeNeedUpgradeDomainLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNeedUpgradeDomainLimit"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeNeedUpgradeDomainLimitResponse(callApi(params, req, runtime));
}

DescribeNeedUpgradeDomainLimitResponse Alibabacloud_Waf-openapi20170930::Client::describeNeedUpgradeDomainLimit(shared_ptr<DescribeNeedUpgradeDomainLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNeedUpgradeDomainLimitWithOptions(request, runtime);
}

DescribePackageResponse Alibabacloud_Waf-openapi20170930::Client::describePackageWithOptions(shared_ptr<DescribePackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePackage"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePackageResponse(callApi(params, req, runtime));
}

DescribePackageResponse Alibabacloud_Waf-openapi20170930::Client::describePackage(shared_ptr<DescribePackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePackageWithOptions(request, runtime);
}

DescribeQpsResponse Alibabacloud_Waf-openapi20170930::Client::describeQpsWithOptions(shared_ptr<DescribeQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endMillisecond)) {
    query->insert(pair<string, long>("EndMillisecond", *request->endMillisecond));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->field)) {
    query->insert(pair<string, vector<string>>("Field", *request->field));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMillisecond)) {
    query->insert(pair<string, long>("StartMillisecond", *request->startMillisecond));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQps"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQpsResponse(callApi(params, req, runtime));
}

DescribeQpsResponse Alibabacloud_Waf-openapi20170930::Client::describeQps(shared_ptr<DescribeQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQpsWithOptions(request, runtime);
}

DescribeRegionStatusResponse Alibabacloud_Waf-openapi20170930::Client::describeRegionStatusWithOptions(shared_ptr<DescribeRegionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceSource)) {
    query->insert(pair<string, string>("InstanceSource", *request->instanceSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lang)) {
    query->insert(pair<string, string>("Lang", *request->lang));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIp)) {
    query->insert(pair<string, string>("SourceIp", *request->sourceIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegionStatus"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRegionStatusResponse(callApi(params, req, runtime));
}

DescribeRegionStatusResponse Alibabacloud_Waf-openapi20170930::Client::describeRegionStatus(shared_ptr<DescribeRegionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionStatusWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Waf-openapi20170930::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2017-09-30"))},
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

DescribeRegionsResponse Alibabacloud_Waf-openapi20170930::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeTransferConfigInWorkResponse Alibabacloud_Waf-openapi20170930::Client::describeTransferConfigInWorkWithOptions(shared_ptr<DescribeTransferConfigInWorkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkRequestId)) {
    query->insert(pair<string, string>("CheckRequestId", *request->checkRequestId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTransferConfigInWork"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTransferConfigInWorkResponse(callApi(params, req, runtime));
}

DescribeTransferConfigInWorkResponse Alibabacloud_Waf-openapi20170930::Client::describeTransferConfigInWork(shared_ptr<DescribeTransferConfigInWorkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTransferConfigInWorkWithOptions(request, runtime);
}

GetQpsResponse Alibabacloud_Waf-openapi20170930::Client::getQpsWithOptions(shared_ptr<GetQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->e)) {
    query->insert(pair<string, long>("e", *request->e));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->f)) {
    query->insert(pair<string, vector<string>>("f", *request->f));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->n)) {
    query->insert(pair<string, string>("n", *request->n));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->s)) {
    query->insert(pair<string, long>("s", *request->s));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->x)) {
    query->insert(pair<string, long>("x", *request->x));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQps"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQpsResponse(callApi(params, req, runtime));
}

GetQpsResponse Alibabacloud_Waf-openapi20170930::Client::getQps(shared_ptr<GetQpsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQpsWithOptions(request, runtime);
}

GetQpsTotalResponse Alibabacloud_Waf-openapi20170930::Client::getQpsTotalWithOptions(shared_ptr<GetQpsTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->e)) {
    query->insert(pair<string, long>("e", *request->e));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->f)) {
    query->insert(pair<string, vector<string>>("f", *request->f));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("instanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->n)) {
    query->insert(pair<string, string>("n", *request->n));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->s)) {
    query->insert(pair<string, long>("s", *request->s));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->x)) {
    query->insert(pair<string, long>("x", *request->x));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetQpsTotal"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetQpsTotalResponse(callApi(params, req, runtime));
}

GetQpsTotalResponse Alibabacloud_Waf-openapi20170930::Client::getQpsTotal(shared_ptr<GetQpsTotalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getQpsTotalWithOptions(request, runtime);
}

GetRegionListResponse Alibabacloud_Waf-openapi20170930::Client::getRegionListWithOptions(shared_ptr<GetRegionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegionList"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegionListResponse(callApi(params, req, runtime));
}

GetRegionListResponse Alibabacloud_Waf-openapi20170930::Client::getRegionList(shared_ptr<GetRegionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegionListWithOptions(request, runtime);
}

ModifyCertAndKeyResponse Alibabacloud_Waf-openapi20170930::Client::modifyCertAndKeyWithOptions(shared_ptr<ModifyCertAndKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cert)) {
    query->insert(pair<string, string>("Cert", *request->cert));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsCertId)) {
    query->insert(pair<string, string>("HttpsCertId", *request->httpsCertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsCertName)) {
    query->insert(pair<string, string>("HttpsCertName", *request->httpsCertName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCertAndKey"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCertAndKeyResponse(callApi(params, req, runtime));
}

ModifyCertAndKeyResponse Alibabacloud_Waf-openapi20170930::Client::modifyCertAndKey(shared_ptr<ModifyCertAndKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCertAndKeyWithOptions(request, runtime);
}

ModifyDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::modifyDomainConfigWithOptions(shared_ptr<ModifyDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpPort)) {
    query->insert(pair<string, string>("HttpPort", *request->httpPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpToUserIp)) {
    query->insert(pair<string, long>("HttpToUserIp", *request->httpToUserIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsPort)) {
    query->insert(pair<string, string>("HttpsPort", *request->httpsPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->httpsRedirect)) {
    query->insert(pair<string, long>("HttpsRedirect", *request->httpsRedirect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isAccessProduct)) {
    query->insert(pair<string, long>("IsAccessProduct", *request->isAccessProduct));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isNonStandardPort)) {
    query->insert(pair<string, long>("IsNonStandardPort", *request->isNonStandardPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->loadBalancing)) {
    query->insert(pair<string, long>("LoadBalancing", *request->loadBalancing));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocols)) {
    query->insert(pair<string, string>("Protocols", *request->protocols));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rsType)) {
    query->insert(pair<string, long>("RsType", *request->rsType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceIps)) {
    query->insert(pair<string, string>("SourceIps", *request->sourceIps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDomainConfig"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDomainConfigResponse(callApi(params, req, runtime));
}

ModifyDomainConfigResponse Alibabacloud_Waf-openapi20170930::Client::modifyDomainConfig(shared_ptr<ModifyDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainConfigWithOptions(request, runtime);
}

ModifyDomainPackageCountResponse Alibabacloud_Waf-openapi20170930::Client::modifyDomainPackageCountWithOptions(shared_ptr<ModifyDomainPackageCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->domainPackageCount)) {
    query->insert(pair<string, long>("DomainPackageCount", *request->domainPackageCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDomainPackageCount"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDomainPackageCountResponse(callApi(params, req, runtime));
}

ModifyDomainPackageCountResponse Alibabacloud_Waf-openapi20170930::Client::modifyDomainPackageCount(shared_ptr<ModifyDomainPackageCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainPackageCountWithOptions(request, runtime);
}

ModifyWafSwitchResponse Alibabacloud_Waf-openapi20170930::Client::modifyWafSwitchWithOptions(shared_ptr<ModifyWafSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caller)) {
    query->insert(pair<string, string>("Caller", *request->caller));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->serviceOn)) {
    query->insert(pair<string, long>("ServiceOn", *request->serviceOn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyWafSwitch"))},
    {"version", boost::any(string("2017-09-30"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyWafSwitchResponse(callApi(params, req, runtime));
}

ModifyWafSwitchResponse Alibabacloud_Waf-openapi20170930::Client::modifyWafSwitch(shared_ptr<ModifyWafSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWafSwitchWithOptions(request, runtime);
}

