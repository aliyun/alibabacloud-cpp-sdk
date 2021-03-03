// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/waf_openapi_20190910.hpp>
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

using namespace Alibabacloud_Waf-openapi20190910;

Alibabacloud_Waf-openapi20190910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
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

string Alibabacloud_Waf-openapi20190910::Client::getEndpoint(shared_ptr<string> productId,
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

CreateCertificateResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateWithOptions(shared_ptr<CreateCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCertificateResponse(doRPCRequest(make_shared<string>("CreateCertificate"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCertificateResponse Alibabacloud_Waf-openapi20190910::Client::createCertificate(shared_ptr<CreateCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateWithOptions(request, runtime);
}

CreateCertificateByCertificateIdResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateByCertificateIdWithOptions(shared_ptr<CreateCertificateByCertificateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateCertificateByCertificateIdResponse(doRPCRequest(make_shared<string>("CreateCertificateByCertificateId"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateCertificateByCertificateIdResponse Alibabacloud_Waf-openapi20190910::Client::createCertificateByCertificateId(shared_ptr<CreateCertificateByCertificateIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCertificateByCertificateIdWithOptions(request, runtime);
}

CreateDomainResponse Alibabacloud_Waf-openapi20190910::Client::createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDomainResponse(doRPCRequest(make_shared<string>("CreateDomain"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDomainResponse Alibabacloud_Waf-openapi20190910::Client::createDomain(shared_ptr<CreateDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDomainWithOptions(request, runtime);
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::createProtectionModuleRuleWithOptions(shared_ptr<CreateProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProtectionModuleRuleResponse(doRPCRequest(make_shared<string>("CreateProtectionModuleRule"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::createProtectionModuleRule(shared_ptr<CreateProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProtectionModuleRuleWithOptions(request, runtime);
}

DeleteDomainResponse Alibabacloud_Waf-openapi20190910::Client::deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDomainResponse(doRPCRequest(make_shared<string>("DeleteDomain"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDomainResponse Alibabacloud_Waf-openapi20190910::Client::deleteDomain(shared_ptr<DeleteDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDomainWithOptions(request, runtime);
}

DeleteInstanceResponse Alibabacloud_Waf-openapi20190910::Client::deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteInstanceResponse(doRPCRequest(make_shared<string>("DeleteInstance"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteInstanceResponse Alibabacloud_Waf-openapi20190910::Client::deleteInstance(shared_ptr<DeleteInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteInstanceWithOptions(request, runtime);
}

DeleteProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::deleteProtectionModuleRuleWithOptions(shared_ptr<DeleteProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProtectionModuleRuleResponse(doRPCRequest(make_shared<string>("DeleteProtectionModuleRule"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::deleteProtectionModuleRule(shared_ptr<DeleteProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProtectionModuleRuleWithOptions(request, runtime);
}

DescribeCertificatesResponse Alibabacloud_Waf-openapi20190910::Client::describeCertificatesWithOptions(shared_ptr<DescribeCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCertificatesResponse(doRPCRequest(make_shared<string>("DescribeCertificates"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCertificatesResponse Alibabacloud_Waf-openapi20190910::Client::describeCertificates(shared_ptr<DescribeCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertificatesWithOptions(request, runtime);
}

DescribeCertMatchStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeCertMatchStatusWithOptions(shared_ptr<DescribeCertMatchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeCertMatchStatusResponse(doRPCRequest(make_shared<string>("DescribeCertMatchStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeCertMatchStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeCertMatchStatus(shared_ptr<DescribeCertMatchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCertMatchStatusWithOptions(request, runtime);
}

DescribeDomainResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainResponse(doRPCRequest(make_shared<string>("DescribeDomain"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainResponse Alibabacloud_Waf-openapi20190910::Client::describeDomain(shared_ptr<DescribeDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithOptions(request, runtime);
}

DescribeDomainAdvanceConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainAdvanceConfigsWithOptions(shared_ptr<DescribeDomainAdvanceConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainAdvanceConfigsResponse(doRPCRequest(make_shared<string>("DescribeDomainAdvanceConfigs"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainAdvanceConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainAdvanceConfigs(shared_ptr<DescribeDomainAdvanceConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainAdvanceConfigsWithOptions(request, runtime);
}

DescribeDomainBasicConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainBasicConfigsWithOptions(shared_ptr<DescribeDomainBasicConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainBasicConfigsResponse(doRPCRequest(make_shared<string>("DescribeDomainBasicConfigs"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainBasicConfigsResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainBasicConfigs(shared_ptr<DescribeDomainBasicConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainBasicConfigsWithOptions(request, runtime);
}

DescribeDomainListResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainListWithOptions(shared_ptr<DescribeDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainListResponse(doRPCRequest(make_shared<string>("DescribeDomainList"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainListResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainList(shared_ptr<DescribeDomainListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainListWithOptions(request, runtime);
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainNamesWithOptions(shared_ptr<DescribeDomainNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainNamesResponse(doRPCRequest(make_shared<string>("DescribeDomainNames"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainNamesResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainNames(shared_ptr<DescribeDomainNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainNamesWithOptions(request, runtime);
}

DescribeDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainRuleGroupWithOptions(shared_ptr<DescribeDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDomainRuleGroupResponse(doRPCRequest(make_shared<string>("DescribeDomainRuleGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::describeDomainRuleGroup(shared_ptr<DescribeDomainRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainRuleGroupWithOptions(request, runtime);
}

DescribeInstanceInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfoWithOptions(shared_ptr<DescribeInstanceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceInfoResponse(doRPCRequest(make_shared<string>("DescribeInstanceInfo"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfo(shared_ptr<DescribeInstanceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceInfoWithOptions(request, runtime);
}

DescribeInstanceInfosResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfosWithOptions(shared_ptr<DescribeInstanceInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceInfosResponse(doRPCRequest(make_shared<string>("DescribeInstanceInfos"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceInfosResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceInfos(shared_ptr<DescribeInstanceInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceInfosWithOptions(request, runtime);
}

DescribeInstanceSpecInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceSpecInfoWithOptions(shared_ptr<DescribeInstanceSpecInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeInstanceSpecInfoResponse(doRPCRequest(make_shared<string>("DescribeInstanceSpecInfo"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeInstanceSpecInfoResponse Alibabacloud_Waf-openapi20190910::Client::describeInstanceSpecInfo(shared_ptr<DescribeInstanceSpecInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceSpecInfoWithOptions(request, runtime);
}

DescribeLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeLogServiceStatusWithOptions(shared_ptr<DescribeLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeLogServiceStatusResponse(doRPCRequest(make_shared<string>("DescribeLogServiceStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeLogServiceStatus(shared_ptr<DescribeLogServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLogServiceStatusWithOptions(request, runtime);
}

DescribeProtectionModuleCodeConfigResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleCodeConfigWithOptions(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProtectionModuleCodeConfigResponse(doRPCRequest(make_shared<string>("DescribeProtectionModuleCodeConfig"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProtectionModuleCodeConfigResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleCodeConfig(shared_ptr<DescribeProtectionModuleCodeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleCodeConfigWithOptions(request, runtime);
}

DescribeProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleModeWithOptions(shared_ptr<DescribeProtectionModuleModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProtectionModuleModeResponse(doRPCRequest(make_shared<string>("DescribeProtectionModuleMode"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleMode(shared_ptr<DescribeProtectionModuleModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleModeWithOptions(request, runtime);
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleRulesWithOptions(shared_ptr<DescribeProtectionModuleRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProtectionModuleRulesResponse(doRPCRequest(make_shared<string>("DescribeProtectionModuleRules"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProtectionModuleRulesResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleRules(shared_ptr<DescribeProtectionModuleRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleRulesWithOptions(request, runtime);
}

DescribeProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleStatusWithOptions(shared_ptr<DescribeProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeProtectionModuleStatusResponse(doRPCRequest(make_shared<string>("DescribeProtectionModuleStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::describeProtectionModuleStatus(shared_ptr<DescribeProtectionModuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProtectionModuleStatusWithOptions(request, runtime);
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20190910::Client::describeWafSourceIpSegmentWithOptions(shared_ptr<DescribeWafSourceIpSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWafSourceIpSegmentResponse(doRPCRequest(make_shared<string>("DescribeWafSourceIpSegment"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWafSourceIpSegmentResponse Alibabacloud_Waf-openapi20190910::Client::describeWafSourceIpSegment(shared_ptr<DescribeWafSourceIpSegmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWafSourceIpSegmentWithOptions(request, runtime);
}

ModifyDomainResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainWithOptions(shared_ptr<ModifyDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDomainResponse(doRPCRequest(make_shared<string>("ModifyDomain"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDomainResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomain(shared_ptr<ModifyDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainWithOptions(request, runtime);
}

ModifyDomainIpv6StatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainIpv6StatusWithOptions(shared_ptr<ModifyDomainIpv6StatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDomainIpv6StatusResponse(doRPCRequest(make_shared<string>("ModifyDomainIpv6Status"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDomainIpv6StatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyDomainIpv6Status(shared_ptr<ModifyDomainIpv6StatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDomainIpv6StatusWithOptions(request, runtime);
}

ModifyLogRetrievalStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogRetrievalStatusWithOptions(shared_ptr<ModifyLogRetrievalStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLogRetrievalStatusResponse(doRPCRequest(make_shared<string>("ModifyLogRetrievalStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLogRetrievalStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogRetrievalStatus(shared_ptr<ModifyLogRetrievalStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogRetrievalStatusWithOptions(request, runtime);
}

ModifyLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogServiceStatusWithOptions(shared_ptr<ModifyLogServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyLogServiceStatusResponse(doRPCRequest(make_shared<string>("ModifyLogServiceStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyLogServiceStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyLogServiceStatus(shared_ptr<ModifyLogServiceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLogServiceStatusWithOptions(request, runtime);
}

ModifyProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleModeWithOptions(shared_ptr<ModifyProtectionModuleModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionModuleModeResponse(doRPCRequest(make_shared<string>("ModifyProtectionModuleMode"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionModuleModeResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleMode(shared_ptr<ModifyProtectionModuleModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleModeWithOptions(request, runtime);
}

ModifyProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleRuleWithOptions(shared_ptr<ModifyProtectionModuleRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionModuleRuleResponse(doRPCRequest(make_shared<string>("ModifyProtectionModuleRule"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionModuleRuleResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleRule(shared_ptr<ModifyProtectionModuleRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleRuleWithOptions(request, runtime);
}

ModifyProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleStatusWithOptions(shared_ptr<ModifyProtectionModuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionModuleStatusResponse(doRPCRequest(make_shared<string>("ModifyProtectionModuleStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionModuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionModuleStatus(shared_ptr<ModifyProtectionModuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionModuleStatusWithOptions(request, runtime);
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleCacheStatusWithOptions(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionRuleCacheStatusResponse(doRPCRequest(make_shared<string>("ModifyProtectionRuleCacheStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionRuleCacheStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleCacheStatus(shared_ptr<ModifyProtectionRuleCacheStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleCacheStatusWithOptions(request, runtime);
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleStatusWithOptions(shared_ptr<ModifyProtectionRuleStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyProtectionRuleStatusResponse(doRPCRequest(make_shared<string>("ModifyProtectionRuleStatus"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyProtectionRuleStatusResponse Alibabacloud_Waf-openapi20190910::Client::modifyProtectionRuleStatus(shared_ptr<ModifyProtectionRuleStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyProtectionRuleStatusWithOptions(request, runtime);
}

SetDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::setDomainRuleGroupWithOptions(shared_ptr<SetDomainRuleGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDomainRuleGroupResponse(doRPCRequest(make_shared<string>("SetDomainRuleGroup"), make_shared<string>("2019-09-10"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDomainRuleGroupResponse Alibabacloud_Waf-openapi20190910::Client::setDomainRuleGroup(shared_ptr<SetDomainRuleGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDomainRuleGroupWithOptions(request, runtime);
}

