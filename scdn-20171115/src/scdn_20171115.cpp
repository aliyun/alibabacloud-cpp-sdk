// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/scdn_20171115.hpp>
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

using namespace Alibabacloud_Scdn20171115;

Alibabacloud_Scdn20171115::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "scdn.aliyuncs.com"},
    {"ap-northeast-2-pop", "scdn.aliyuncs.com"},
    {"ap-south-1", "scdn.aliyuncs.com"},
    {"ap-southeast-1", "scdn.aliyuncs.com"},
    {"ap-southeast-2", "scdn.aliyuncs.com"},
    {"ap-southeast-3", "scdn.aliyuncs.com"},
    {"ap-southeast-5", "scdn.aliyuncs.com"},
    {"cn-beijing", "scdn.aliyuncs.com"},
    {"cn-beijing-finance-1", "scdn.aliyuncs.com"},
    {"cn-beijing-finance-pop", "scdn.aliyuncs.com"},
    {"cn-beijing-gov-1", "scdn.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "scdn.aliyuncs.com"},
    {"cn-chengdu", "scdn.aliyuncs.com"},
    {"cn-edge-1", "scdn.aliyuncs.com"},
    {"cn-fujian", "scdn.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "scdn.aliyuncs.com"},
    {"cn-hangzhou", "scdn.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "scdn.aliyuncs.com"},
    {"cn-hangzhou-finance", "scdn.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "scdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "scdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "scdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "scdn.aliyuncs.com"},
    {"cn-hangzhou-test-306", "scdn.aliyuncs.com"},
    {"cn-hongkong", "scdn.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "scdn.aliyuncs.com"},
    {"cn-huhehaote", "scdn.aliyuncs.com"},
    {"cn-north-2-gov-1", "scdn.aliyuncs.com"},
    {"cn-qingdao", "scdn.aliyuncs.com"},
    {"cn-qingdao-nebula", "scdn.aliyuncs.com"},
    {"cn-shanghai", "scdn.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "scdn.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "scdn.aliyuncs.com"},
    {"cn-shanghai-finance-1", "scdn.aliyuncs.com"},
    {"cn-shanghai-inner", "scdn.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "scdn.aliyuncs.com"},
    {"cn-shenzhen", "scdn.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "scdn.aliyuncs.com"},
    {"cn-shenzhen-inner", "scdn.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "scdn.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "scdn.aliyuncs.com"},
    {"cn-wuhan", "scdn.aliyuncs.com"},
    {"cn-yushanfang", "scdn.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "scdn.aliyuncs.com"},
    {"cn-zhangjiakou", "scdn.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "scdn.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "scdn.aliyuncs.com"},
    {"eu-central-1", "scdn.aliyuncs.com"},
    {"eu-west-1", "scdn.aliyuncs.com"},
    {"eu-west-1-oxs", "scdn.aliyuncs.com"},
    {"me-east-1", "scdn.aliyuncs.com"},
    {"rus-west-1-pop", "scdn.aliyuncs.com"},
    {"us-east-1", "scdn.aliyuncs.com"},
    {"us-west-1", "scdn.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("scdn"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Scdn20171115::Client::getEndpoint(shared_ptr<string> productId,
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

AddScdnDomainResponse Alibabacloud_Scdn20171115::Client::addScdnDomainWithOptions(shared_ptr<AddScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return AddScdnDomainResponse(doRPCRequest(make_shared<string>("AddScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

AddScdnDomainResponse Alibabacloud_Scdn20171115::Client::addScdnDomain(shared_ptr<AddScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addScdnDomainWithOptions(request, runtime);
}

BatchDeleteScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::batchDeleteScdnDomainConfigsWithOptions(shared_ptr<BatchDeleteScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteScdnDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchDeleteScdnDomainConfigs"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::batchDeleteScdnDomainConfigs(shared_ptr<BatchDeleteScdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteScdnDomainConfigsWithOptions(request, runtime);
}

BatchSetScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::batchSetScdnDomainConfigsWithOptions(shared_ptr<BatchSetScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetScdnDomainConfigsResponse(doRPCRequest(make_shared<string>("BatchSetScdnDomainConfigs"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::batchSetScdnDomainConfigs(shared_ptr<BatchSetScdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetScdnDomainConfigsWithOptions(request, runtime);
}

BatchUpdateScdnDomainResponse Alibabacloud_Scdn20171115::Client::batchUpdateScdnDomainWithOptions(shared_ptr<BatchUpdateScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUpdateScdnDomainResponse(doRPCRequest(make_shared<string>("BatchUpdateScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUpdateScdnDomainResponse Alibabacloud_Scdn20171115::Client::batchUpdateScdnDomain(shared_ptr<BatchUpdateScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateScdnDomainWithOptions(request, runtime);
}

CheckScdnServiceResponse Alibabacloud_Scdn20171115::Client::checkScdnServiceWithOptions(shared_ptr<CheckScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CheckScdnServiceResponse(doRPCRequest(make_shared<string>("CheckScdnService"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CheckScdnServiceResponse Alibabacloud_Scdn20171115::Client::checkScdnService(shared_ptr<CheckScdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkScdnServiceWithOptions(request, runtime);
}

DeleteScdnDomainResponse Alibabacloud_Scdn20171115::Client::deleteScdnDomainWithOptions(shared_ptr<DeleteScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScdnDomainResponse(doRPCRequest(make_shared<string>("DeleteScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScdnDomainResponse Alibabacloud_Scdn20171115::Client::deleteScdnDomain(shared_ptr<DeleteScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScdnDomainWithOptions(request, runtime);
}

DeleteScdnSpecificConfigResponse Alibabacloud_Scdn20171115::Client::deleteScdnSpecificConfigWithOptions(shared_ptr<DeleteScdnSpecificConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteScdnSpecificConfigResponse(doRPCRequest(make_shared<string>("DeleteScdnSpecificConfig"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteScdnSpecificConfigResponse Alibabacloud_Scdn20171115::Client::deleteScdnSpecificConfig(shared_ptr<DeleteScdnSpecificConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScdnSpecificConfigWithOptions(request, runtime);
}

DescribeScdnCcQpsInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnCcQpsInfoWithOptions(shared_ptr<DescribeScdnCcQpsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnCcQpsInfoResponse(doRPCRequest(make_shared<string>("DescribeScdnCcQpsInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnCcQpsInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnCcQpsInfo(shared_ptr<DescribeScdnCcQpsInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnCcQpsInfoWithOptions(request, runtime);
}

DescribeScdnCcTopIpResponse Alibabacloud_Scdn20171115::Client::describeScdnCcTopIpWithOptions(shared_ptr<DescribeScdnCcTopIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnCcTopIpResponse(doRPCRequest(make_shared<string>("DescribeScdnCcTopIp"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnCcTopIpResponse Alibabacloud_Scdn20171115::Client::describeScdnCcTopIp(shared_ptr<DescribeScdnCcTopIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnCcTopIpWithOptions(request, runtime);
}

DescribeScdnCcTopUrlResponse Alibabacloud_Scdn20171115::Client::describeScdnCcTopUrlWithOptions(shared_ptr<DescribeScdnCcTopUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnCcTopUrlResponse(doRPCRequest(make_shared<string>("DescribeScdnCcTopUrl"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnCcTopUrlResponse Alibabacloud_Scdn20171115::Client::describeScdnCcTopUrl(shared_ptr<DescribeScdnCcTopUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnCcTopUrlWithOptions(request, runtime);
}

DescribeScdnCertificateDetailResponse Alibabacloud_Scdn20171115::Client::describeScdnCertificateDetailWithOptions(shared_ptr<DescribeScdnCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnCertificateDetailResponse(doRPCRequest(make_shared<string>("DescribeScdnCertificateDetail"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnCertificateDetailResponse Alibabacloud_Scdn20171115::Client::describeScdnCertificateDetail(shared_ptr<DescribeScdnCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnCertificateDetailWithOptions(request, runtime);
}

DescribeScdnCertificateListResponse Alibabacloud_Scdn20171115::Client::describeScdnCertificateListWithOptions(shared_ptr<DescribeScdnCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnCertificateListResponse(doRPCRequest(make_shared<string>("DescribeScdnCertificateList"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnCertificateListResponse Alibabacloud_Scdn20171115::Client::describeScdnCertificateList(shared_ptr<DescribeScdnCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnCertificateListWithOptions(request, runtime);
}

DescribeScdnDDoSInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDDoSInfoWithOptions(shared_ptr<DescribeScdnDDoSInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDDoSInfoResponse(doRPCRequest(make_shared<string>("DescribeScdnDDoSInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDDoSInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDDoSInfo(shared_ptr<DescribeScdnDDoSInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDDoSInfoWithOptions(request, runtime);
}

DescribeScdnDDoSTrafficInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDDoSTrafficInfoWithOptions(shared_ptr<DescribeScdnDDoSTrafficInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDDoSTrafficInfoResponse(doRPCRequest(make_shared<string>("DescribeScdnDDoSTrafficInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDDoSTrafficInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDDoSTrafficInfo(shared_ptr<DescribeScdnDDoSTrafficInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDDoSTrafficInfoWithOptions(request, runtime);
}

DescribeScdnDomainBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainBpsDataWithOptions(shared_ptr<DescribeScdnDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainBpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainBpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainBpsData(shared_ptr<DescribeScdnDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainBpsDataWithOptions(request, runtime);
}

DescribeScdnDomainCertificateInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainCertificateInfoWithOptions(shared_ptr<DescribeScdnDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainCertificateInfoResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainCertificateInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainCertificateInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainCertificateInfo(shared_ptr<DescribeScdnDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainCertificateInfoWithOptions(request, runtime);
}

DescribeScdnDomainCnameResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainCnameWithOptions(shared_ptr<DescribeScdnDomainCnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDomainCnameResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainCname"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainCnameResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainCname(shared_ptr<DescribeScdnDomainCnameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainCnameWithOptions(request, runtime);
}

DescribeScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainConfigsWithOptions(shared_ptr<DescribeScdnDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainConfigsResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainConfigs"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainConfigsResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainConfigs(shared_ptr<DescribeScdnDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainConfigsWithOptions(request, runtime);
}

DescribeScdnDomainDetailResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainDetailWithOptions(shared_ptr<DescribeScdnDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainDetailResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainDetail"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainDetailResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainDetail(shared_ptr<DescribeScdnDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainDetailWithOptions(request, runtime);
}

DescribeScdnDomainHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainHitRateDataWithOptions(shared_ptr<DescribeScdnDomainHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainHitRateData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainHitRateData(shared_ptr<DescribeScdnDomainHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainHitRateDataWithOptions(request, runtime);
}

DescribeScdnDomainHttpCodeDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainHttpCodeDataWithOptions(shared_ptr<DescribeScdnDomainHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainHttpCodeData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainHttpCodeDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainHttpCodeData(shared_ptr<DescribeScdnDomainHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainHttpCodeDataWithOptions(request, runtime);
}

DescribeScdnDomainIspDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainIspDataWithOptions(shared_ptr<DescribeScdnDomainIspDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainIspDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainIspData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainIspDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainIspData(shared_ptr<DescribeScdnDomainIspDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainIspDataWithOptions(request, runtime);
}

DescribeScdnDomainLogResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainLogWithOptions(shared_ptr<DescribeScdnDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainLogResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainLog"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainLogResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainLog(shared_ptr<DescribeScdnDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainLogWithOptions(request, runtime);
}

DescribeScdnDomainOriginBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainOriginBpsDataWithOptions(shared_ptr<DescribeScdnDomainOriginBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainOriginBpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainOriginBpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainOriginBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainOriginBpsData(shared_ptr<DescribeScdnDomainOriginBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainOriginBpsDataWithOptions(request, runtime);
}

DescribeScdnDomainOriginTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainOriginTrafficDataWithOptions(shared_ptr<DescribeScdnDomainOriginTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainOriginTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainOriginTrafficData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainOriginTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainOriginTrafficData(shared_ptr<DescribeScdnDomainOriginTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainOriginTrafficDataWithOptions(request, runtime);
}

DescribeScdnDomainPvDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainPvDataWithOptions(shared_ptr<DescribeScdnDomainPvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainPvDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainPvData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainPvDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainPvData(shared_ptr<DescribeScdnDomainPvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainPvDataWithOptions(request, runtime);
}

DescribeScdnDomainQpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainQpsDataWithOptions(shared_ptr<DescribeScdnDomainQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainQpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainQpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainQpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainQpsData(shared_ptr<DescribeScdnDomainQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainQpsDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeBpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDomainRealTimeBpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeBpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeBpsData(shared_ptr<DescribeScdnDomainRealTimeBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeBpsDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeByteHitRateDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDomainRealTimeByteHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeByteHitRateData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeByteHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeByteHitRateData(shared_ptr<DescribeScdnDomainRealTimeByteHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeHttpCodeDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainRealTimeHttpCodeDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeHttpCodeData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeHttpCodeDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeHttpCodeData(shared_ptr<DescribeScdnDomainRealTimeHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeQpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeQpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeQpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDomainRealTimeQpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeQpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeQpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeQpsData(shared_ptr<DescribeScdnDomainRealTimeQpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeQpsDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeReqHitRateDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnDomainRealTimeReqHitRateDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeReqHitRateData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeReqHitRateDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeReqHitRateData(shared_ptr<DescribeScdnDomainRealTimeReqHitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeSrcBpsDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainRealTimeSrcBpsDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeSrcBpsData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeSrcBpsDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeSrcBpsData(shared_ptr<DescribeScdnDomainRealTimeSrcBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeSrcBpsDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeSrcTrafficDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainRealTimeSrcTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeSrcTrafficData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeSrcTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeSrcTrafficData(shared_ptr<DescribeScdnDomainRealTimeSrcTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeSrcTrafficDataWithOptions(request, runtime);
}

DescribeScdnDomainRealTimeTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeTrafficDataWithOptions(shared_ptr<DescribeScdnDomainRealTimeTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainRealTimeTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRealTimeTrafficData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRealTimeTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRealTimeTrafficData(shared_ptr<DescribeScdnDomainRealTimeTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRealTimeTrafficDataWithOptions(request, runtime);
}

DescribeScdnDomainRegionDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRegionDataWithOptions(shared_ptr<DescribeScdnDomainRegionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainRegionDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainRegionData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainRegionDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainRegionData(shared_ptr<DescribeScdnDomainRegionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainRegionDataWithOptions(request, runtime);
}

DescribeScdnDomainTopReferVisitResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTopReferVisitWithOptions(shared_ptr<DescribeScdnDomainTopReferVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainTopReferVisitResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainTopReferVisit"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainTopReferVisitResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTopReferVisit(shared_ptr<DescribeScdnDomainTopReferVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainTopReferVisitWithOptions(request, runtime);
}

DescribeScdnDomainTopUrlVisitResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTopUrlVisitWithOptions(shared_ptr<DescribeScdnDomainTopUrlVisitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainTopUrlVisitResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainTopUrlVisit"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainTopUrlVisitResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTopUrlVisit(shared_ptr<DescribeScdnDomainTopUrlVisitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainTopUrlVisitWithOptions(request, runtime);
}

DescribeScdnDomainTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTrafficDataWithOptions(shared_ptr<DescribeScdnDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainTrafficDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainTrafficData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainTrafficDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainTrafficData(shared_ptr<DescribeScdnDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainTrafficDataWithOptions(request, runtime);
}

DescribeScdnDomainUvDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainUvDataWithOptions(shared_ptr<DescribeScdnDomainUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnDomainUvDataResponse(doRPCRequest(make_shared<string>("DescribeScdnDomainUvData"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnDomainUvDataResponse Alibabacloud_Scdn20171115::Client::describeScdnDomainUvData(shared_ptr<DescribeScdnDomainUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnDomainUvDataWithOptions(request, runtime);
}

DescribeScdnRefreshQuotaResponse Alibabacloud_Scdn20171115::Client::describeScdnRefreshQuotaWithOptions(shared_ptr<DescribeScdnRefreshQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnRefreshQuotaResponse(doRPCRequest(make_shared<string>("DescribeScdnRefreshQuota"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnRefreshQuotaResponse Alibabacloud_Scdn20171115::Client::describeScdnRefreshQuota(shared_ptr<DescribeScdnRefreshQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnRefreshQuotaWithOptions(request, runtime);
}

DescribeScdnRefreshTasksResponse Alibabacloud_Scdn20171115::Client::describeScdnRefreshTasksWithOptions(shared_ptr<DescribeScdnRefreshTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnRefreshTasksResponse(doRPCRequest(make_shared<string>("DescribeScdnRefreshTasks"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnRefreshTasksResponse Alibabacloud_Scdn20171115::Client::describeScdnRefreshTasks(shared_ptr<DescribeScdnRefreshTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnRefreshTasksWithOptions(request, runtime);
}

DescribeScdnServiceResponse Alibabacloud_Scdn20171115::Client::describeScdnServiceWithOptions(shared_ptr<DescribeScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnServiceResponse(doRPCRequest(make_shared<string>("DescribeScdnService"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnServiceResponse Alibabacloud_Scdn20171115::Client::describeScdnService(shared_ptr<DescribeScdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnServiceWithOptions(request, runtime);
}

DescribeScdnTopDomainsByFlowResponse Alibabacloud_Scdn20171115::Client::describeScdnTopDomainsByFlowWithOptions(shared_ptr<DescribeScdnTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnTopDomainsByFlowResponse(doRPCRequest(make_shared<string>("DescribeScdnTopDomainsByFlow"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnTopDomainsByFlowResponse Alibabacloud_Scdn20171115::Client::describeScdnTopDomainsByFlow(shared_ptr<DescribeScdnTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnTopDomainsByFlowWithOptions(request, runtime);
}

DescribeScdnUserDomainsResponse Alibabacloud_Scdn20171115::Client::describeScdnUserDomainsWithOptions(shared_ptr<DescribeScdnUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnUserDomainsResponse(doRPCRequest(make_shared<string>("DescribeScdnUserDomains"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnUserDomainsResponse Alibabacloud_Scdn20171115::Client::describeScdnUserDomains(shared_ptr<DescribeScdnUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnUserDomainsWithOptions(request, runtime);
}

DescribeScdnUserProtectInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnUserProtectInfoWithOptions(shared_ptr<DescribeScdnUserProtectInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return DescribeScdnUserProtectInfoResponse(doRPCRequest(make_shared<string>("DescribeScdnUserProtectInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnUserProtectInfoResponse Alibabacloud_Scdn20171115::Client::describeScdnUserProtectInfo(shared_ptr<DescribeScdnUserProtectInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnUserProtectInfoWithOptions(request, runtime);
}

DescribeScdnUserQuotaResponse Alibabacloud_Scdn20171115::Client::describeScdnUserQuotaWithOptions(shared_ptr<DescribeScdnUserQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeScdnUserQuotaResponse(doRPCRequest(make_shared<string>("DescribeScdnUserQuota"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeScdnUserQuotaResponse Alibabacloud_Scdn20171115::Client::describeScdnUserQuota(shared_ptr<DescribeScdnUserQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScdnUserQuotaWithOptions(request, runtime);
}

OpenScdnServiceResponse Alibabacloud_Scdn20171115::Client::openScdnServiceWithOptions(shared_ptr<OpenScdnServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenScdnServiceResponse(doRPCRequest(make_shared<string>("OpenScdnService"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenScdnServiceResponse Alibabacloud_Scdn20171115::Client::openScdnService(shared_ptr<OpenScdnServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openScdnServiceWithOptions(request, runtime);
}

PreloadScdnObjectCachesResponse Alibabacloud_Scdn20171115::Client::preloadScdnObjectCachesWithOptions(shared_ptr<PreloadScdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PreloadScdnObjectCachesResponse(doRPCRequest(make_shared<string>("PreloadScdnObjectCaches"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PreloadScdnObjectCachesResponse Alibabacloud_Scdn20171115::Client::preloadScdnObjectCaches(shared_ptr<PreloadScdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadScdnObjectCachesWithOptions(request, runtime);
}

RefreshScdnObjectCachesResponse Alibabacloud_Scdn20171115::Client::refreshScdnObjectCachesWithOptions(shared_ptr<RefreshScdnObjectCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshScdnObjectCachesResponse(doRPCRequest(make_shared<string>("RefreshScdnObjectCaches"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshScdnObjectCachesResponse Alibabacloud_Scdn20171115::Client::refreshScdnObjectCaches(shared_ptr<RefreshScdnObjectCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshScdnObjectCachesWithOptions(request, runtime);
}

SetScdnBotInfoResponse Alibabacloud_Scdn20171115::Client::setScdnBotInfoWithOptions(shared_ptr<SetScdnBotInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetScdnBotInfoResponse(doRPCRequest(make_shared<string>("SetScdnBotInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetScdnBotInfoResponse Alibabacloud_Scdn20171115::Client::setScdnBotInfo(shared_ptr<SetScdnBotInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setScdnBotInfoWithOptions(request, runtime);
}

SetScdnCcInfoResponse Alibabacloud_Scdn20171115::Client::setScdnCcInfoWithOptions(shared_ptr<SetScdnCcInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetScdnCcInfoResponse(doRPCRequest(make_shared<string>("SetScdnCcInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetScdnCcInfoResponse Alibabacloud_Scdn20171115::Client::setScdnCcInfo(shared_ptr<SetScdnCcInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setScdnCcInfoWithOptions(request, runtime);
}

SetScdnDDoSInfoResponse Alibabacloud_Scdn20171115::Client::setScdnDDoSInfoWithOptions(shared_ptr<SetScdnDDoSInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetScdnDDoSInfoResponse(doRPCRequest(make_shared<string>("SetScdnDDoSInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetScdnDDoSInfoResponse Alibabacloud_Scdn20171115::Client::setScdnDDoSInfo(shared_ptr<SetScdnDDoSInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setScdnDDoSInfoWithOptions(request, runtime);
}

SetScdnDomainBizInfoResponse Alibabacloud_Scdn20171115::Client::setScdnDomainBizInfoWithOptions(shared_ptr<SetScdnDomainBizInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return SetScdnDomainBizInfoResponse(doRPCRequest(make_shared<string>("SetScdnDomainBizInfo"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetScdnDomainBizInfoResponse Alibabacloud_Scdn20171115::Client::setScdnDomainBizInfo(shared_ptr<SetScdnDomainBizInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setScdnDomainBizInfoWithOptions(request, runtime);
}

SetScdnDomainCertificateResponse Alibabacloud_Scdn20171115::Client::setScdnDomainCertificateWithOptions(shared_ptr<SetScdnDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetScdnDomainCertificateResponse(doRPCRequest(make_shared<string>("SetScdnDomainCertificate"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetScdnDomainCertificateResponse Alibabacloud_Scdn20171115::Client::setScdnDomainCertificate(shared_ptr<SetScdnDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setScdnDomainCertificateWithOptions(request, runtime);
}

StartScdnDomainResponse Alibabacloud_Scdn20171115::Client::startScdnDomainWithOptions(shared_ptr<StartScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartScdnDomainResponse(doRPCRequest(make_shared<string>("StartScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartScdnDomainResponse Alibabacloud_Scdn20171115::Client::startScdnDomain(shared_ptr<StartScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startScdnDomainWithOptions(request, runtime);
}

StopScdnDomainResponse Alibabacloud_Scdn20171115::Client::stopScdnDomainWithOptions(shared_ptr<StopScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopScdnDomainResponse(doRPCRequest(make_shared<string>("StopScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopScdnDomainResponse Alibabacloud_Scdn20171115::Client::stopScdnDomain(shared_ptr<StopScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopScdnDomainWithOptions(request, runtime);
}

UpdateScdnDomainResponse Alibabacloud_Scdn20171115::Client::updateScdnDomainWithOptions(shared_ptr<UpdateScdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateScdnDomainResponse(doRPCRequest(make_shared<string>("UpdateScdnDomain"), make_shared<string>("2017-11-15"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateScdnDomainResponse Alibabacloud_Scdn20171115::Client::updateScdnDomain(shared_ptr<UpdateScdnDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScdnDomainWithOptions(request, runtime);
}

