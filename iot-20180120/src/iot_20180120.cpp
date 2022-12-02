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
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddDataForApiSourceResponse Alibabacloud_Iot20180120::Client::addDataForApiSourceWithOptions(shared_ptr<AddDataForApiSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddDataForApiSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddDataForApiSourceResponse(callApi(params, req, runtime));
}

AddDataForApiSourceResponse Alibabacloud_Iot20180120::Client::addDataForApiSource(shared_ptr<AddDataForApiSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addDataForApiSourceWithOptions(request, runtime);
}

AddShareTaskDeviceResponse Alibabacloud_Iot20180120::Client::addShareTaskDeviceWithOptions(shared_ptr<AddShareTaskDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIdList)) {
    body->insert(pair<string, vector<string>>("IotIdList", *request->iotIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskId)) {
    body->insert(pair<string, string>("ShareTaskId", *request->shareTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddShareTaskDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddShareTaskDeviceResponse(callApi(params, req, runtime));
}

AddShareTaskDeviceResponse Alibabacloud_Iot20180120::Client::addShareTaskDevice(shared_ptr<AddShareTaskDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShareTaskDeviceWithOptions(request, runtime);
}

AttachDestinationResponse Alibabacloud_Iot20180120::Client::attachDestinationWithOptions(shared_ptr<AttachDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationId)) {
    query->insert(pair<string, long>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isFailover)) {
    query->insert(pair<string, bool>("IsFailover", *request->isFailover));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachDestinationResponse(callApi(params, req, runtime));
}

AttachDestinationResponse Alibabacloud_Iot20180120::Client::attachDestination(shared_ptr<AttachDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachDestinationWithOptions(request, runtime);
}

AttachParserDataSourceResponse Alibabacloud_Iot20180120::Client::attachParserDataSourceWithOptions(shared_ptr<AttachParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AttachParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AttachParserDataSourceResponse(callApi(params, req, runtime));
}

AttachParserDataSourceResponse Alibabacloud_Iot20180120::Client::attachParserDataSource(shared_ptr<AttachParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return attachParserDataSourceWithOptions(request, runtime);
}

BatchAddDataForApiSourceResponse Alibabacloud_Iot20180120::Client::batchAddDataForApiSourceWithOptions(shared_ptr<BatchAddDataForApiSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchAddDataForApiSourceShrinkRequest> request = make_shared<BatchAddDataForApiSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->contentList)) {
    request->contentListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contentList, make_shared<string>("ContentList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiId)) {
    query->insert(pair<string, string>("ApiId", *request->apiId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentListShrink)) {
    query->insert(pair<string, string>("ContentList", *request->contentListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddDataForApiSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddDataForApiSourceResponse(callApi(params, req, runtime));
}

BatchAddDataForApiSourceResponse Alibabacloud_Iot20180120::Client::batchAddDataForApiSource(shared_ptr<BatchAddDataForApiSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDataForApiSourceWithOptions(request, runtime);
}

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelationsWithOptions(shared_ptr<BatchAddDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchAddDeviceGroupRelationsRequestDevice>>(request->device)) {
    query->insert(pair<string, vector<BatchAddDeviceGroupRelationsRequestDevice>>("Device", *request->device));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddDeviceGroupRelations"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddDeviceGroupRelationsResponse(callApi(params, req, runtime));
}

BatchAddDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchAddDeviceGroupRelations(shared_ptr<BatchAddDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddDeviceGroupRelationsWithOptions(request, runtime);
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopoWithOptions(shared_ptr<BatchAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gwDeviceName)) {
    query->insert(pair<string, string>("GwDeviceName", *request->gwDeviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gwProductKey)) {
    query->insert(pair<string, string>("GwProductKey", *request->gwProductKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BatchAddThingTopoRequestTopoAddItem>>(request->topoAddItem)) {
    query->insert(pair<string, vector<BatchAddThingTopoRequestTopoAddItem>>("TopoAddItem", *request->topoAddItem));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchAddThingTopo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchAddThingTopoResponse(callApi(params, req, runtime));
}

BatchAddThingTopoResponse Alibabacloud_Iot20180120::Client::batchAddThingTopo(shared_ptr<BatchAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchAddThingTopoWithOptions(request, runtime);
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriverWithOptions(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchBindDeviceToEdgeInstanceWithDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchBindDeviceToEdgeInstanceWithDriverResponse(callApi(params, req, runtime));
}

BatchBindDeviceToEdgeInstanceWithDriverResponse Alibabacloud_Iot20180120::Client::batchBindDeviceToEdgeInstanceWithDriver(shared_ptr<BatchBindDeviceToEdgeInstanceWithDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDeviceToEdgeInstanceWithDriverWithOptions(request, runtime);
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProjectWithOptions(shared_ptr<BatchBindDevicesIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchBindDevicesIntoProjectRequestDevices>>(request->devices)) {
    body->insert(pair<string, vector<BatchBindDevicesIntoProjectRequestDevices>>("Devices", *request->devices));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchBindDevicesIntoProject"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchBindDevicesIntoProjectResponse(callApi(params, req, runtime));
}

BatchBindDevicesIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindDevicesIntoProject(shared_ptr<BatchBindDevicesIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindDevicesIntoProjectWithOptions(request, runtime);
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProjectWithOptions(shared_ptr<BatchBindProductsIntoProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productKeys)) {
    body->insert(pair<string, vector<string>>("ProductKeys", *request->productKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchBindProductsIntoProject"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchBindProductsIntoProjectResponse(callApi(params, req, runtime));
}

BatchBindProductsIntoProjectResponse Alibabacloud_Iot20180120::Client::batchBindProductsIntoProject(shared_ptr<BatchBindProductsIntoProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchBindProductsIntoProjectWithOptions(request, runtime);
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNamesWithOptions(shared_ptr<BatchCheckDeviceNamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<BatchCheckDeviceNamesRequestDeviceNameList>>(request->deviceNameList)) {
    query->insert(pair<string, vector<BatchCheckDeviceNamesRequestDeviceNameList>>("DeviceNameList", *request->deviceNameList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCheckDeviceNames"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCheckDeviceNamesResponse(callApi(params, req, runtime));
}

BatchCheckDeviceNamesResponse Alibabacloud_Iot20180120::Client::batchCheckDeviceNames(shared_ptr<BatchCheckDeviceNamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCheckDeviceNamesWithOptions(request, runtime);
}

BatchCheckImportDeviceResponse Alibabacloud_Iot20180120::Client::batchCheckImportDeviceWithOptions(shared_ptr<BatchCheckImportDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchCheckImportDeviceRequestDeviceList>>(request->deviceList)) {
    query->insert(pair<string, vector<BatchCheckImportDeviceRequestDeviceList>>("DeviceList", *request->deviceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCheckImportDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCheckImportDeviceResponse(callApi(params, req, runtime));
}

BatchCheckImportDeviceResponse Alibabacloud_Iot20180120::Client::batchCheckImportDevice(shared_ptr<BatchCheckImportDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCheckImportDeviceWithOptions(request, runtime);
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchClearEdgeInstanceDeviceConfig"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchClearEdgeInstanceDeviceConfigResponse(callApi(params, req, runtime));
}

BatchClearEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchClearEdgeInstanceDeviceConfig(shared_ptr<BatchClearEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchClearEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchCreateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::batchCreateSoundCodeLabelWithOptions(shared_ptr<BatchCreateSoundCodeLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->total)) {
    body->insert(pair<string, long>("Total", *request->total));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateSoundCodeLabel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCreateSoundCodeLabelResponse(callApi(params, req, runtime));
}

BatchCreateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::batchCreateSoundCodeLabel(shared_ptr<BatchCreateSoundCodeLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateSoundCodeLabelWithOptions(request, runtime);
}

BatchCreateSoundCodeLabelWithLabelsResponse Alibabacloud_Iot20180120::Client::batchCreateSoundCodeLabelWithLabelsWithOptions(shared_ptr<BatchCreateSoundCodeLabelWithLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->labels)) {
    body->insert(pair<string, vector<string>>("Labels", *request->labels));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateSoundCodeLabelWithLabels"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchCreateSoundCodeLabelWithLabelsResponse(callApi(params, req, runtime));
}

BatchCreateSoundCodeLabelWithLabelsResponse Alibabacloud_Iot20180120::Client::batchCreateSoundCodeLabelWithLabels(shared_ptr<BatchCreateSoundCodeLabelWithLabelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateSoundCodeLabelWithLabelsWithOptions(request, runtime);
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelationsWithOptions(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchDeleteDeviceGroupRelationsRequestDevice>>(request->device)) {
    query->insert(pair<string, vector<BatchDeleteDeviceGroupRelationsRequestDevice>>("Device", *request->device));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteDeviceGroupRelations"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteDeviceGroupRelationsResponse(callApi(params, req, runtime));
}

BatchDeleteDeviceGroupRelationsResponse Alibabacloud_Iot20180120::Client::batchDeleteDeviceGroupRelations(shared_ptr<BatchDeleteDeviceGroupRelationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteDeviceGroupRelationsWithOptions(request, runtime);
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannelWithOptions(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIds)) {
    query->insert(pair<string, vector<string>>("ChannelIds", *request->channelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteEdgeInstanceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteEdgeInstanceChannelResponse(callApi(params, req, runtime));
}

BatchDeleteEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchDeleteEdgeInstanceChannel(shared_ptr<BatchDeleteEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteEdgeInstanceChannelWithOptions(request, runtime);
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatusWithOptions(shared_ptr<BatchGetDeviceBindStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetDeviceBindStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetDeviceBindStatusResponse(callApi(params, req, runtime));
}

BatchGetDeviceBindStatusResponse Alibabacloud_Iot20180120::Client::batchGetDeviceBindStatus(shared_ptr<BatchGetDeviceBindStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceBindStatusWithOptions(request, runtime);
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceStateWithOptions(shared_ptr<BatchGetDeviceStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotId)) {
    query->insert(pair<string, vector<string>>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetDeviceState"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetDeviceStateResponse(callApi(params, req, runtime));
}

BatchGetDeviceStateResponse Alibabacloud_Iot20180120::Client::batchGetDeviceState(shared_ptr<BatchGetDeviceStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetDeviceStateWithOptions(request, runtime);
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriverWithOptions(shared_ptr<BatchGetEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->driverIds)) {
    query->insert(pair<string, vector<string>>("DriverIds", *request->driverIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeDriverResponse(callApi(params, req, runtime));
}

BatchGetEdgeDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeDriver(shared_ptr<BatchGetEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIds)) {
    query->insert(pair<string, vector<string>>("ChannelIds", *request->channelIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeInstanceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeInstanceChannelResponse(callApi(params, req, runtime));
}

BatchGetEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceChannel(shared_ptr<BatchGetEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceChannelWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeInstanceDeviceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeInstanceDeviceChannelResponse(callApi(params, req, runtime));
}

BatchGetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceChannel(shared_ptr<BatchGetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeInstanceDeviceConfig"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeInstanceDeviceConfigResponse(callApi(params, req, runtime));
}

BatchGetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceConfig(shared_ptr<BatchGetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriverWithOptions(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeInstanceDeviceDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeInstanceDeviceDriverResponse(callApi(params, req, runtime));
}

BatchGetEdgeInstanceDeviceDriverResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDeviceDriver(shared_ptr<BatchGetEdgeInstanceDeviceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDeviceDriverWithOptions(request, runtime);
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigsWithOptions(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->driverIds)) {
    query->insert(pair<string, vector<string>>("DriverIds", *request->driverIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetEdgeInstanceDriverConfigs"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetEdgeInstanceDriverConfigsResponse(callApi(params, req, runtime));
}

BatchGetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::batchGetEdgeInstanceDriverConfigs(shared_ptr<BatchGetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

BatchImportDeviceResponse Alibabacloud_Iot20180120::Client::batchImportDeviceWithOptions(shared_ptr<BatchImportDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchImportDeviceRequestDeviceList>>(request->deviceList)) {
    query->insert(pair<string, vector<BatchImportDeviceRequestDeviceList>>("DeviceList", *request->deviceList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchImportDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchImportDeviceResponse(callApi(params, req, runtime));
}

BatchImportDeviceResponse Alibabacloud_Iot20180120::Client::batchImportDevice(shared_ptr<BatchImportDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchImportDeviceWithOptions(request, runtime);
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPubWithOptions(shared_ptr<BatchPubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageContent)) {
    query->insert(pair<string, string>("MessageContent", *request->messageContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qos)) {
    query->insert(pair<string, long>("Qos", *request->qos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicShortName)) {
    query->insert(pair<string, string>("TopicShortName", *request->topicShortName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchPub"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchPubResponse(callApi(params, req, runtime));
}

BatchPubResponse Alibabacloud_Iot20180120::Client::batchPub(shared_ptr<BatchPubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchPubWithOptions(request, runtime);
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetailWithOptions(shared_ptr<BatchQueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchQueryDeviceDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchQueryDeviceDetailResponse(callApi(params, req, runtime));
}

BatchQueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::batchQueryDeviceDetail(shared_ptr<BatchQueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchQueryDeviceDetailWithOptions(request, runtime);
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithOptions(shared_ptr<BatchRegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->count)) {
    query->insert(pair<string, long>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchRegisterDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchRegisterDeviceResponse(callApi(params, req, runtime));
}

BatchRegisterDeviceResponse Alibabacloud_Iot20180120::Client::batchRegisterDevice(shared_ptr<BatchRegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithOptions(request, runtime);
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyIdWithOptions(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchRegisterDeviceWithApplyId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchRegisterDeviceWithApplyIdResponse(callApi(params, req, runtime));
}

BatchRegisterDeviceWithApplyIdResponse Alibabacloud_Iot20180120::Client::batchRegisterDeviceWithApplyId(shared_ptr<BatchRegisterDeviceWithApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchRegisterDeviceWithApplyIdWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannelWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetEdgeInstanceDeviceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetEdgeInstanceDeviceChannelResponse(callApi(params, req, runtime));
}

BatchSetEdgeInstanceDeviceChannelResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceChannel(shared_ptr<BatchSetEdgeInstanceDeviceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceChannelWithOptions(request, runtime);
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfigWithOptions(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchSetEdgeInstanceDeviceConfigRequestDeviceConfigs>>(request->deviceConfigs)) {
    query->insert(pair<string, vector<BatchSetEdgeInstanceDeviceConfigRequestDeviceConfigs>>("DeviceConfigs", *request->deviceConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetEdgeInstanceDeviceConfig"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetEdgeInstanceDeviceConfigResponse(callApi(params, req, runtime));
}

BatchSetEdgeInstanceDeviceConfigResponse Alibabacloud_Iot20180120::Client::batchSetEdgeInstanceDeviceConfig(shared_ptr<BatchSetEdgeInstanceDeviceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetEdgeInstanceDeviceConfigWithOptions(request, runtime);
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstanceWithOptions(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIds)) {
    query->insert(pair<string, vector<string>>("IotIds", *request->iotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUnbindDeviceFromEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUnbindDeviceFromEdgeInstanceResponse(callApi(params, req, runtime));
}

BatchUnbindDeviceFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::batchUnbindDeviceFromEdgeInstance(shared_ptr<BatchUnbindDeviceFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindDeviceFromEdgeInstanceWithOptions(request, runtime);
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevicesWithOptions(shared_ptr<BatchUnbindProjectDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchUnbindProjectDevicesRequestDevices>>(request->devices)) {
    body->insert(pair<string, vector<BatchUnbindProjectDevicesRequestDevices>>("Devices", *request->devices));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUnbindProjectDevices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUnbindProjectDevicesResponse(callApi(params, req, runtime));
}

BatchUnbindProjectDevicesResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectDevices(shared_ptr<BatchUnbindProjectDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectDevicesWithOptions(request, runtime);
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProductsWithOptions(shared_ptr<BatchUnbindProjectProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productKeys)) {
    body->insert(pair<string, vector<string>>("ProductKeys", *request->productKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUnbindProjectProducts"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUnbindProjectProductsResponse(callApi(params, req, runtime));
}

BatchUnbindProjectProductsResponse Alibabacloud_Iot20180120::Client::batchUnbindProjectProducts(shared_ptr<BatchUnbindProjectProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUnbindProjectProductsWithOptions(request, runtime);
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNicknameWithOptions(shared_ptr<BatchUpdateDeviceNicknameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<BatchUpdateDeviceNicknameRequestDeviceNicknameInfo>>(request->deviceNicknameInfo)) {
    query->insert(pair<string, vector<BatchUpdateDeviceNicknameRequestDeviceNicknameInfo>>("DeviceNicknameInfo", *request->deviceNicknameInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchUpdateDeviceNickname"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchUpdateDeviceNicknameResponse(callApi(params, req, runtime));
}

BatchUpdateDeviceNicknameResponse Alibabacloud_Iot20180120::Client::batchUpdateDeviceNickname(shared_ptr<BatchUpdateDeviceNicknameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchUpdateDeviceNicknameWithOptions(request, runtime);
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstanceWithOptions(shared_ptr<BindApplicationToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationVersion)) {
    query->insert(pair<string, string>("ApplicationVersion", *request->applicationVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindApplicationToEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindApplicationToEdgeInstanceResponse(callApi(params, req, runtime));
}

BindApplicationToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindApplicationToEdgeInstance(shared_ptr<BindApplicationToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindApplicationToEdgeInstanceWithOptions(request, runtime);
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstanceWithOptions(shared_ptr<BindDriverToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderId)) {
    query->insert(pair<string, string>("OrderId", *request->orderId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindDriverToEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindDriverToEdgeInstanceResponse(callApi(params, req, runtime));
}

BindDriverToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindDriverToEdgeInstance(shared_ptr<BindDriverToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindDriverToEdgeInstanceWithOptions(request, runtime);
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstanceWithOptions(shared_ptr<BindGatewayToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindGatewayToEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindGatewayToEdgeInstanceResponse(callApi(params, req, runtime));
}

BindGatewayToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindGatewayToEdgeInstance(shared_ptr<BindGatewayToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindGatewayToEdgeInstanceWithOptions(request, runtime);
}

BindLicenseDeviceResponse Alibabacloud_Iot20180120::Client::bindLicenseDeviceWithOptions(shared_ptr<BindLicenseDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceNameList)) {
    body->insert(pair<string, vector<string>>("DeviceNameList", *request->deviceNameList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIdList)) {
    body->insert(pair<string, vector<string>>("IotIdList", *request->iotIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindLicenseDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindLicenseDeviceResponse(callApi(params, req, runtime));
}

BindLicenseDeviceResponse Alibabacloud_Iot20180120::Client::bindLicenseDevice(shared_ptr<BindLicenseDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindLicenseDeviceWithOptions(request, runtime);
}

BindLicenseProductResponse Alibabacloud_Iot20180120::Client::bindLicenseProductWithOptions(shared_ptr<BindLicenseProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindLicenseProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindLicenseProductResponse(callApi(params, req, runtime));
}

BindLicenseProductResponse Alibabacloud_Iot20180120::Client::bindLicenseProduct(shared_ptr<BindLicenseProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindLicenseProductWithOptions(request, runtime);
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstanceWithOptions(shared_ptr<BindRoleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleArn)) {
    query->insert(pair<string, string>("RoleArn", *request->roleArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindRoleToEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindRoleToEdgeInstanceResponse(callApi(params, req, runtime));
}

BindRoleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindRoleToEdgeInstance(shared_ptr<BindRoleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindRoleToEdgeInstanceWithOptions(request, runtime);
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstanceWithOptions(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindSceneRuleToEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindSceneRuleToEdgeInstanceResponse(callApi(params, req, runtime));
}

BindSceneRuleToEdgeInstanceResponse Alibabacloud_Iot20180120::Client::bindSceneRuleToEdgeInstance(shared_ptr<BindSceneRuleToEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindSceneRuleToEdgeInstanceWithOptions(request, runtime);
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJobWithOptions(shared_ptr<CancelJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelJobResponse(callApi(params, req, runtime));
}

CancelJobResponse Alibabacloud_Iot20180120::Client::cancelJob(shared_ptr<CancelJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelJobWithOptions(request, runtime);
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJobWithOptions(shared_ptr<CancelOTAStrategyByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOTAStrategyByJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOTAStrategyByJobResponse(callApi(params, req, runtime));
}

CancelOTAStrategyByJobResponse Alibabacloud_Iot20180120::Client::cancelOTAStrategyByJob(shared_ptr<CancelOTAStrategyByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTAStrategyByJobWithOptions(request, runtime);
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDeviceWithOptions(shared_ptr<CancelOTATaskByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOTATaskByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOTATaskByDeviceResponse(callApi(params, req, runtime));
}

CancelOTATaskByDeviceResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByDevice(shared_ptr<CancelOTATaskByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByDeviceWithOptions(request, runtime);
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJobWithOptions(shared_ptr<CancelOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancelInProgressTask)) {
    query->insert(pair<string, bool>("CancelInProgressTask", *request->cancelInProgressTask));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancelNotifiedTask)) {
    query->insert(pair<string, bool>("CancelNotifiedTask", *request->cancelNotifiedTask));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancelQueuedTask)) {
    query->insert(pair<string, bool>("CancelQueuedTask", *request->cancelQueuedTask));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancelScheduledTask)) {
    query->insert(pair<string, bool>("CancelScheduledTask", *request->cancelScheduledTask));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->cancelUnconfirmedTask)) {
    query->insert(pair<string, bool>("CancelUnconfirmedTask", *request->cancelUnconfirmedTask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelOTATaskByJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelOTATaskByJobResponse(callApi(params, req, runtime));
}

CancelOTATaskByJobResponse Alibabacloud_Iot20180120::Client::cancelOTATaskByJob(shared_ptr<CancelOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelOTATaskByJobWithOptions(request, runtime);
}

CancelReleaseProductResponse Alibabacloud_Iot20180120::Client::cancelReleaseProductWithOptions(shared_ptr<CancelReleaseProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelReleaseProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelReleaseProductResponse(callApi(params, req, runtime));
}

CancelReleaseProductResponse Alibabacloud_Iot20180120::Client::cancelReleaseProduct(shared_ptr<CancelReleaseProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelReleaseProductWithOptions(request, runtime);
}

CheckBindLicenseDeviceProgressResponse Alibabacloud_Iot20180120::Client::checkBindLicenseDeviceProgressWithOptions(shared_ptr<CheckBindLicenseDeviceProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkProgressId)) {
    query->insert(pair<string, string>("CheckProgressId", *request->checkProgressId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckBindLicenseDeviceProgress"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckBindLicenseDeviceProgressResponse(callApi(params, req, runtime));
}

CheckBindLicenseDeviceProgressResponse Alibabacloud_Iot20180120::Client::checkBindLicenseDeviceProgress(shared_ptr<CheckBindLicenseDeviceProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkBindLicenseDeviceProgressWithOptions(request, runtime);
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigsWithOptions(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearEdgeInstanceDriverConfigs"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearEdgeInstanceDriverConfigsResponse(callApi(params, req, runtime));
}

ClearEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::clearEdgeInstanceDriverConfigs(shared_ptr<ClearEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

CloseDeviceTunnelResponse Alibabacloud_Iot20180120::Client::closeDeviceTunnelWithOptions(shared_ptr<CloseDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tunnelId)) {
    query->insert(pair<string, string>("TunnelId", *request->tunnelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseDeviceTunnelResponse(callApi(params, req, runtime));
}

CloseDeviceTunnelResponse Alibabacloud_Iot20180120::Client::closeDeviceTunnel(shared_ptr<CloseDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeDeviceTunnelWithOptions(request, runtime);
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeploymentWithOptions(shared_ptr<CloseEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseEdgeInstanceDeployment"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseEdgeInstanceDeploymentResponse(callApi(params, req, runtime));
}

CloseEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::closeEdgeInstanceDeployment(shared_ptr<CloseEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeEdgeInstanceDeploymentWithOptions(request, runtime);
}

ConfirmOTATaskResponse Alibabacloud_Iot20180120::Client::confirmOTATaskWithOptions(shared_ptr<ConfirmOTATaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskId)) {
    query->insert(pair<string, vector<string>>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmOTATask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmOTATaskResponse(callApi(params, req, runtime));
}

ConfirmOTATaskResponse Alibabacloud_Iot20180120::Client::confirmOTATask(shared_ptr<ConfirmOTATaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmOTATaskWithOptions(request, runtime);
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModelWithOptions(shared_ptr<CopyThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceModelVersion)) {
    query->insert(pair<string, string>("SourceModelVersion", *request->sourceModelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceProductKey)) {
    query->insert(pair<string, string>("SourceProductKey", *request->sourceProductKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetProductKey)) {
    query->insert(pair<string, string>("TargetProductKey", *request->targetProductKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyThingModelResponse(callApi(params, req, runtime));
}

CopyThingModelResponse Alibabacloud_Iot20180120::Client::copyThingModel(shared_ptr<CopyThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyThingModelWithOptions(request, runtime);
}

CountSpeechBroadcastHourResponse Alibabacloud_Iot20180120::Client::countSpeechBroadcastHourWithOptions(shared_ptr<CountSpeechBroadcastHourRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryDateTimeHour)) {
    query->insert(pair<string, string>("QueryDateTimeHour", *request->queryDateTimeHour));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskCode)) {
    body->insert(pair<string, string>("ShareTaskCode", *request->shareTaskCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountSpeechBroadcastHour"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountSpeechBroadcastHourResponse(callApi(params, req, runtime));
}

CountSpeechBroadcastHourResponse Alibabacloud_Iot20180120::Client::countSpeechBroadcastHour(shared_ptr<CountSpeechBroadcastHourRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countSpeechBroadcastHourWithOptions(request, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerGroupResponse(callApi(params, req, runtime));
}

CreateConsumerGroupResponse Alibabacloud_Iot20180120::Client::createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupWithOptions(request, runtime);
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelationWithOptions(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupId)) {
    query->insert(pair<string, string>("ConsumerGroupId", *request->consumerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerGroupSubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerGroupSubscribeRelationResponse(callApi(params, req, runtime));
}

CreateConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createConsumerGroupSubscribeRelation(shared_ptr<CreateConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIServiceWithOptions(shared_ptr<CreateDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPath)) {
    body->insert(pair<string, string>("ApiPath", *request->apiPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    body->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->displayName)) {
    body->insert(pair<string, string>("DisplayName", *request->displayName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originSql)) {
    body->insert(pair<string, string>("OriginSql", *request->originSql));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataAPIServiceRequestRequestParam>>(request->requestParam)) {
    body->insert(pair<string, vector<CreateDataAPIServiceRequestRequestParam>>("RequestParam", *request->requestParam));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDataAPIServiceRequestResponseParam>>(request->responseParam)) {
    body->insert(pair<string, vector<CreateDataAPIServiceRequestResponseParam>>("ResponseParam", *request->responseParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateSql)) {
    body->insert(pair<string, string>("TemplateSql", *request->templateSql));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataAPIService"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataAPIServiceResponse(callApi(params, req, runtime));
}

CreateDataAPIServiceResponse Alibabacloud_Iot20180120::Client::createDataAPIService(shared_ptr<CreateDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataAPIServiceWithOptions(request, runtime);
}

CreateDataSourceItemResponse Alibabacloud_Iot20180120::Client::createDataSourceItemWithOptions(shared_ptr<CreateDataSourceItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scopeType)) {
    query->insert(pair<string, string>("ScopeType", *request->scopeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDataSourceItem"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDataSourceItemResponse(callApi(params, req, runtime));
}

CreateDataSourceItemResponse Alibabacloud_Iot20180120::Client::createDataSourceItem(shared_ptr<CreateDataSourceItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDataSourceItemWithOptions(request, runtime);
}

CreateDestinationResponse Alibabacloud_Iot20180120::Client::createDestinationWithOptions(shared_ptr<CreateDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configuration)) {
    query->insert(pair<string, string>("Configuration", *request->configuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDestinationResponse(callApi(params, req, runtime));
}

CreateDestinationResponse Alibabacloud_Iot20180120::Client::createDestination(shared_ptr<CreateDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDestinationWithOptions(request, runtime);
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJobWithOptions(shared_ptr<CreateDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    body->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceInstanceId)) {
    body->insert(pair<string, string>("SourceInstanceId", *request->sourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->strategy)) {
    body->insert(pair<string, long>("Strategy", *request->strategy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetAliyunId)) {
    body->insert(pair<string, string>("TargetAliyunId", *request->targetAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateDeviceDistributeJobRequestTargetInstanceConfig>>(request->targetInstanceConfig)) {
    body->insert(pair<string, vector<CreateDeviceDistributeJobRequestTargetInstanceConfig>>("TargetInstanceConfig", *request->targetInstanceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    body->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceDistributeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceDistributeJobResponse(callApi(params, req, runtime));
}

CreateDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::createDeviceDistributeJob(shared_ptr<CreateDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceDistributeJobWithOptions(request, runtime);
}

CreateDeviceDynamicGroupResponse Alibabacloud_Iot20180120::Client::createDeviceDynamicGroupWithOptions(shared_ptr<CreateDeviceDynamicGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicGroupExpression)) {
    query->insert(pair<string, string>("DynamicGroupExpression", *request->dynamicGroupExpression));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupDesc)) {
    query->insert(pair<string, string>("GroupDesc", *request->groupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceDynamicGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceDynamicGroupResponse(callApi(params, req, runtime));
}

CreateDeviceDynamicGroupResponse Alibabacloud_Iot20180120::Client::createDeviceDynamicGroup(shared_ptr<CreateDeviceDynamicGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceDynamicGroupWithOptions(request, runtime);
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroupWithOptions(shared_ptr<CreateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupDesc)) {
    query->insert(pair<string, string>("GroupDesc", *request->groupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->superGroupId)) {
    query->insert(pair<string, string>("SuperGroupId", *request->superGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceGroupResponse(callApi(params, req, runtime));
}

CreateDeviceGroupResponse Alibabacloud_Iot20180120::Client::createDeviceGroup(shared_ptr<CreateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceGroupWithOptions(request, runtime);
}

CreateDeviceTunnelResponse Alibabacloud_Iot20180120::Client::createDeviceTunnelWithOptions(shared_ptr<CreateDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udi)) {
    query->insert(pair<string, string>("Udi", *request->udi));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDeviceTunnelResponse(callApi(params, req, runtime));
}

CreateDeviceTunnelResponse Alibabacloud_Iot20180120::Client::createDeviceTunnel(shared_ptr<CreateDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDeviceTunnelWithOptions(request, runtime);
}

CreateDownloadDataJobResponse Alibabacloud_Iot20180120::Client::createDownloadDataJobWithOptions(shared_ptr<CreateDownloadDataJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateDownloadDataJobShrinkRequest> request = make_shared<CreateDownloadDataJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->context)) {
    request->contextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->context, make_shared<string>("Context"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->fileConfig)) {
    request->fileConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->fileConfig, make_shared<string>("FileConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadDataType)) {
    query->insert(pair<string, string>("DownloadDataType", *request->downloadDataType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileConfigShrink)) {
    query->insert(pair<string, string>("FileConfig", *request->fileConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contextShrink)) {
    body->insert(pair<string, string>("Context", *request->contextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDownloadDataJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDownloadDataJobResponse(callApi(params, req, runtime));
}

CreateDownloadDataJobResponse Alibabacloud_Iot20180120::Client::createDownloadDataJob(shared_ptr<CreateDownloadDataJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDownloadDataJobWithOptions(request, runtime);
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriverWithOptions(shared_ptr<CreateEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cpuArch)) {
    query->insert(pair<string, string>("CpuArch", *request->cpuArch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverName)) {
    query->insert(pair<string, string>("DriverName", *request->driverName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverProtocol)) {
    query->insert(pair<string, string>("DriverProtocol", *request->driverProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBuiltIn)) {
    query->insert(pair<string, bool>("IsBuiltIn", *request->isBuiltIn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    query->insert(pair<string, string>("Runtime", *request->runtime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeDriverResponse(callApi(params, req, runtime));
}

CreateEdgeDriverResponse Alibabacloud_Iot20180120::Client::createEdgeDriver(shared_ptr<CreateEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverWithOptions(request, runtime);
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersionWithOptions(shared_ptr<CreateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->argument)) {
    query->insert(pair<string, string>("Argument", *request->argument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configCheckRule)) {
    query->insert(pair<string, string>("ConfigCheckRule", *request->configCheckRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerConfig)) {
    query->insert(pair<string, string>("ContainerConfig", *request->containerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverConfig)) {
    query->insert(pair<string, string>("DriverConfig", *request->driverConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeVersion)) {
    query->insert(pair<string, string>("EdgeVersion", *request->edgeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceConfig)) {
    query->insert(pair<string, string>("SourceConfig", *request->sourceConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeDriverVersionResponse(callApi(params, req, runtime));
}

CreateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::createEdgeDriverVersion(shared_ptr<CreateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeDriverVersionWithOptions(request, runtime);
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceWithOptions(shared_ptr<CreateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spec)) {
    query->insert(pair<string, long>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeInstanceResponse(callApi(params, req, runtime));
}

CreateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::createEdgeInstance(shared_ptr<CreateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceWithOptions(request, runtime);
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannelWithOptions(shared_ptr<CreateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEdgeInstanceChannelRequestConfigs>>(request->configs)) {
    query->insert(pair<string, vector<CreateEdgeInstanceChannelRequestConfigs>>("Configs", *request->configs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeInstanceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeInstanceChannelResponse(callApi(params, req, runtime));
}

CreateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceChannel(shared_ptr<CreateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceChannelWithOptions(request, runtime);
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeploymentWithOptions(shared_ptr<CreateEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeInstanceDeployment"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeInstanceDeploymentResponse(callApi(params, req, runtime));
}

CreateEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceDeployment(shared_ptr<CreateEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceDeploymentWithOptions(request, runtime);
}

CreateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceMessageRoutingWithOptions(shared_ptr<CreateEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceData)) {
    query->insert(pair<string, string>("SourceData", *request->sourceData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetData)) {
    query->insert(pair<string, string>("TargetData", *request->targetData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetIotHubQos)) {
    query->insert(pair<string, long>("TargetIotHubQos", *request->targetIotHubQos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicFilter)) {
    query->insert(pair<string, string>("TopicFilter", *request->topicFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeInstanceMessageRouting"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeInstanceMessageRoutingResponse(callApi(params, req, runtime));
}

CreateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::createEdgeInstanceMessageRouting(shared_ptr<CreateEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddressWithOptions(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceVersion)) {
    query->insert(pair<string, string>("ResourceVersion", *request->resourceVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeOssPreSignedAddress"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEdgeOssPreSignedAddressResponse(callApi(params, req, runtime));
}

CreateEdgeOssPreSignedAddressResponse Alibabacloud_Iot20180120::Client::createEdgeOssPreSignedAddress(shared_ptr<CreateEdgeOssPreSignedAddressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeOssPreSignedAddressWithOptions(request, runtime);
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateJobShrinkRequest> request = make_shared<CreateJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->jobFile)) {
    request->jobFileShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->jobFile, make_shared<string>("JobFile"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->rolloutConfig)) {
    request->rolloutConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rolloutConfig, make_shared<string>("RolloutConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->targetConfig)) {
    request->targetConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targetConfig, make_shared<string>("TargetConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->timeoutConfig)) {
    request->timeoutConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timeoutConfig, make_shared<string>("TimeoutConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobDocument)) {
    query->insert(pair<string, string>("JobDocument", *request->jobDocument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobFileShrink)) {
    query->insert(pair<string, string>("JobFile", *request->jobFileShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rolloutConfigShrink)) {
    query->insert(pair<string, string>("RolloutConfig", *request->rolloutConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scheduledTime)) {
    query->insert(pair<string, long>("ScheduledTime", *request->scheduledTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetConfigShrink)) {
    query->insert(pair<string, string>("TargetConfig", *request->targetConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeoutConfigShrink)) {
    query->insert(pair<string, string>("TimeoutConfig", *request->timeoutConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobResponse(callApi(params, req, runtime));
}

CreateJobResponse Alibabacloud_Iot20180120::Client::createJob(shared_ptr<CreateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobWithOptions(request, runtime);
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTaskWithOptions(shared_ptr<CreateLoRaNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoRaNodesTaskRequestDeviceInfo>>(request->deviceInfo)) {
    query->insert(pair<string, vector<CreateLoRaNodesTaskRequestDeviceInfo>>("DeviceInfo", *request->deviceInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoRaNodesTask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLoRaNodesTaskResponse(callApi(params, req, runtime));
}

CreateLoRaNodesTaskResponse Alibabacloud_Iot20180120::Client::createLoRaNodesTask(shared_ptr<CreateLoRaNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoRaNodesTaskWithOptions(request, runtime);
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJobWithOptions(shared_ptr<CreateOTADynamicUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadProtocol)) {
    query->insert(pair<string, string>("DownloadProtocol", *request->downloadProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dynamicMode)) {
    query->insert(pair<string, long>("DynamicMode", *request->dynamicMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPerMinute)) {
    query->insert(pair<string, long>("MaximumPerMinute", *request->maximumPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiModuleMode)) {
    query->insert(pair<string, bool>("MultiModuleMode", *request->multiModuleMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needConfirm)) {
    query->insert(pair<string, bool>("NeedConfirm", *request->needConfirm));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needPush)) {
    query->insert(pair<string, bool>("NeedPush", *request->needPush));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->overwriteMode)) {
    query->insert(pair<string, long>("OverwriteMode", *request->overwriteMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryCount)) {
    query->insert(pair<string, long>("RetryCount", *request->retryCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryInterval)) {
    query->insert(pair<string, long>("RetryInterval", *request->retryInterval));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->srcVersion)) {
    query->insert(pair<string, vector<string>>("SrcVersion", *request->srcVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOTADynamicUpgradeJobRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateOTADynamicUpgradeJobRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOTADynamicUpgradeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOTADynamicUpgradeJobResponse(callApi(params, req, runtime));
}

CreateOTADynamicUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTADynamicUpgradeJob(shared_ptr<CreateOTADynamicUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTADynamicUpgradeJobWithOptions(request, runtime);
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmwareWithOptions(shared_ptr<CreateOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destVersion)) {
    query->insert(pair<string, string>("DestVersion", *request->destVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareDesc)) {
    query->insert(pair<string, string>("FirmwareDesc", *request->firmwareDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareName)) {
    query->insert(pair<string, string>("FirmwareName", *request->firmwareName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareSign)) {
    query->insert(pair<string, string>("FirmwareSign", *request->firmwareSign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->firmwareSize)) {
    query->insert(pair<string, long>("FirmwareSize", *request->firmwareSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareUrl)) {
    query->insert(pair<string, string>("FirmwareUrl", *request->firmwareUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOTAFirmwareRequestMultiFiles>>(request->multiFiles)) {
    query->insert(pair<string, vector<CreateOTAFirmwareRequestMultiFiles>>("MultiFiles", *request->multiFiles));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needToVerify)) {
    query->insert(pair<string, bool>("NeedToVerify", *request->needToVerify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signMethod)) {
    query->insert(pair<string, string>("SignMethod", *request->signMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcVersion)) {
    query->insert(pair<string, string>("SrcVersion", *request->srcVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->udi)) {
    query->insert(pair<string, string>("Udi", *request->udi));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOTAFirmware"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOTAFirmwareResponse(callApi(params, req, runtime));
}

CreateOTAFirmwareResponse Alibabacloud_Iot20180120::Client::createOTAFirmware(shared_ptr<CreateOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAFirmwareWithOptions(request, runtime);
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModuleWithOptions(shared_ptr<CreateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOTAModule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOTAModuleResponse(callApi(params, req, runtime));
}

CreateOTAModuleResponse Alibabacloud_Iot20180120::Client::createOTAModule(shared_ptr<CreateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAModuleWithOptions(request, runtime);
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJobWithOptions(shared_ptr<CreateOTAStaticUpgradeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnListFileUrl)) {
    query->insert(pair<string, string>("DnListFileUrl", *request->dnListFileUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadProtocol)) {
    query->insert(pair<string, string>("DownloadProtocol", *request->downloadProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grayPercent)) {
    query->insert(pair<string, string>("GrayPercent", *request->grayPercent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPerMinute)) {
    query->insert(pair<string, long>("MaximumPerMinute", *request->maximumPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->multiModuleMode)) {
    query->insert(pair<string, bool>("MultiModuleMode", *request->multiModuleMode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needConfirm)) {
    query->insert(pair<string, bool>("NeedConfirm", *request->needConfirm));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needPush)) {
    query->insert(pair<string, bool>("NeedPush", *request->needPush));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->overwriteMode)) {
    query->insert(pair<string, long>("OverwriteMode", *request->overwriteMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryCount)) {
    query->insert(pair<string, long>("RetryCount", *request->retryCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->retryInterval)) {
    query->insert(pair<string, long>("RetryInterval", *request->retryInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scheduleFinishTime)) {
    query->insert(pair<string, long>("ScheduleFinishTime", *request->scheduleFinishTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scheduleTime)) {
    query->insert(pair<string, long>("ScheduleTime", *request->scheduleTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->srcVersion)) {
    query->insert(pair<string, vector<string>>("SrcVersion", *request->srcVersion));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOTAStaticUpgradeJobRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateOTAStaticUpgradeJobRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targetDeviceName)) {
    query->insert(pair<string, vector<string>>("TargetDeviceName", *request->targetDeviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetSelection)) {
    query->insert(pair<string, string>("TargetSelection", *request->targetSelection));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOTAStaticUpgradeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOTAStaticUpgradeJobResponse(callApi(params, req, runtime));
}

CreateOTAStaticUpgradeJobResponse Alibabacloud_Iot20180120::Client::createOTAStaticUpgradeJob(shared_ptr<CreateOTAStaticUpgradeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAStaticUpgradeJobWithOptions(request, runtime);
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJobWithOptions(shared_ptr<CreateOTAVerifyJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadProtocol)) {
    query->insert(pair<string, string>("DownloadProtocol", *request->downloadProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needConfirm)) {
    query->insert(pair<string, bool>("NeedConfirm", *request->needConfirm));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needPush)) {
    query->insert(pair<string, bool>("NeedPush", *request->needPush));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateOTAVerifyJobRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<CreateOTAVerifyJobRequestTag>>("Tag", *request->tag));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->targetDeviceName)) {
    query->insert(pair<string, vector<string>>("TargetDeviceName", *request->targetDeviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeoutInMinutes)) {
    query->insert(pair<string, long>("TimeoutInMinutes", *request->timeoutInMinutes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOTAVerifyJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateOTAVerifyJobResponse(callApi(params, req, runtime));
}

CreateOTAVerifyJobResponse Alibabacloud_Iot20180120::Client::createOTAVerifyJob(shared_ptr<CreateOTAVerifyJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOTAVerifyJobWithOptions(request, runtime);
}

CreateParserResponse Alibabacloud_Iot20180120::Client::createParserWithOptions(shared_ptr<CreateParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateParserResponse(callApi(params, req, runtime));
}

CreateParserResponse Alibabacloud_Iot20180120::Client::createParser(shared_ptr<CreateParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createParserWithOptions(request, runtime);
}

CreateParserDataSourceResponse Alibabacloud_Iot20180120::Client::createParserDataSourceWithOptions(shared_ptr<CreateParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateParserDataSourceResponse(callApi(params, req, runtime));
}

CreateParserDataSourceResponse Alibabacloud_Iot20180120::Client::createParserDataSource(shared_ptr<CreateParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createParserDataSourceWithOptions(request, runtime);
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProductWithOptions(shared_ptr<CreateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunCommodityCode)) {
    query->insert(pair<string, string>("AliyunCommodityCode", *request->aliyunCommodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authType)) {
    query->insert(pair<string, string>("AuthType", *request->authType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryKey)) {
    query->insert(pair<string, string>("CategoryKey", *request->categoryKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataFormat)) {
    query->insert(pair<string, long>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->id2)) {
    query->insert(pair<string, bool>("Id2", *request->id2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->joinPermissionId)) {
    query->insert(pair<string, string>("JoinPermissionId", *request->joinPermissionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->netType)) {
    query->insert(pair<string, string>("NetType", *request->netType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nodeType)) {
    query->insert(pair<string, long>("NodeType", *request->nodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocolType)) {
    query->insert(pair<string, string>("ProtocolType", *request->protocolType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->publishAuto)) {
    query->insert(pair<string, bool>("PublishAuto", *request->publishAuto));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validateType)) {
    query->insert(pair<string, long>("ValidateType", *request->validateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductResponse(callApi(params, req, runtime));
}

CreateProductResponse Alibabacloud_Iot20180120::Client::createProduct(shared_ptr<CreateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductWithOptions(request, runtime);
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJobWithOptions(shared_ptr<CreateProductDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceInstanceId)) {
    query->insert(pair<string, string>("SourceInstanceId", *request->sourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetAliyunId)) {
    query->insert(pair<string, string>("TargetAliyunId", *request->targetAliyunId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    query->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductDistributeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductDistributeJobResponse(callApi(params, req, runtime));
}

CreateProductDistributeJobResponse Alibabacloud_Iot20180120::Client::createProductDistributeJob(shared_ptr<CreateProductDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductDistributeJobWithOptions(request, runtime);
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTagsWithOptions(shared_ptr<CreateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateProductTagsRequestProductTag>>(request->productTag)) {
    query->insert(pair<string, vector<CreateProductTagsRequestProductTag>>("ProductTag", *request->productTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductTagsResponse(callApi(params, req, runtime));
}

CreateProductTagsResponse Alibabacloud_Iot20180120::Client::createProductTags(shared_ptr<CreateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTagsWithOptions(request, runtime);
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopicWithOptions(shared_ptr<CreateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    query->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicShortName)) {
    query->insert(pair<string, string>("TopicShortName", *request->topicShortName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProductTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateProductTopicResponse(callApi(params, req, runtime));
}

CreateProductTopicResponse Alibabacloud_Iot20180120::Client::createProductTopic(shared_ptr<CreateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProductTopicWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataType)) {
    query->insert(pair<string, string>("DataType", *request->dataType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDesc)) {
    query->insert(pair<string, string>("RuleDesc", *request->ruleDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->select)) {
    query->insert(pair<string, string>("Select", *request->select));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shortTopic)) {
    query->insert(pair<string, string>("ShortTopic", *request->shortTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topicType)) {
    query->insert(pair<string, long>("TopicType", *request->topicType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->where)) {
    query->insert(pair<string, string>("Where", *request->where));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRuleResponse(callApi(params, req, runtime));
}

CreateRuleResponse Alibabacloud_Iot20180120::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleActionWithOptions(shared_ptr<CreateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configuration)) {
    query->insert(pair<string, string>("Configuration", *request->configuration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->errorActionFlag)) {
    query->insert(pair<string, bool>("ErrorActionFlag", *request->errorActionFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRuleAction"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRuleActionResponse(callApi(params, req, runtime));
}

CreateRuleActionResponse Alibabacloud_Iot20180120::Client::createRuleAction(shared_ptr<CreateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleActionWithOptions(request, runtime);
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRuleWithOptions(shared_ptr<CreateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleContent)) {
    query->insert(pair<string, string>("RuleContent", *request->ruleContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDescription)) {
    query->insert(pair<string, string>("RuleDescription", *request->ruleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSceneRuleResponse(callApi(params, req, runtime));
}

CreateSceneRuleResponse Alibabacloud_Iot20180120::Client::createSceneRule(shared_ptr<CreateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneRuleWithOptions(request, runtime);
}

CreateSchedulePeriodResponse Alibabacloud_Iot20180120::Client::createSchedulePeriodWithOptions(shared_ptr<CreateSchedulePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeContent)) {
    body->insert(pair<string, string>("SoundCodeContent", *request->soundCodeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSchedulePeriod"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSchedulePeriodResponse(callApi(params, req, runtime));
}

CreateSchedulePeriodResponse Alibabacloud_Iot20180120::Client::createSchedulePeriod(shared_ptr<CreateSchedulePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSchedulePeriodWithOptions(request, runtime);
}

CreateSoundCodeResponse Alibabacloud_Iot20180120::Client::createSoundCodeWithOptions(shared_ptr<CreateSoundCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openType)) {
    body->insert(pair<string, string>("OpenType", *request->openType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeContent)) {
    body->insert(pair<string, string>("SoundCodeContent", *request->soundCodeContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSoundCode"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSoundCodeResponse(callApi(params, req, runtime));
}

CreateSoundCodeResponse Alibabacloud_Iot20180120::Client::createSoundCode(shared_ptr<CreateSoundCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSoundCodeWithOptions(request, runtime);
}

CreateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::createSoundCodeLabelWithOptions(shared_ptr<CreateSoundCodeLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSoundCodeLabel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSoundCodeLabelResponse(callApi(params, req, runtime));
}

CreateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::createSoundCodeLabel(shared_ptr<CreateSoundCodeLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSoundCodeLabelWithOptions(request, runtime);
}

CreateSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::createSoundCodeScheduleWithOptions(shared_ptr<CreateSoundCodeScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->openType)) {
    body->insert(pair<string, string>("OpenType", *request->openType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSoundCodeSchedule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSoundCodeScheduleResponse(callApi(params, req, runtime));
}

CreateSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::createSoundCodeSchedule(shared_ptr<CreateSoundCodeScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSoundCodeScheduleWithOptions(request, runtime);
}

CreateSpeechResponse Alibabacloud_Iot20180120::Client::createSpeechWithOptions(shared_ptr<CreateSpeechRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSpeechShrinkRequest> request = make_shared<CreateSpeechShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->soundCodeConfig)) {
    request->soundCodeConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->soundCodeConfig, make_shared<string>("SoundCodeConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCode)) {
    body->insert(pair<string, string>("BizCode", *request->bizCode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSoundCode)) {
    body->insert(pair<string, bool>("EnableSoundCode", *request->enableSoundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeConfigShrink)) {
    body->insert(pair<string, string>("SoundCodeConfig", *request->soundCodeConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    body->insert(pair<string, long>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechType)) {
    body->insert(pair<string, string>("SpeechType", *request->speechType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    body->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    body->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSpeechResponse(callApi(params, req, runtime));
}

CreateSpeechResponse Alibabacloud_Iot20180120::Client::createSpeech(shared_ptr<CreateSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSpeechWithOptions(request, runtime);
}

CreateStudioAppDomainOpenResponse Alibabacloud_Iot20180120::Client::createStudioAppDomainOpenWithOptions(shared_ptr<CreateStudioAppDomainOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->host)) {
    body->insert(pair<string, string>("Host", *request->host));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateStudioAppDomainOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateStudioAppDomainOpenResponse(callApi(params, req, runtime));
}

CreateStudioAppDomainOpenResponse Alibabacloud_Iot20180120::Client::createStudioAppDomainOpen(shared_ptr<CreateStudioAppDomainOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createStudioAppDomainOpenWithOptions(request, runtime);
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelationWithOptions(shared_ptr<CreateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->consumerGroupIds)) {
    query->insert(pair<string, vector<string>>("ConsumerGroupIds", *request->consumerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceDataFlag)) {
    query->insert(pair<string, bool>("DeviceDataFlag", *request->deviceDataFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceLifeCycleFlag)) {
    query->insert(pair<string, bool>("DeviceLifeCycleFlag", *request->deviceLifeCycleFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceStatusChangeFlag)) {
    query->insert(pair<string, bool>("DeviceStatusChangeFlag", *request->deviceStatusChangeFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceTagFlag)) {
    query->insert(pair<string, bool>("DeviceTagFlag", *request->deviceTagFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceTopoLifeCycleFlag)) {
    query->insert(pair<string, bool>("DeviceTopoLifeCycleFlag", *request->deviceTopoLifeCycleFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->foundDeviceListFlag)) {
    query->insert(pair<string, bool>("FoundDeviceListFlag", *request->foundDeviceListFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mnsConfiguration)) {
    query->insert(pair<string, string>("MnsConfiguration", *request->mnsConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaEventFlag)) {
    query->insert(pair<string, bool>("OtaEventFlag", *request->otaEventFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaJobFlag)) {
    query->insert(pair<string, bool>("OtaJobFlag", *request->otaJobFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaVersionFlag)) {
    query->insert(pair<string, bool>("OtaVersionFlag", *request->otaVersionFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thingHistoryFlag)) {
    query->insert(pair<string, bool>("ThingHistoryFlag", *request->thingHistoryFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscribeRelationResponse(callApi(params, req, runtime));
}

CreateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::createSubscribeRelation(shared_ptr<CreateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscribeRelationWithOptions(request, runtime);
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModelWithOptions(shared_ptr<CreateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockName)) {
    query->insert(pair<string, string>("FunctionBlockName", *request->functionBlockName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thingModelJson)) {
    query->insert(pair<string, string>("ThingModelJson", *request->thingModelJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateThingModelResponse(callApi(params, req, runtime));
}

CreateThingModelResponse Alibabacloud_Iot20180120::Client::createThingModel(shared_ptr<CreateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingModelWithOptions(request, runtime);
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScriptWithOptions(shared_ptr<CreateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptContent)) {
    query->insert(pair<string, string>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptType)) {
    query->insert(pair<string, string>("ScriptType", *request->scriptType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateThingScript"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateThingScriptResponse(callApi(params, req, runtime));
}

CreateThingScriptResponse Alibabacloud_Iot20180120::Client::createThingScript(shared_ptr<CreateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createThingScriptWithOptions(request, runtime);
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTableWithOptions(shared_ptr<CreateTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dstTopic)) {
    query->insert(pair<string, vector<string>>("DstTopic", *request->dstTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcTopic)) {
    query->insert(pair<string, string>("SrcTopic", *request->srcTopic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTopicRouteTable"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTopicRouteTableResponse(callApi(params, req, runtime));
}

CreateTopicRouteTableResponse Alibabacloud_Iot20180120::Client::createTopicRouteTable(shared_ptr<CreateTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTopicRouteTableWithOptions(request, runtime);
}

DeleteClientIdsResponse Alibabacloud_Iot20180120::Client::deleteClientIdsWithOptions(shared_ptr<DeleteClientIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientIds"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteClientIdsResponse(callApi(params, req, runtime));
}

DeleteClientIdsResponse Alibabacloud_Iot20180120::Client::deleteClientIds(shared_ptr<DeleteClientIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientIdsWithOptions(request, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerGroupResponse(callApi(params, req, runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupWithOptions(request, runtime);
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelationWithOptions(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupId)) {
    query->insert(pair<string, string>("ConsumerGroupId", *request->consumerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerGroupSubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerGroupSubscribeRelationResponse(callApi(params, req, runtime));
}

DeleteConsumerGroupSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteConsumerGroupSubscribeRelation(shared_ptr<DeleteConsumerGroupSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupSubscribeRelationWithOptions(request, runtime);
}

DeleteDataSourceItemResponse Alibabacloud_Iot20180120::Client::deleteDataSourceItemWithOptions(shared_ptr<DeleteDataSourceItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceItemId)) {
    query->insert(pair<string, long>("DataSourceItemId", *request->dataSourceItemId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSourceItem"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceItemResponse(callApi(params, req, runtime));
}

DeleteDataSourceItemResponse Alibabacloud_Iot20180120::Client::deleteDataSourceItem(shared_ptr<DeleteDataSourceItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceItemWithOptions(request, runtime);
}

DeleteDestinationResponse Alibabacloud_Iot20180120::Client::deleteDestinationWithOptions(shared_ptr<DeleteDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationId)) {
    query->insert(pair<string, long>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDestinationResponse(callApi(params, req, runtime));
}

DeleteDestinationResponse Alibabacloud_Iot20180120::Client::deleteDestination(shared_ptr<DeleteDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDestinationWithOptions(request, runtime);
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDeviceWithOptions(shared_ptr<DeleteDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceResponse(callApi(params, req, runtime));
}

DeleteDeviceResponse Alibabacloud_Iot20180120::Client::deleteDevice(shared_ptr<DeleteDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceWithOptions(request, runtime);
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJobWithOptions(shared_ptr<DeleteDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceDistributeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceDistributeJobResponse(callApi(params, req, runtime));
}

DeleteDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::deleteDeviceDistributeJob(shared_ptr<DeleteDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceDistributeJobWithOptions(request, runtime);
}

DeleteDeviceDynamicGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceDynamicGroupWithOptions(shared_ptr<DeleteDeviceDynamicGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceDynamicGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceDynamicGroupResponse(callApi(params, req, runtime));
}

DeleteDeviceDynamicGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceDynamicGroup(shared_ptr<DeleteDeviceDynamicGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceDynamicGroupWithOptions(request, runtime);
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFileWithOptions(shared_ptr<DeleteDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceFile"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceFileResponse(callApi(params, req, runtime));
}

DeleteDeviceFileResponse Alibabacloud_Iot20180120::Client::deleteDeviceFile(shared_ptr<DeleteDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceFileWithOptions(request, runtime);
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroupWithOptions(shared_ptr<DeleteDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceGroupResponse(callApi(params, req, runtime));
}

DeleteDeviceGroupResponse Alibabacloud_Iot20180120::Client::deleteDeviceGroup(shared_ptr<DeleteDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceGroupWithOptions(request, runtime);
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDevicePropWithOptions(shared_ptr<DeleteDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->propKey)) {
    query->insert(pair<string, string>("PropKey", *request->propKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceProp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDevicePropResponse(callApi(params, req, runtime));
}

DeleteDevicePropResponse Alibabacloud_Iot20180120::Client::deleteDeviceProp(shared_ptr<DeleteDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDevicePropWithOptions(request, runtime);
}

DeleteDeviceSpeechResponse Alibabacloud_Iot20180120::Client::deleteDeviceSpeechWithOptions(shared_ptr<DeleteDeviceSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<DeleteDeviceSpeechRequestDeviceSpeechList>>(request->deviceSpeechList)) {
    body->insert(pair<string, vector<DeleteDeviceSpeechRequestDeviceSpeechList>>("DeviceSpeechList", *request->deviceSpeechList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceSpeechResponse(callApi(params, req, runtime));
}

DeleteDeviceSpeechResponse Alibabacloud_Iot20180120::Client::deleteDeviceSpeech(shared_ptr<DeleteDeviceSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceSpeechWithOptions(request, runtime);
}

DeleteDeviceTunnelResponse Alibabacloud_Iot20180120::Client::deleteDeviceTunnelWithOptions(shared_ptr<DeleteDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tunnelId)) {
    query->insert(pair<string, string>("TunnelId", *request->tunnelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDeviceTunnelResponse(callApi(params, req, runtime));
}

DeleteDeviceTunnelResponse Alibabacloud_Iot20180120::Client::deleteDeviceTunnel(shared_ptr<DeleteDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDeviceTunnelWithOptions(request, runtime);
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverWithOptions(shared_ptr<DeleteEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEdgeDriverResponse(callApi(params, req, runtime));
}

DeleteEdgeDriverResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriver(shared_ptr<DeleteEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverWithOptions(request, runtime);
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersionWithOptions(shared_ptr<DeleteEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEdgeDriverVersionResponse(callApi(params, req, runtime));
}

DeleteEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::deleteEdgeDriverVersion(shared_ptr<DeleteEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeDriverVersionWithOptions(request, runtime);
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceWithOptions(shared_ptr<DeleteEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEdgeInstanceResponse(callApi(params, req, runtime));
}

DeleteEdgeInstanceResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstance(shared_ptr<DeleteEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeInstanceWithOptions(request, runtime);
}

DeleteEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceMessageRoutingWithOptions(shared_ptr<DeleteEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeInstanceMessageRouting"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEdgeInstanceMessageRoutingResponse(callApi(params, req, runtime));
}

DeleteEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::deleteEdgeInstanceMessageRouting(shared_ptr<DeleteEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJobWithOptions(shared_ptr<DeleteJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteJobResponse(callApi(params, req, runtime));
}

DeleteJobResponse Alibabacloud_Iot20180120::Client::deleteJob(shared_ptr<DeleteJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteJobWithOptions(request, runtime);
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmwareWithOptions(shared_ptr<DeleteOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOTAFirmware"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOTAFirmwareResponse(callApi(params, req, runtime));
}

DeleteOTAFirmwareResponse Alibabacloud_Iot20180120::Client::deleteOTAFirmware(shared_ptr<DeleteOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAFirmwareWithOptions(request, runtime);
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModuleWithOptions(shared_ptr<DeleteOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOTAModule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteOTAModuleResponse(callApi(params, req, runtime));
}

DeleteOTAModuleResponse Alibabacloud_Iot20180120::Client::deleteOTAModule(shared_ptr<DeleteOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOTAModuleWithOptions(request, runtime);
}

DeleteParserResponse Alibabacloud_Iot20180120::Client::deleteParserWithOptions(shared_ptr<DeleteParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteParserResponse(callApi(params, req, runtime));
}

DeleteParserResponse Alibabacloud_Iot20180120::Client::deleteParser(shared_ptr<DeleteParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteParserWithOptions(request, runtime);
}

DeleteParserDataSourceResponse Alibabacloud_Iot20180120::Client::deleteParserDataSourceWithOptions(shared_ptr<DeleteParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteParserDataSourceResponse(callApi(params, req, runtime));
}

DeleteParserDataSourceResponse Alibabacloud_Iot20180120::Client::deleteParserDataSource(shared_ptr<DeleteParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteParserDataSourceWithOptions(request, runtime);
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProductWithOptions(shared_ptr<DeleteProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductResponse(callApi(params, req, runtime));
}

DeleteProductResponse Alibabacloud_Iot20180120::Client::deleteProduct(shared_ptr<DeleteProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductWithOptions(request, runtime);
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTagsWithOptions(shared_ptr<DeleteProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->productTagKey)) {
    query->insert(pair<string, vector<string>>("ProductTagKey", *request->productTagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductTagsResponse(callApi(params, req, runtime));
}

DeleteProductTagsResponse Alibabacloud_Iot20180120::Client::deleteProductTags(shared_ptr<DeleteProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTagsWithOptions(request, runtime);
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopicWithOptions(shared_ptr<DeleteProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicId)) {
    query->insert(pair<string, string>("TopicId", *request->topicId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProductTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteProductTopicResponse(callApi(params, req, runtime));
}

DeleteProductTopicResponse Alibabacloud_Iot20180120::Client::deleteProductTopic(shared_ptr<DeleteProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProductTopicWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRuleResponse(callApi(params, req, runtime));
}

DeleteRuleResponse Alibabacloud_Iot20180120::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleActionWithOptions(shared_ptr<DeleteRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionId)) {
    query->insert(pair<string, long>("ActionId", *request->actionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRuleAction"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRuleActionResponse(callApi(params, req, runtime));
}

DeleteRuleActionResponse Alibabacloud_Iot20180120::Client::deleteRuleAction(shared_ptr<DeleteRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleActionWithOptions(request, runtime);
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRuleWithOptions(shared_ptr<DeleteSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSceneRuleResponse(callApi(params, req, runtime));
}

DeleteSceneRuleResponse Alibabacloud_Iot20180120::Client::deleteSceneRule(shared_ptr<DeleteSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneRuleWithOptions(request, runtime);
}

DeleteSchedulePeriodResponse Alibabacloud_Iot20180120::Client::deleteSchedulePeriodWithOptions(shared_ptr<DeleteSchedulePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodCode)) {
    body->insert(pair<string, string>("PeriodCode", *request->periodCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSchedulePeriod"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSchedulePeriodResponse(callApi(params, req, runtime));
}

DeleteSchedulePeriodResponse Alibabacloud_Iot20180120::Client::deleteSchedulePeriod(shared_ptr<DeleteSchedulePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSchedulePeriodWithOptions(request, runtime);
}

DeleteShareTaskDeviceResponse Alibabacloud_Iot20180120::Client::deleteShareTaskDeviceWithOptions(shared_ptr<DeleteShareTaskDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIdList)) {
    body->insert(pair<string, vector<string>>("IotIdList", *request->iotIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskId)) {
    body->insert(pair<string, string>("ShareTaskId", *request->shareTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteShareTaskDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteShareTaskDeviceResponse(callApi(params, req, runtime));
}

DeleteShareTaskDeviceResponse Alibabacloud_Iot20180120::Client::deleteShareTaskDevice(shared_ptr<DeleteShareTaskDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteShareTaskDeviceWithOptions(request, runtime);
}

DeleteSoundCodeResponse Alibabacloud_Iot20180120::Client::deleteSoundCodeWithOptions(shared_ptr<DeleteSoundCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCode)) {
    body->insert(pair<string, string>("SoundCode", *request->soundCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSoundCode"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSoundCodeResponse(callApi(params, req, runtime));
}

DeleteSoundCodeResponse Alibabacloud_Iot20180120::Client::deleteSoundCode(shared_ptr<DeleteSoundCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSoundCodeWithOptions(request, runtime);
}

DeleteSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::deleteSoundCodeLabelWithOptions(shared_ptr<DeleteSoundCodeLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCode)) {
    body->insert(pair<string, string>("SoundCode", *request->soundCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSoundCodeLabel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSoundCodeLabelResponse(callApi(params, req, runtime));
}

DeleteSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::deleteSoundCodeLabel(shared_ptr<DeleteSoundCodeLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSoundCodeLabelWithOptions(request, runtime);
}

DeleteSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::deleteSoundCodeScheduleWithOptions(shared_ptr<DeleteSoundCodeScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSoundCodeSchedule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSoundCodeScheduleResponse(callApi(params, req, runtime));
}

DeleteSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::deleteSoundCodeSchedule(shared_ptr<DeleteSoundCodeScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSoundCodeScheduleWithOptions(request, runtime);
}

DeleteSpeechResponse Alibabacloud_Iot20180120::Client::deleteSpeechWithOptions(shared_ptr<DeleteSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->speechCodeList)) {
    body->insert(pair<string, vector<string>>("SpeechCodeList", *request->speechCodeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSpeechResponse(callApi(params, req, runtime));
}

DeleteSpeechResponse Alibabacloud_Iot20180120::Client::deleteSpeech(shared_ptr<DeleteSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSpeechWithOptions(request, runtime);
}

DeleteStudioAppDomainOpenResponse Alibabacloud_Iot20180120::Client::deleteStudioAppDomainOpenWithOptions(shared_ptr<DeleteStudioAppDomainOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->domainId)) {
    body->insert(pair<string, long>("DomainId", *request->domainId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStudioAppDomainOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStudioAppDomainOpenResponse(callApi(params, req, runtime));
}

DeleteStudioAppDomainOpenResponse Alibabacloud_Iot20180120::Client::deleteStudioAppDomainOpen(shared_ptr<DeleteStudioAppDomainOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStudioAppDomainOpenWithOptions(request, runtime);
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelationWithOptions(shared_ptr<DeleteSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubscribeRelationResponse(callApi(params, req, runtime));
}

DeleteSubscribeRelationResponse Alibabacloud_Iot20180120::Client::deleteSubscribeRelation(shared_ptr<DeleteSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubscribeRelationWithOptions(request, runtime);
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModelWithOptions(shared_ptr<DeleteThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->eventIdentifier)) {
    query->insert(pair<string, vector<string>>("EventIdentifier", *request->eventIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->propertyIdentifier)) {
    query->insert(pair<string, vector<string>>("PropertyIdentifier", *request->propertyIdentifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->serviceIdentifier)) {
    query->insert(pair<string, vector<string>>("ServiceIdentifier", *request->serviceIdentifier));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteThingModelResponse(callApi(params, req, runtime));
}

DeleteThingModelResponse Alibabacloud_Iot20180120::Client::deleteThingModel(shared_ptr<DeleteThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteThingModelWithOptions(request, runtime);
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTableWithOptions(shared_ptr<DeleteTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->dstTopic)) {
    query->insert(pair<string, vector<string>>("DstTopic", *request->dstTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcTopic)) {
    query->insert(pair<string, string>("SrcTopic", *request->srcTopic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTopicRouteTable"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTopicRouteTableResponse(callApi(params, req, runtime));
}

DeleteTopicRouteTableResponse Alibabacloud_Iot20180120::Client::deleteTopicRouteTable(shared_ptr<DeleteTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTopicRouteTableWithOptions(request, runtime);
}

DetachDestinationResponse Alibabacloud_Iot20180120::Client::detachDestinationWithOptions(shared_ptr<DetachDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationId)) {
    query->insert(pair<string, long>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachDestinationResponse(callApi(params, req, runtime));
}

DetachDestinationResponse Alibabacloud_Iot20180120::Client::detachDestination(shared_ptr<DetachDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachDestinationWithOptions(request, runtime);
}

DetachParserDataSourceResponse Alibabacloud_Iot20180120::Client::detachParserDataSourceWithOptions(shared_ptr<DetachParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachParserDataSourceResponse(callApi(params, req, runtime));
}

DetachParserDataSourceResponse Alibabacloud_Iot20180120::Client::detachParserDataSource(shared_ptr<DetachParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachParserDataSourceWithOptions(request, runtime);
}

DisableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelWithOptions(shared_ptr<DisableDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableDeviceTunnelResponse(callApi(params, req, runtime));
}

DisableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnel(shared_ptr<DisableDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeviceTunnelWithOptions(request, runtime);
}

DisableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelShareWithOptions(shared_ptr<DisableDeviceTunnelShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableDeviceTunnelShare"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableDeviceTunnelShareResponse(callApi(params, req, runtime));
}

DisableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::disableDeviceTunnelShare(shared_ptr<DisableDeviceTunnelShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableDeviceTunnelShareWithOptions(request, runtime);
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRuleWithOptions(shared_ptr<DisableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableSceneRuleResponse(callApi(params, req, runtime));
}

DisableSceneRuleResponse Alibabacloud_Iot20180120::Client::disableSceneRule(shared_ptr<DisableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableSceneRuleWithOptions(request, runtime);
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThingWithOptions(shared_ptr<DisableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableThing"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableThingResponse(callApi(params, req, runtime));
}

DisableThingResponse Alibabacloud_Iot20180120::Client::disableThing(shared_ptr<DisableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableThingWithOptions(request, runtime);
}

EnableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelWithOptions(shared_ptr<EnableDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableDeviceTunnelResponse(callApi(params, req, runtime));
}

EnableDeviceTunnelResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnel(shared_ptr<EnableDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeviceTunnelWithOptions(request, runtime);
}

EnableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelShareWithOptions(shared_ptr<EnableDeviceTunnelShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableDeviceTunnelShare"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableDeviceTunnelShareResponse(callApi(params, req, runtime));
}

EnableDeviceTunnelShareResponse Alibabacloud_Iot20180120::Client::enableDeviceTunnelShare(shared_ptr<EnableDeviceTunnelShareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableDeviceTunnelShareWithOptions(request, runtime);
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRuleWithOptions(shared_ptr<EnableSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableSceneRuleResponse(callApi(params, req, runtime));
}

EnableSceneRuleResponse Alibabacloud_Iot20180120::Client::enableSceneRule(shared_ptr<EnableSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableSceneRuleWithOptions(request, runtime);
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThingWithOptions(shared_ptr<EnableThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableThing"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableThingResponse(callApi(params, req, runtime));
}

EnableThingResponse Alibabacloud_Iot20180120::Client::enableThing(shared_ptr<EnableThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableThingWithOptions(request, runtime);
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURLWithOptions(shared_ptr<GenerateDeviceNameListURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateDeviceNameListURL"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateDeviceNameListURLResponse(callApi(params, req, runtime));
}

GenerateDeviceNameListURLResponse Alibabacloud_Iot20180120::Client::generateDeviceNameListURL(shared_ptr<GenerateDeviceNameListURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateDeviceNameListURLWithOptions(request, runtime);
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURLWithOptions(shared_ptr<GenerateFileUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizCode)) {
    query->insert(pair<string, string>("BizCode", *request->bizCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSuffix)) {
    query->insert(pair<string, string>("FileSuffix", *request->fileSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateFileUploadURL"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateFileUploadURLResponse(callApi(params, req, runtime));
}

GenerateFileUploadURLResponse Alibabacloud_Iot20180120::Client::generateFileUploadURL(shared_ptr<GenerateFileUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateFileUploadURLWithOptions(request, runtime);
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURLWithOptions(shared_ptr<GenerateOTAUploadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileSuffix)) {
    query->insert(pair<string, string>("FileSuffix", *request->fileSuffix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateOTAUploadURL"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateOTAUploadURLResponse(callApi(params, req, runtime));
}

GenerateOTAUploadURLResponse Alibabacloud_Iot20180120::Client::generateOTAUploadURL(shared_ptr<GenerateOTAUploadURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateOTAUploadURLWithOptions(request, runtime);
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetailWithOptions(shared_ptr<GetDataAPIServiceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiSrn)) {
    body->insert(pair<string, string>("ApiSrn", *request->apiSrn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataAPIServiceDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataAPIServiceDetailResponse(callApi(params, req, runtime));
}

GetDataAPIServiceDetailResponse Alibabacloud_Iot20180120::Client::getDataAPIServiceDetail(shared_ptr<GetDataAPIServiceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataAPIServiceDetailWithOptions(request, runtime);
}

GetDestinationResponse Alibabacloud_Iot20180120::Client::getDestinationWithOptions(shared_ptr<GetDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationId)) {
    query->insert(pair<string, long>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDestinationResponse(callApi(params, req, runtime));
}

GetDestinationResponse Alibabacloud_Iot20180120::Client::getDestination(shared_ptr<GetDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDestinationWithOptions(request, runtime);
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadowWithOptions(shared_ptr<GetDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceShadow"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceShadowResponse(callApi(params, req, runtime));
}

GetDeviceShadowResponse Alibabacloud_Iot20180120::Client::getDeviceShadow(shared_ptr<GetDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceShadowWithOptions(request, runtime);
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatusWithOptions(shared_ptr<GetDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceStatusResponse(callApi(params, req, runtime));
}

GetDeviceStatusResponse Alibabacloud_Iot20180120::Client::getDeviceStatus(shared_ptr<GetDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceStatusWithOptions(request, runtime);
}

GetDeviceTunnelShareStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelShareStatusWithOptions(shared_ptr<GetDeviceTunnelShareStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceTunnelShareStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceTunnelShareStatusResponse(callApi(params, req, runtime));
}

GetDeviceTunnelShareStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelShareStatus(shared_ptr<GetDeviceTunnelShareStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceTunnelShareStatusWithOptions(request, runtime);
}

GetDeviceTunnelStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelStatusWithOptions(shared_ptr<GetDeviceTunnelStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDeviceTunnelStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDeviceTunnelStatusResponse(callApi(params, req, runtime));
}

GetDeviceTunnelStatusResponse Alibabacloud_Iot20180120::Client::getDeviceTunnelStatus(shared_ptr<GetDeviceTunnelStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDeviceTunnelStatusWithOptions(request, runtime);
}

GetDownloadFileResponse Alibabacloud_Iot20180120::Client::getDownloadFileWithOptions(shared_ptr<GetDownloadFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GetDownloadFileShrinkRequest> request = make_shared<GetDownloadFileShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->context)) {
    request->contextShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->context, make_shared<string>("Context"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->longJobId)) {
    query->insert(pair<string, string>("LongJobId", *request->longJobId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contextShrink)) {
    body->insert(pair<string, string>("Context", *request->contextShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDownloadFile"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDownloadFileResponse(callApi(params, req, runtime));
}

GetDownloadFileResponse Alibabacloud_Iot20180120::Client::getDownloadFile(shared_ptr<GetDownloadFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDownloadFileWithOptions(request, runtime);
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersionWithOptions(shared_ptr<GetEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEdgeDriverVersionResponse(callApi(params, req, runtime));
}

GetEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::getEdgeDriverVersion(shared_ptr<GetEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeDriverVersionWithOptions(request, runtime);
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceWithOptions(shared_ptr<GetEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEdgeInstanceResponse(callApi(params, req, runtime));
}

GetEdgeInstanceResponse Alibabacloud_Iot20180120::Client::getEdgeInstance(shared_ptr<GetEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceWithOptions(request, runtime);
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeploymentWithOptions(shared_ptr<GetEdgeInstanceDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deploymentId)) {
    query->insert(pair<string, string>("DeploymentId", *request->deploymentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeInstanceDeployment"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEdgeInstanceDeploymentResponse(callApi(params, req, runtime));
}

GetEdgeInstanceDeploymentResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceDeployment(shared_ptr<GetEdgeInstanceDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceDeploymentWithOptions(request, runtime);
}

GetEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceMessageRoutingWithOptions(shared_ptr<GetEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeInstanceMessageRouting"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEdgeInstanceMessageRoutingResponse(callApi(params, req, runtime));
}

GetEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::getEdgeInstanceMessageRouting(shared_ptr<GetEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDeviceWithOptions(shared_ptr<GetGatewayBySubDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGatewayBySubDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGatewayBySubDeviceResponse(callApi(params, req, runtime));
}

GetGatewayBySubDeviceResponse Alibabacloud_Iot20180120::Client::getGatewayBySubDevice(shared_ptr<GetGatewayBySubDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGatewayBySubDeviceWithOptions(request, runtime);
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTaskWithOptions(shared_ptr<GetLoraNodesTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoraNodesTask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLoraNodesTaskResponse(callApi(params, req, runtime));
}

GetLoraNodesTaskResponse Alibabacloud_Iot20180120::Client::getLoraNodesTask(shared_ptr<GetLoraNodesTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoraNodesTaskWithOptions(request, runtime);
}

GetParserResponse Alibabacloud_Iot20180120::Client::getParserWithOptions(shared_ptr<GetParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetParserResponse(callApi(params, req, runtime));
}

GetParserResponse Alibabacloud_Iot20180120::Client::getParser(shared_ptr<GetParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getParserWithOptions(request, runtime);
}

GetParserDataSourceResponse Alibabacloud_Iot20180120::Client::getParserDataSourceWithOptions(shared_ptr<GetParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetParserDataSourceResponse(callApi(params, req, runtime));
}

GetParserDataSourceResponse Alibabacloud_Iot20180120::Client::getParserDataSource(shared_ptr<GetParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getParserDataSourceWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRuleResponse(callApi(params, req, runtime));
}

GetRuleResponse Alibabacloud_Iot20180120::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleActionWithOptions(shared_ptr<GetRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionId)) {
    query->insert(pair<string, long>("ActionId", *request->actionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRuleAction"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRuleActionResponse(callApi(params, req, runtime));
}

GetRuleActionResponse Alibabacloud_Iot20180120::Client::getRuleAction(shared_ptr<GetRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleActionWithOptions(request, runtime);
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRuleWithOptions(shared_ptr<GetSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneRuleResponse(callApi(params, req, runtime));
}

GetSceneRuleResponse Alibabacloud_Iot20180120::Client::getSceneRule(shared_ptr<GetSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneRuleWithOptions(request, runtime);
}

GetShareTaskByDeviceOpenResponse Alibabacloud_Iot20180120::Client::getShareTaskByDeviceOpenWithOptions(shared_ptr<GetShareTaskByDeviceOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetShareTaskByDeviceOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetShareTaskByDeviceOpenResponse(callApi(params, req, runtime));
}

GetShareTaskByDeviceOpenResponse Alibabacloud_Iot20180120::Client::getShareTaskByDeviceOpen(shared_ptr<GetShareTaskByDeviceOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getShareTaskByDeviceOpenWithOptions(request, runtime);
}

GetSoundCodeAudioResponse Alibabacloud_Iot20180120::Client::getSoundCodeAudioWithOptions(shared_ptr<GetSoundCodeAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->soundCodeList)) {
    body->insert(pair<string, vector<string>>("SoundCodeList", *request->soundCodeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSoundCodeAudio"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSoundCodeAudioResponse(callApi(params, req, runtime));
}

GetSoundCodeAudioResponse Alibabacloud_Iot20180120::Client::getSoundCodeAudio(shared_ptr<GetSoundCodeAudioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSoundCodeAudioWithOptions(request, runtime);
}

GetSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::getSoundCodeScheduleWithOptions(shared_ptr<GetSoundCodeScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSoundCodeSchedule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSoundCodeScheduleResponse(callApi(params, req, runtime));
}

GetSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::getSoundCodeSchedule(shared_ptr<GetSoundCodeScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSoundCodeScheduleWithOptions(request, runtime);
}

GetSpeechDeviceDetailResponse Alibabacloud_Iot20180120::Client::getSpeechDeviceDetailWithOptions(shared_ptr<GetSpeechDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpeechDeviceDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpeechDeviceDetailResponse(callApi(params, req, runtime));
}

GetSpeechDeviceDetailResponse Alibabacloud_Iot20180120::Client::getSpeechDeviceDetail(shared_ptr<GetSpeechDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpeechDeviceDetailWithOptions(request, runtime);
}

GetSpeechLicenseDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::getSpeechLicenseDeviceStatisticsWithOptions(shared_ptr<GetSpeechLicenseDeviceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpeechLicenseDeviceStatistics"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpeechLicenseDeviceStatisticsResponse(callApi(params, req, runtime));
}

GetSpeechLicenseDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::getSpeechLicenseDeviceStatistics(shared_ptr<GetSpeechLicenseDeviceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpeechLicenseDeviceStatisticsWithOptions(request, runtime);
}

GetSpeechVoiceResponse Alibabacloud_Iot20180120::Client::getSpeechVoiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSpeechVoice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSpeechVoiceResponse(callApi(params, req, runtime));
}

GetSpeechVoiceResponse Alibabacloud_Iot20180120::Client::getSpeechVoice() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSpeechVoiceWithOptions(runtime);
}

GetStudioAppTokenOpenResponse Alibabacloud_Iot20180120::Client::getStudioAppTokenOpenWithOptions(shared_ptr<GetStudioAppTokenOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStudioAppTokenOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStudioAppTokenOpenResponse(callApi(params, req, runtime));
}

GetStudioAppTokenOpenResponse Alibabacloud_Iot20180120::Client::getStudioAppTokenOpen(shared_ptr<GetStudioAppTokenOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStudioAppTokenOpenWithOptions(request, runtime);
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTslWithOptions(shared_ptr<GetThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->simple)) {
    query->insert(pair<string, bool>("Simple", *request->simple));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThingModelTsl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThingModelTslResponse(callApi(params, req, runtime));
}

GetThingModelTslResponse Alibabacloud_Iot20180120::Client::getThingModelTsl(shared_ptr<GetThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslWithOptions(request, runtime);
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublishedWithOptions(shared_ptr<GetThingModelTslPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->simple)) {
    query->insert(pair<string, bool>("Simple", *request->simple));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThingModelTslPublished"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThingModelTslPublishedResponse(callApi(params, req, runtime));
}

GetThingModelTslPublishedResponse Alibabacloud_Iot20180120::Client::getThingModelTslPublished(shared_ptr<GetThingModelTslPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingModelTslPublishedWithOptions(request, runtime);
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScriptWithOptions(shared_ptr<GetThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThingScript"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThingScriptResponse(callApi(params, req, runtime));
}

GetThingScriptResponse Alibabacloud_Iot20180120::Client::getThingScript(shared_ptr<GetThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingScriptWithOptions(request, runtime);
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplateWithOptions(shared_ptr<GetThingTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoryKey)) {
    query->insert(pair<string, string>("CategoryKey", *request->categoryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThingTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThingTemplateResponse(callApi(params, req, runtime));
}

GetThingTemplateResponse Alibabacloud_Iot20180120::Client::getThingTemplate(shared_ptr<GetThingTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTemplateWithOptions(request, runtime);
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopoWithOptions(shared_ptr<GetThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThingTopo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThingTopoResponse(callApi(params, req, runtime));
}

GetThingTopoResponse Alibabacloud_Iot20180120::Client::getThingTopo(shared_ptr<GetThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThingTopoWithOptions(request, runtime);
}

GisQueryDeviceLocationResponse Alibabacloud_Iot20180120::Client::gisQueryDeviceLocationWithOptions(shared_ptr<GisQueryDeviceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<GisQueryDeviceLocationRequestThingList>>(request->thingList)) {
    query->insert(pair<string, vector<GisQueryDeviceLocationRequestThingList>>("ThingList", *request->thingList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GisQueryDeviceLocation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GisQueryDeviceLocationResponse(callApi(params, req, runtime));
}

GisQueryDeviceLocationResponse Alibabacloud_Iot20180120::Client::gisQueryDeviceLocation(shared_ptr<GisQueryDeviceLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return gisQueryDeviceLocationWithOptions(request, runtime);
}

GisSearchDeviceTraceResponse Alibabacloud_Iot20180120::Client::gisSearchDeviceTraceWithOptions(shared_ptr<GisSearchDeviceTraceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mapMatch)) {
    query->insert(pair<string, long>("MapMatch", *request->mapMatch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GisSearchDeviceTrace"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GisSearchDeviceTraceResponse(callApi(params, req, runtime));
}

GisSearchDeviceTraceResponse Alibabacloud_Iot20180120::Client::gisSearchDeviceTrace(shared_ptr<GisSearchDeviceTraceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return gisSearchDeviceTraceWithOptions(request, runtime);
}

ImportDTDataResponse Alibabacloud_Iot20180120::Client::importDTDataWithOptions(shared_ptr<ImportDTDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ImportDTDataRequestItems>>(request->items)) {
    body->insert(pair<string, vector<ImportDTDataRequestItems>>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportDTData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportDTDataResponse(callApi(params, req, runtime));
}

ImportDTDataResponse Alibabacloud_Iot20180120::Client::importDTData(shared_ptr<ImportDTDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDTDataWithOptions(request, runtime);
}

ImportDeviceResponse Alibabacloud_Iot20180120::Client::importDeviceWithOptions(shared_ptr<ImportDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceSecret)) {
    query->insert(pair<string, string>("DeviceSecret", *request->deviceSecret));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickname)) {
    query->insert(pair<string, string>("Nickname", *request->nickname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sn)) {
    query->insert(pair<string, string>("Sn", *request->sn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportDeviceResponse(callApi(params, req, runtime));
}

ImportDeviceResponse Alibabacloud_Iot20180120::Client::importDevice(shared_ptr<ImportDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importDeviceWithOptions(request, runtime);
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTslWithOptions(shared_ptr<ImportThingModelTslRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockName)) {
    query->insert(pair<string, string>("FunctionBlockName", *request->functionBlockName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tslStr)) {
    query->insert(pair<string, string>("TslStr", *request->tslStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tslUrl)) {
    query->insert(pair<string, string>("TslUrl", *request->tslUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ImportThingModelTsl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ImportThingModelTslResponse(callApi(params, req, runtime));
}

ImportThingModelTslResponse Alibabacloud_Iot20180120::Client::importThingModelTsl(shared_ptr<ImportThingModelTslRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return importThingModelTslWithOptions(request, runtime);
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIServiceWithOptions(shared_ptr<InvokeDataAPIServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiSrn)) {
    body->insert(pair<string, string>("ApiSrn", *request->apiSrn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<InvokeDataAPIServiceRequestParam>>(request->param)) {
    body->insert(pair<string, vector<InvokeDataAPIServiceRequestParam>>("Param", *request->param));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeDataAPIService"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokeDataAPIServiceResponse(callApi(params, req, runtime));
}

InvokeDataAPIServiceResponse Alibabacloud_Iot20180120::Client::invokeDataAPIService(shared_ptr<InvokeDataAPIServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeDataAPIServiceWithOptions(request, runtime);
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingServiceWithOptions(shared_ptr<InvokeThingServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->args)) {
    query->insert(pair<string, string>("Args", *request->args));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeThingService"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokeThingServiceResponse(callApi(params, req, runtime));
}

InvokeThingServiceResponse Alibabacloud_Iot20180120::Client::invokeThingService(shared_ptr<InvokeThingServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingServiceWithOptions(request, runtime);
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsServiceWithOptions(shared_ptr<InvokeThingsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->args)) {
    query->insert(pair<string, string>("Args", *request->args));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeThingsService"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InvokeThingsServiceResponse(callApi(params, req, runtime));
}

InvokeThingsServiceResponse Alibabacloud_Iot20180120::Client::invokeThingsService(shared_ptr<InvokeThingsServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return invokeThingsServiceWithOptions(request, runtime);
}

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsDataWithOptions(shared_ptr<ListAnalyticsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPath)) {
    query->insert(pair<string, string>("ApiPath", *request->apiPath));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListAnalyticsDataRequestCondition>>(request->condition)) {
    query->insert(pair<string, vector<ListAnalyticsDataRequestCondition>>("Condition", *request->condition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isoId)) {
    query->insert(pair<string, string>("IsoId", *request->isoId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnalyticsData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnalyticsDataResponse(callApi(params, req, runtime));
}

ListAnalyticsDataResponse Alibabacloud_Iot20180120::Client::listAnalyticsData(shared_ptr<ListAnalyticsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAnalyticsDataWithOptions(request, runtime);
}

ListDataSourceItemResponse Alibabacloud_Iot20180120::Client::listDataSourceItemWithOptions(shared_ptr<ListDataSourceItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDataSourceItem"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDataSourceItemResponse(callApi(params, req, runtime));
}

ListDataSourceItemResponse Alibabacloud_Iot20180120::Client::listDataSourceItem(shared_ptr<ListDataSourceItemRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDataSourceItemWithOptions(request, runtime);
}

ListDestinationResponse Alibabacloud_Iot20180120::Client::listDestinationWithOptions(shared_ptr<ListDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->types)) {
    query->insert(pair<string, vector<string>>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDestinationResponse(callApi(params, req, runtime));
}

ListDestinationResponse Alibabacloud_Iot20180120::Client::listDestination(shared_ptr<ListDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDestinationWithOptions(request, runtime);
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJobWithOptions(shared_ptr<ListDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    query->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDeviceDistributeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDeviceDistributeJobResponse(callApi(params, req, runtime));
}

ListDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::listDeviceDistributeJob(shared_ptr<ListDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDeviceDistributeJobWithOptions(request, runtime);
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDeviceWithOptions(shared_ptr<ListDistributedDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceInstanceId)) {
    query->insert(pair<string, string>("SourceInstanceId", *request->sourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    query->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDistributedDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDistributedDeviceResponse(callApi(params, req, runtime));
}

ListDistributedDeviceResponse Alibabacloud_Iot20180120::Client::listDistributedDevice(shared_ptr<ListDistributedDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedDeviceWithOptions(request, runtime);
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProductWithOptions(shared_ptr<ListDistributedProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceInstanceId)) {
    query->insert(pair<string, string>("SourceInstanceId", *request->sourceInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetInstanceId)) {
    query->insert(pair<string, string>("TargetInstanceId", *request->targetInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUid)) {
    query->insert(pair<string, string>("TargetUid", *request->targetUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDistributedProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDistributedProductResponse(callApi(params, req, runtime));
}

ListDistributedProductResponse Alibabacloud_Iot20180120::Client::listDistributedProduct(shared_ptr<ListDistributedProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDistributedProductWithOptions(request, runtime);
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJobWithOptions(shared_ptr<ListJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListJobResponse(callApi(params, req, runtime));
}

ListJobResponse Alibabacloud_Iot20180120::Client::listJob(shared_ptr<ListJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listJobWithOptions(request, runtime);
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmwareWithOptions(shared_ptr<ListOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destVersion)) {
    query->insert(pair<string, string>("DestVersion", *request->destVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAFirmware"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAFirmwareResponse(callApi(params, req, runtime));
}

ListOTAFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAFirmware(shared_ptr<ListOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAFirmwareWithOptions(request, runtime);
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDeviceWithOptions(shared_ptr<ListOTAJobByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAJobByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAJobByDeviceResponse(callApi(params, req, runtime));
}

ListOTAJobByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAJobByDevice(shared_ptr<ListOTAJobByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByDeviceWithOptions(request, runtime);
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmwareWithOptions(shared_ptr<ListOTAJobByFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAJobByFirmware"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAJobByFirmwareResponse(callApi(params, req, runtime));
}

ListOTAJobByFirmwareResponse Alibabacloud_Iot20180120::Client::listOTAJobByFirmware(shared_ptr<ListOTAJobByFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAJobByFirmwareWithOptions(request, runtime);
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProductWithOptions(shared_ptr<ListOTAModuleByProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAModuleByProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAModuleByProductResponse(callApi(params, req, runtime));
}

ListOTAModuleByProductResponse Alibabacloud_Iot20180120::Client::listOTAModuleByProduct(shared_ptr<ListOTAModuleByProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleByProductWithOptions(request, runtime);
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDeviceWithOptions(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAModuleVersionsByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAModuleVersionsByDeviceResponse(callApi(params, req, runtime));
}

ListOTAModuleVersionsByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAModuleVersionsByDevice(shared_ptr<ListOTAModuleVersionsByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAModuleVersionsByDeviceWithOptions(request, runtime);
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJobWithOptions(shared_ptr<ListOTATaskByJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceNames)) {
    query->insert(pair<string, vector<string>>("DeviceNames", *request->deviceNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTATaskByJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTATaskByJobResponse(callApi(params, req, runtime));
}

ListOTATaskByJobResponse Alibabacloud_Iot20180120::Client::listOTATaskByJob(shared_ptr<ListOTATaskByJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTATaskByJobWithOptions(request, runtime);
}

ListOTAUnfinishedTaskByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAUnfinishedTaskByDeviceWithOptions(shared_ptr<ListOTAUnfinishedTaskByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    query->insert(pair<string, string>("TaskStatus", *request->taskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOTAUnfinishedTaskByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOTAUnfinishedTaskByDeviceResponse(callApi(params, req, runtime));
}

ListOTAUnfinishedTaskByDeviceResponse Alibabacloud_Iot20180120::Client::listOTAUnfinishedTaskByDevice(shared_ptr<ListOTAUnfinishedTaskByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOTAUnfinishedTaskByDeviceWithOptions(request, runtime);
}

ListParserResponse Alibabacloud_Iot20180120::Client::listParserWithOptions(shared_ptr<ListParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParserResponse(callApi(params, req, runtime));
}

ListParserResponse Alibabacloud_Iot20180120::Client::listParser(shared_ptr<ListParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listParserWithOptions(request, runtime);
}

ListParserDataSourceResponse Alibabacloud_Iot20180120::Client::listParserDataSourceWithOptions(shared_ptr<ListParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParserDataSourceResponse(callApi(params, req, runtime));
}

ListParserDataSourceResponse Alibabacloud_Iot20180120::Client::listParserDataSource(shared_ptr<ListParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listParserDataSourceWithOptions(request, runtime);
}

ListParserDestinationResponse Alibabacloud_Iot20180120::Client::listParserDestinationWithOptions(shared_ptr<ListParserDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isFailover)) {
    query->insert(pair<string, bool>("IsFailover", *request->isFailover));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListParserDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListParserDestinationResponse(callApi(params, req, runtime));
}

ListParserDestinationResponse Alibabacloud_Iot20180120::Client::listParserDestination(shared_ptr<ListParserDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listParserDestinationWithOptions(request, runtime);
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTagsWithOptions(shared_ptr<ListProductByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListProductByTagsRequestProductTag>>(request->productTag)) {
    query->insert(pair<string, vector<ListProductByTagsRequestProductTag>>("ProductTag", *request->productTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductByTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductByTagsResponse(callApi(params, req, runtime));
}

ListProductByTagsResponse Alibabacloud_Iot20180120::Client::listProductByTags(shared_ptr<ListProductByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductByTagsWithOptions(request, runtime);
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTagsWithOptions(shared_ptr<ListProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProductTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProductTagsResponse(callApi(params, req, runtime));
}

ListProductTagsResponse Alibabacloud_Iot20180120::Client::listProductTags(shared_ptr<ListProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProductTagsWithOptions(request, runtime);
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRuleWithOptions(shared_ptr<ListRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRuleResponse(callApi(params, req, runtime));
}

ListRuleResponse Alibabacloud_Iot20180120::Client::listRule(shared_ptr<ListRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleWithOptions(request, runtime);
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActionsWithOptions(shared_ptr<ListRuleActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRuleActions"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRuleActionsResponse(callApi(params, req, runtime));
}

ListRuleActionsResponse Alibabacloud_Iot20180120::Client::listRuleActions(shared_ptr<ListRuleActionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRuleActionsWithOptions(request, runtime);
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTaskWithOptions(shared_ptr<ListTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListTaskShrinkRequest> request = make_shared<ListTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->device)) {
    request->deviceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->device, make_shared<string>("Device"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceShrink)) {
    query->insert(pair<string, string>("Device", *request->deviceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaskResponse(callApi(params, req, runtime));
}

ListTaskResponse Alibabacloud_Iot20180120::Client::listTask(shared_ptr<ListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTaskWithOptions(request, runtime);
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersionWithOptions(shared_ptr<ListThingModelVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListThingModelVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListThingModelVersionResponse(callApi(params, req, runtime));
}

ListThingModelVersionResponse Alibabacloud_Iot20180120::Client::listThingModelVersion(shared_ptr<ListThingModelVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingModelVersionWithOptions(request, runtime);
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplatesWithOptions(shared_ptr<ListThingTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListThingTemplates"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListThingTemplatesResponse(callApi(params, req, runtime));
}

ListThingTemplatesResponse Alibabacloud_Iot20180120::Client::listThingTemplates(shared_ptr<ListThingTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listThingTemplatesWithOptions(request, runtime);
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopoWithOptions(shared_ptr<NotifyAddThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceListStr)) {
    query->insert(pair<string, string>("DeviceListStr", *request->deviceListStr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gwDeviceName)) {
    query->insert(pair<string, string>("GwDeviceName", *request->gwDeviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gwIotId)) {
    query->insert(pair<string, string>("GwIotId", *request->gwIotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gwProductKey)) {
    query->insert(pair<string, string>("GwProductKey", *request->gwProductKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NotifyAddThingTopo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NotifyAddThingTopoResponse(callApi(params, req, runtime));
}

NotifyAddThingTopoResponse Alibabacloud_Iot20180120::Client::notifyAddThingTopo(shared_ptr<NotifyAddThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyAddThingTopoWithOptions(request, runtime);
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotServiceWithOptions(shared_ptr<OpenIotServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenIotService"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenIotServiceResponse(callApi(params, req, runtime));
}

OpenIotServiceResponse Alibabacloud_Iot20180120::Client::openIotService(shared_ptr<OpenIotServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openIotServiceWithOptions(request, runtime);
}

PackageSoundCodeLabelBatchAudioResponse Alibabacloud_Iot20180120::Client::packageSoundCodeLabelBatchAudioWithOptions(shared_ptr<PackageSoundCodeLabelBatchAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchCode)) {
    body->insert(pair<string, string>("BatchCode", *request->batchCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PackageSoundCodeLabelBatchAudio"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PackageSoundCodeLabelBatchAudioResponse(callApi(params, req, runtime));
}

PackageSoundCodeLabelBatchAudioResponse Alibabacloud_Iot20180120::Client::packageSoundCodeLabelBatchAudio(shared_ptr<PackageSoundCodeLabelBatchAudioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return packageSoundCodeLabelBatchAudioWithOptions(request, runtime);
}

PageQuerySharedSpeechOpenResponse Alibabacloud_Iot20180120::Client::pageQuerySharedSpeechOpenWithOptions(shared_ptr<PageQuerySharedSpeechOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskCode)) {
    body->insert(pair<string, string>("ShareTaskCode", *request->shareTaskCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    body->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageQuerySharedSpeechOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageQuerySharedSpeechOpenResponse(callApi(params, req, runtime));
}

PageQuerySharedSpeechOpenResponse Alibabacloud_Iot20180120::Client::pageQuerySharedSpeechOpen(shared_ptr<PageQuerySharedSpeechOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageQuerySharedSpeechOpenWithOptions(request, runtime);
}

PageQuerySpeechBroadcastHourResponse Alibabacloud_Iot20180120::Client::pageQuerySpeechBroadcastHourWithOptions(shared_ptr<PageQuerySpeechBroadcastHourRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryDateTimeHour)) {
    query->insert(pair<string, string>("QueryDateTimeHour", *request->queryDateTimeHour));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageToken)) {
    body->insert(pair<string, string>("PageToken", *request->pageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskCode)) {
    body->insert(pair<string, string>("ShareTaskCode", *request->shareTaskCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageQuerySpeechBroadcastHour"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageQuerySpeechBroadcastHourResponse(callApi(params, req, runtime));
}

PageQuerySpeechBroadcastHourResponse Alibabacloud_Iot20180120::Client::pageQuerySpeechBroadcastHour(shared_ptr<PageQuerySpeechBroadcastHourRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageQuerySpeechBroadcastHourWithOptions(request, runtime);
}

PrintByTemplateResponse Alibabacloud_Iot20180120::Client::printByTemplateWithOptions(shared_ptr<PrintByTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->historyPrintTopic)) {
    body->insert(pair<string, bool>("HistoryPrintTopic", *request->historyPrintTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramsJsonString)) {
    body->insert(pair<string, string>("ParamsJsonString", *request->paramsJsonString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateBizCode)) {
    body->insert(pair<string, string>("TemplateBizCode", *request->templateBizCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PrintByTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PrintByTemplateResponse(callApi(params, req, runtime));
}

PrintByTemplateResponse Alibabacloud_Iot20180120::Client::printByTemplate(shared_ptr<PrintByTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return printByTemplateWithOptions(request, runtime);
}

PubResponse Alibabacloud_Iot20180120::Client::pubWithOptions(shared_ptr<PubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->correlationData)) {
    query->insert(pair<string, string>("CorrelationData", *request->correlationData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payloadFormatIndicator)) {
    query->insert(pair<string, long>("PayloadFormatIndicator", *request->payloadFormatIndicator));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->qos)) {
    query->insert(pair<string, long>("Qos", *request->qos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseTopic)) {
    query->insert(pair<string, string>("ResponseTopic", *request->responseTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicFullName)) {
    query->insert(pair<string, string>("TopicFullName", *request->topicFullName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PubRequestUserProp>>(request->userProp)) {
    query->insert(pair<string, vector<PubRequestUserProp>>("UserProp", *request->userProp));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->messageContent)) {
    body->insert(pair<string, string>("MessageContent", *request->messageContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Pub"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PubResponse(callApi(params, req, runtime));
}

PubResponse Alibabacloud_Iot20180120::Client::pub(shared_ptr<PubRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubWithOptions(request, runtime);
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcastWithOptions(shared_ptr<PubBroadcastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messageContent)) {
    query->insert(pair<string, string>("MessageContent", *request->messageContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicFullName)) {
    query->insert(pair<string, string>("TopicFullName", *request->topicFullName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PubBroadcast"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PubBroadcastResponse(callApi(params, req, runtime));
}

PubBroadcastResponse Alibabacloud_Iot20180120::Client::pubBroadcast(shared_ptr<PubBroadcastRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pubBroadcastWithOptions(request, runtime);
}

PublishScriptResponse Alibabacloud_Iot20180120::Client::publishScriptWithOptions(shared_ptr<PublishScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishScript"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishScriptResponse(callApi(params, req, runtime));
}

PublishScriptResponse Alibabacloud_Iot20180120::Client::publishScript(shared_ptr<PublishScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishScriptWithOptions(request, runtime);
}

PublishStudioAppResponse Alibabacloud_Iot20180120::Client::publishStudioAppWithOptions(shared_ptr<PublishStudioAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishStudioApp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishStudioAppResponse(callApi(params, req, runtime));
}

PublishStudioAppResponse Alibabacloud_Iot20180120::Client::publishStudioApp(shared_ptr<PublishStudioAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishStudioAppWithOptions(request, runtime);
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModelWithOptions(shared_ptr<PublishThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishThingModelResponse(callApi(params, req, runtime));
}

PublishThingModelResponse Alibabacloud_Iot20180120::Client::publishThingModel(shared_ptr<PublishThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishThingModelWithOptions(request, runtime);
}

PushSpeechResponse Alibabacloud_Iot20180120::Client::pushSpeechWithOptions(shared_ptr<PushSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushMode)) {
    body->insert(pair<string, string>("PushMode", *request->pushMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->speechCodeList)) {
    body->insert(pair<string, vector<string>>("SpeechCodeList", *request->speechCodeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PushSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PushSpeechResponse(callApi(params, req, runtime));
}

PushSpeechResponse Alibabacloud_Iot20180120::Client::pushSpeech(shared_ptr<PushSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pushSpeechWithOptions(request, runtime);
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatusWithOptions(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryBatchRegisterDeviceStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryBatchRegisterDeviceStatusResponse(callApi(params, req, runtime));
}

QueryBatchRegisterDeviceStatusResponse Alibabacloud_Iot20180120::Client::queryBatchRegisterDeviceStatus(shared_ptr<QueryBatchRegisterDeviceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryBatchRegisterDeviceStatusWithOptions(request, runtime);
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyIdWithOptions(shared_ptr<QueryCertUrlByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCertUrlByApplyId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCertUrlByApplyIdResponse(callApi(params, req, runtime));
}

QueryCertUrlByApplyIdResponse Alibabacloud_Iot20180120::Client::queryCertUrlByApplyId(shared_ptr<QueryCertUrlByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCertUrlByApplyIdWithOptions(request, runtime);
}

QueryClientIdsResponse Alibabacloud_Iot20180120::Client::queryClientIdsWithOptions(shared_ptr<QueryClientIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryClientIds"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryClientIdsResponse(callApi(params, req, runtime));
}

QueryClientIdsResponse Alibabacloud_Iot20180120::Client::queryClientIds(shared_ptr<QueryClientIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryClientIdsWithOptions(request, runtime);
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupIdWithOptions(shared_ptr<QueryConsumerGroupByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConsumerGroupByGroupId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConsumerGroupByGroupIdResponse(callApi(params, req, runtime));
}

QueryConsumerGroupByGroupIdResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupByGroupId(shared_ptr<QueryConsumerGroupByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupByGroupIdWithOptions(request, runtime);
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupListWithOptions(shared_ptr<QueryConsumerGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fuzzy)) {
    query->insert(pair<string, bool>("Fuzzy", *request->fuzzy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConsumerGroupList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConsumerGroupListResponse(callApi(params, req, runtime));
}

QueryConsumerGroupListResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupList(shared_ptr<QueryConsumerGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupListWithOptions(request, runtime);
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatusWithOptions(shared_ptr<QueryConsumerGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryConsumerGroupStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryConsumerGroupStatusResponse(callApi(params, req, runtime));
}

QueryConsumerGroupStatusResponse Alibabacloud_Iot20180120::Client::queryConsumerGroupStatus(shared_ptr<QueryConsumerGroupStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryConsumerGroupStatusWithOptions(request, runtime);
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLogWithOptions(shared_ptr<QueryDetailSceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDetailSceneRuleLog"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDetailSceneRuleLogResponse(callApi(params, req, runtime));
}

QueryDetailSceneRuleLogResponse Alibabacloud_Iot20180120::Client::queryDetailSceneRuleLog(shared_ptr<QueryDetailSceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDetailSceneRuleLogWithOptions(request, runtime);
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceWithOptions(shared_ptr<QueryDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceResponse(callApi(params, req, runtime));
}

QueryDeviceResponse Alibabacloud_Iot20180120::Client::queryDevice(shared_ptr<QueryDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceWithOptions(request, runtime);
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQLWithOptions(shared_ptr<QueryDeviceBySQLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SQL)) {
    query->insert(pair<string, string>("SQL", *request->SQL));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceBySQL"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceBySQLResponse(callApi(params, req, runtime));
}

QueryDeviceBySQLResponse Alibabacloud_Iot20180120::Client::queryDeviceBySQL(shared_ptr<QueryDeviceBySQLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceBySQLWithOptions(request, runtime);
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatusWithOptions(shared_ptr<QueryDeviceByStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceByStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceByStatusResponse(callApi(params, req, runtime));
}

QueryDeviceByStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceByStatus(shared_ptr<QueryDeviceByStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByStatusWithOptions(request, runtime);
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTagsWithOptions(shared_ptr<QueryDeviceByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryDeviceByTagsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QueryDeviceByTagsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceByTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceByTagsResponse(callApi(params, req, runtime));
}

QueryDeviceByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceByTags(shared_ptr<QueryDeviceByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceByTagsWithOptions(request, runtime);
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCertWithOptions(shared_ptr<QueryDeviceCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceCert"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceCertResponse(callApi(params, req, runtime));
}

QueryDeviceCertResponse Alibabacloud_Iot20180120::Client::queryDeviceCert(shared_ptr<QueryDeviceCertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceCertWithOptions(request, runtime);
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredPropertyWithOptions(shared_ptr<QueryDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->identifier)) {
    query->insert(pair<string, vector<string>>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceDesiredProperty"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceDesiredPropertyResponse(callApi(params, req, runtime));
}

QueryDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::queryDeviceDesiredProperty(shared_ptr<QueryDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDesiredPropertyWithOptions(request, runtime);
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetailWithOptions(shared_ptr<QueryDeviceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceDetailResponse(callApi(params, req, runtime));
}

QueryDeviceDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDetail(shared_ptr<QueryDeviceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDetailWithOptions(request, runtime);
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetailWithOptions(shared_ptr<QueryDeviceDistributeDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceDistributeDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceDistributeDetailResponse(callApi(params, req, runtime));
}

QueryDeviceDistributeDetailResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeDetail(shared_ptr<QueryDeviceDistributeDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeDetailWithOptions(request, runtime);
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJobWithOptions(shared_ptr<QueryDeviceDistributeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceDistributeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceDistributeJobResponse(callApi(params, req, runtime));
}

QueryDeviceDistributeJobResponse Alibabacloud_Iot20180120::Client::queryDeviceDistributeJob(shared_ptr<QueryDeviceDistributeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceDistributeJobWithOptions(request, runtime);
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventDataWithOptions(shared_ptr<QueryDeviceEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceEventData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceEventDataResponse(callApi(params, req, runtime));
}

QueryDeviceEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceEventData(shared_ptr<QueryDeviceEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventDataWithOptions(request, runtime);
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFileWithOptions(shared_ptr<QueryDeviceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileId)) {
    query->insert(pair<string, string>("FileId", *request->fileId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceFile"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceFileResponse(callApi(params, req, runtime));
}

QueryDeviceFileResponse Alibabacloud_Iot20180120::Client::queryDeviceFile(shared_ptr<QueryDeviceFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileWithOptions(request, runtime);
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileListWithOptions(shared_ptr<QueryDeviceFileListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceFileList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceFileListResponse(callApi(params, req, runtime));
}

QueryDeviceFileListResponse Alibabacloud_Iot20180120::Client::queryDeviceFileList(shared_ptr<QueryDeviceFileListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceFileListWithOptions(request, runtime);
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDeviceWithOptions(shared_ptr<QueryDeviceGroupByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceGroupByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceGroupByDeviceResponse(callApi(params, req, runtime));
}

QueryDeviceGroupByDeviceResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByDevice(shared_ptr<QueryDeviceGroupByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByDeviceWithOptions(request, runtime);
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTagsWithOptions(shared_ptr<QueryDeviceGroupByTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<vector<QueryDeviceGroupByTagsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<QueryDeviceGroupByTagsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceGroupByTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceGroupByTagsResponse(callApi(params, req, runtime));
}

QueryDeviceGroupByTagsResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupByTags(shared_ptr<QueryDeviceGroupByTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupByTagsWithOptions(request, runtime);
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfoWithOptions(shared_ptr<QueryDeviceGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceGroupInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceGroupInfoResponse(callApi(params, req, runtime));
}

QueryDeviceGroupInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupInfo(shared_ptr<QueryDeviceGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupInfoWithOptions(request, runtime);
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupListWithOptions(shared_ptr<QueryDeviceGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->groupTypes)) {
    query->insert(pair<string, vector<string>>("GroupTypes", *request->groupTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->superGroupId)) {
    query->insert(pair<string, string>("SuperGroupId", *request->superGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceGroupList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceGroupListResponse(callApi(params, req, runtime));
}

QueryDeviceGroupListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupList(shared_ptr<QueryDeviceGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupListWithOptions(request, runtime);
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagListWithOptions(shared_ptr<QueryDeviceGroupTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceGroupTagList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceGroupTagListResponse(callApi(params, req, runtime));
}

QueryDeviceGroupTagListResponse Alibabacloud_Iot20180120::Client::queryDeviceGroupTagList(shared_ptr<QueryDeviceGroupTagListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceGroupTagListWithOptions(request, runtime);
}

QueryDeviceInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceInfoWithOptions(shared_ptr<QueryDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceInfoResponse(callApi(params, req, runtime));
}

QueryDeviceInfoResponse Alibabacloud_Iot20180120::Client::queryDeviceInfo(shared_ptr<QueryDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceInfoWithOptions(request, runtime);
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroupWithOptions(shared_ptr<QueryDeviceListByDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceListByDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceListByDeviceGroupResponse(callApi(params, req, runtime));
}

QueryDeviceListByDeviceGroupResponse Alibabacloud_Iot20180120::Client::queryDeviceListByDeviceGroup(shared_ptr<QueryDeviceListByDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceListByDeviceGroupWithOptions(request, runtime);
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventDataWithOptions(shared_ptr<QueryDeviceOriginalEventDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceOriginalEventData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceOriginalEventDataResponse(callApi(params, req, runtime));
}

QueryDeviceOriginalEventDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalEventData(shared_ptr<QueryDeviceOriginalEventDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalEventDataWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyDataWithOptions(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceOriginalPropertyData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceOriginalPropertyDataResponse(callApi(params, req, runtime));
}

QueryDeviceOriginalPropertyDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyData(shared_ptr<QueryDeviceOriginalPropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyDataWithOptions(request, runtime);
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatusWithOptions(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceOriginalPropertyStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceOriginalPropertyStatusResponse(callApi(params, req, runtime));
}

QueryDeviceOriginalPropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalPropertyStatus(shared_ptr<QueryDeviceOriginalPropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalPropertyStatusWithOptions(request, runtime);
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceDataWithOptions(shared_ptr<QueryDeviceOriginalServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceOriginalServiceData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceOriginalServiceDataResponse(callApi(params, req, runtime));
}

QueryDeviceOriginalServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceOriginalServiceData(shared_ptr<QueryDeviceOriginalServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceOriginalServiceDataWithOptions(request, runtime);
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDevicePropWithOptions(shared_ptr<QueryDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceProp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePropResponse(callApi(params, req, runtime));
}

QueryDevicePropResponse Alibabacloud_Iot20180120::Client::queryDeviceProp(shared_ptr<QueryDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropWithOptions(request, runtime);
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesDataWithOptions(shared_ptr<QueryDevicePropertiesDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->identifier)) {
    query->insert(pair<string, vector<string>>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePropertiesData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePropertiesDataResponse(callApi(params, req, runtime));
}

QueryDevicePropertiesDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertiesData(shared_ptr<QueryDevicePropertiesDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertiesDataWithOptions(request, runtime);
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyDataWithOptions(shared_ptr<QueryDevicePropertyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePropertyData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePropertyDataResponse(callApi(params, req, runtime));
}

QueryDevicePropertyDataResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyData(shared_ptr<QueryDevicePropertyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyDataWithOptions(request, runtime);
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatusWithOptions(shared_ptr<QueryDevicePropertyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePropertyStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePropertyStatusResponse(callApi(params, req, runtime));
}

QueryDevicePropertyStatusResponse Alibabacloud_Iot20180120::Client::queryDevicePropertyStatus(shared_ptr<QueryDevicePropertyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePropertyStatusWithOptions(request, runtime);
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceDataWithOptions(shared_ptr<QueryDeviceServiceDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceServiceData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceServiceDataResponse(callApi(params, req, runtime));
}

QueryDeviceServiceDataResponse Alibabacloud_Iot20180120::Client::queryDeviceServiceData(shared_ptr<QueryDeviceServiceDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceServiceDataWithOptions(request, runtime);
}

QueryDeviceSpeechResponse Alibabacloud_Iot20180120::Client::queryDeviceSpeechWithOptions(shared_ptr<QueryDeviceSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceSpeechResponse(callApi(params, req, runtime));
}

QueryDeviceSpeechResponse Alibabacloud_Iot20180120::Client::queryDeviceSpeech(shared_ptr<QueryDeviceSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceSpeechWithOptions(request, runtime);
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatisticsWithOptions(shared_ptr<QueryDeviceStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceStatistics"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceStatisticsResponse(callApi(params, req, runtime));
}

QueryDeviceStatisticsResponse Alibabacloud_Iot20180120::Client::queryDeviceStatistics(shared_ptr<QueryDeviceStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceStatisticsWithOptions(request, runtime);
}

QueryDeviceSubTopicResponse Alibabacloud_Iot20180120::Client::queryDeviceSubTopicWithOptions(shared_ptr<QueryDeviceSubTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceSubTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceSubTopicResponse(callApi(params, req, runtime));
}

QueryDeviceSubTopicResponse Alibabacloud_Iot20180120::Client::queryDeviceSubTopic(shared_ptr<QueryDeviceSubTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceSubTopicWithOptions(request, runtime);
}

QueryDeviceTunnelResponse Alibabacloud_Iot20180120::Client::queryDeviceTunnelWithOptions(shared_ptr<QueryDeviceTunnelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tunnelId)) {
    query->insert(pair<string, string>("TunnelId", *request->tunnelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceTunnel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceTunnelResponse(callApi(params, req, runtime));
}

QueryDeviceTunnelResponse Alibabacloud_Iot20180120::Client::queryDeviceTunnel(shared_ptr<QueryDeviceTunnelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceTunnelWithOptions(request, runtime);
}

QueryDevicesHotStorageDataResponse Alibabacloud_Iot20180120::Client::queryDevicesHotStorageDataWithOptions(shared_ptr<QueryDevicesHotStorageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTopic)) {
    query->insert(pair<string, string>("UserTopic", *request->userTopic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicesHotStorageData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicesHotStorageDataResponse(callApi(params, req, runtime));
}

QueryDevicesHotStorageDataResponse Alibabacloud_Iot20180120::Client::queryDevicesHotStorageData(shared_ptr<QueryDevicesHotStorageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesHotStorageDataWithOptions(request, runtime);
}

QueryDevicesHotStorageDataStatusResponse Alibabacloud_Iot20180120::Client::queryDevicesHotStorageDataStatusWithOptions(shared_ptr<QueryDevicesHotStorageDataStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asc)) {
    query->insert(pair<string, long>("Asc", *request->asc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTopic)) {
    query->insert(pair<string, string>("UserTopic", *request->userTopic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicesHotStorageDataStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicesHotStorageDataStatusResponse(callApi(params, req, runtime));
}

QueryDevicesHotStorageDataStatusResponse Alibabacloud_Iot20180120::Client::queryDevicesHotStorageDataStatus(shared_ptr<QueryDevicesHotStorageDataStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicesHotStorageDataStatusWithOptions(request, runtime);
}

QueryDynamicGroupDevicesResponse Alibabacloud_Iot20180120::Client::queryDynamicGroupDevicesWithOptions(shared_ptr<QueryDynamicGroupDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->fuzzyName)) {
    query->insert(pair<string, bool>("FuzzyName", *request->fuzzyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDynamicGroupDevices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDynamicGroupDevicesResponse(callApi(params, req, runtime));
}

QueryDynamicGroupDevicesResponse Alibabacloud_Iot20180120::Client::queryDynamicGroupDevices(shared_ptr<QueryDynamicGroupDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDynamicGroupDevicesWithOptions(request, runtime);
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverWithOptions(shared_ptr<QueryEdgeDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverName)) {
    query->insert(pair<string, string>("DriverName", *request->driverName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeDriverResponse(callApi(params, req, runtime));
}

QueryEdgeDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeDriver(shared_ptr<QueryEdgeDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverWithOptions(request, runtime);
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersionWithOptions(shared_ptr<QueryEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->versionState)) {
    query->insert(pair<string, long>("VersionState", *request->versionState));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeDriverVersionResponse(callApi(params, req, runtime));
}

QueryEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::queryEdgeDriverVersion(shared_ptr<QueryEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeDriverVersionWithOptions(request, runtime);
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceWithOptions(shared_ptr<QueryEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstance(shared_ptr<QueryEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceWithOptions(request, runtime);
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannelWithOptions(shared_ptr<QueryEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceChannelResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceChannel(shared_ptr<QueryEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceChannelWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceWithOptions(shared_ptr<QueryEdgeInstanceDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceDeviceResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceDeviceResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDevice(shared_ptr<QueryEdgeInstanceDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceWithOptions(request, runtime);
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriverWithOptions(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceDeviceByDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceDeviceByDriverResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceDeviceByDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDeviceByDriver(shared_ptr<QueryEdgeInstanceDeviceByDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDeviceByDriverWithOptions(request, runtime);
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriverWithOptions(shared_ptr<QueryEdgeInstanceDriverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceDriver"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceDriverResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceDriverResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceDriver(shared_ptr<QueryEdgeInstanceDriverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceDriverWithOptions(request, runtime);
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGatewayWithOptions(shared_ptr<QueryEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceGateway"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceGatewayResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceGateway(shared_ptr<QueryEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceGatewayWithOptions(request, runtime);
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeploymentWithOptions(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceHistoricDeployment"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceHistoricDeploymentResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceHistoricDeploymentResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceHistoricDeployment(shared_ptr<QueryEdgeInstanceHistoricDeploymentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceHistoricDeploymentWithOptions(request, runtime);
}

QueryEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceMessageRoutingWithOptions(shared_ptr<QueryEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceMessageRouting"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceMessageRoutingResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceMessageRouting(shared_ptr<QueryEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRuleWithOptions(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEdgeInstanceSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEdgeInstanceSceneRuleResponse(callApi(params, req, runtime));
}

QueryEdgeInstanceSceneRuleResponse Alibabacloud_Iot20180120::Client::queryEdgeInstanceSceneRule(shared_ptr<QueryEdgeInstanceSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEdgeInstanceSceneRuleWithOptions(request, runtime);
}

QueryImportedDeviceByApplyIdResponse Alibabacloud_Iot20180120::Client::queryImportedDeviceByApplyIdWithOptions(shared_ptr<QueryImportedDeviceByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryImportedDeviceByApplyId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryImportedDeviceByApplyIdResponse(callApi(params, req, runtime));
}

QueryImportedDeviceByApplyIdResponse Alibabacloud_Iot20180120::Client::queryImportedDeviceByApplyId(shared_ptr<QueryImportedDeviceByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryImportedDeviceByApplyIdWithOptions(request, runtime);
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJobWithOptions(shared_ptr<QueryJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryJobResponse(callApi(params, req, runtime));
}

QueryJobResponse Alibabacloud_Iot20180120::Client::queryJob(shared_ptr<QueryJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobWithOptions(request, runtime);
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatisticsWithOptions(shared_ptr<QueryJobStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryJobStatistics"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryJobStatisticsResponse(callApi(params, req, runtime));
}

QueryJobStatisticsResponse Alibabacloud_Iot20180120::Client::queryJobStatistics(shared_ptr<QueryJobStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryJobStatisticsWithOptions(request, runtime);
}

QueryLicenseDeviceListResponse Alibabacloud_Iot20180120::Client::queryLicenseDeviceListWithOptions(shared_ptr<QueryLicenseDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    query->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLicenseDeviceList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLicenseDeviceListResponse(callApi(params, req, runtime));
}

QueryLicenseDeviceListResponse Alibabacloud_Iot20180120::Client::queryLicenseDeviceList(shared_ptr<QueryLicenseDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLicenseDeviceListWithOptions(request, runtime);
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissionsWithOptions(shared_ptr<QueryLoRaJoinPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLoRaJoinPermissions"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLoRaJoinPermissionsResponse(callApi(params, req, runtime));
}

QueryLoRaJoinPermissionsResponse Alibabacloud_Iot20180120::Client::queryLoRaJoinPermissions(shared_ptr<QueryLoRaJoinPermissionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLoRaJoinPermissionsWithOptions(request, runtime);
}

QueryMessageInfoResponse Alibabacloud_Iot20180120::Client::queryMessageInfoWithOptions(shared_ptr<QueryMessageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uniMsgId)) {
    query->insert(pair<string, string>("UniMsgId", *request->uniMsgId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMessageInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMessageInfoResponse(callApi(params, req, runtime));
}

QueryMessageInfoResponse Alibabacloud_Iot20180120::Client::queryMessageInfo(shared_ptr<QueryMessageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessageInfoWithOptions(request, runtime);
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmwareWithOptions(shared_ptr<QueryOTAFirmwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->firmwareId)) {
    query->insert(pair<string, string>("FirmwareId", *request->firmwareId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOTAFirmware"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOTAFirmwareResponse(callApi(params, req, runtime));
}

QueryOTAFirmwareResponse Alibabacloud_Iot20180120::Client::queryOTAFirmware(shared_ptr<QueryOTAFirmwareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAFirmwareWithOptions(request, runtime);
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJobWithOptions(shared_ptr<QueryOTAJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryOTAJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryOTAJobResponse(callApi(params, req, runtime));
}

QueryOTAJobResponse Alibabacloud_Iot20180120::Client::queryOTAJob(shared_ptr<QueryOTAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryOTAJobWithOptions(request, runtime);
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyIdWithOptions(shared_ptr<QueryPageByApplyIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    query->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPageByApplyId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPageByApplyIdResponse(callApi(params, req, runtime));
}

QueryPageByApplyIdResponse Alibabacloud_Iot20180120::Client::queryPageByApplyId(shared_ptr<QueryPageByApplyIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPageByApplyIdWithOptions(request, runtime);
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProductWithOptions(shared_ptr<QueryProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductResponse(callApi(params, req, runtime));
}

QueryProductResponse Alibabacloud_Iot20180120::Client::queryProduct(shared_ptr<QueryProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductWithOptions(request, runtime);
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfoWithOptions(shared_ptr<QueryProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductCertInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductCertInfoResponse(callApi(params, req, runtime));
}

QueryProductCertInfoResponse Alibabacloud_Iot20180120::Client::queryProductCertInfo(shared_ptr<QueryProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductCertInfoWithOptions(request, runtime);
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductListWithOptions(shared_ptr<QueryProductListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunCommodityCode)) {
    query->insert(pair<string, string>("AliyunCommodityCode", *request->aliyunCommodityCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductListResponse(callApi(params, req, runtime));
}

QueryProductListResponse Alibabacloud_Iot20180120::Client::queryProductList(shared_ptr<QueryProductListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductListWithOptions(request, runtime);
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopicWithOptions(shared_ptr<QueryProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProductTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProductTopicResponse(callApi(params, req, runtime));
}

QueryProductTopicResponse Alibabacloud_Iot20180120::Client::queryProductTopic(shared_ptr<QueryProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProductTopicWithOptions(request, runtime);
}

QueryProjectShareDeviceListResponse Alibabacloud_Iot20180120::Client::queryProjectShareDeviceListWithOptions(shared_ptr<QueryProjectShareDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryProjectShareDeviceList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryProjectShareDeviceListResponse(callApi(params, req, runtime));
}

QueryProjectShareDeviceListResponse Alibabacloud_Iot20180120::Client::queryProjectShareDeviceList(shared_ptr<QueryProjectShareDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryProjectShareDeviceListWithOptions(request, runtime);
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRuleWithOptions(shared_ptr<QuerySceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySceneRuleResponse(callApi(params, req, runtime));
}

QuerySceneRuleResponse Alibabacloud_Iot20180120::Client::querySceneRule(shared_ptr<QuerySceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySceneRuleWithOptions(request, runtime);
}

QuerySchedulePeriodListResponse Alibabacloud_Iot20180120::Client::querySchedulePeriodListWithOptions(shared_ptr<QuerySchedulePeriodListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySchedulePeriodList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySchedulePeriodListResponse(callApi(params, req, runtime));
}

QuerySchedulePeriodListResponse Alibabacloud_Iot20180120::Client::querySchedulePeriodList(shared_ptr<QuerySchedulePeriodListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySchedulePeriodListWithOptions(request, runtime);
}

QueryShareTaskDeviceListResponse Alibabacloud_Iot20180120::Client::queryShareTaskDeviceListWithOptions(shared_ptr<QueryShareTaskDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shareTaskId)) {
    body->insert(pair<string, string>("ShareTaskId", *request->shareTaskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryShareTaskDeviceList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryShareTaskDeviceListResponse(callApi(params, req, runtime));
}

QueryShareTaskDeviceListResponse Alibabacloud_Iot20180120::Client::queryShareTaskDeviceList(shared_ptr<QueryShareTaskDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryShareTaskDeviceListWithOptions(request, runtime);
}

QuerySolutionDeviceGroupPageResponse Alibabacloud_Iot20180120::Client::querySolutionDeviceGroupPageWithOptions(shared_ptr<QuerySolutionDeviceGroupPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzyGroupName)) {
    query->insert(pair<string, string>("FuzzyGroupName", *request->fuzzyGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    query->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    query->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySolutionDeviceGroupPage"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySolutionDeviceGroupPageResponse(callApi(params, req, runtime));
}

QuerySolutionDeviceGroupPageResponse Alibabacloud_Iot20180120::Client::querySolutionDeviceGroupPage(shared_ptr<QuerySolutionDeviceGroupPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySolutionDeviceGroupPageWithOptions(request, runtime);
}

QuerySoundCodeLabelBatchFailedResultResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelBatchFailedResultWithOptions(shared_ptr<QuerySoundCodeLabelBatchFailedResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchCode)) {
    body->insert(pair<string, string>("BatchCode", *request->batchCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySoundCodeLabelBatchFailedResult"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySoundCodeLabelBatchFailedResultResponse(callApi(params, req, runtime));
}

QuerySoundCodeLabelBatchFailedResultResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelBatchFailedResult(shared_ptr<QuerySoundCodeLabelBatchFailedResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundCodeLabelBatchFailedResultWithOptions(request, runtime);
}

QuerySoundCodeLabelBatchListResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelBatchListWithOptions(shared_ptr<QuerySoundCodeLabelBatchListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySoundCodeLabelBatchList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySoundCodeLabelBatchListResponse(callApi(params, req, runtime));
}

QuerySoundCodeLabelBatchListResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelBatchList(shared_ptr<QuerySoundCodeLabelBatchListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundCodeLabelBatchListWithOptions(request, runtime);
}

QuerySoundCodeLabelListResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelListWithOptions(shared_ptr<QuerySoundCodeLabelListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySoundCodeLabelList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySoundCodeLabelListResponse(callApi(params, req, runtime));
}

QuerySoundCodeLabelListResponse Alibabacloud_Iot20180120::Client::querySoundCodeLabelList(shared_ptr<QuerySoundCodeLabelListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundCodeLabelListWithOptions(request, runtime);
}

QuerySoundCodeListResponse Alibabacloud_Iot20180120::Client::querySoundCodeListWithOptions(shared_ptr<QuerySoundCodeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySoundCodeList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySoundCodeListResponse(callApi(params, req, runtime));
}

QuerySoundCodeListResponse Alibabacloud_Iot20180120::Client::querySoundCodeList(shared_ptr<QuerySoundCodeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundCodeListWithOptions(request, runtime);
}

QuerySoundCodeScheduleListResponse Alibabacloud_Iot20180120::Client::querySoundCodeScheduleListWithOptions(shared_ptr<QuerySoundCodeScheduleListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySoundCodeScheduleList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySoundCodeScheduleListResponse(callApi(params, req, runtime));
}

QuerySoundCodeScheduleListResponse Alibabacloud_Iot20180120::Client::querySoundCodeScheduleList(shared_ptr<QuerySoundCodeScheduleListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySoundCodeScheduleListWithOptions(request, runtime);
}

QuerySpeechResponse Alibabacloud_Iot20180120::Client::querySpeechWithOptions(shared_ptr<QuerySpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechCode)) {
    body->insert(pair<string, string>("SpeechCode", *request->speechCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechResponse(callApi(params, req, runtime));
}

QuerySpeechResponse Alibabacloud_Iot20180120::Client::querySpeech(shared_ptr<QuerySpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechWithOptions(request, runtime);
}

QuerySpeechDeviceResponse Alibabacloud_Iot20180120::Client::querySpeechDeviceWithOptions(shared_ptr<QuerySpeechDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->availableSpace)) {
    body->insert(pair<string, string>("AvailableSpace", *request->availableSpace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->availableSpaceScope)) {
    body->insert(pair<string, string>("AvailableSpaceScope", *request->availableSpaceScope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechDeviceResponse(callApi(params, req, runtime));
}

QuerySpeechDeviceResponse Alibabacloud_Iot20180120::Client::querySpeechDevice(shared_ptr<QuerySpeechDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechDeviceWithOptions(request, runtime);
}

QuerySpeechLicenseDeviceListResponse Alibabacloud_Iot20180120::Client::querySpeechLicenseDeviceListWithOptions(shared_ptr<QuerySpeechLicenseDeviceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    query->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkGroupId)) {
    body->insert(pair<string, string>("CheckGroupId", *request->checkGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->licenseStatusList)) {
    body->insert(pair<string, vector<string>>("LicenseStatusList", *request->licenseStatusList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechLicenseDeviceList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechLicenseDeviceListResponse(callApi(params, req, runtime));
}

QuerySpeechLicenseDeviceListResponse Alibabacloud_Iot20180120::Client::querySpeechLicenseDeviceList(shared_ptr<QuerySpeechLicenseDeviceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechLicenseDeviceListWithOptions(request, runtime);
}

QuerySpeechListResponse Alibabacloud_Iot20180120::Client::querySpeechListWithOptions(shared_ptr<QuerySpeechListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechListResponse(callApi(params, req, runtime));
}

QuerySpeechListResponse Alibabacloud_Iot20180120::Client::querySpeechList(shared_ptr<QuerySpeechListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechListWithOptions(request, runtime);
}

QuerySpeechPushJobResponse Alibabacloud_Iot20180120::Client::querySpeechPushJobWithOptions(shared_ptr<QuerySpeechPushJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    query->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushMode)) {
    body->insert(pair<string, string>("PushMode", *request->pushMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->statusList)) {
    body->insert(pair<string, vector<string>>("StatusList", *request->statusList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechPushJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechPushJobResponse(callApi(params, req, runtime));
}

QuerySpeechPushJobResponse Alibabacloud_Iot20180120::Client::querySpeechPushJob(shared_ptr<QuerySpeechPushJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechPushJobWithOptions(request, runtime);
}

QuerySpeechPushJobDeviceResponse Alibabacloud_Iot20180120::Client::querySpeechPushJobDeviceWithOptions(shared_ptr<QuerySpeechPushJobDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    body->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechPushJobDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechPushJobDeviceResponse(callApi(params, req, runtime));
}

QuerySpeechPushJobDeviceResponse Alibabacloud_Iot20180120::Client::querySpeechPushJobDevice(shared_ptr<QuerySpeechPushJobDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechPushJobDeviceWithOptions(request, runtime);
}

QuerySpeechPushJobSpeechResponse Alibabacloud_Iot20180120::Client::querySpeechPushJobSpeechWithOptions(shared_ptr<QuerySpeechPushJobSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    body->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageId)) {
    body->insert(pair<string, long>("PageId", *request->pageId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySpeechPushJobSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySpeechPushJobSpeechResponse(callApi(params, req, runtime));
}

QuerySpeechPushJobSpeechResponse Alibabacloud_Iot20180120::Client::querySpeechPushJobSpeech(shared_ptr<QuerySpeechPushJobSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySpeechPushJobSpeechWithOptions(request, runtime);
}

QueryStudioAppDomainListOpenResponse Alibabacloud_Iot20180120::Client::queryStudioAppDomainListOpenWithOptions(shared_ptr<QueryStudioAppDomainListOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStudioAppDomainListOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStudioAppDomainListOpenResponse(callApi(params, req, runtime));
}

QueryStudioAppDomainListOpenResponse Alibabacloud_Iot20180120::Client::queryStudioAppDomainListOpen(shared_ptr<QueryStudioAppDomainListOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStudioAppDomainListOpenWithOptions(request, runtime);
}

QueryStudioAppListResponse Alibabacloud_Iot20180120::Client::queryStudioAppListWithOptions(shared_ptr<QueryStudioAppListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fuzzyName)) {
    body->insert(pair<string, string>("FuzzyName", *request->fuzzyName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->types)) {
    body->insert(pair<string, vector<string>>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStudioAppList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStudioAppListResponse(callApi(params, req, runtime));
}

QueryStudioAppListResponse Alibabacloud_Iot20180120::Client::queryStudioAppList(shared_ptr<QueryStudioAppListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStudioAppListWithOptions(request, runtime);
}

QueryStudioAppPageListOpenResponse Alibabacloud_Iot20180120::Client::queryStudioAppPageListOpenWithOptions(shared_ptr<QueryStudioAppPageListOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isRelease)) {
    body->insert(pair<string, bool>("IsRelease", *request->isRelease));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStudioAppPageListOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStudioAppPageListOpenResponse(callApi(params, req, runtime));
}

QueryStudioAppPageListOpenResponse Alibabacloud_Iot20180120::Client::queryStudioAppPageListOpen(shared_ptr<QueryStudioAppPageListOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStudioAppPageListOpenWithOptions(request, runtime);
}

QueryStudioProjectListResponse Alibabacloud_Iot20180120::Client::queryStudioProjectListWithOptions(shared_ptr<QueryStudioProjectListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    body->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryStudioProjectList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryStudioProjectListResponse(callApi(params, req, runtime));
}

QueryStudioProjectListResponse Alibabacloud_Iot20180120::Client::queryStudioProjectList(shared_ptr<QueryStudioProjectListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryStudioProjectListWithOptions(request, runtime);
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelationWithOptions(shared_ptr<QuerySubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySubscribeRelationResponse(callApi(params, req, runtime));
}

QuerySubscribeRelationResponse Alibabacloud_Iot20180120::Client::querySubscribeRelation(shared_ptr<QuerySubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySubscribeRelationWithOptions(request, runtime);
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLogWithOptions(shared_ptr<QuerySummarySceneRuleLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySummarySceneRuleLog"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySummarySceneRuleLogResponse(callApi(params, req, runtime));
}

QuerySummarySceneRuleLogResponse Alibabacloud_Iot20180120::Client::querySummarySceneRuleLog(shared_ptr<QuerySummarySceneRuleLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySummarySceneRuleLogWithOptions(request, runtime);
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroupWithOptions(shared_ptr<QuerySuperDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySuperDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySuperDeviceGroupResponse(callApi(params, req, runtime));
}

QuerySuperDeviceGroupResponse Alibabacloud_Iot20180120::Client::querySuperDeviceGroup(shared_ptr<QuerySuperDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySuperDeviceGroupWithOptions(request, runtime);
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTaskWithOptions(shared_ptr<QueryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTaskResponse(callApi(params, req, runtime));
}

QueryTaskResponse Alibabacloud_Iot20180120::Client::queryTask(shared_ptr<QueryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTaskWithOptions(request, runtime);
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModelWithOptions(shared_ptr<QueryThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryThingModelResponse(callApi(params, req, runtime));
}

QueryThingModelResponse Alibabacloud_Iot20180120::Client::queryThingModel(shared_ptr<QueryThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelWithOptions(request, runtime);
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigWithOptions(shared_ptr<QueryThingModelExtendConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryThingModelExtendConfig"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryThingModelExtendConfigResponse(callApi(params, req, runtime));
}

QueryThingModelExtendConfigResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfig(shared_ptr<QueryThingModelExtendConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigWithOptions(request, runtime);
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublishedWithOptions(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryThingModelExtendConfigPublished"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryThingModelExtendConfigPublishedResponse(callApi(params, req, runtime));
}

QueryThingModelExtendConfigPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelExtendConfigPublished(shared_ptr<QueryThingModelExtendConfigPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelExtendConfigPublishedWithOptions(request, runtime);
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublishedWithOptions(shared_ptr<QueryThingModelPublishedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelVersion)) {
    query->insert(pair<string, string>("ModelVersion", *request->modelVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryThingModelPublished"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryThingModelPublishedResponse(callApi(params, req, runtime));
}

QueryThingModelPublishedResponse Alibabacloud_Iot20180120::Client::queryThingModelPublished(shared_ptr<QueryThingModelPublishedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryThingModelPublishedWithOptions(request, runtime);
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTableWithOptions(shared_ptr<QueryTopicReverseRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTopicReverseRouteTable"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTopicReverseRouteTableResponse(callApi(params, req, runtime));
}

QueryTopicReverseRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicReverseRouteTable(shared_ptr<QueryTopicReverseRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicReverseRouteTableWithOptions(request, runtime);
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTableWithOptions(shared_ptr<QueryTopicRouteTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTopicRouteTable"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTopicRouteTableResponse(callApi(params, req, runtime));
}

QueryTopicRouteTableResponse Alibabacloud_Iot20180120::Client::queryTopicRouteTable(shared_ptr<QueryTopicRouteTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTopicRouteTableWithOptions(request, runtime);
}

RRpcResponse Alibabacloud_Iot20180120::Client::rRpcWithOptions(shared_ptr<RRpcRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestBase64Byte)) {
    query->insert(pair<string, string>("RequestBase64Byte", *request->requestBase64Byte));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RRpc"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RRpcResponse(callApi(params, req, runtime));
}

RRpcResponse Alibabacloud_Iot20180120::Client::rRpc(shared_ptr<RRpcRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rRpcWithOptions(request, runtime);
}

ReBindLicenseDeviceResponse Alibabacloud_Iot20180120::Client::reBindLicenseDeviceWithOptions(shared_ptr<ReBindLicenseDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceNameList)) {
    body->insert(pair<string, vector<string>>("DeviceNameList", *request->deviceNameList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReBindLicenseDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReBindLicenseDeviceResponse(callApi(params, req, runtime));
}

ReBindLicenseDeviceResponse Alibabacloud_Iot20180120::Client::reBindLicenseDevice(shared_ptr<ReBindLicenseDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reBindLicenseDeviceWithOptions(request, runtime);
}

RecognizeCarNumResponse Alibabacloud_Iot20180120::Client::recognizeCarNumWithOptions(shared_ptr<RecognizeCarNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizeCarNum"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizeCarNumResponse(callApi(params, req, runtime));
}

RecognizeCarNumResponse Alibabacloud_Iot20180120::Client::recognizeCarNum(shared_ptr<RecognizeCarNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeCarNumWithOptions(request, runtime);
}

RecognizePictureGeneralResponse Alibabacloud_Iot20180120::Client::recognizePictureGeneralWithOptions(shared_ptr<RecognizePictureGeneralRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecognizePictureGeneral"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecognizePictureGeneralResponse(callApi(params, req, runtime));
}

RecognizePictureGeneralResponse Alibabacloud_Iot20180120::Client::recognizePictureGeneral(shared_ptr<RecognizePictureGeneralRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizePictureGeneralWithOptions(request, runtime);
}

RefreshDeviceTunnelSharePasswordResponse Alibabacloud_Iot20180120::Client::refreshDeviceTunnelSharePasswordWithOptions(shared_ptr<RefreshDeviceTunnelSharePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshDeviceTunnelSharePassword"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshDeviceTunnelSharePasswordResponse(callApi(params, req, runtime));
}

RefreshDeviceTunnelSharePasswordResponse Alibabacloud_Iot20180120::Client::refreshDeviceTunnelSharePassword(shared_ptr<RefreshDeviceTunnelSharePasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshDeviceTunnelSharePasswordWithOptions(request, runtime);
}

RefreshStudioAppTokenOpenResponse Alibabacloud_Iot20180120::Client::refreshStudioAppTokenOpenWithOptions(shared_ptr<RefreshStudioAppTokenOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshStudioAppTokenOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshStudioAppTokenOpenResponse(callApi(params, req, runtime));
}

RefreshStudioAppTokenOpenResponse Alibabacloud_Iot20180120::Client::refreshStudioAppTokenOpen(shared_ptr<RefreshStudioAppTokenOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshStudioAppTokenOpenWithOptions(request, runtime);
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDeviceWithOptions(shared_ptr<RegisterDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appKey)) {
    query->insert(pair<string, string>("AppKey", *request->appKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->devEui)) {
    query->insert(pair<string, string>("DevEui", *request->devEui));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->joinEui)) {
    query->insert(pair<string, string>("JoinEui", *request->joinEui));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->loraNodeType)) {
    query->insert(pair<string, string>("LoraNodeType", *request->loraNodeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nickname)) {
    query->insert(pair<string, string>("Nickname", *request->nickname));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pinCode)) {
    query->insert(pair<string, string>("PinCode", *request->pinCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterDeviceResponse(callApi(params, req, runtime));
}

RegisterDeviceResponse Alibabacloud_Iot20180120::Client::registerDevice(shared_ptr<RegisterDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerDeviceWithOptions(request, runtime);
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersionWithOptions(shared_ptr<ReleaseEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseEdgeDriverVersionResponse(callApi(params, req, runtime));
}

ReleaseEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::releaseEdgeDriverVersion(shared_ptr<ReleaseEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseEdgeDriverVersionWithOptions(request, runtime);
}

ReleaseProductResponse Alibabacloud_Iot20180120::Client::releaseProductWithOptions(shared_ptr<ReleaseProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReleaseProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReleaseProductResponse(callApi(params, req, runtime));
}

ReleaseProductResponse Alibabacloud_Iot20180120::Client::releaseProduct(shared_ptr<ReleaseProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return releaseProductWithOptions(request, runtime);
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopoWithOptions(shared_ptr<RemoveThingTopoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveThingTopo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveThingTopoResponse(callApi(params, req, runtime));
}

RemoveThingTopoResponse Alibabacloud_Iot20180120::Client::removeThingTopo(shared_ptr<RemoveThingTopoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeThingTopoWithOptions(request, runtime);
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGatewayWithOptions(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentGatewayId)) {
    query->insert(pair<string, string>("CurrentGatewayId", *request->currentGatewayId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newGatewayId)) {
    query->insert(pair<string, string>("NewGatewayId", *request->newGatewayId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceEdgeInstanceGateway"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceEdgeInstanceGatewayResponse(callApi(params, req, runtime));
}

ReplaceEdgeInstanceGatewayResponse Alibabacloud_Iot20180120::Client::replaceEdgeInstanceGateway(shared_ptr<ReplaceEdgeInstanceGatewayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceEdgeInstanceGatewayWithOptions(request, runtime);
}

RerunJobResponse Alibabacloud_Iot20180120::Client::rerunJobWithOptions(shared_ptr<RerunJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RerunJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RerunJobResponse(callApi(params, req, runtime));
}

RerunJobResponse Alibabacloud_Iot20180120::Client::rerunJob(shared_ptr<RerunJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rerunJobWithOptions(request, runtime);
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPositionWithOptions(shared_ptr<ResetConsumerGroupPositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetConsumerGroupPosition"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetConsumerGroupPositionResponse(callApi(params, req, runtime));
}

ResetConsumerGroupPositionResponse Alibabacloud_Iot20180120::Client::resetConsumerGroupPosition(shared_ptr<ResetConsumerGroupPositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetConsumerGroupPositionWithOptions(request, runtime);
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThingWithOptions(shared_ptr<ResetThingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetThing"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetThingResponse(callApi(params, req, runtime));
}

ResetThingResponse Alibabacloud_Iot20180120::Client::resetThing(shared_ptr<ResetThingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetThingWithOptions(request, runtime);
}

RetrySoundCodeLabelBatchResponse Alibabacloud_Iot20180120::Client::retrySoundCodeLabelBatchWithOptions(shared_ptr<RetrySoundCodeLabelBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->batchCode)) {
    body->insert(pair<string, string>("BatchCode", *request->batchCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RetrySoundCodeLabelBatch"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RetrySoundCodeLabelBatchResponse(callApi(params, req, runtime));
}

RetrySoundCodeLabelBatchResponse Alibabacloud_Iot20180120::Client::retrySoundCodeLabelBatch(shared_ptr<RetrySoundCodeLabelBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return retrySoundCodeLabelBatchWithOptions(request, runtime);
}

ReupgradeOTATaskResponse Alibabacloud_Iot20180120::Client::reupgradeOTATaskWithOptions(shared_ptr<ReupgradeOTATaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskId)) {
    query->insert(pair<string, vector<string>>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReupgradeOTATask"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReupgradeOTATaskResponse(callApi(params, req, runtime));
}

ReupgradeOTATaskResponse Alibabacloud_Iot20180120::Client::reupgradeOTATask(shared_ptr<ReupgradeOTATaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reupgradeOTATaskWithOptions(request, runtime);
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDevicePropWithOptions(shared_ptr<SaveDevicePropRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->props)) {
    query->insert(pair<string, string>("Props", *request->props));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveDeviceProp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveDevicePropResponse(callApi(params, req, runtime));
}

SaveDevicePropResponse Alibabacloud_Iot20180120::Client::saveDeviceProp(shared_ptr<SaveDevicePropRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveDevicePropWithOptions(request, runtime);
}

SaveScriptResponse Alibabacloud_Iot20180120::Client::saveScriptWithOptions(shared_ptr<SaveScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDraft)) {
    query->insert(pair<string, string>("ScriptDraft", *request->scriptDraft));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveScript"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveScriptResponse(callApi(params, req, runtime));
}

SaveScriptResponse Alibabacloud_Iot20180120::Client::saveScript(shared_ptr<SaveScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveScriptWithOptions(request, runtime);
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredPropertyWithOptions(shared_ptr<SetDeviceDesiredPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->items)) {
    query->insert(pair<string, string>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versions)) {
    query->insert(pair<string, string>("Versions", *request->versions));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceDesiredProperty"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceDesiredPropertyResponse(callApi(params, req, runtime));
}

SetDeviceDesiredPropertyResponse Alibabacloud_Iot20180120::Client::setDeviceDesiredProperty(shared_ptr<SetDeviceDesiredPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceDesiredPropertyWithOptions(request, runtime);
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTagsWithOptions(shared_ptr<SetDeviceGroupTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagString)) {
    query->insert(pair<string, string>("TagString", *request->tagString));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceGroupTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceGroupTagsResponse(callApi(params, req, runtime));
}

SetDeviceGroupTagsResponse Alibabacloud_Iot20180120::Client::setDeviceGroupTags(shared_ptr<SetDeviceGroupTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceGroupTagsWithOptions(request, runtime);
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDevicePropertyWithOptions(shared_ptr<SetDevicePropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->items)) {
    query->insert(pair<string, string>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceProperty"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDevicePropertyResponse(callApi(params, req, runtime));
}

SetDevicePropertyResponse Alibabacloud_Iot20180120::Client::setDeviceProperty(shared_ptr<SetDevicePropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicePropertyWithOptions(request, runtime);
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesPropertyWithOptions(shared_ptr<SetDevicesPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceName)) {
    query->insert(pair<string, vector<string>>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->items)) {
    query->insert(pair<string, string>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDevicesProperty"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDevicesPropertyResponse(callApi(params, req, runtime));
}

SetDevicesPropertyResponse Alibabacloud_Iot20180120::Client::setDevicesProperty(shared_ptr<SetDevicesPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicesPropertyWithOptions(request, runtime);
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigsWithOptions(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<SetEdgeInstanceDriverConfigsRequestConfigs>>(request->configs)) {
    query->insert(pair<string, vector<SetEdgeInstanceDriverConfigsRequestConfigs>>("Configs", *request->configs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEdgeInstanceDriverConfigs"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEdgeInstanceDriverConfigsResponse(callApi(params, req, runtime));
}

SetEdgeInstanceDriverConfigsResponse Alibabacloud_Iot20180120::Client::setEdgeInstanceDriverConfigs(shared_ptr<SetEdgeInstanceDriverConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEdgeInstanceDriverConfigsWithOptions(request, runtime);
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfoWithOptions(shared_ptr<SetProductCertInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->issueModel)) {
    query->insert(pair<string, long>("IssueModel", *request->issueModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetProductCertInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetProductCertInfoResponse(callApi(params, req, runtime));
}

SetProductCertInfoResponse Alibabacloud_Iot20180120::Client::setProductCertInfo(shared_ptr<SetProductCertInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setProductCertInfoWithOptions(request, runtime);
}

SetStudioProjectCooperationResponse Alibabacloud_Iot20180120::Client::setStudioProjectCooperationWithOptions(shared_ptr<SetStudioProjectCooperationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetStudioProjectCooperation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetStudioProjectCooperationResponse(callApi(params, req, runtime));
}

SetStudioProjectCooperationResponse Alibabacloud_Iot20180120::Client::setStudioProjectCooperation(shared_ptr<SetStudioProjectCooperationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setStudioProjectCooperationWithOptions(request, runtime);
}

SetupStudioAppAuthModeOpenResponse Alibabacloud_Iot20180120::Client::setupStudioAppAuthModeOpenWithOptions(shared_ptr<SetupStudioAppAuthModeOpenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->authMode)) {
    body->insert(pair<string, long>("AuthMode", *request->authMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetupStudioAppAuthModeOpen"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetupStudioAppAuthModeOpenResponse(callApi(params, req, runtime));
}

SetupStudioAppAuthModeOpenResponse Alibabacloud_Iot20180120::Client::setupStudioAppAuthModeOpen(shared_ptr<SetupStudioAppAuthModeOpenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setupStudioAppAuthModeOpenWithOptions(request, runtime);
}

ShareSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::shareSpeechByCombinationWithOptions(shared_ptr<ShareSpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->combinationList)) {
    body->insert(pair<string, vector<string>>("CombinationList", *request->combinationList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechId)) {
    body->insert(pair<string, string>("SpeechId", *request->speechId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ShareSpeechByCombination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ShareSpeechByCombinationResponse(callApi(params, req, runtime));
}

ShareSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::shareSpeechByCombination(shared_ptr<ShareSpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return shareSpeechByCombinationWithOptions(request, runtime);
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombinationWithOptions(shared_ptr<SpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->combinationList)) {
    body->insert(pair<string, vector<string>>("CombinationList", *request->combinationList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enforceFlag)) {
    body->insert(pair<string, bool>("EnforceFlag", *request->enforceFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechId)) {
    body->insert(pair<string, string>("SpeechId", *request->speechId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SpeechByCombination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SpeechByCombinationResponse(callApi(params, req, runtime));
}

SpeechByCombinationResponse Alibabacloud_Iot20180120::Client::speechByCombination(shared_ptr<SpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return speechByCombinationWithOptions(request, runtime);
}

SpeechBySynthesisResponse Alibabacloud_Iot20180120::Client::speechBySynthesisWithOptions(shared_ptr<SpeechBySynthesisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechId)) {
    body->insert(pair<string, string>("SpeechId", *request->speechId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    body->insert(pair<string, long>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    body->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    body->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SpeechBySynthesis"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SpeechBySynthesisResponse(callApi(params, req, runtime));
}

SpeechBySynthesisResponse Alibabacloud_Iot20180120::Client::speechBySynthesis(shared_ptr<SpeechBySynthesisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return speechBySynthesisWithOptions(request, runtime);
}

StartParserResponse Alibabacloud_Iot20180120::Client::startParserWithOptions(shared_ptr<StartParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartParserResponse(callApi(params, req, runtime));
}

StartParserResponse Alibabacloud_Iot20180120::Client::startParser(shared_ptr<StartParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startParserWithOptions(request, runtime);
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRuleWithOptions(shared_ptr<StartRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartRuleResponse(callApi(params, req, runtime));
}

StartRuleResponse Alibabacloud_Iot20180120::Client::startRule(shared_ptr<StartRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRuleWithOptions(request, runtime);
}

StopParserResponse Alibabacloud_Iot20180120::Client::stopParserWithOptions(shared_ptr<StopParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopParserResponse(callApi(params, req, runtime));
}

StopParserResponse Alibabacloud_Iot20180120::Client::stopParser(shared_ptr<StopParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopParserWithOptions(request, runtime);
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRuleWithOptions(shared_ptr<StopRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopRuleResponse(callApi(params, req, runtime));
}

StopRuleResponse Alibabacloud_Iot20180120::Client::stopRule(shared_ptr<StopRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRuleWithOptions(request, runtime);
}

SubscribeTopicResponse Alibabacloud_Iot20180120::Client::subscribeTopicWithOptions(shared_ptr<SubscribeTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->topic)) {
    query->insert(pair<string, vector<string>>("Topic", *request->topic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubscribeTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubscribeTopicResponse(callApi(params, req, runtime));
}

SubscribeTopicResponse Alibabacloud_Iot20180120::Client::subscribeTopic(shared_ptr<SubscribeTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return subscribeTopicWithOptions(request, runtime);
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombinationWithOptions(shared_ptr<SyncSpeechByCombinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->combinationList)) {
    body->insert(pair<string, vector<string>>("CombinationList", *request->combinationList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    body->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enforceFlag)) {
    body->insert(pair<string, bool>("EnforceFlag", *request->enforceFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    body->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    body->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechId)) {
    body->insert(pair<string, string>("SpeechId", *request->speechId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SyncSpeechByCombination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SyncSpeechByCombinationResponse(callApi(params, req, runtime));
}

SyncSpeechByCombinationResponse Alibabacloud_Iot20180120::Client::syncSpeechByCombination(shared_ptr<SyncSpeechByCombinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return syncSpeechByCombinationWithOptions(request, runtime);
}

TestSpeechResponse Alibabacloud_Iot20180120::Client::testSpeechWithOptions(shared_ptr<TestSpeechRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<TestSpeechShrinkRequest> request = make_shared<TestSpeechShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->soundCodeConfig)) {
    request->soundCodeConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->soundCodeConfig, make_shared<string>("SoundCodeConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioFormat)) {
    body->insert(pair<string, string>("AudioFormat", *request->audioFormat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSoundCode)) {
    body->insert(pair<string, bool>("EnableSoundCode", *request->enableSoundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeConfigShrink)) {
    body->insert(pair<string, string>("SoundCodeConfig", *request->soundCodeConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    body->insert(pair<string, long>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechType)) {
    body->insert(pair<string, string>("SpeechType", *request->speechType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    body->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    body->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestSpeechResponse(callApi(params, req, runtime));
}

TestSpeechResponse Alibabacloud_Iot20180120::Client::testSpeech(shared_ptr<TestSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testSpeechWithOptions(request, runtime);
}

TransformClientIdResponse Alibabacloud_Iot20180120::Client::transformClientIdWithOptions(shared_ptr<TransformClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientId)) {
    query->insert(pair<string, string>("ClientId", *request->clientId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransformClientId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransformClientIdResponse(callApi(params, req, runtime));
}

TransformClientIdResponse Alibabacloud_Iot20180120::Client::transformClientId(shared_ptr<TransformClientIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transformClientIdWithOptions(request, runtime);
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRuleWithOptions(shared_ptr<TriggerSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerSceneRuleResponse(callApi(params, req, runtime));
}

TriggerSceneRuleResponse Alibabacloud_Iot20180120::Client::triggerSceneRule(shared_ptr<TriggerSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerSceneRuleWithOptions(request, runtime);
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstanceWithOptions(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applicationId)) {
    query->insert(pair<string, string>("ApplicationId", *request->applicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindApplicationFromEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindApplicationFromEdgeInstanceResponse(callApi(params, req, runtime));
}

UnbindApplicationFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindApplicationFromEdgeInstance(shared_ptr<UnbindApplicationFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindApplicationFromEdgeInstanceWithOptions(request, runtime);
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstanceWithOptions(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindDriverFromEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindDriverFromEdgeInstanceResponse(callApi(params, req, runtime));
}

UnbindDriverFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindDriverFromEdgeInstance(shared_ptr<UnbindDriverFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindDriverFromEdgeInstanceWithOptions(request, runtime);
}

UnbindLicenseProductResponse Alibabacloud_Iot20180120::Client::unbindLicenseProductWithOptions(shared_ptr<UnbindLicenseProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->licenseCode)) {
    query->insert(pair<string, string>("LicenseCode", *request->licenseCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindLicenseProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindLicenseProductResponse(callApi(params, req, runtime));
}

UnbindLicenseProductResponse Alibabacloud_Iot20180120::Client::unbindLicenseProduct(shared_ptr<UnbindLicenseProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindLicenseProductWithOptions(request, runtime);
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstanceWithOptions(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindRoleFromEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindRoleFromEdgeInstanceResponse(callApi(params, req, runtime));
}

UnbindRoleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindRoleFromEdgeInstance(shared_ptr<UnbindRoleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindRoleFromEdgeInstanceWithOptions(request, runtime);
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstanceWithOptions(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindSceneRuleFromEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindSceneRuleFromEdgeInstanceResponse(callApi(params, req, runtime));
}

UnbindSceneRuleFromEdgeInstanceResponse Alibabacloud_Iot20180120::Client::unbindSceneRuleFromEdgeInstance(shared_ptr<UnbindSceneRuleFromEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindSceneRuleFromEdgeInstanceWithOptions(request, runtime);
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroupWithOptions(shared_ptr<UpdateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newGroupName)) {
    query->insert(pair<string, string>("NewGroupName", *request->newGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConsumerGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConsumerGroupResponse(callApi(params, req, runtime));
}

UpdateConsumerGroupResponse Alibabacloud_Iot20180120::Client::updateConsumerGroup(shared_ptr<UpdateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConsumerGroupWithOptions(request, runtime);
}

UpdateDestinationResponse Alibabacloud_Iot20180120::Client::updateDestinationWithOptions(shared_ptr<UpdateDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configuration)) {
    query->insert(pair<string, string>("Configuration", *request->configuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destinationId)) {
    query->insert(pair<string, long>("DestinationId", *request->destinationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDestination"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDestinationResponse(callApi(params, req, runtime));
}

UpdateDestinationResponse Alibabacloud_Iot20180120::Client::updateDestination(shared_ptr<UpdateDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDestinationWithOptions(request, runtime);
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroupWithOptions(shared_ptr<UpdateDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupDesc)) {
    query->insert(pair<string, string>("GroupDesc", *request->groupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupType)) {
    query->insert(pair<string, string>("GroupType", *request->groupType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceGroupResponse(callApi(params, req, runtime));
}

UpdateDeviceGroupResponse Alibabacloud_Iot20180120::Client::updateDeviceGroup(shared_ptr<UpdateDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceGroupWithOptions(request, runtime);
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadowWithOptions(shared_ptr<UpdateDeviceShadowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deltaUpdate)) {
    query->insert(pair<string, bool>("DeltaUpdate", *request->deltaUpdate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shadowMessage)) {
    query->insert(pair<string, string>("ShadowMessage", *request->shadowMessage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDeviceShadow"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDeviceShadowResponse(callApi(params, req, runtime));
}

UpdateDeviceShadowResponse Alibabacloud_Iot20180120::Client::updateDeviceShadow(shared_ptr<UpdateDeviceShadowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDeviceShadowWithOptions(request, runtime);
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersionWithOptions(shared_ptr<UpdateEdgeDriverVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->argument)) {
    query->insert(pair<string, string>("Argument", *request->argument));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configCheckRule)) {
    query->insert(pair<string, string>("ConfigCheckRule", *request->configCheckRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containerConfig)) {
    query->insert(pair<string, string>("ContainerConfig", *request->containerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverConfig)) {
    query->insert(pair<string, string>("DriverConfig", *request->driverConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverVersion)) {
    query->insert(pair<string, string>("DriverVersion", *request->driverVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeVersion)) {
    query->insert(pair<string, string>("EdgeVersion", *request->edgeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceConfig)) {
    query->insert(pair<string, string>("SourceConfig", *request->sourceConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEdgeDriverVersion"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEdgeDriverVersionResponse(callApi(params, req, runtime));
}

UpdateEdgeDriverVersionResponse Alibabacloud_Iot20180120::Client::updateEdgeDriverVersion(shared_ptr<UpdateEdgeDriverVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeDriverVersionWithOptions(request, runtime);
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceWithOptions(shared_ptr<UpdateEdgeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->bizEnable)) {
    query->insert(pair<string, bool>("BizEnable", *request->bizEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spec)) {
    query->insert(pair<string, long>("Spec", *request->spec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEdgeInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEdgeInstanceResponse(callApi(params, req, runtime));
}

UpdateEdgeInstanceResponse Alibabacloud_Iot20180120::Client::updateEdgeInstance(shared_ptr<UpdateEdgeInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceWithOptions(request, runtime);
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannelWithOptions(shared_ptr<UpdateEdgeInstanceChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEdgeInstanceChannelRequestConfigs>>(request->configs)) {
    query->insert(pair<string, vector<UpdateEdgeInstanceChannelRequestConfigs>>("Configs", *request->configs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->driverId)) {
    query->insert(pair<string, string>("DriverId", *request->driverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEdgeInstanceChannel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEdgeInstanceChannelResponse(callApi(params, req, runtime));
}

UpdateEdgeInstanceChannelResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceChannel(shared_ptr<UpdateEdgeInstanceChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceChannelWithOptions(request, runtime);
}

UpdateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceMessageRoutingWithOptions(shared_ptr<UpdateEdgeInstanceMessageRoutingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->routeId)) {
    query->insert(pair<string, long>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceData)) {
    query->insert(pair<string, string>("SourceData", *request->sourceData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetData)) {
    query->insert(pair<string, string>("TargetData", *request->targetData));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetIotHubQos)) {
    query->insert(pair<string, long>("TargetIotHubQos", *request->targetIotHubQos));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetType)) {
    query->insert(pair<string, string>("TargetType", *request->targetType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicFilter)) {
    query->insert(pair<string, string>("TopicFilter", *request->topicFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEdgeInstanceMessageRouting"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEdgeInstanceMessageRoutingResponse(callApi(params, req, runtime));
}

UpdateEdgeInstanceMessageRoutingResponse Alibabacloud_Iot20180120::Client::updateEdgeInstanceMessageRouting(shared_ptr<UpdateEdgeInstanceMessageRoutingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeInstanceMessageRoutingWithOptions(request, runtime);
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJobWithOptions(shared_ptr<UpdateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateJobShrinkRequest> request = make_shared<UpdateJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->rolloutConfig)) {
    request->rolloutConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rolloutConfig, make_shared<string>("RolloutConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->timeoutConfig)) {
    request->timeoutConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timeoutConfig, make_shared<string>("TimeoutConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rolloutConfigShrink)) {
    query->insert(pair<string, string>("RolloutConfig", *request->rolloutConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeoutConfigShrink)) {
    query->insert(pair<string, string>("TimeoutConfig", *request->timeoutConfigShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateJobResponse(callApi(params, req, runtime));
}

UpdateJobResponse Alibabacloud_Iot20180120::Client::updateJob(shared_ptr<UpdateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateJobWithOptions(request, runtime);
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModuleWithOptions(shared_ptr<UpdateOTAModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    query->insert(pair<string, string>("AliasName", *request->aliasName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->moduleName)) {
    query->insert(pair<string, string>("ModuleName", *request->moduleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOTAModule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOTAModuleResponse(callApi(params, req, runtime));
}

UpdateOTAModuleResponse Alibabacloud_Iot20180120::Client::updateOTAModule(shared_ptr<UpdateOTAModuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOTAModuleWithOptions(request, runtime);
}

UpdateParserResponse Alibabacloud_Iot20180120::Client::updateParserWithOptions(shared_ptr<UpdateParserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parserId)) {
    query->insert(pair<string, long>("ParserId", *request->parserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateParser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateParserResponse(callApi(params, req, runtime));
}

UpdateParserResponse Alibabacloud_Iot20180120::Client::updateParser(shared_ptr<UpdateParserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateParserWithOptions(request, runtime);
}

UpdateParserDataSourceResponse Alibabacloud_Iot20180120::Client::updateParserDataSourceWithOptions(shared_ptr<UpdateParserDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateParserDataSource"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateParserDataSourceResponse(callApi(params, req, runtime));
}

UpdateParserDataSourceResponse Alibabacloud_Iot20180120::Client::updateParserDataSource(shared_ptr<UpdateParserDataSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateParserDataSourceWithOptions(request, runtime);
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProductWithOptions(shared_ptr<UpdateProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProduct"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductResponse(callApi(params, req, runtime));
}

UpdateProductResponse Alibabacloud_Iot20180120::Client::updateProduct(shared_ptr<UpdateProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductWithOptions(request, runtime);
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfigWithOptions(shared_ptr<UpdateProductFilterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->propertyTimestampFilter)) {
    query->insert(pair<string, bool>("PropertyTimestampFilter", *request->propertyTimestampFilter));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->propertyValueFilter)) {
    query->insert(pair<string, bool>("PropertyValueFilter", *request->propertyValueFilter));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductFilterConfig"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductFilterConfigResponse(callApi(params, req, runtime));
}

UpdateProductFilterConfigResponse Alibabacloud_Iot20180120::Client::updateProductFilterConfig(shared_ptr<UpdateProductFilterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductFilterConfigWithOptions(request, runtime);
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTagsWithOptions(shared_ptr<UpdateProductTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateProductTagsRequestProductTag>>(request->productTag)) {
    query->insert(pair<string, vector<UpdateProductTagsRequestProductTag>>("ProductTag", *request->productTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductTags"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductTagsResponse(callApi(params, req, runtime));
}

UpdateProductTagsResponse Alibabacloud_Iot20180120::Client::updateProductTags(shared_ptr<UpdateProductTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTagsWithOptions(request, runtime);
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopicWithOptions(shared_ptr<UpdateProductTopicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operation)) {
    query->insert(pair<string, string>("Operation", *request->operation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicId)) {
    query->insert(pair<string, string>("TopicId", *request->topicId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicShortName)) {
    query->insert(pair<string, string>("TopicShortName", *request->topicShortName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProductTopic"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProductTopicResponse(callApi(params, req, runtime));
}

UpdateProductTopicResponse Alibabacloud_Iot20180120::Client::updateProductTopic(shared_ptr<UpdateProductTopicRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProductTopicWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDesc)) {
    query->insert(pair<string, string>("RuleDesc", *request->ruleDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->select)) {
    query->insert(pair<string, string>("Select", *request->select));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shortTopic)) {
    query->insert(pair<string, string>("ShortTopic", *request->shortTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topic)) {
    query->insert(pair<string, string>("Topic", *request->topic));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topicType)) {
    query->insert(pair<string, long>("TopicType", *request->topicType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->where)) {
    query->insert(pair<string, string>("Where", *request->where));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRuleResponse(callApi(params, req, runtime));
}

UpdateRuleResponse Alibabacloud_Iot20180120::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleActionWithOptions(shared_ptr<UpdateRuleActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionId)) {
    query->insert(pair<string, long>("ActionId", *request->actionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configuration)) {
    query->insert(pair<string, string>("Configuration", *request->configuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRuleAction"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRuleActionResponse(callApi(params, req, runtime));
}

UpdateRuleActionResponse Alibabacloud_Iot20180120::Client::updateRuleAction(shared_ptr<UpdateRuleActionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleActionWithOptions(request, runtime);
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRuleWithOptions(shared_ptr<UpdateSceneRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleContent)) {
    query->insert(pair<string, string>("RuleContent", *request->ruleContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleDescription)) {
    query->insert(pair<string, string>("RuleDescription", *request->ruleDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSceneRule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneRuleResponse(callApi(params, req, runtime));
}

UpdateSceneRuleResponse Alibabacloud_Iot20180120::Client::updateSceneRule(shared_ptr<UpdateSceneRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneRuleWithOptions(request, runtime);
}

UpdateSchedulePeriodResponse Alibabacloud_Iot20180120::Client::updateSchedulePeriodWithOptions(shared_ptr<UpdateSchedulePeriodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->periodCode)) {
    body->insert(pair<string, string>("PeriodCode", *request->periodCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeContent)) {
    body->insert(pair<string, string>("SoundCodeContent", *request->soundCodeContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSchedulePeriod"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSchedulePeriodResponse(callApi(params, req, runtime));
}

UpdateSchedulePeriodResponse Alibabacloud_Iot20180120::Client::updateSchedulePeriod(shared_ptr<UpdateSchedulePeriodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSchedulePeriodWithOptions(request, runtime);
}

UpdateSoundCodeResponse Alibabacloud_Iot20180120::Client::updateSoundCodeWithOptions(shared_ptr<UpdateSoundCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    body->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCode)) {
    body->insert(pair<string, string>("SoundCode", *request->soundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeContent)) {
    body->insert(pair<string, string>("SoundCodeContent", *request->soundCodeContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSoundCode"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSoundCodeResponse(callApi(params, req, runtime));
}

UpdateSoundCodeResponse Alibabacloud_Iot20180120::Client::updateSoundCode(shared_ptr<UpdateSoundCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSoundCodeWithOptions(request, runtime);
}

UpdateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::updateSoundCodeLabelWithOptions(shared_ptr<UpdateSoundCodeLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    body->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCode)) {
    body->insert(pair<string, string>("SoundCode", *request->soundCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSoundCodeLabel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSoundCodeLabelResponse(callApi(params, req, runtime));
}

UpdateSoundCodeLabelResponse Alibabacloud_Iot20180120::Client::updateSoundCodeLabel(shared_ptr<UpdateSoundCodeLabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSoundCodeLabelWithOptions(request, runtime);
}

UpdateSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::updateSoundCodeScheduleWithOptions(shared_ptr<UpdateSoundCodeScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    body->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleCode)) {
    body->insert(pair<string, string>("ScheduleCode", *request->scheduleCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    body->insert(pair<string, string>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSoundCodeSchedule"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSoundCodeScheduleResponse(callApi(params, req, runtime));
}

UpdateSoundCodeScheduleResponse Alibabacloud_Iot20180120::Client::updateSoundCodeSchedule(shared_ptr<UpdateSoundCodeScheduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSoundCodeScheduleWithOptions(request, runtime);
}

UpdateSpeechResponse Alibabacloud_Iot20180120::Client::updateSpeechWithOptions(shared_ptr<UpdateSpeechRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSpeechShrinkRequest> request = make_shared<UpdateSpeechShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->soundCodeConfig)) {
    request->soundCodeConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->soundCodeConfig, make_shared<string>("SoundCodeConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSoundCode)) {
    body->insert(pair<string, bool>("EnableSoundCode", *request->enableSoundCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    body->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectCode)) {
    body->insert(pair<string, string>("ProjectCode", *request->projectCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->soundCodeConfigShrink)) {
    body->insert(pair<string, string>("SoundCodeConfig", *request->soundCodeConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speechCode)) {
    body->insert(pair<string, string>("SpeechCode", *request->speechCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->speechRate)) {
    body->insert(pair<string, long>("SpeechRate", *request->speechRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voice)) {
    body->insert(pair<string, string>("Voice", *request->voice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->volume)) {
    body->insert(pair<string, long>("Volume", *request->volume));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSpeech"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSpeechResponse(callApi(params, req, runtime));
}

UpdateSpeechResponse Alibabacloud_Iot20180120::Client::updateSpeech(shared_ptr<UpdateSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSpeechWithOptions(request, runtime);
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelationWithOptions(shared_ptr<UpdateSubscribeRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->consumerGroupIds)) {
    query->insert(pair<string, vector<string>>("ConsumerGroupIds", *request->consumerGroupIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceDataFlag)) {
    query->insert(pair<string, bool>("DeviceDataFlag", *request->deviceDataFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceLifeCycleFlag)) {
    query->insert(pair<string, bool>("DeviceLifeCycleFlag", *request->deviceLifeCycleFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceStatusChangeFlag)) {
    query->insert(pair<string, bool>("DeviceStatusChangeFlag", *request->deviceStatusChangeFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceTagFlag)) {
    query->insert(pair<string, bool>("DeviceTagFlag", *request->deviceTagFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deviceTopoLifeCycleFlag)) {
    query->insert(pair<string, bool>("DeviceTopoLifeCycleFlag", *request->deviceTopoLifeCycleFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->foundDeviceListFlag)) {
    query->insert(pair<string, bool>("FoundDeviceListFlag", *request->foundDeviceListFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mnsConfiguration)) {
    query->insert(pair<string, string>("MnsConfiguration", *request->mnsConfiguration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaEventFlag)) {
    query->insert(pair<string, bool>("OtaEventFlag", *request->otaEventFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaJobFlag)) {
    query->insert(pair<string, bool>("OtaJobFlag", *request->otaJobFlag));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->otaVersionFlag)) {
    query->insert(pair<string, bool>("OtaVersionFlag", *request->otaVersionFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->thingHistoryFlag)) {
    query->insert(pair<string, bool>("ThingHistoryFlag", *request->thingHistoryFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubscribeRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubscribeRelationResponse(callApi(params, req, runtime));
}

UpdateSubscribeRelationResponse Alibabacloud_Iot20180120::Client::updateSubscribeRelation(shared_ptr<UpdateSubscribeRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubscribeRelationWithOptions(request, runtime);
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModelWithOptions(shared_ptr<UpdateThingModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockId)) {
    query->insert(pair<string, string>("FunctionBlockId", *request->functionBlockId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionBlockName)) {
    query->insert(pair<string, string>("FunctionBlockName", *request->functionBlockName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifier)) {
    query->insert(pair<string, string>("Identifier", *request->identifier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thingModelJson)) {
    query->insert(pair<string, string>("ThingModelJson", *request->thingModelJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateThingModel"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateThingModelResponse(callApi(params, req, runtime));
}

UpdateThingModelResponse Alibabacloud_Iot20180120::Client::updateThingModel(shared_ptr<UpdateThingModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingModelWithOptions(request, runtime);
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScriptWithOptions(shared_ptr<UpdateThingScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptContent)) {
    query->insert(pair<string, string>("ScriptContent", *request->scriptContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptType)) {
    query->insert(pair<string, string>("ScriptType", *request->scriptType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateThingScript"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateThingScriptResponse(callApi(params, req, runtime));
}

UpdateThingScriptResponse Alibabacloud_Iot20180120::Client::updateThingScript(shared_ptr<UpdateThingScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateThingScriptWithOptions(request, runtime);
}

WriteDevicesHotStorageDataResponse Alibabacloud_Iot20180120::Client::writeDevicesHotStorageDataWithOptions(shared_ptr<WriteDevicesHotStorageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->items)) {
    query->insert(pair<string, string>("Items", *request->items));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userTopic)) {
    query->insert(pair<string, string>("UserTopic", *request->userTopic));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WriteDevicesHotStorageData"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WriteDevicesHotStorageDataResponse(callApi(params, req, runtime));
}

WriteDevicesHotStorageDataResponse Alibabacloud_Iot20180120::Client::writeDevicesHotStorageData(shared_ptr<WriteDevicesHotStorageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return writeDevicesHotStorageDataWithOptions(request, runtime);
}

