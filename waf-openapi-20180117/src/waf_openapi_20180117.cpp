// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20180117.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Waf-openapi20180117;

Alibabacloud_Waf-openapi20180117::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Waf-openapi20180117::Client::getEndpoint(shared_ptr<string> productId,
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

CreateAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::createAclRuleWithOptions(shared_ptr<CreateAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAclRuleResponse(doRPCRequest(make_shared<string>("CreateAclRule"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::createAclRule(shared_ptr<CreateAclRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAclRuleWithOptions(request, runtime);
}

CreateCertAndKeyResponse Alibabacloud_Waf-openapi20180117::Client::createCertAndKeyWithOptions(shared_ptr<CreateCertAndKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCertAndKeyResponse(doRPCRequest(make_shared<string>("CreateCertAndKey"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCertAndKeyResponse Alibabacloud_Waf-openapi20180117::Client::createCertAndKey(shared_ptr<CreateCertAndKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertAndKeyWithOptions(request, runtime);
}

CreateDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::createDomainConfigWithOptions(shared_ptr<CreateDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDomainConfigResponse(doRPCRequest(make_shared<string>("CreateDomainConfig"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::createDomainConfig(shared_ptr<CreateDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainConfigWithOptions(request, runtime);
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20180117::Client::createProtectionModuleRuleWithOptions(shared_ptr<CreateProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProtectionModuleRuleResponse(doRPCRequest(make_shared<string>("CreateProtectionModuleRule"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20180117::Client::createProtectionModuleRule(shared_ptr<CreateProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProtectionModuleRuleWithOptions(request, runtime);
}

DeleteAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::deleteAclRuleWithOptions(shared_ptr<DeleteAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteAclRuleResponse(doRPCRequest(make_shared<string>("DeleteAclRule"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::deleteAclRule(shared_ptr<DeleteAclRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAclRuleWithOptions(request, runtime);
}

DeleteDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::deleteDomainConfigWithOptions(shared_ptr<DeleteDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDomainConfigResponse(doRPCRequest(make_shared<string>("DeleteDomainConfig"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::deleteDomainConfig(shared_ptr<DeleteDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainConfigWithOptions(request, runtime);
}

DescribeAclRulesResponse Alibabacloud_Waf-openapi20180117::Client::describeAclRulesWithOptions(shared_ptr<DescribeAclRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAclRulesResponse(doRPCRequest(make_shared<string>("DescribeAclRules"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAclRulesResponse Alibabacloud_Waf-openapi20180117::Client::describeAclRules(shared_ptr<DescribeAclRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAclRulesWithOptions(request, runtime);
}

DescribeAsyncTaskStatusResponse Alibabacloud_Waf-openapi20180117::Client::describeAsyncTaskStatusWithOptions(shared_ptr<DescribeAsyncTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAsyncTaskStatusResponse(doRPCRequest(make_shared<string>("DescribeAsyncTaskStatus"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAsyncTaskStatusResponse Alibabacloud_Waf-openapi20180117::Client::describeAsyncTaskStatus(shared_ptr<DescribeAsyncTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAsyncTaskStatusWithOptions(request, runtime);
}

DescribeDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainConfigWithOptions(shared_ptr<DescribeDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainConfigResponse(doRPCRequest(make_shared<string>("DescribeDomainConfig"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainConfig(shared_ptr<DescribeDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainConfigWithOptions(request, runtime);
}

DescribeDomainConfigStatusResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainConfigStatusWithOptions(shared_ptr<DescribeDomainConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainConfigStatusResponse(doRPCRequest(make_shared<string>("DescribeDomainConfigStatus"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainConfigStatusResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainConfigStatus(shared_ptr<DescribeDomainConfigStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainConfigStatusWithOptions(request, runtime);
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainNamesResponse(doRPCRequest(make_shared<string>("DescribeDomainNames"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20180117::Client::describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainNamesWithOptions(request, runtime);
}

DescribePayInfoResponse Alibabacloud_Waf-openapi20180117::Client::describePayInfoWithOptions(shared_ptr<DescribePayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribePayInfoResponse(doRPCRequest(make_shared<string>("DescribePayInfo"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribePayInfoResponse Alibabacloud_Waf-openapi20180117::Client::describePayInfo(shared_ptr<DescribePayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePayInfoWithOptions(request, runtime);
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20180117::Client::describeProtectionModuleRulesWithOptions(shared_ptr<DescribeProtectionModuleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProtectionModuleRulesResponse(doRPCRequest(make_shared<string>("DescribeProtectionModuleRules"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20180117::Client::describeProtectionModuleRules(shared_ptr<DescribeProtectionModuleRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleRulesWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Waf-openapi20180117::Client::describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRegionsResponse(doRPCRequest(make_shared<string>("DescribeRegions"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRegionsResponse Alibabacloud_Waf-openapi20180117::Client::describeRegions(shared_ptr<DescribeRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(request, runtime);
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20180117::Client::describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWafSourceIpSegmentResponse(doRPCRequest(make_shared<string>("DescribeWafSourceIpSegment"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20180117::Client::describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWafSourceIpSegmentWithOptions(request, runtime);
}

ModifyAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::modifyAclRuleWithOptions(shared_ptr<ModifyAclRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyAclRuleResponse(doRPCRequest(make_shared<string>("ModifyAclRule"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyAclRuleResponse Alibabacloud_Waf-openapi20180117::Client::modifyAclRule(shared_ptr<ModifyAclRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAclRuleWithOptions(request, runtime);
}

ModifyDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::modifyDomainConfigWithOptions(shared_ptr<ModifyDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDomainConfigResponse(doRPCRequest(make_shared<string>("ModifyDomainConfig"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDomainConfigResponse Alibabacloud_Waf-openapi20180117::Client::modifyDomainConfig(shared_ptr<ModifyDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainConfigWithOptions(request, runtime);
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20180117::Client::modifyProtectionRuleCacheStatusWithOptions(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionRuleCacheStatusResponse(doRPCRequest(make_shared<string>("ModifyProtectionRuleCacheStatus"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20180117::Client::modifyProtectionRuleCacheStatus(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleCacheStatusWithOptions(request, runtime);
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20180117::Client::modifyProtectionRuleStatusWithOptions(shared_ptr<ModifyProtectionRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionRuleStatusResponse(doRPCRequest(make_shared<string>("ModifyProtectionRuleStatus"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20180117::Client::modifyProtectionRuleStatus(shared_ptr<ModifyProtectionRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleStatusWithOptions(request, runtime);
}

ModifyWafSwitchResponse Alibabacloud_Waf-openapi20180117::Client::modifyWafSwitchWithOptions(shared_ptr<ModifyWafSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyWafSwitchResponse(doRPCRequest(make_shared<string>("ModifyWafSwitch"), make_shared<string>("2018-01-17"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyWafSwitchResponse Alibabacloud_Waf-openapi20180117::Client::modifyWafSwitch(shared_ptr<ModifyWafSwitchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyWafSwitchWithOptions(request, runtime);
}

