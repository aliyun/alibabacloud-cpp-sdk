// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/antiddos_public_20170518.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Antiddos-public20170518;

Alibabacloud_Antiddos-public20170518::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "antiddos.aliyuncs.com"},
    {"cn-beijing", "antiddos.aliyuncs.com"},
    {"cn-zhangjiakou", "antiddos-openapi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-huhehaote", "antiddos-openapi.cn-huhehaote.aliyuncs.com"},
    {"cn-wulanchabu", "antiddos-openapi.cn-wulanchabu.aliyuncs.com"},
    {"cn-hangzhou", "antiddos.aliyuncs.com"},
    {"cn-shanghai", "antiddos.aliyuncs.com"},
    {"cn-nanjing", "antiddos-openapi.cn-hangzhou-cloudstone.aliyuncs.com"},
    {"cn-shenzhen", "antiddos.aliyuncs.com"},
    {"cn-heyuan", "antiddos-openapi.cn-heyuan.aliyuncs.com"},
    {"cn-guangzhou", "antiddos-openapi.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu", "antiddos-openapi.cn-chengdu.aliyuncs.com"},
    {"cn-hongkong", "antiddos.aliyuncs.com"},
    {"ap-northeast-1", "antiddos-openapi.ap-northeast-1.aliyuncs.com"},
    {"ap-northeast-2", "antiddos-openapi.ap-northeast-2.aliyuncs.com"},
    {"ap-southeast-1", "antiddos.aliyuncs.com"},
    {"ap-southeast-2", "antiddos-openapi.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3", "antiddos-openapi.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5", "antiddos-openapi.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-6", "antiddos-openapi.ap-southeast-6.aliyuncs.com"},
    {"us-east-1", "antiddos.aliyuncs.com"},
    {"us-west-1", "antiddos.aliyuncs.com"},
    {"eu-west-1", "antiddos-openapi.eu-west-1.aliyuncs.com"},
    {"eu-central-1", "antiddos-openapi.eu-central-1.aliyuncs.com"},
    {"ap-south-1", "antiddos-openapi.ap-south-1.aliyuncs.com"},
    {"me-east-1", "antiddos-openapi.me-east-1.aliyuncs.com"},
    {"cn-shanghai-finance-1", "antiddos.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "antiddos.aliyuncs.com"},
    {"cn-north-2-gov-1", "antiddos.aliyuncs.com"},
    {"ap-northeast-2-pop", "antiddos.aliyuncs.com"},
    {"cn-beijing-finance-1", "antiddos.aliyuncs.com"},
    {"cn-beijing-finance-pop", "antiddos.aliyuncs.com"},
    {"cn-beijing-gov-1", "antiddos.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "antiddos.aliyuncs.com"},
    {"cn-edge-1", "antiddos.aliyuncs.com"},
    {"cn-fujian", "antiddos.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-finance", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "antiddos.aliyuncs.com"},
    {"cn-hangzhou-test-306", "antiddos.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "antiddos.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "antiddos.aliyuncs.com"},
    {"cn-qingdao-nebula", "antiddos.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "antiddos.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "antiddos.aliyuncs.com"},
    {"cn-shanghai-inner", "antiddos.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "antiddos.aliyuncs.com"},
    {"cn-shenzhen-inner", "antiddos.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "antiddos.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "antiddos.aliyuncs.com"},
    {"cn-wuhan", "antiddos.aliyuncs.com"},
    {"cn-yushanfang", "antiddos.aliyuncs.com"},
    {"cn-zhangbei", "antiddos.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "antiddos.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "antiddos-openapi.cn-zhangjiakou.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "antiddos.aliyuncs.com"},
    {"eu-west-1-oxs", "antiddos.aliyuncs.com"},
    {"rus-west-1-pop", "antiddos.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("antiddos-public"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Antiddos-public20170518::Client::getEndpoint(shared_ptr<string> productId,
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

DescribeBgpPackByIpResponse Alibabacloud_Antiddos-public20170518::Client::describeBgpPackByIpWithOptions(shared_ptr<DescribeBgpPackByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBgpPackByIp"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeBgpPackByIpResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeBgpPackByIpResponse(execute(params, req, runtime));
  }
}

DescribeBgpPackByIpResponse Alibabacloud_Antiddos-public20170518::Client::describeBgpPackByIp(shared_ptr<DescribeBgpPackByIpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBgpPackByIpWithOptions(request, runtime);
}

DescribeCapResponse Alibabacloud_Antiddos-public20170518::Client::describeCapWithOptions(shared_ptr<DescribeCapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->begTime)) {
    query->insert(pair<string, long>("BegTime", *request->begTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCap"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCapResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCapResponse(execute(params, req, runtime));
  }
}

DescribeCapResponse Alibabacloud_Antiddos-public20170518::Client::describeCap(shared_ptr<DescribeCapRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCapWithOptions(request, runtime);
}

DescribeDdosCountResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCountWithOptions(shared_ptr<DescribeDdosCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDdosCount"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDdosCountResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDdosCountResponse(execute(params, req, runtime));
  }
}

DescribeDdosCountResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCount(shared_ptr<DescribeDdosCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosCountWithOptions(request, runtime);
}

DescribeDdosCreditResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCreditWithOptions(shared_ptr<DescribeDdosCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDdosCredit"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDdosCreditResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDdosCreditResponse(execute(params, req, runtime));
  }
}

DescribeDdosCreditResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosCredit(shared_ptr<DescribeDdosCreditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosCreditWithOptions(request, runtime);
}

DescribeDdosEventListResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosEventListWithOptions(shared_ptr<DescribeDdosEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDdosEventList"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDdosEventListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDdosEventListResponse(execute(params, req, runtime));
  }
}

DescribeDdosEventListResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosEventList(shared_ptr<DescribeDdosEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosEventListWithOptions(request, runtime);
}

DescribeDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosThresholdWithOptions(shared_ptr<DescribeDdosThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosType)) {
    query->insert(pair<string, string>("DdosType", *request->ddosType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->instanceIds)) {
    query->insert(pair<string, vector<string>>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDdosThreshold"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDdosThresholdResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDdosThresholdResponse(execute(params, req, runtime));
  }
}

DescribeDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeDdosThreshold(shared_ptr<DescribeDdosThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDdosThresholdWithOptions(request, runtime);
}

DescribeInstanceResponse Alibabacloud_Antiddos-public20170518::Client::describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosStatus)) {
    query->insert(pair<string, string>("DdosStatus", *request->ddosStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIp)) {
    query->insert(pair<string, string>("InstanceIp", *request->instanceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstance"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceResponse(execute(params, req, runtime));
  }
}

DescribeInstanceResponse Alibabacloud_Antiddos-public20170518::Client::describeInstance(shared_ptr<DescribeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceWithOptions(request, runtime);
}

DescribeInstanceIpAddressResponse Alibabacloud_Antiddos-public20170518::Client::describeInstanceIpAddressWithOptions(shared_ptr<DescribeInstanceIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosStatus)) {
    query->insert(pair<string, string>("DdosStatus", *request->ddosStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIp)) {
    query->insert(pair<string, string>("InstanceIp", *request->instanceIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInstanceIpAddress"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeInstanceIpAddressResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeInstanceIpAddressResponse(execute(params, req, runtime));
  }
}

DescribeInstanceIpAddressResponse Alibabacloud_Antiddos-public20170518::Client::describeInstanceIpAddress(shared_ptr<DescribeInstanceIpAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInstanceIpAddressWithOptions(request, runtime);
}

DescribeIpDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeIpDdosThresholdWithOptions(shared_ptr<DescribeIpDdosThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosType)) {
    query->insert(pair<string, string>("DdosType", *request->ddosType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpDdosThreshold"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeIpDdosThresholdResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeIpDdosThresholdResponse(execute(params, req, runtime));
  }
}

DescribeIpDdosThresholdResponse Alibabacloud_Antiddos-public20170518::Client::describeIpDdosThreshold(shared_ptr<DescribeIpDdosThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpDdosThresholdWithOptions(request, runtime);
}

DescribeIpLocationServiceResponse Alibabacloud_Antiddos-public20170518::Client::describeIpLocationServiceWithOptions(shared_ptr<DescribeIpLocationServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIpLocationService"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeIpLocationServiceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeIpLocationServiceResponse(execute(params, req, runtime));
  }
}

DescribeIpLocationServiceResponse Alibabacloud_Antiddos-public20170518::Client::describeIpLocationService(shared_ptr<DescribeIpLocationServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIpLocationServiceWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Antiddos-public20170518::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRegionsResponse(execute(params, req, runtime));
  }
}

DescribeRegionsResponse Alibabacloud_Antiddos-public20170518::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

ModifyDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyDefenseThresholdWithOptions(shared_ptr<ModifyDefenseThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bps)) {
    query->insert(pair<string, long>("Bps", *request->bps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAuto)) {
    query->insert(pair<string, bool>("IsAuto", *request->isAuto));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pps)) {
    query->insert(pair<string, long>("Pps", *request->pps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDefenseThreshold"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyDefenseThresholdResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyDefenseThresholdResponse(execute(params, req, runtime));
  }
}

ModifyDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyDefenseThreshold(shared_ptr<ModifyDefenseThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDefenseThresholdWithOptions(request, runtime);
}

ModifyIpDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyIpDefenseThresholdWithOptions(shared_ptr<ModifyIpDefenseThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->bps)) {
    query->insert(pair<string, long>("Bps", *request->bps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ddosRegionId)) {
    query->insert(pair<string, string>("DdosRegionId", *request->ddosRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->internetIp)) {
    query->insert(pair<string, string>("InternetIp", *request->internetIp));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isAuto)) {
    query->insert(pair<string, bool>("IsAuto", *request->isAuto));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pps)) {
    query->insert(pair<string, long>("Pps", *request->pps));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyIpDefenseThreshold"))},
    {"version", boost::any(string("2017-05-18"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ModifyIpDefenseThresholdResponse(callApi(params, req, runtime));
  }
  else {
    return ModifyIpDefenseThresholdResponse(execute(params, req, runtime));
  }
}

ModifyIpDefenseThresholdResponse Alibabacloud_Antiddos-public20170518::Client::modifyIpDefenseThreshold(shared_ptr<ModifyIpDefenseThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyIpDefenseThresholdWithOptions(request, runtime);
}

