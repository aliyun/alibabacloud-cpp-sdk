// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eais_20190624.hpp>
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

using namespace Alibabacloud_Eais20190624;

Alibabacloud_Eais20190624::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "eais.aliyuncs.com"},
    {"ap-northeast-2-pop", "eais.aliyuncs.com"},
    {"ap-south-1", "eais.aliyuncs.com"},
    {"ap-southeast-1", "eais.aliyuncs.com"},
    {"ap-southeast-2", "eais.aliyuncs.com"},
    {"ap-southeast-3", "eais.aliyuncs.com"},
    {"ap-southeast-5", "eais.aliyuncs.com"},
    {"cn-beijing-finance-1", "eais.aliyuncs.com"},
    {"cn-beijing-finance-pop", "eais.aliyuncs.com"},
    {"cn-beijing-gov-1", "eais.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "eais.aliyuncs.com"},
    {"cn-edge-1", "eais.aliyuncs.com"},
    {"cn-fujian", "eais.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "eais.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "eais.aliyuncs.com"},
    {"cn-hangzhou-finance", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "eais.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "eais.aliyuncs.com"},
    {"cn-hangzhou-test-306", "eais.aliyuncs.com"},
    {"cn-hongkong", "eais.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "eais.aliyuncs.com"},
    {"cn-huhehaote", "eais.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "eais.aliyuncs.com"},
    {"cn-north-2-gov-1", "eais.aliyuncs.com"},
    {"cn-qingdao", "eais.aliyuncs.com"},
    {"cn-qingdao-nebula", "eais.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "eais.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "eais.aliyuncs.com"},
    {"cn-shanghai-finance-1", "eais.aliyuncs.com"},
    {"cn-shanghai-inner", "eais.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "eais.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "eais.aliyuncs.com"},
    {"cn-shenzhen-inner", "eais.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "eais.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "eais.aliyuncs.com"},
    {"cn-wuhan", "eais.aliyuncs.com"},
    {"cn-wulanchabu", "eais.aliyuncs.com"},
    {"cn-yushanfang", "eais.aliyuncs.com"},
    {"cn-zhangbei", "eais.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "eais.aliyuncs.com"},
    {"cn-zhangjiakou", "eais.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "eais.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "eais.aliyuncs.com"},
    {"eu-central-1", "eais.aliyuncs.com"},
    {"eu-west-1", "eais.aliyuncs.com"},
    {"eu-west-1-oxs", "eais.aliyuncs.com"},
    {"me-east-1", "eais.aliyuncs.com"},
    {"rus-west-1-pop", "eais.aliyuncs.com"},
    {"us-east-1", "eais.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eais"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eais20190624::Client::getEndpoint(shared_ptr<string> productId,
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

AttachEaiResponse Alibabacloud_Eais20190624::Client::attachEaiWithOptions(shared_ptr<AttachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInstanceId)) {
    query->insert(pair<string, string>("ClientInstanceId", *request->clientInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticAcceleratedInstanceId)) {
    query->insert(pair<string, string>("ElasticAcceleratedInstanceId", *request->elasticAcceleratedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachEai"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachEaiResponse(callApi(params, req, runtime));
}

AttachEaiResponse Alibabacloud_Eais20190624::Client::attachEai(shared_ptr<AttachEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachEaiWithOptions(request, runtime);
}

CreateEaiResponse Alibabacloud_Eais20190624::Client::createEaiWithOptions(shared_ptr<CreateEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEai"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEaiResponse(callApi(params, req, runtime));
}

CreateEaiResponse Alibabacloud_Eais20190624::Client::createEai(shared_ptr<CreateEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEaiWithOptions(request, runtime);
}

CreateEaiAllResponse Alibabacloud_Eais20190624::Client::createEaiAllWithOptions(shared_ptr<CreateEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientImageId)) {
    query->insert(pair<string, string>("ClientImageId", *request->clientImageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInstanceName)) {
    query->insert(pair<string, string>("ClientInstanceName", *request->clientInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInstanceType)) {
    query->insert(pair<string, string>("ClientInstanceType", *request->clientInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientInternetMaxBandwidthIn)) {
    query->insert(pair<string, long>("ClientInternetMaxBandwidthIn", *request->clientInternetMaxBandwidthIn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientInternetMaxBandwidthOut)) {
    query->insert(pair<string, long>("ClientInternetMaxBandwidthOut", *request->clientInternetMaxBandwidthOut));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientPassword)) {
    query->insert(pair<string, string>("ClientPassword", *request->clientPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSecurityGroupId)) {
    query->insert(pair<string, string>("ClientSecurityGroupId", *request->clientSecurityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientSystemDiskCategory)) {
    query->insert(pair<string, string>("ClientSystemDiskCategory", *request->clientSystemDiskCategory));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->clientSystemDiskSize)) {
    query->insert(pair<string, long>("ClientSystemDiskSize", *request->clientSystemDiskSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientVSwitchId)) {
    query->insert(pair<string, string>("ClientVSwitchId", *request->clientVSwitchId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientZoneId)) {
    query->insert(pair<string, string>("ClientZoneId", *request->clientZoneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eaiInstanceType)) {
    query->insert(pair<string, string>("EaiInstanceType", *request->eaiInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEaiAll"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEaiAllResponse(callApi(params, req, runtime));
}

CreateEaiAllResponse Alibabacloud_Eais20190624::Client::createEaiAll(shared_ptr<CreateEaiAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEaiAllWithOptions(request, runtime);
}

CreateEaiJupyterResponse Alibabacloud_Eais20190624::Client::createEaiJupyterWithOptions(shared_ptr<CreateEaiJupyterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEaiJupyterShrinkRequest> request = make_shared<CreateEaiJupyterShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEaiJupyterRequestEnvironmentVar>>(tmpReq->environmentVar)) {
    request->environmentVarShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->environmentVar, make_shared<string>("EnvironmentVar"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eaisType)) {
    query->insert(pair<string, string>("EaisType", *request->eaisType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->environmentVarShrink)) {
    query->insert(pair<string, string>("EnvironmentVar", *request->environmentVarShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    query->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vSwitchId)) {
    query->insert(pair<string, string>("VSwitchId", *request->vSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEaiJupyter"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEaiJupyterResponse(callApi(params, req, runtime));
}

CreateEaiJupyterResponse Alibabacloud_Eais20190624::Client::createEaiJupyter(shared_ptr<CreateEaiJupyterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEaiJupyterWithOptions(request, runtime);
}

DeleteEaiResponse Alibabacloud_Eais20190624::Client::deleteEaiWithOptions(shared_ptr<DeleteEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticAcceleratedInstanceId)) {
    query->insert(pair<string, string>("ElasticAcceleratedInstanceId", *request->elasticAcceleratedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEai"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEaiResponse(callApi(params, req, runtime));
}

DeleteEaiResponse Alibabacloud_Eais20190624::Client::deleteEai(shared_ptr<DeleteEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEaiWithOptions(request, runtime);
}

DeleteEaiAllResponse Alibabacloud_Eais20190624::Client::deleteEaiAllWithOptions(shared_ptr<DeleteEaiAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientInstanceId)) {
    query->insert(pair<string, string>("ClientInstanceId", *request->clientInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticAcceleratedInstanceId)) {
    query->insert(pair<string, string>("ElasticAcceleratedInstanceId", *request->elasticAcceleratedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEaiAll"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEaiAllResponse(callApi(params, req, runtime));
}

DeleteEaiAllResponse Alibabacloud_Eais20190624::Client::deleteEaiAll(shared_ptr<DeleteEaiAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEaiAllWithOptions(request, runtime);
}

DescribeEaisResponse Alibabacloud_Eais20190624::Client::describeEaisWithOptions(shared_ptr<DescribeEaisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticAcceleratedInstanceIds)) {
    query->insert(pair<string, string>("ElasticAcceleratedInstanceIds", *request->elasticAcceleratedInstanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEais"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEaisResponse(callApi(params, req, runtime));
}

DescribeEaisResponse Alibabacloud_Eais20190624::Client::describeEais(shared_ptr<DescribeEaisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEaisWithOptions(request, runtime);
}

DescribeRegionsResponse Alibabacloud_Eais20190624::Client::describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRegions"))},
    {"version", boost::any(string("2019-06-24"))},
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

DescribeRegionsResponse Alibabacloud_Eais20190624::Client::describeRegions() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRegionsWithOptions(runtime);
}

DetachEaiResponse Alibabacloud_Eais20190624::Client::detachEaiWithOptions(shared_ptr<DetachEaiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->elasticAcceleratedInstanceId)) {
    query->insert(pair<string, string>("ElasticAcceleratedInstanceId", *request->elasticAcceleratedInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachEai"))},
    {"version", boost::any(string("2019-06-24"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachEaiResponse(callApi(params, req, runtime));
}

DetachEaiResponse Alibabacloud_Eais20190624::Client::detachEai(shared_ptr<DetachEaiRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachEaiWithOptions(request, runtime);
}

