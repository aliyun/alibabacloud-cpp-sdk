// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/iot_20180120.hpp>
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

using namespace Alibabacloud_Iot20180120;

Alibabacloud_Iot20180120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-2-pop", "iot.aliyuncs.com"},
    {"ap-south-1", "iot.aliyuncs.com"},
    {"ap-southeast-2", "iot.aliyuncs.com"},
    {"ap-southeast-3", "iot.aliyuncs.com"},
    {"ap-southeast-5", "iot.aliyuncs.com"},
    {"cn-beijing-finance-1", "iot.aliyuncs.com"},
    {"cn-beijing-finance-pop", "iot.aliyuncs.com"},
    {"cn-beijing-gov-1", "iot.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "iot.aliyuncs.com"},
    {"cn-chengdu", "iot.aliyuncs.com"},
    {"cn-edge-1", "iot.aliyuncs.com"},
    {"cn-fujian", "iot.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "iot.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "iot.aliyuncs.com"},
    {"cn-hangzhou-finance", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "iot.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "iot.aliyuncs.com"},
    {"cn-hangzhou-test-306", "iot.aliyuncs.com"},
    {"cn-hongkong", "iot.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "iot.aliyuncs.com"},
    {"cn-huhehaote", "iot.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "iot.aliyuncs.com"},
    {"cn-qingdao", "iot.aliyuncs.com"},
    {"cn-qingdao-nebula", "iot.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "iot.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "iot.aliyuncs.com"},
    {"cn-shanghai-finance-1", "iot.aliyuncs.com"},
    {"cn-shanghai-inner", "iot.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "iot.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "iot.aliyuncs.com"},
    {"cn-shenzhen-inner", "iot.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "iot.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "iot.aliyuncs.com"},
    {"cn-wuhan", "iot.aliyuncs.com"},
    {"cn-wulanchabu", "iot.aliyuncs.com"},
    {"cn-yushanfang", "iot.aliyuncs.com"},
    {"cn-zhangbei", "iot.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "iot.aliyuncs.com"},
    {"cn-zhangjiakou", "iot.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "iot.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "iot.aliyuncs.com"},
    {"eu-west-1", "iot.aliyuncs.com"},
    {"eu-west-1-oxs", "iot.aliyuncs.com"},
    {"me-east-1", "iot.aliyuncs.com"},
    {"rus-west-1-pop", "iot.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("iot"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Iot20180120::Client::getEndpoint(shared_ptr<string> productId,
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

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelationsWithOptions(shared_ptr<BatchAddDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchAddDeviceGroupRelationsResponse(doRPCRequest(make_shared<string>("BatchAddDeviceGroupRelations"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelations(shared_ptr<BatchAddDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDeviceGroupRelationsWithOptions(request, runtime);
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopoWithOptions(shared_ptr<BatchAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchAddThingTopoResponse(doRPCRequest(make_shared<string>("BatchAddThingTopo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopo(shared_ptr<BatchAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddThingTopoWithOptions(request, runtime);
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProjectWithOptions(shared_ptr<BatchBindDevicesIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindDevicesIntoProjectResponse(doRPCRequest(make_shared<string>("BatchBindDevicesIntoProject"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProject(shared_ptr<BatchBindDevicesIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDevicesIntoProjectWithOptions(request, runtime);
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriverWithOptions(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindDeviceToEdgeInstanceWithDriverResponse(doRPCRequest(make_shared<string>("BatchBindDeviceToEdgeInstanceWithDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriver(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDeviceToEdgeInstanceWithDriverWithOptions(request, runtime);
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProjectWithOptions(shared_ptr<BatchBindProductsIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchBindProductsIntoProjectResponse(doRPCRequest(make_shared<string>("BatchBindProductsIntoProject"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProject(shared_ptr<BatchBindProductsIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindProductsIntoProjectWithOptions(request, runtime);
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNamesWithOptions(shared_ptr<BatchCheckDeviceNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchCheckDeviceNamesResponse(doRPCRequest(make_shared<string>("BatchCheckDeviceNames"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNames(shared_ptr<BatchCheckDeviceNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCheckDeviceNamesWithOptions(request, runtime);
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchClearEdgeInstanceDeviceConfigResponse(doRPCRequest(make_shared<string>("BatchClearEdgeInstanceDeviceConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfig(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchClearEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelationsWithOptions(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteDeviceGroupRelationsResponse(doRPCRequest(make_shared<string>("BatchDeleteDeviceGroupRelations"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelations(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDeviceGroupRelationsWithOptions(request, runtime);
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannelWithOptions(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchDeleteEdgeInstanceChannelResponse(doRPCRequest(make_shared<string>("BatchDeleteEdgeInstanceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannel(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteEdgeInstanceChannelWithOptions(request, runtime);
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatusWithOptions(shared_ptr<BatchGetDeviceBindStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetDeviceBindStatusResponse(doRPCRequest(make_shared<string>("BatchGetDeviceBindStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatus(shared_ptr<BatchGetDeviceBindStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceBindStatusWithOptions(request, runtime);
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceStateWithOptions(shared_ptr<BatchGetDeviceStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetDeviceStateResponse(doRPCRequest(make_shared<string>("BatchGetDeviceState"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceState(shared_ptr<BatchGetDeviceStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceStateWithOptions(request, runtime);
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriverWithOptions(shared_ptr<BatchGetEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeDriverResponse(doRPCRequest(make_shared<string>("BatchGetEdgeDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriver(shared_ptr<BatchGetEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeInstanceChannelResponse(doRPCRequest(make_shared<string>("BatchGetEdgeInstanceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannel(shared_ptr<BatchGetEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceChannelWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeInstanceDeviceChannelResponse(doRPCRequest(make_shared<string>("BatchGetEdgeInstanceDeviceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannel(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeInstanceDeviceConfigResponse(doRPCRequest(make_shared<string>("BatchGetEdgeInstanceDeviceConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfig(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriverWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeInstanceDeviceDriverResponse(doRPCRequest(make_shared<string>("BatchGetEdgeInstanceDeviceDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriver(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigsWithOptions(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchGetEdgeInstanceDriverConfigsResponse(doRPCRequest(make_shared<string>("BatchGetEdgeInstanceDriverConfigs"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigs(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPubWithOptions(shared_ptr<BatchPubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchPubResponse(doRPCRequest(make_shared<string>("BatchPub"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPub(shared_ptr<BatchPubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchPubWithOptions(request, runtime);
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetailWithOptions(shared_ptr<BatchQueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchQueryDeviceDetailResponse(doRPCRequest(make_shared<string>("BatchQueryDeviceDetail"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetail(shared_ptr<BatchQueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchQueryDeviceDetailWithOptions(request, runtime);
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithOptions(shared_ptr<BatchRegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchRegisterDeviceResponse(doRPCRequest(make_shared<string>("BatchRegisterDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDevice(shared_ptr<BatchRegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithOptions(request, runtime);
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyIdWithOptions(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchRegisterDeviceWithApplyIdResponse(doRPCRequest(make_shared<string>("BatchRegisterDeviceWithApplyId"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyId(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithApplyIdWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetEdgeInstanceDeviceChannelResponse(doRPCRequest(make_shared<string>("BatchSetEdgeInstanceDeviceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannel(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchSetEdgeInstanceDeviceConfigResponse(doRPCRequest(make_shared<string>("BatchSetEdgeInstanceDeviceConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfig(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstanceWithOptions(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindDeviceFromEdgeInstanceResponse(doRPCRequest(make_shared<string>("BatchUnbindDeviceFromEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstance(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindDeviceFromEdgeInstanceWithOptions(request, runtime);
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevicesWithOptions(shared_ptr<BatchUnbindProjectDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindProjectDevicesResponse(doRPCRequest(make_shared<string>("BatchUnbindProjectDevices"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevices(shared_ptr<BatchUnbindProjectDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectDevicesWithOptions(request, runtime);
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProductsWithOptions(shared_ptr<BatchUnbindProjectProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUnbindProjectProductsResponse(doRPCRequest(make_shared<string>("BatchUnbindProjectProducts"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProducts(shared_ptr<BatchUnbindProjectProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectProductsWithOptions(request, runtime);
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNicknameWithOptions(shared_ptr<BatchUpdateDeviceNicknameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BatchUpdateDeviceNicknameResponse(doRPCRequest(make_shared<string>("BatchUpdateDeviceNickname"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNickname(shared_ptr<BatchUpdateDeviceNicknameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateDeviceNicknameWithOptions(request, runtime);
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstanceWithOptions(shared_ptr<BindApplicationToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindApplicationToEdgeInstanceResponse(doRPCRequest(make_shared<string>("BindApplicationToEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstance(shared_ptr<BindApplicationToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindApplicationToEdgeInstanceWithOptions(request, runtime);
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstanceWithOptions(shared_ptr<BindDriverToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindDriverToEdgeInstanceResponse(doRPCRequest(make_shared<string>("BindDriverToEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstance(shared_ptr<BindDriverToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDriverToEdgeInstanceWithOptions(request, runtime);
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstanceWithOptions(shared_ptr<BindGatewayToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindGatewayToEdgeInstanceResponse(doRPCRequest(make_shared<string>("BindGatewayToEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstance(shared_ptr<BindGatewayToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindGatewayToEdgeInstanceWithOptions(request, runtime);
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstanceWithOptions(shared_ptr<BindRoleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindRoleToEdgeInstanceResponse(doRPCRequest(make_shared<string>("BindRoleToEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstance(shared_ptr<BindRoleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindRoleToEdgeInstanceWithOptions(request, runtime);
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstanceWithOptions(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return BindSceneRuleToEdgeInstanceResponse(doRPCRequest(make_shared<string>("BindSceneRuleToEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstance(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSceneRuleToEdgeInstanceWithOptions(request, runtime);
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJobWithOptions(shared_ptr<CancelJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelJobResponse(doRPCRequest(make_shared<string>("CancelJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJob(shared_ptr<CancelJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobWithOptions(request, runtime);
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJobWithOptions(shared_ptr<CancelOTAStrategyByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOTAStrategyByJobResponse(doRPCRequest(make_shared<string>("CancelOTAStrategyByJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJob(shared_ptr<CancelOTAStrategyByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTAStrategyByJobWithOptions(request, runtime);
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDeviceWithOptions(shared_ptr<CancelOTATaskByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOTATaskByDeviceResponse(doRPCRequest(make_shared<string>("CancelOTATaskByDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDevice(shared_ptr<CancelOTATaskByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByDeviceWithOptions(request, runtime);
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJobWithOptions(shared_ptr<CancelOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CancelOTATaskByJobResponse(doRPCRequest(make_shared<string>("CancelOTATaskByJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJob(shared_ptr<CancelOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByJobWithOptions(request, runtime);
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigsWithOptions(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClearEdgeInstanceDriverConfigsResponse(doRPCRequest(make_shared<string>("ClearEdgeInstanceDriverConfigs"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigs(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeploymentWithOptions(shared_ptr<CloseEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CloseEdgeInstanceDeploymentResponse(doRPCRequest(make_shared<string>("CloseEdgeInstanceDeployment"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeployment(shared_ptr<CloseEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeEdgeInstanceDeploymentWithOptions(request, runtime);
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModelWithOptions(shared_ptr<CopyThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CopyThingModelResponse(doRPCRequest(make_shared<string>("CopyThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModel(shared_ptr<CopyThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyThingModelWithOptions(request, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConsumerGroupResponse(doRPCRequest(make_shared<string>("CreateConsumerGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupWithOptions(request, runtime);
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelationWithOptions(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateConsumerGroupSubscribeRelationResponse(doRPCRequest(make_shared<string>("CreateConsumerGroupSubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelation(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIServiceWithOptions(shared_ptr<CreateDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDataAPIServiceResponse(doRPCRequest(make_shared<string>("CreateDataAPIService"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIService(shared_ptr<CreateDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataAPIServiceWithOptions(request, runtime);
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJobWithOptions(shared_ptr<CreateDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceDistributeJobResponse(doRPCRequest(make_shared<string>("CreateDeviceDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJob(shared_ptr<CreateDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceDistributeJobWithOptions(request, runtime);
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroupWithOptions(shared_ptr<CreateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateDeviceGroupResponse(doRPCRequest(make_shared<string>("CreateDeviceGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroup(shared_ptr<CreateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceGroupWithOptions(request, runtime);
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriverWithOptions(shared_ptr<CreateEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeDriverResponse(doRPCRequest(make_shared<string>("CreateEdgeDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriver(shared_ptr<CreateEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverWithOptions(request, runtime);
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersionWithOptions(shared_ptr<CreateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("CreateEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersion(shared_ptr<CreateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverVersionWithOptions(request, runtime);
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceWithOptions(shared_ptr<CreateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeInstanceResponse(doRPCRequest(make_shared<string>("CreateEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstance(shared_ptr<CreateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceWithOptions(request, runtime);
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannelWithOptions(shared_ptr<CreateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeInstanceChannelResponse(doRPCRequest(make_shared<string>("CreateEdgeInstanceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannel(shared_ptr<CreateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceChannelWithOptions(request, runtime);
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeploymentWithOptions(shared_ptr<CreateEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeInstanceDeploymentResponse(doRPCRequest(make_shared<string>("CreateEdgeInstanceDeployment"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeployment(shared_ptr<CreateEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceDeploymentWithOptions(request, runtime);
}

CreateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceMessageRoutingWithOptions(shared_ptr<CreateEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeInstanceMessageRoutingResponse(doRPCRequest(make_shared<string>("CreateEdgeInstanceMessageRouting"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceMessageRouting(shared_ptr<CreateEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddressWithOptions(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateEdgeOssPreSignedAddressResponse(doRPCRequest(make_shared<string>("CreateEdgeOssPreSignedAddress"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddress(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeOssPreSignedAddressWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJobWithOptions(shared_ptr<CreateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateJobResponse(doRPCRequest(make_shared<string>("CreateJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTaskWithOptions(shared_ptr<CreateLoRaNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateLoRaNodesTaskResponse(doRPCRequest(make_shared<string>("CreateLoRaNodesTask"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTask(shared_ptr<CreateLoRaNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoRaNodesTaskWithOptions(request, runtime);
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJobWithOptions(shared_ptr<CreateOTADynamicUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOTADynamicUpgradeJobResponse(doRPCRequest(make_shared<string>("CreateOTADynamicUpgradeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJob(shared_ptr<CreateOTADynamicUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTADynamicUpgradeJobWithOptions(request, runtime);
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmwareWithOptions(shared_ptr<CreateOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOTAFirmwareResponse(doRPCRequest(make_shared<string>("CreateOTAFirmware"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmware(shared_ptr<CreateOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAFirmwareWithOptions(request, runtime);
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModuleWithOptions(shared_ptr<CreateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOTAModuleResponse(doRPCRequest(make_shared<string>("CreateOTAModule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModule(shared_ptr<CreateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAModuleWithOptions(request, runtime);
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJobWithOptions(shared_ptr<CreateOTAStaticUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOTAStaticUpgradeJobResponse(doRPCRequest(make_shared<string>("CreateOTAStaticUpgradeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJob(shared_ptr<CreateOTAStaticUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAStaticUpgradeJobWithOptions(request, runtime);
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJobWithOptions(shared_ptr<CreateOTAVerifyJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateOTAVerifyJobResponse(doRPCRequest(make_shared<string>("CreateOTAVerifyJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJob(shared_ptr<CreateOTAVerifyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAVerifyJobWithOptions(request, runtime);
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProductResponse(doRPCRequest(make_shared<string>("CreateProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductWithOptions(request, runtime);
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJobWithOptions(shared_ptr<CreateProductDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProductDistributeJobResponse(doRPCRequest(make_shared<string>("CreateProductDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJob(shared_ptr<CreateProductDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductDistributeJobWithOptions(request, runtime);
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTagsWithOptions(shared_ptr<CreateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProductTagsResponse(doRPCRequest(make_shared<string>("CreateProductTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTags(shared_ptr<CreateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTagsWithOptions(request, runtime);
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopicWithOptions(shared_ptr<CreateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateProductTopicResponse(doRPCRequest(make_shared<string>("CreateProductTopic"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopic(shared_ptr<CreateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTopicWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleResponse(doRPCRequest(make_shared<string>("CreateRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleActionWithOptions(shared_ptr<CreateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRuleActionResponse(doRPCRequest(make_shared<string>("CreateRuleAction"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleAction(shared_ptr<CreateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleActionWithOptions(request, runtime);
}

CreateRulengDistributeJobResponse Alibabacloud_Iot20180120::Client::createRulengDistributeJobWithOptions(shared_ptr<CreateRulengDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRulengDistributeJobResponse(doRPCRequest(make_shared<string>("CreateRulengDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRulengDistributeJobResponse Alibabacloud_Iot20180120::Client::createRulengDistributeJob(shared_ptr<CreateRulengDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRulengDistributeJobWithOptions(request, runtime);
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRuleWithOptions(shared_ptr<CreateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSceneRuleResponse(doRPCRequest(make_shared<string>("CreateSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRule(shared_ptr<CreateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneRuleWithOptions(request, runtime);
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelationWithOptions(shared_ptr<CreateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateSubscribeRelationResponse(doRPCRequest(make_shared<string>("CreateSubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelation(shared_ptr<CreateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscribeRelationWithOptions(request, runtime);
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModelWithOptions(shared_ptr<CreateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateThingModelResponse(doRPCRequest(make_shared<string>("CreateThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModel(shared_ptr<CreateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingModelWithOptions(request, runtime);
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScriptWithOptions(shared_ptr<CreateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateThingScriptResponse(doRPCRequest(make_shared<string>("CreateThingScript"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScript(shared_ptr<CreateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingScriptWithOptions(request, runtime);
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTableWithOptions(shared_ptr<CreateTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateTopicRouteTableResponse(doRPCRequest(make_shared<string>("CreateTopicRouteTable"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTable(shared_ptr<CreateTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicRouteTableWithOptions(request, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConsumerGroupResponse(doRPCRequest(make_shared<string>("DeleteConsumerGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupWithOptions(request, runtime);
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelationWithOptions(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteConsumerGroupSubscribeRelationResponse(doRPCRequest(make_shared<string>("DeleteConsumerGroupSubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelation(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceResponse(doRPCRequest(make_shared<string>("DeleteDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJobWithOptions(shared_ptr<DeleteDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceDistributeJobResponse(doRPCRequest(make_shared<string>("DeleteDeviceDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJob(shared_ptr<DeleteDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceDistributeJobWithOptions(request, runtime);
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFileWithOptions(shared_ptr<DeleteDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceFileResponse(doRPCRequest(make_shared<string>("DeleteDeviceFile"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFile(shared_ptr<DeleteDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceFileWithOptions(request, runtime);
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroupWithOptions(shared_ptr<DeleteDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDeviceGroupResponse(doRPCRequest(make_shared<string>("DeleteDeviceGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroup(shared_ptr<DeleteDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceGroupWithOptions(request, runtime);
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDevicePropWithOptions(shared_ptr<DeleteDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteDevicePropResponse(doRPCRequest(make_shared<string>("DeleteDeviceProp"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDeviceProp(shared_ptr<DeleteDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicePropWithOptions(request, runtime);
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverWithOptions(shared_ptr<DeleteEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEdgeDriverResponse(doRPCRequest(make_shared<string>("DeleteEdgeDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriver(shared_ptr<DeleteEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverWithOptions(request, runtime);
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersionWithOptions(shared_ptr<DeleteEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("DeleteEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersion(shared_ptr<DeleteEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverVersionWithOptions(request, runtime);
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceWithOptions(shared_ptr<DeleteEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEdgeInstanceResponse(doRPCRequest(make_shared<string>("DeleteEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstance(shared_ptr<DeleteEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeInstanceWithOptions(request, runtime);
}

DeleteEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceMessageRoutingWithOptions(shared_ptr<DeleteEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteEdgeInstanceMessageRoutingResponse(doRPCRequest(make_shared<string>("DeleteEdgeInstanceMessageRouting"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceMessageRouting(shared_ptr<DeleteEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteJobResponse(doRPCRequest(make_shared<string>("DeleteJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJob(shared_ptr<DeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobWithOptions(request, runtime);
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmwareWithOptions(shared_ptr<DeleteOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteOTAFirmwareResponse(doRPCRequest(make_shared<string>("DeleteOTAFirmware"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmware(shared_ptr<DeleteOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAFirmwareWithOptions(request, runtime);
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModuleWithOptions(shared_ptr<DeleteOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteOTAModuleResponse(doRPCRequest(make_shared<string>("DeleteOTAModule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModule(shared_ptr<DeleteOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAModuleWithOptions(request, runtime);
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProductResponse(doRPCRequest(make_shared<string>("DeleteProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductWithOptions(request, runtime);
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTagsWithOptions(shared_ptr<DeleteProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProductTagsResponse(doRPCRequest(make_shared<string>("DeleteProductTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTags(shared_ptr<DeleteProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTagsWithOptions(request, runtime);
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopicWithOptions(shared_ptr<DeleteProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteProductTopicResponse(doRPCRequest(make_shared<string>("DeleteProductTopic"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopic(shared_ptr<DeleteProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTopicWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRuleResponse(doRPCRequest(make_shared<string>("DeleteRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleActionWithOptions(shared_ptr<DeleteRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteRuleActionResponse(doRPCRequest(make_shared<string>("DeleteRuleAction"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleAction(shared_ptr<DeleteRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleActionWithOptions(request, runtime);
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRuleWithOptions(shared_ptr<DeleteSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSceneRuleResponse(doRPCRequest(make_shared<string>("DeleteSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRule(shared_ptr<DeleteSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneRuleWithOptions(request, runtime);
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelationWithOptions(shared_ptr<DeleteSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteSubscribeRelationResponse(doRPCRequest(make_shared<string>("DeleteSubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelation(shared_ptr<DeleteSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubscribeRelationWithOptions(request, runtime);
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModelWithOptions(shared_ptr<DeleteThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteThingModelResponse(doRPCRequest(make_shared<string>("DeleteThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModel(shared_ptr<DeleteThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteThingModelWithOptions(request, runtime);
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTableWithOptions(shared_ptr<DeleteTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteTopicRouteTableResponse(doRPCRequest(make_shared<string>("DeleteTopicRouteTable"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTable(shared_ptr<DeleteTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicRouteTableWithOptions(request, runtime);
}

DisableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelWithOptions(shared_ptr<DisableDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDeviceTunnelResponse(doRPCRequest(make_shared<string>("DisableDeviceTunnel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnel(shared_ptr<DisableDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeviceTunnelWithOptions(request, runtime);
}

DisableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelShareWithOptions(shared_ptr<DisableDeviceTunnelShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableDeviceTunnelShareResponse(doRPCRequest(make_shared<string>("DisableDeviceTunnelShare"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelShare(shared_ptr<DisableDeviceTunnelShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeviceTunnelShareWithOptions(request, runtime);
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRuleWithOptions(shared_ptr<DisableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableSceneRuleResponse(doRPCRequest(make_shared<string>("DisableSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRule(shared_ptr<DisableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSceneRuleWithOptions(request, runtime);
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThingWithOptions(shared_ptr<DisableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DisableThingResponse(doRPCRequest(make_shared<string>("DisableThing"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThing(shared_ptr<DisableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableThingWithOptions(request, runtime);
}

EnableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelWithOptions(shared_ptr<EnableDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableDeviceTunnelResponse(doRPCRequest(make_shared<string>("EnableDeviceTunnel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnel(shared_ptr<EnableDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeviceTunnelWithOptions(request, runtime);
}

EnableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelShareWithOptions(shared_ptr<EnableDeviceTunnelShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableDeviceTunnelShareResponse(doRPCRequest(make_shared<string>("EnableDeviceTunnelShare"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelShare(shared_ptr<EnableDeviceTunnelShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeviceTunnelShareWithOptions(request, runtime);
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRuleWithOptions(shared_ptr<EnableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableSceneRuleResponse(doRPCRequest(make_shared<string>("EnableSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRule(shared_ptr<EnableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSceneRuleWithOptions(request, runtime);
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThingWithOptions(shared_ptr<EnableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EnableThingResponse(doRPCRequest(make_shared<string>("EnableThing"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThing(shared_ptr<EnableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableThingWithOptions(request, runtime);
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURLWithOptions(shared_ptr<GenerateDeviceNameListURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateDeviceNameListURLResponse(doRPCRequest(make_shared<string>("GenerateDeviceNameListURL"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURL(shared_ptr<GenerateDeviceNameListURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDeviceNameListURLWithOptions(request, runtime);
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURLWithOptions(shared_ptr<GenerateFileUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateFileUploadURLResponse(doRPCRequest(make_shared<string>("GenerateFileUploadURL"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURL(shared_ptr<GenerateFileUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateFileUploadURLWithOptions(request, runtime);
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURLWithOptions(shared_ptr<GenerateOTAUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateOTAUploadURLResponse(doRPCRequest(make_shared<string>("GenerateOTAUploadURL"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURL(shared_ptr<GenerateOTAUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOTAUploadURLWithOptions(request, runtime);
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetailWithOptions(shared_ptr<GetDataAPIServiceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDataAPIServiceDetailResponse(doRPCRequest(make_shared<string>("GetDataAPIServiceDetail"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetail(shared_ptr<GetDataAPIServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataAPIServiceDetailWithOptions(request, runtime);
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadowWithOptions(shared_ptr<GetDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceShadowResponse(doRPCRequest(make_shared<string>("GetDeviceShadow"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadow(shared_ptr<GetDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceShadowWithOptions(request, runtime);
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatusWithOptions(shared_ptr<GetDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceStatusResponse(doRPCRequest(make_shared<string>("GetDeviceStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatus(shared_ptr<GetDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceStatusWithOptions(request, runtime);
}

GetDeviceTunnelShareStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelShareStatusWithOptions(shared_ptr<GetDeviceTunnelShareStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceTunnelShareStatusResponse(doRPCRequest(make_shared<string>("GetDeviceTunnelShareStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceTunnelShareStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelShareStatus(shared_ptr<GetDeviceTunnelShareStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceTunnelShareStatusWithOptions(request, runtime);
}

GetDeviceTunnelStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelStatusWithOptions(shared_ptr<GetDeviceTunnelStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetDeviceTunnelStatusResponse(doRPCRequest(make_shared<string>("GetDeviceTunnelStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetDeviceTunnelStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelStatus(shared_ptr<GetDeviceTunnelStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceTunnelStatusWithOptions(request, runtime);
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersionWithOptions(shared_ptr<GetEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("GetEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersion(shared_ptr<GetEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeDriverVersionWithOptions(request, runtime);
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceWithOptions(shared_ptr<GetEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEdgeInstanceResponse(doRPCRequest(make_shared<string>("GetEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstance(shared_ptr<GetEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceWithOptions(request, runtime);
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeploymentWithOptions(shared_ptr<GetEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEdgeInstanceDeploymentResponse(doRPCRequest(make_shared<string>("GetEdgeInstanceDeployment"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeployment(shared_ptr<GetEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceDeploymentWithOptions(request, runtime);
}

GetEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceMessageRoutingWithOptions(shared_ptr<GetEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetEdgeInstanceMessageRoutingResponse(doRPCRequest(make_shared<string>("GetEdgeInstanceMessageRouting"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceMessageRouting(shared_ptr<GetEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDeviceWithOptions(shared_ptr<GetGatewayBySubDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetGatewayBySubDeviceResponse(doRPCRequest(make_shared<string>("GetGatewayBySubDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDevice(shared_ptr<GetGatewayBySubDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayBySubDeviceWithOptions(request, runtime);
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTaskWithOptions(shared_ptr<GetLoraNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetLoraNodesTaskResponse(doRPCRequest(make_shared<string>("GetLoraNodesTask"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTask(shared_ptr<GetLoraNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoraNodesTaskWithOptions(request, runtime);
}

GetNodesAddingTaskResponse Alibabacloud_Iot20180120::Client::getNodesAddingTaskWithOptions(shared_ptr<GetNodesAddingTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetNodesAddingTaskResponse(doRPCRequest(make_shared<string>("GetNodesAddingTask"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetNodesAddingTaskResponse Alibabacloud_Iot20180120::Client::getNodesAddingTask(shared_ptr<GetNodesAddingTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNodesAddingTaskWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleResponse(doRPCRequest(make_shared<string>("GetRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleActionWithOptions(shared_ptr<GetRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetRuleActionResponse(doRPCRequest(make_shared<string>("GetRuleAction"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleAction(shared_ptr<GetRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleActionWithOptions(request, runtime);
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRuleWithOptions(shared_ptr<GetSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetSceneRuleResponse(doRPCRequest(make_shared<string>("GetSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRule(shared_ptr<GetSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneRuleWithOptions(request, runtime);
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTslWithOptions(shared_ptr<GetThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThingModelTslResponse(doRPCRequest(make_shared<string>("GetThingModelTsl"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTsl(shared_ptr<GetThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslWithOptions(request, runtime);
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublishedWithOptions(shared_ptr<GetThingModelTslPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThingModelTslPublishedResponse(doRPCRequest(make_shared<string>("GetThingModelTslPublished"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublished(shared_ptr<GetThingModelTslPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslPublishedWithOptions(request, runtime);
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScriptWithOptions(shared_ptr<GetThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThingScriptResponse(doRPCRequest(make_shared<string>("GetThingScript"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScript(shared_ptr<GetThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingScriptWithOptions(request, runtime);
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplateWithOptions(shared_ptr<GetThingTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThingTemplateResponse(doRPCRequest(make_shared<string>("GetThingTemplate"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplate(shared_ptr<GetThingTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTemplateWithOptions(request, runtime);
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopoWithOptions(shared_ptr<GetThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetThingTopoResponse(doRPCRequest(make_shared<string>("GetThingTopo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopo(shared_ptr<GetThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTopoWithOptions(request, runtime);
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTslWithOptions(shared_ptr<ImportThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ImportThingModelTslResponse(doRPCRequest(make_shared<string>("ImportThingModelTsl"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTsl(shared_ptr<ImportThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importThingModelTslWithOptions(request, runtime);
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIServiceWithOptions(shared_ptr<InvokeDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvokeDataAPIServiceResponse(doRPCRequest(make_shared<string>("InvokeDataAPIService"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIService(shared_ptr<InvokeDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeDataAPIServiceWithOptions(request, runtime);
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingServiceWithOptions(shared_ptr<InvokeThingServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvokeThingServiceResponse(doRPCRequest(make_shared<string>("InvokeThingService"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingService(shared_ptr<InvokeThingServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingServiceWithOptions(request, runtime);
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsServiceWithOptions(shared_ptr<InvokeThingsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InvokeThingsServiceResponse(doRPCRequest(make_shared<string>("InvokeThingsService"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsService(shared_ptr<InvokeThingsServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingsServiceWithOptions(request, runtime);
}

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsDataWithOptions(shared_ptr<ListAnalyticsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListAnalyticsDataResponse(doRPCRequest(make_shared<string>("ListAnalyticsData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsData(shared_ptr<ListAnalyticsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnalyticsDataWithOptions(request, runtime);
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJobWithOptions(shared_ptr<ListDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDeviceDistributeJobResponse(doRPCRequest(make_shared<string>("ListDeviceDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJob(shared_ptr<ListDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceDistributeJobWithOptions(request, runtime);
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDeviceWithOptions(shared_ptr<ListDistributedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDistributedDeviceResponse(doRPCRequest(make_shared<string>("ListDistributedDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDevice(shared_ptr<ListDistributedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedDeviceWithOptions(request, runtime);
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProductWithOptions(shared_ptr<ListDistributedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListDistributedProductResponse(doRPCRequest(make_shared<string>("ListDistributedProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProduct(shared_ptr<ListDistributedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedProductWithOptions(request, runtime);
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJobWithOptions(shared_ptr<ListJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListJobResponse(doRPCRequest(make_shared<string>("ListJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJob(shared_ptr<ListJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobWithOptions(request, runtime);
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmwareWithOptions(shared_ptr<ListOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOTAFirmwareResponse(doRPCRequest(make_shared<string>("ListOTAFirmware"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmware(shared_ptr<ListOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAFirmwareWithOptions(request, runtime);
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDeviceWithOptions(shared_ptr<ListOTAJobByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOTAJobByDeviceResponse(doRPCRequest(make_shared<string>("ListOTAJobByDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDevice(shared_ptr<ListOTAJobByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByDeviceWithOptions(request, runtime);
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmwareWithOptions(shared_ptr<ListOTAJobByFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOTAJobByFirmwareResponse(doRPCRequest(make_shared<string>("ListOTAJobByFirmware"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmware(shared_ptr<ListOTAJobByFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByFirmwareWithOptions(request, runtime);
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProductWithOptions(shared_ptr<ListOTAModuleByProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return ListOTAModuleByProductResponse(doRPCRequest(make_shared<string>("ListOTAModuleByProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProduct(shared_ptr<ListOTAModuleByProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleByProductWithOptions(request, runtime);
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDeviceWithOptions(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOTAModuleVersionsByDeviceResponse(doRPCRequest(make_shared<string>("ListOTAModuleVersionsByDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDevice(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleVersionsByDeviceWithOptions(request, runtime);
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJobWithOptions(shared_ptr<ListOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListOTATaskByJobResponse(doRPCRequest(make_shared<string>("ListOTATaskByJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJob(shared_ptr<ListOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTATaskByJobWithOptions(request, runtime);
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTagsWithOptions(shared_ptr<ListProductByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProductByTagsResponse(doRPCRequest(make_shared<string>("ListProductByTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTags(shared_ptr<ListProductByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductByTagsWithOptions(request, runtime);
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTagsWithOptions(shared_ptr<ListProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListProductTagsResponse(doRPCRequest(make_shared<string>("ListProductTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTags(shared_ptr<ListProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductTagsWithOptions(request, runtime);
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRuleWithOptions(shared_ptr<ListRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRuleResponse(doRPCRequest(make_shared<string>("ListRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRule(shared_ptr<ListRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleWithOptions(request, runtime);
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActionsWithOptions(shared_ptr<ListRuleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListRuleActionsResponse(doRPCRequest(make_shared<string>("ListRuleActions"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActions(shared_ptr<ListRuleActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleActionsWithOptions(request, runtime);
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTaskWithOptions(shared_ptr<ListTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTaskResponse(doRPCRequest(make_shared<string>("ListTask"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTask(shared_ptr<ListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskWithOptions(request, runtime);
}

ListTaskByPageResponse Alibabacloud_Iot20180120::Client::listTaskByPageWithOptions(shared_ptr<ListTaskByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListTaskByPageResponse(doRPCRequest(make_shared<string>("ListTaskByPage"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListTaskByPageResponse Alibabacloud_Iot20180120::Client::listTaskByPage(shared_ptr<ListTaskByPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskByPageWithOptions(request, runtime);
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersionWithOptions(shared_ptr<ListThingModelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListThingModelVersionResponse(doRPCRequest(make_shared<string>("ListThingModelVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersion(shared_ptr<ListThingModelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingModelVersionWithOptions(request, runtime);
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplatesWithOptions(shared_ptr<ListThingTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ListThingTemplatesResponse(doRPCRequest(make_shared<string>("ListThingTemplates"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplates(shared_ptr<ListThingTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingTemplatesWithOptions(request, runtime);
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopoWithOptions(shared_ptr<NotifyAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return NotifyAddThingTopoResponse(doRPCRequest(make_shared<string>("NotifyAddThingTopo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopo(shared_ptr<NotifyAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyAddThingTopoWithOptions(request, runtime);
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotServiceWithOptions(shared_ptr<OpenIotServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return OpenIotServiceResponse(doRPCRequest(make_shared<string>("OpenIotService"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotService(shared_ptr<OpenIotServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openIotServiceWithOptions(request, runtime);
}

PrintByTemplateResponse Alibabacloud_Iot20180120::Client::printByTemplateWithOptions(shared_ptr<PrintByTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PrintByTemplateResponse(doRPCRequest(make_shared<string>("PrintByTemplate"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PrintByTemplateResponse Alibabacloud_Iot20180120::Client::printByTemplate(shared_ptr<PrintByTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return printByTemplateWithOptions(request, runtime);
}

PubResponse Alibabacloud_Iot20180120::Client::pubWithOptions(shared_ptr<PubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PubResponse(doRPCRequest(make_shared<string>("Pub"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PubResponse Alibabacloud_Iot20180120::Client::pub(shared_ptr<PubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubWithOptions(request, runtime);
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcastWithOptions(shared_ptr<PubBroadcastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PubBroadcastResponse(doRPCRequest(make_shared<string>("PubBroadcast"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcast(shared_ptr<PubBroadcastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubBroadcastWithOptions(request, runtime);
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModelWithOptions(shared_ptr<PublishThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return PublishThingModelResponse(doRPCRequest(make_shared<string>("PublishThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModel(shared_ptr<PublishThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishThingModelWithOptions(request, runtime);
}

QueryAppDeviceListResponse Alibabacloud_Iot20180120::Client::queryAppDeviceListWithOptions(shared_ptr<QueryAppDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryAppDeviceListResponse(doRPCRequest(make_shared<string>("QueryAppDeviceList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryAppDeviceListResponse Alibabacloud_Iot20180120::Client::queryAppDeviceList(shared_ptr<QueryAppDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryAppDeviceListWithOptions(request, runtime);
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatusWithOptions(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryBatchRegisterDeviceStatusResponse(doRPCRequest(make_shared<string>("QueryBatchRegisterDeviceStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatus(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBatchRegisterDeviceStatusWithOptions(request, runtime);
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyIdWithOptions(shared_ptr<QueryCertUrlByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryCertUrlByApplyIdResponse(doRPCRequest(make_shared<string>("QueryCertUrlByApplyId"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyId(shared_ptr<QueryCertUrlByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCertUrlByApplyIdWithOptions(request, runtime);
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupIdWithOptions(shared_ptr<QueryConsumerGroupByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryConsumerGroupByGroupIdResponse(doRPCRequest(make_shared<string>("QueryConsumerGroupByGroupId"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupId(shared_ptr<QueryConsumerGroupByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupByGroupIdWithOptions(request, runtime);
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupListWithOptions(shared_ptr<QueryConsumerGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryConsumerGroupListResponse(doRPCRequest(make_shared<string>("QueryConsumerGroupList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupList(shared_ptr<QueryConsumerGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupListWithOptions(request, runtime);
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatusWithOptions(shared_ptr<QueryConsumerGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryConsumerGroupStatusResponse(doRPCRequest(make_shared<string>("QueryConsumerGroupStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatus(shared_ptr<QueryConsumerGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupStatusWithOptions(request, runtime);
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLogWithOptions(shared_ptr<QueryDetailSceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDetailSceneRuleLogResponse(doRPCRequest(make_shared<string>("QueryDetailSceneRuleLog"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLog(shared_ptr<QueryDetailSceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDetailSceneRuleLogWithOptions(request, runtime);
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceWithOptions(shared_ptr<QueryDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceResponse(doRPCRequest(make_shared<string>("QueryDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDevice(shared_ptr<QueryDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceWithOptions(request, runtime);
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQLWithOptions(shared_ptr<QueryDeviceBySQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceBySQLResponse(doRPCRequest(make_shared<string>("QueryDeviceBySQL"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQL(shared_ptr<QueryDeviceBySQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceBySQLWithOptions(request, runtime);
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatusWithOptions(shared_ptr<QueryDeviceByStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceByStatusResponse(doRPCRequest(make_shared<string>("QueryDeviceByStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatus(shared_ptr<QueryDeviceByStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByStatusWithOptions(request, runtime);
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTagsWithOptions(shared_ptr<QueryDeviceByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceByTagsResponse(doRPCRequest(make_shared<string>("QueryDeviceByTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTags(shared_ptr<QueryDeviceByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByTagsWithOptions(request, runtime);
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCertWithOptions(shared_ptr<QueryDeviceCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceCertResponse(doRPCRequest(make_shared<string>("QueryDeviceCert"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCert(shared_ptr<QueryDeviceCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceCertWithOptions(request, runtime);
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredPropertyWithOptions(shared_ptr<QueryDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceDesiredPropertyResponse(doRPCRequest(make_shared<string>("QueryDeviceDesiredProperty"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredProperty(shared_ptr<QueryDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDesiredPropertyWithOptions(request, runtime);
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetailWithOptions(shared_ptr<QueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceDetailResponse(doRPCRequest(make_shared<string>("QueryDeviceDetail"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetail(shared_ptr<QueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDetailWithOptions(request, runtime);
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetailWithOptions(shared_ptr<QueryDeviceDistributeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceDistributeDetailResponse(doRPCRequest(make_shared<string>("QueryDeviceDistributeDetail"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetail(shared_ptr<QueryDeviceDistributeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeDetailWithOptions(request, runtime);
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJobWithOptions(shared_ptr<QueryDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceDistributeJobResponse(doRPCRequest(make_shared<string>("QueryDeviceDistributeJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJob(shared_ptr<QueryDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeJobWithOptions(request, runtime);
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventDataWithOptions(shared_ptr<QueryDeviceEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceEventDataResponse(doRPCRequest(make_shared<string>("QueryDeviceEventData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventData(shared_ptr<QueryDeviceEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventDataWithOptions(request, runtime);
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFileWithOptions(shared_ptr<QueryDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceFileResponse(doRPCRequest(make_shared<string>("QueryDeviceFile"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFile(shared_ptr<QueryDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileWithOptions(request, runtime);
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileListWithOptions(shared_ptr<QueryDeviceFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceFileListResponse(doRPCRequest(make_shared<string>("QueryDeviceFileList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileList(shared_ptr<QueryDeviceFileListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileListWithOptions(request, runtime);
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDeviceWithOptions(shared_ptr<QueryDeviceGroupByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceGroupByDeviceResponse(doRPCRequest(make_shared<string>("QueryDeviceGroupByDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDevice(shared_ptr<QueryDeviceGroupByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByDeviceWithOptions(request, runtime);
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTagsWithOptions(shared_ptr<QueryDeviceGroupByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceGroupByTagsResponse(doRPCRequest(make_shared<string>("QueryDeviceGroupByTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTags(shared_ptr<QueryDeviceGroupByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByTagsWithOptions(request, runtime);
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfoWithOptions(shared_ptr<QueryDeviceGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceGroupInfoResponse(doRPCRequest(make_shared<string>("QueryDeviceGroupInfo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfo(shared_ptr<QueryDeviceGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupInfoWithOptions(request, runtime);
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupListWithOptions(shared_ptr<QueryDeviceGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceGroupListResponse(doRPCRequest(make_shared<string>("QueryDeviceGroupList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupList(shared_ptr<QueryDeviceGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupListWithOptions(request, runtime);
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagListWithOptions(shared_ptr<QueryDeviceGroupTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceGroupTagListResponse(doRPCRequest(make_shared<string>("QueryDeviceGroupTagList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagList(shared_ptr<QueryDeviceGroupTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupTagListWithOptions(request, runtime);
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroupWithOptions(shared_ptr<QueryDeviceListByDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceListByDeviceGroupResponse(doRPCRequest(make_shared<string>("QueryDeviceListByDeviceGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroup(shared_ptr<QueryDeviceListByDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceListByDeviceGroupWithOptions(request, runtime);
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventDataWithOptions(shared_ptr<QueryDeviceOriginalEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceOriginalEventDataResponse(doRPCRequest(make_shared<string>("QueryDeviceOriginalEventData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventData(shared_ptr<QueryDeviceOriginalEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalEventDataWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyDataWithOptions(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceOriginalPropertyDataResponse(doRPCRequest(make_shared<string>("QueryDeviceOriginalPropertyData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyData(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyDataWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatusWithOptions(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceOriginalPropertyStatusResponse(doRPCRequest(make_shared<string>("QueryDeviceOriginalPropertyStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatus(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyStatusWithOptions(request, runtime);
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceDataWithOptions(shared_ptr<QueryDeviceOriginalServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceOriginalServiceDataResponse(doRPCRequest(make_shared<string>("QueryDeviceOriginalServiceData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceData(shared_ptr<QueryDeviceOriginalServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalServiceDataWithOptions(request, runtime);
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDevicePropWithOptions(shared_ptr<QueryDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicePropResponse(doRPCRequest(make_shared<string>("QueryDeviceProp"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDeviceProp(shared_ptr<QueryDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropWithOptions(request, runtime);
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesDataWithOptions(shared_ptr<QueryDevicePropertiesDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicePropertiesDataResponse(doRPCRequest(make_shared<string>("QueryDevicePropertiesData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesData(shared_ptr<QueryDevicePropertiesDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertiesDataWithOptions(request, runtime);
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyDataWithOptions(shared_ptr<QueryDevicePropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicePropertyDataResponse(doRPCRequest(make_shared<string>("QueryDevicePropertyData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyData(shared_ptr<QueryDevicePropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyDataWithOptions(request, runtime);
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatusWithOptions(shared_ptr<QueryDevicePropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDevicePropertyStatusResponse(doRPCRequest(make_shared<string>("QueryDevicePropertyStatus"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatus(shared_ptr<QueryDevicePropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyStatusWithOptions(request, runtime);
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceDataWithOptions(shared_ptr<QueryDeviceServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceServiceDataResponse(doRPCRequest(make_shared<string>("QueryDeviceServiceData"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceData(shared_ptr<QueryDeviceServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceServiceDataWithOptions(request, runtime);
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatisticsWithOptions(shared_ptr<QueryDeviceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryDeviceStatisticsResponse(doRPCRequest(make_shared<string>("QueryDeviceStatistics"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatistics(shared_ptr<QueryDeviceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceStatisticsWithOptions(request, runtime);
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverWithOptions(shared_ptr<QueryEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeDriverResponse(doRPCRequest(make_shared<string>("QueryEdgeDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriver(shared_ptr<QueryEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverWithOptions(request, runtime);
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersionWithOptions(shared_ptr<QueryEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("QueryEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersion(shared_ptr<QueryEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverVersionWithOptions(request, runtime);
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceWithOptions(shared_ptr<QueryEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceResponse(doRPCRequest(make_shared<string>("QueryEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstance(shared_ptr<QueryEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceWithOptions(request, runtime);
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannelWithOptions(shared_ptr<QueryEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceChannelResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannel(shared_ptr<QueryEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceChannelWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceWithOptions(shared_ptr<QueryEdgeInstanceDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceDeviceResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDevice(shared_ptr<QueryEdgeInstanceDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriverWithOptions(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceDeviceByDriverResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceDeviceByDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriver(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceByDriverWithOptions(request, runtime);
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriverWithOptions(shared_ptr<QueryEdgeInstanceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceDriverResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceDriver"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriver(shared_ptr<QueryEdgeInstanceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDriverWithOptions(request, runtime);
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGatewayWithOptions(shared_ptr<QueryEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceGatewayResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceGateway"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGateway(shared_ptr<QueryEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceGatewayWithOptions(request, runtime);
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeploymentWithOptions(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceHistoricDeploymentResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceHistoricDeployment"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeployment(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceHistoricDeploymentWithOptions(request, runtime);
}

QueryEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceMessageRoutingWithOptions(shared_ptr<QueryEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceMessageRoutingResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceMessageRouting"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceMessageRouting(shared_ptr<QueryEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRuleWithOptions(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryEdgeInstanceSceneRuleResponse(doRPCRequest(make_shared<string>("QueryEdgeInstanceSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRule(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceSceneRuleWithOptions(request, runtime);
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJobWithOptions(shared_ptr<QueryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryJobResponse(doRPCRequest(make_shared<string>("QueryJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJob(shared_ptr<QueryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobWithOptions(request, runtime);
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatisticsWithOptions(shared_ptr<QueryJobStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return QueryJobStatisticsResponse(doRPCRequest(make_shared<string>("QueryJobStatistics"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatistics(shared_ptr<QueryJobStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobStatisticsWithOptions(request, runtime);
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissionsWithOptions(shared_ptr<QueryLoRaJoinPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryLoRaJoinPermissionsResponse(doRPCRequest(make_shared<string>("QueryLoRaJoinPermissions"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissions(shared_ptr<QueryLoRaJoinPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLoRaJoinPermissionsWithOptions(request, runtime);
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmwareWithOptions(shared_ptr<QueryOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOTAFirmwareResponse(doRPCRequest(make_shared<string>("QueryOTAFirmware"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmware(shared_ptr<QueryOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAFirmwareWithOptions(request, runtime);
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJobWithOptions(shared_ptr<QueryOTAJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryOTAJobResponse(doRPCRequest(make_shared<string>("QueryOTAJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJob(shared_ptr<QueryOTAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAJobWithOptions(request, runtime);
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyIdWithOptions(shared_ptr<QueryPageByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryPageByApplyIdResponse(doRPCRequest(make_shared<string>("QueryPageByApplyId"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyId(shared_ptr<QueryPageByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPageByApplyIdWithOptions(request, runtime);
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProductWithOptions(shared_ptr<QueryProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryProductResponse(doRPCRequest(make_shared<string>("QueryProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProduct(shared_ptr<QueryProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductWithOptions(request, runtime);
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfoWithOptions(shared_ptr<QueryProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryProductCertInfoResponse(doRPCRequest(make_shared<string>("QueryProductCertInfo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfo(shared_ptr<QueryProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductCertInfoWithOptions(request, runtime);
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryProductListResponse(doRPCRequest(make_shared<string>("QueryProductList"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductList(shared_ptr<QueryProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductListWithOptions(request, runtime);
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopicWithOptions(shared_ptr<QueryProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryProductTopicResponse(doRPCRequest(make_shared<string>("QueryProductTopic"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopic(shared_ptr<QueryProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductTopicWithOptions(request, runtime);
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRuleWithOptions(shared_ptr<QuerySceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySceneRuleResponse(doRPCRequest(make_shared<string>("QuerySceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRule(shared_ptr<QuerySceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySceneRuleWithOptions(request, runtime);
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelationWithOptions(shared_ptr<QuerySubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySubscribeRelationResponse(doRPCRequest(make_shared<string>("QuerySubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelation(shared_ptr<QuerySubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubscribeRelationWithOptions(request, runtime);
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLogWithOptions(shared_ptr<QuerySummarySceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySummarySceneRuleLogResponse(doRPCRequest(make_shared<string>("QuerySummarySceneRuleLog"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLog(shared_ptr<QuerySummarySceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySummarySceneRuleLogWithOptions(request, runtime);
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroupWithOptions(shared_ptr<QuerySuperDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QuerySuperDeviceGroupResponse(doRPCRequest(make_shared<string>("QuerySuperDeviceGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroup(shared_ptr<QuerySuperDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySuperDeviceGroupWithOptions(request, runtime);
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTaskWithOptions(shared_ptr<QueryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTaskResponse(doRPCRequest(make_shared<string>("QueryTask"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTask(shared_ptr<QueryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskWithOptions(request, runtime);
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModelWithOptions(shared_ptr<QueryThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryThingModelResponse(doRPCRequest(make_shared<string>("QueryThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModel(shared_ptr<QueryThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelWithOptions(request, runtime);
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigWithOptions(shared_ptr<QueryThingModelExtendConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryThingModelExtendConfigResponse(doRPCRequest(make_shared<string>("QueryThingModelExtendConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfig(shared_ptr<QueryThingModelExtendConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigWithOptions(request, runtime);
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublishedWithOptions(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryThingModelExtendConfigPublishedResponse(doRPCRequest(make_shared<string>("QueryThingModelExtendConfigPublished"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublished(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigPublishedWithOptions(request, runtime);
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublishedWithOptions(shared_ptr<QueryThingModelPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryThingModelPublishedResponse(doRPCRequest(make_shared<string>("QueryThingModelPublished"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublished(shared_ptr<QueryThingModelPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelPublishedWithOptions(request, runtime);
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTableWithOptions(shared_ptr<QueryTopicReverseRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTopicReverseRouteTableResponse(doRPCRequest(make_shared<string>("QueryTopicReverseRouteTable"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTable(shared_ptr<QueryTopicReverseRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicReverseRouteTableWithOptions(request, runtime);
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTableWithOptions(shared_ptr<QueryTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return QueryTopicRouteTableResponse(doRPCRequest(make_shared<string>("QueryTopicRouteTable"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTable(shared_ptr<QueryTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicRouteTableWithOptions(request, runtime);
}

RefreshDeviceTunnelSharePasswordResponse Alibabacloud_Iot20180120::Client::refreshDeviceTunnelSharePasswordWithOptions(shared_ptr<RefreshDeviceTunnelSharePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RefreshDeviceTunnelSharePasswordResponse(doRPCRequest(make_shared<string>("RefreshDeviceTunnelSharePassword"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RefreshDeviceTunnelSharePasswordResponse Alibabacloud_Iot20180120::Client::refreshDeviceTunnelSharePassword(shared_ptr<RefreshDeviceTunnelSharePasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDeviceTunnelSharePasswordWithOptions(request, runtime);
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RegisterDeviceResponse(doRPCRequest(make_shared<string>("RegisterDevice"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDevice(shared_ptr<RegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceWithOptions(request, runtime);
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersionWithOptions(shared_ptr<ReleaseEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReleaseEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("ReleaseEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersion(shared_ptr<ReleaseEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseEdgeDriverVersionWithOptions(request, runtime);
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopoWithOptions(shared_ptr<RemoveThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RemoveThingTopoResponse(doRPCRequest(make_shared<string>("RemoveThingTopo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopo(shared_ptr<RemoveThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeThingTopoWithOptions(request, runtime);
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGatewayWithOptions(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReplaceEdgeInstanceGatewayResponse(doRPCRequest(make_shared<string>("ReplaceEdgeInstanceGateway"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGateway(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceEdgeInstanceGatewayWithOptions(request, runtime);
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPositionWithOptions(shared_ptr<ResetConsumerGroupPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetConsumerGroupPositionResponse(doRPCRequest(make_shared<string>("ResetConsumerGroupPosition"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPosition(shared_ptr<ResetConsumerGroupPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetConsumerGroupPositionWithOptions(request, runtime);
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThingWithOptions(shared_ptr<ResetThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ResetThingResponse(doRPCRequest(make_shared<string>("ResetThing"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThing(shared_ptr<ResetThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetThingWithOptions(request, runtime);
}

RRpcResponse Alibabacloud_Iot20180120::Client::rRpcWithOptions(shared_ptr<RRpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RRpcResponse(doRPCRequest(make_shared<string>("RRpc"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RRpcResponse Alibabacloud_Iot20180120::Client::rRpc(shared_ptr<RRpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rRpcWithOptions(request, runtime);
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDevicePropWithOptions(shared_ptr<SaveDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SaveDevicePropResponse(doRPCRequest(make_shared<string>("SaveDeviceProp"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDeviceProp(shared_ptr<SaveDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDevicePropWithOptions(request, runtime);
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredPropertyWithOptions(shared_ptr<SetDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDeviceDesiredPropertyResponse(doRPCRequest(make_shared<string>("SetDeviceDesiredProperty"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredProperty(shared_ptr<SetDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceDesiredPropertyWithOptions(request, runtime);
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTagsWithOptions(shared_ptr<SetDeviceGroupTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDeviceGroupTagsResponse(doRPCRequest(make_shared<string>("SetDeviceGroupTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTags(shared_ptr<SetDeviceGroupTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceGroupTagsWithOptions(request, runtime);
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDevicePropertyWithOptions(shared_ptr<SetDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDevicePropertyResponse(doRPCRequest(make_shared<string>("SetDeviceProperty"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDeviceProperty(shared_ptr<SetDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicePropertyWithOptions(request, runtime);
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesPropertyWithOptions(shared_ptr<SetDevicesPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetDevicesPropertyResponse(doRPCRequest(make_shared<string>("SetDevicesProperty"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesProperty(shared_ptr<SetDevicesPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicesPropertyWithOptions(request, runtime);
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigsWithOptions(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetEdgeInstanceDriverConfigsResponse(doRPCRequest(make_shared<string>("SetEdgeInstanceDriverConfigs"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigs(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfoWithOptions(shared_ptr<SetProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SetProductCertInfoResponse(doRPCRequest(make_shared<string>("SetProductCertInfo"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfo(shared_ptr<SetProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setProductCertInfoWithOptions(request, runtime);
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombinationWithOptions(shared_ptr<SpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SpeechByCombinationResponse(doRPCRequest(make_shared<string>("SpeechByCombination"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombination(shared_ptr<SpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return speechByCombinationWithOptions(request, runtime);
}

StartCpuResponse Alibabacloud_Iot20180120::Client::startCpuWithOptions(shared_ptr<StartCpuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartCpuResponse(doRPCRequest(make_shared<string>("StartCpu"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartCpuResponse Alibabacloud_Iot20180120::Client::startCpu(shared_ptr<StartCpuRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCpuWithOptions(request, runtime);
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRuleWithOptions(shared_ptr<StartRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StartRuleResponse(doRPCRequest(make_shared<string>("StartRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRule(shared_ptr<StartRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRuleWithOptions(request, runtime);
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRuleWithOptions(shared_ptr<StopRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return StopRuleResponse(doRPCRequest(make_shared<string>("StopRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRule(shared_ptr<StopRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRuleWithOptions(request, runtime);
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombinationWithOptions(shared_ptr<SyncSpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return SyncSpeechByCombinationResponse(doRPCRequest(make_shared<string>("SyncSpeechByCombination"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombination(shared_ptr<SyncSpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncSpeechByCombinationWithOptions(request, runtime);
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRuleWithOptions(shared_ptr<TriggerSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TriggerSceneRuleResponse(doRPCRequest(make_shared<string>("TriggerSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRule(shared_ptr<TriggerSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerSceneRuleWithOptions(request, runtime);
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstanceWithOptions(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindApplicationFromEdgeInstanceResponse(doRPCRequest(make_shared<string>("UnbindApplicationFromEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstance(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindApplicationFromEdgeInstanceWithOptions(request, runtime);
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstanceWithOptions(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindDriverFromEdgeInstanceResponse(doRPCRequest(make_shared<string>("UnbindDriverFromEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstance(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDriverFromEdgeInstanceWithOptions(request, runtime);
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstanceWithOptions(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindRoleFromEdgeInstanceResponse(doRPCRequest(make_shared<string>("UnbindRoleFromEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstance(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindRoleFromEdgeInstanceWithOptions(request, runtime);
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstanceWithOptions(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnbindSceneRuleFromEdgeInstanceResponse(doRPCRequest(make_shared<string>("UnbindSceneRuleFromEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstance(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSceneRuleFromEdgeInstanceWithOptions(request, runtime);
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroupWithOptions(shared_ptr<UpdateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateConsumerGroupResponse(doRPCRequest(make_shared<string>("UpdateConsumerGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroup(shared_ptr<UpdateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConsumerGroupWithOptions(request, runtime);
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroupWithOptions(shared_ptr<UpdateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDeviceGroupResponse(doRPCRequest(make_shared<string>("UpdateDeviceGroup"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroup(shared_ptr<UpdateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceGroupWithOptions(request, runtime);
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadowWithOptions(shared_ptr<UpdateDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateDeviceShadowResponse(doRPCRequest(make_shared<string>("UpdateDeviceShadow"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadow(shared_ptr<UpdateDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceShadowWithOptions(request, runtime);
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersionWithOptions(shared_ptr<UpdateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEdgeDriverVersionResponse(doRPCRequest(make_shared<string>("UpdateEdgeDriverVersion"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersion(shared_ptr<UpdateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeDriverVersionWithOptions(request, runtime);
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceWithOptions(shared_ptr<UpdateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEdgeInstanceResponse(doRPCRequest(make_shared<string>("UpdateEdgeInstance"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstance(shared_ptr<UpdateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceWithOptions(request, runtime);
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannelWithOptions(shared_ptr<UpdateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEdgeInstanceChannelResponse(doRPCRequest(make_shared<string>("UpdateEdgeInstanceChannel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannel(shared_ptr<UpdateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceChannelWithOptions(request, runtime);
}

UpdateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceMessageRoutingWithOptions(shared_ptr<UpdateEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateEdgeInstanceMessageRoutingResponse(doRPCRequest(make_shared<string>("UpdateEdgeInstanceMessageRouting"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceMessageRouting(shared_ptr<UpdateEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJobWithOptions(shared_ptr<UpdateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateJobResponse(doRPCRequest(make_shared<string>("UpdateJob"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJob(shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateJobWithOptions(request, runtime);
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModuleWithOptions(shared_ptr<UpdateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateOTAModuleResponse(doRPCRequest(make_shared<string>("UpdateOTAModule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModule(shared_ptr<UpdateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOTAModuleWithOptions(request, runtime);
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProductWithOptions(shared_ptr<UpdateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProductResponse(doRPCRequest(make_shared<string>("UpdateProduct"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProduct(shared_ptr<UpdateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductWithOptions(request, runtime);
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfigWithOptions(shared_ptr<UpdateProductFilterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProductFilterConfigResponse(doRPCRequest(make_shared<string>("UpdateProductFilterConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfig(shared_ptr<UpdateProductFilterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductFilterConfigWithOptions(request, runtime);
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTagsWithOptions(shared_ptr<UpdateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProductTagsResponse(doRPCRequest(make_shared<string>("UpdateProductTags"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTags(shared_ptr<UpdateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTagsWithOptions(request, runtime);
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopicWithOptions(shared_ptr<UpdateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateProductTopicResponse(doRPCRequest(make_shared<string>("UpdateProductTopic"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopic(shared_ptr<UpdateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTopicWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRuleResponse(doRPCRequest(make_shared<string>("UpdateRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleActionWithOptions(shared_ptr<UpdateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateRuleActionResponse(doRPCRequest(make_shared<string>("UpdateRuleAction"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleAction(shared_ptr<UpdateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleActionWithOptions(request, runtime);
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRuleWithOptions(shared_ptr<UpdateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSceneRuleResponse(doRPCRequest(make_shared<string>("UpdateSceneRule"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRule(shared_ptr<UpdateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneRuleWithOptions(request, runtime);
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelationWithOptions(shared_ptr<UpdateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateSubscribeRelationResponse(doRPCRequest(make_shared<string>("UpdateSubscribeRelation"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelation(shared_ptr<UpdateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubscribeRelationWithOptions(request, runtime);
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModelWithOptions(shared_ptr<UpdateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateThingModelResponse(doRPCRequest(make_shared<string>("UpdateThingModel"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModel(shared_ptr<UpdateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingModelWithOptions(request, runtime);
}

UpdateThingModelValidationConfigResponse Alibabacloud_Iot20180120::Client::updateThingModelValidationConfigWithOptions(shared_ptr<UpdateThingModelValidationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateThingModelValidationConfigResponse(doRPCRequest(make_shared<string>("UpdateThingModelValidationConfig"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateThingModelValidationConfigResponse Alibabacloud_Iot20180120::Client::updateThingModelValidationConfig(shared_ptr<UpdateThingModelValidationConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingModelValidationConfigWithOptions(request, runtime);
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScriptWithOptions(shared_ptr<UpdateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateThingScriptResponse(doRPCRequest(make_shared<string>("UpdateThingScript"), make_shared<string>("2018-01-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScript(shared_ptr<UpdateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingScriptWithOptions(request, runtime);
}

