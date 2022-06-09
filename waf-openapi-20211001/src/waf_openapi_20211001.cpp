// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20211001.hpp>
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

using namespace Alibabacloud_Waf-openapi20211001;

Alibabacloud_Waf-openapi20211001::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Waf-openapi20211001::Client::getEndpoint(shared_ptr<string> productId,
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

CreateMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::createMajorProtectionBlackIpWithOptions(shared_ptr<CreateMajorProtectionBlackIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiredTime)) {
    query->insert(pair<string, long>("ExpiredTime", *request->expiredTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipList)) {
    query->insert(pair<string, string>("IpList", *request->ipList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->templateId)) {
    query->insert(pair<string, long>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMajorProtectionBlackIp"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMajorProtectionBlackIpResponse(callApi(params, req, runtime));
}

CreateMajorProtectionBlackIpResponse Alibabacloud_Waf-openapi20211001::Client::createMajorProtectionBlackIp(shared_ptr<CreateMajorProtectionBlackIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMajorProtectionBlackIpWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceResponse(callApi(params, req, runtime));
}

DescribeInstanceResponse Alibabacloud_Waf-openapi20211001::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeInstanceCompatibleResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceCompatibleWithOptions(shared_ptr<DescribeInstanceCompatibleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceCompatible"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceCompatibleResponse(callApi(params, req, runtime));
}

DescribeInstanceCompatibleResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceCompatible(shared_ptr<DescribeInstanceCompatibleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceCompatibleWithOptions(request, runtime);
}

DescribeInstanceExtendResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceExtendWithOptions(shared_ptr<DescribeInstanceExtendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->edition)) {
    query->insert(pair<string, string>("Edition", *request->edition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceExtend"))},
    {"version", boost::any(string("2021-10-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInstanceExtendResponse(callApi(params, req, runtime));
}

DescribeInstanceExtendResponse Alibabacloud_Waf-openapi20211001::Client::describeInstanceExtend(shared_ptr<DescribeInstanceExtendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceExtendWithOptions(request, runtime);
}

