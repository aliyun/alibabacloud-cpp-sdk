// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/linkvisual_20180120.hpp>
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

using namespace Alibabacloud_Linkvisual20180120;

Alibabacloud_Linkvisual20180120::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "linkvisual.aliyuncs.com"},
    {"ap-northeast-2-pop", "linkvisual.aliyuncs.com"},
    {"ap-south-1", "linkvisual.aliyuncs.com"},
    {"ap-southeast-1", "linkvisual.aliyuncs.com"},
    {"ap-southeast-2", "linkvisual.aliyuncs.com"},
    {"ap-southeast-3", "linkvisual.aliyuncs.com"},
    {"ap-southeast-5", "linkvisual.aliyuncs.com"},
    {"cn-beijing", "linkvisual.aliyuncs.com"},
    {"cn-beijing-finance-1", "linkvisual.aliyuncs.com"},
    {"cn-beijing-finance-pop", "linkvisual.aliyuncs.com"},
    {"cn-beijing-gov-1", "linkvisual.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "linkvisual.aliyuncs.com"},
    {"cn-chengdu", "linkvisual.aliyuncs.com"},
    {"cn-edge-1", "linkvisual.aliyuncs.com"},
    {"cn-fujian", "linkvisual.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-finance", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "linkvisual.aliyuncs.com"},
    {"cn-hangzhou-test-306", "linkvisual.aliyuncs.com"},
    {"cn-hongkong", "linkvisual.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "linkvisual.aliyuncs.com"},
    {"cn-huhehaote", "linkvisual.aliyuncs.com"},
    {"cn-north-2-gov-1", "linkvisual.aliyuncs.com"},
    {"cn-qingdao", "linkvisual.aliyuncs.com"},
    {"cn-qingdao-nebula", "linkvisual.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "linkvisual.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "linkvisual.aliyuncs.com"},
    {"cn-shanghai-finance-1", "linkvisual.aliyuncs.com"},
    {"cn-shanghai-inner", "linkvisual.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "linkvisual.aliyuncs.com"},
    {"cn-shenzhen", "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-inner", "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "linkvisual.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "linkvisual.aliyuncs.com"},
    {"cn-wuhan", "linkvisual.aliyuncs.com"},
    {"cn-yushanfang", "linkvisual.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "linkvisual.aliyuncs.com"},
    {"cn-zhangjiakou", "linkvisual.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "linkvisual.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "linkvisual.aliyuncs.com"},
    {"eu-central-1", "linkvisual.aliyuncs.com"},
    {"eu-west-1", "linkvisual.aliyuncs.com"},
    {"eu-west-1-oxs", "linkvisual.aliyuncs.com"},
    {"me-east-1", "linkvisual.aliyuncs.com"},
    {"rus-west-1-pop", "linkvisual.aliyuncs.com"},
    {"us-east-1", "linkvisual.aliyuncs.com"},
    {"us-west-1", "linkvisual.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("linkvisual"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Linkvisual20180120::Client::getEndpoint(shared_ptr<string> productId,
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

AddEventRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::addEventRecordPlanDeviceWithOptions(shared_ptr<AddEventRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEventRecordPlanDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEventRecordPlanDeviceResponse(callApi(params, req, runtime));
}

AddEventRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::addEventRecordPlanDevice(shared_ptr<AddEventRecordPlanDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEventRecordPlanDeviceWithOptions(request, runtime);
}

AddFaceDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceDeviceGroupWithOptions(shared_ptr<AddFaceDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupName)) {
    query->insert(pair<string, string>("DeviceGroupName", *request->deviceGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceDeviceGroupResponse(callApi(params, req, runtime));
}

AddFaceDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceDeviceGroup(shared_ptr<AddFaceDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceDeviceGroupWithOptions(request, runtime);
}

AddFaceDeviceToDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceDeviceToDeviceGroupWithOptions(shared_ptr<AddFaceDeviceToDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceDeviceToDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceDeviceToDeviceGroupResponse(callApi(params, req, runtime));
}

AddFaceDeviceToDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceDeviceToDeviceGroup(shared_ptr<AddFaceDeviceToDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceDeviceToDeviceGroupWithOptions(request, runtime);
}

AddFaceUserResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserWithOptions(shared_ptr<AddFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customUserId)) {
    query->insert(pair<string, string>("CustomUserId", *request->customUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePicUrl)) {
    query->insert(pair<string, string>("FacePicUrl", *request->facePicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceUser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceUserResponse(callApi(params, req, runtime));
}

AddFaceUserResponse Alibabacloud_Linkvisual20180120::Client::addFaceUser(shared_ptr<AddFaceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceUserWithOptions(request, runtime);
}

AddFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserGroupWithOptions(shared_ptr<AddFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupName)) {
    query->insert(pair<string, string>("UserGroupName", *request->userGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceUserGroupResponse(callApi(params, req, runtime));
}

AddFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserGroup(shared_ptr<AddFaceUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceUserGroupWithOptions(request, runtime);
}

AddFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<AddFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relation)) {
    query->insert(pair<string, string>("Relation", *request->relation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceUserGroupAndDeviceGroupRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceUserGroupAndDeviceGroupRelationResponse(callApi(params, req, runtime));
}

AddFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserGroupAndDeviceGroupRelation(shared_ptr<AddFaceUserGroupAndDeviceGroupRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

AddFaceUserPictureResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserPictureWithOptions(shared_ptr<AddFaceUserPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePicUrl)) {
    query->insert(pair<string, string>("FacePicUrl", *request->facePicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceUserPicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceUserPictureResponse(callApi(params, req, runtime));
}

AddFaceUserPictureResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserPicture(shared_ptr<AddFaceUserPictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceUserPictureWithOptions(request, runtime);
}

AddFaceUserToUserGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserToUserGroupWithOptions(shared_ptr<AddFaceUserToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFaceUserToUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFaceUserToUserGroupResponse(callApi(params, req, runtime));
}

AddFaceUserToUserGroupResponse Alibabacloud_Linkvisual20180120::Client::addFaceUserToUserGroup(shared_ptr<AddFaceUserToUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFaceUserToUserGroupWithOptions(request, runtime);
}

AddRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::addRecordPlanDeviceWithOptions(shared_ptr<AddRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRecordPlanDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRecordPlanDeviceResponse(callApi(params, req, runtime));
}

AddRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::addRecordPlanDevice(shared_ptr<AddRecordPlanDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRecordPlanDeviceWithOptions(request, runtime);
}

BatchQueryVisionDeviceInfoResponse Alibabacloud_Linkvisual20180120::Client::batchQueryVisionDeviceInfoWithOptions(shared_ptr<BatchQueryVisionDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceNameList)) {
    query->insert(pair<string, vector<string>>("DeviceNameList", *request->deviceNameList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->iotIdList)) {
    query->insert(pair<string, vector<string>>("IotIdList", *request->iotIdList));
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
    {"action", boost::any(string("BatchQueryVisionDeviceInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchQueryVisionDeviceInfoResponse(callApi(params, req, runtime));
}

BatchQueryVisionDeviceInfoResponse Alibabacloud_Linkvisual20180120::Client::batchQueryVisionDeviceInfo(shared_ptr<BatchQueryVisionDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchQueryVisionDeviceInfoWithOptions(request, runtime);
}

BindPictureSearchAppWithDevicesResponse Alibabacloud_Linkvisual20180120::Client::bindPictureSearchAppWithDevicesWithOptions(shared_ptr<BindPictureSearchAppWithDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceIotIds)) {
    query->insert(pair<string, vector<string>>("DeviceIotIds", *request->deviceIotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BindPictureSearchAppWithDevices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BindPictureSearchAppWithDevicesResponse(callApi(params, req, runtime));
}

BindPictureSearchAppWithDevicesResponse Alibabacloud_Linkvisual20180120::Client::bindPictureSearchAppWithDevices(shared_ptr<BindPictureSearchAppWithDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bindPictureSearchAppWithDevicesWithOptions(request, runtime);
}

CheckFaceUserDoExistOnDeviceResponse Alibabacloud_Linkvisual20180120::Client::checkFaceUserDoExistOnDeviceWithOptions(shared_ptr<CheckFaceUserDoExistOnDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckFaceUserDoExistOnDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckFaceUserDoExistOnDeviceResponse(callApi(params, req, runtime));
}

CheckFaceUserDoExistOnDeviceResponse Alibabacloud_Linkvisual20180120::Client::checkFaceUserDoExistOnDevice(shared_ptr<CheckFaceUserDoExistOnDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkFaceUserDoExistOnDeviceWithOptions(request, runtime);
}

ClearFaceDeviceDBResponse Alibabacloud_Linkvisual20180120::Client::clearFaceDeviceDBWithOptions(shared_ptr<ClearFaceDeviceDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClearFaceDeviceDB"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClearFaceDeviceDBResponse(callApi(params, req, runtime));
}

ClearFaceDeviceDBResponse Alibabacloud_Linkvisual20180120::Client::clearFaceDeviceDB(shared_ptr<ClearFaceDeviceDBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return clearFaceDeviceDBWithOptions(request, runtime);
}

CreateEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::createEventRecordPlanWithOptions(shared_ptr<CreateEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypes)) {
    query->insert(pair<string, string>("EventTypes", *request->eventTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preRecordDuration)) {
    query->insert(pair<string, long>("PreRecordDuration", *request->preRecordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordDuration)) {
    query->insert(pair<string, long>("RecordDuration", *request->recordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventRecordPlanResponse(callApi(params, req, runtime));
}

CreateEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::createEventRecordPlan(shared_ptr<CreateEventRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventRecordPlanWithOptions(request, runtime);
}

CreateGbDeviceResponse Alibabacloud_Linkvisual20180120::Client::createGbDeviceWithOptions(shared_ptr<CreateGbDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->deviceType)) {
    query->insert(pair<string, long>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gbId)) {
    query->insert(pair<string, string>("GbId", *request->gbId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaNetProtocol)) {
    query->insert(pair<string, string>("MediaNetProtocol", *request->mediaNetProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subProductKey)) {
    query->insert(pair<string, string>("SubProductKey", *request->subProductKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateGbDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateGbDeviceResponse(callApi(params, req, runtime));
}

CreateGbDeviceResponse Alibabacloud_Linkvisual20180120::Client::createGbDevice(shared_ptr<CreateGbDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createGbDeviceWithOptions(request, runtime);
}

CreateLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::createLocalFileUploadJobWithOptions(shared_ptr<CreateLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLocalFileUploadJobRequestTimeSlot>>(request->timeSlot)) {
    query->insert(pair<string, vector<CreateLocalFileUploadJobRequestTimeSlot>>("TimeSlot", *request->timeSlot));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLocalFileUploadJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLocalFileUploadJobResponse(callApi(params, req, runtime));
}

CreateLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::createLocalFileUploadJob(shared_ptr<CreateLocalFileUploadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLocalFileUploadJobWithOptions(request, runtime);
}

CreateLocalRecordDownloadByTimeJobResponse Alibabacloud_Linkvisual20180120::Client::createLocalRecordDownloadByTimeJobWithOptions(shared_ptr<CreateLocalRecordDownloadByTimeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<double>(request->speed)) {
    query->insert(pair<string, double>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLocalRecordDownloadByTimeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLocalRecordDownloadByTimeJobResponse(callApi(params, req, runtime));
}

CreateLocalRecordDownloadByTimeJobResponse Alibabacloud_Linkvisual20180120::Client::createLocalRecordDownloadByTimeJob(shared_ptr<CreateLocalRecordDownloadByTimeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLocalRecordDownloadByTimeJobWithOptions(request, runtime);
}

CreatePictureSearchAppResponse Alibabacloud_Linkvisual20180120::Client::createPictureSearchAppWithOptions(shared_ptr<CreatePictureSearchAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->desc)) {
    query->insert(pair<string, string>("Desc", *request->desc));
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
    {"action", boost::any(string("CreatePictureSearchApp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePictureSearchAppResponse(callApi(params, req, runtime));
}

CreatePictureSearchAppResponse Alibabacloud_Linkvisual20180120::Client::createPictureSearchApp(shared_ptr<CreatePictureSearchAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPictureSearchAppWithOptions(request, runtime);
}

CreatePictureSearchJobResponse Alibabacloud_Linkvisual20180120::Client::createPictureSearchJobWithOptions(shared_ptr<CreatePictureSearchJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->bodyThreshold)) {
    query->insert(pair<string, double>("BodyThreshold", *request->bodyThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureSearchType)) {
    query->insert(pair<string, long>("PictureSearchType", *request->pictureSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchPicUrl)) {
    query->insert(pair<string, string>("SearchPicUrl", *request->searchPicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePictureSearchJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePictureSearchJobResponse(callApi(params, req, runtime));
}

CreatePictureSearchJobResponse Alibabacloud_Linkvisual20180120::Client::createPictureSearchJob(shared_ptr<CreatePictureSearchJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPictureSearchJobWithOptions(request, runtime);
}

CreateRecordDownloadByTimeJobResponse Alibabacloud_Linkvisual20180120::Client::createRecordDownloadByTimeJobWithOptions(shared_ptr<CreateRecordDownloadByTimeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->recordType)) {
    query->insert(pair<string, long>("RecordType", *request->recordType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRecordDownloadByTimeJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRecordDownloadByTimeJobResponse(callApi(params, req, runtime));
}

CreateRecordDownloadByTimeJobResponse Alibabacloud_Linkvisual20180120::Client::createRecordDownloadByTimeJob(shared_ptr<CreateRecordDownloadByTimeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecordDownloadByTimeJobWithOptions(request, runtime);
}

CreateRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::createRecordPlanWithOptions(shared_ptr<CreateRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRecordPlanResponse(callApi(params, req, runtime));
}

CreateRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::createRecordPlan(shared_ptr<CreateRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecordPlanWithOptions(request, runtime);
}

CreateRtmpDeviceResponse Alibabacloud_Linkvisual20180120::Client::createRtmpDeviceWithOptions(shared_ptr<CreateRtmpDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->pullAuthKey)) {
    query->insert(pair<string, string>("PullAuthKey", *request->pullAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pullKeyExpireTime)) {
    query->insert(pair<string, long>("PullKeyExpireTime", *request->pullKeyExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushAuthKey)) {
    query->insert(pair<string, string>("PushAuthKey", *request->pushAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushKeyExpireTime)) {
    query->insert(pair<string, long>("PushKeyExpireTime", *request->pushKeyExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subStreamName)) {
    query->insert(pair<string, string>("SubStreamName", *request->subStreamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRtmpDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRtmpDeviceResponse(callApi(params, req, runtime));
}

CreateRtmpDeviceResponse Alibabacloud_Linkvisual20180120::Client::createRtmpDevice(shared_ptr<CreateRtmpDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRtmpDeviceWithOptions(request, runtime);
}

CreateTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::createTimeTemplateWithOptions(shared_ptr<CreateTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->allDay)) {
    query->insert(pair<string, long>("AllDay", *request->allDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateTimeTemplateRequestTimeSections>>(request->timeSections)) {
    query->insert(pair<string, vector<CreateTimeTemplateRequestTimeSections>>("TimeSections", *request->timeSections));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTimeTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTimeTemplateResponse(callApi(params, req, runtime));
}

CreateTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::createTimeTemplate(shared_ptr<CreateTimeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createTimeTemplateWithOptions(request, runtime);
}

DeleteEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::deleteEventRecordPlanWithOptions(shared_ptr<DeleteEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventRecordPlanResponse(callApi(params, req, runtime));
}

DeleteEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::deleteEventRecordPlan(shared_ptr<DeleteEventRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventRecordPlanWithOptions(request, runtime);
}

DeleteEventRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteEventRecordPlanDeviceWithOptions(shared_ptr<DeleteEventRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventRecordPlanDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventRecordPlanDeviceResponse(callApi(params, req, runtime));
}

DeleteEventRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteEventRecordPlanDevice(shared_ptr<DeleteEventRecordPlanDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventRecordPlanDeviceWithOptions(request, runtime);
}

DeleteFaceDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceDeviceGroupWithOptions(shared_ptr<DeleteFaceDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceDeviceGroupResponse(callApi(params, req, runtime));
}

DeleteFaceDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceDeviceGroup(shared_ptr<DeleteFaceDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceDeviceGroupWithOptions(request, runtime);
}

DeleteFaceUserResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserWithOptions(shared_ptr<DeleteFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceUser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceUserResponse(callApi(params, req, runtime));
}

DeleteFaceUserResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUser(shared_ptr<DeleteFaceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceUserWithOptions(request, runtime);
}

DeleteFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserGroupWithOptions(shared_ptr<DeleteFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceUserGroupResponse(callApi(params, req, runtime));
}

DeleteFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserGroup(shared_ptr<DeleteFaceUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceUserGroupWithOptions(request, runtime);
}

DeleteFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<DeleteFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->controlId)) {
    query->insert(pair<string, string>("ControlId", *request->controlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceUserGroupAndDeviceGroupRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceUserGroupAndDeviceGroupRelationResponse(callApi(params, req, runtime));
}

DeleteFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserGroupAndDeviceGroupRelation(shared_ptr<DeleteFaceUserGroupAndDeviceGroupRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

DeleteFaceUserPictureResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserPictureWithOptions(shared_ptr<DeleteFaceUserPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePicMd5)) {
    query->insert(pair<string, string>("FacePicMd5", *request->facePicMd5));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceUserPicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceUserPictureResponse(callApi(params, req, runtime));
}

DeleteFaceUserPictureResponse Alibabacloud_Linkvisual20180120::Client::deleteFaceUserPicture(shared_ptr<DeleteFaceUserPictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceUserPictureWithOptions(request, runtime);
}

DeleteLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::deleteLocalFileUploadJobWithOptions(shared_ptr<DeleteLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DeleteLocalFileUploadJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLocalFileUploadJobResponse(callApi(params, req, runtime));
}

DeleteLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::deleteLocalFileUploadJob(shared_ptr<DeleteLocalFileUploadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLocalFileUploadJobWithOptions(request, runtime);
}

DeletePictureResponse Alibabacloud_Linkvisual20180120::Client::deletePictureWithOptions(shared_ptr<DeletePictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pictureIdList)) {
    query->insert(pair<string, vector<string>>("PictureIdList", *request->pictureIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePictureResponse(callApi(params, req, runtime));
}

DeletePictureResponse Alibabacloud_Linkvisual20180120::Client::deletePicture(shared_ptr<DeletePictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePictureWithOptions(request, runtime);
}

DeleteRecordResponse Alibabacloud_Linkvisual20180120::Client::deleteRecordWithOptions(shared_ptr<DeleteRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->fileNameList)) {
    query->insert(pair<string, vector<string>>("FileNameList", *request->fileNameList));
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
    {"action", boost::any(string("DeleteRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRecordResponse(callApi(params, req, runtime));
}

DeleteRecordResponse Alibabacloud_Linkvisual20180120::Client::deleteRecord(shared_ptr<DeleteRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordWithOptions(request, runtime);
}

DeleteRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::deleteRecordPlanWithOptions(shared_ptr<DeleteRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRecordPlanResponse(callApi(params, req, runtime));
}

DeleteRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::deleteRecordPlan(shared_ptr<DeleteRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordPlanWithOptions(request, runtime);
}

DeleteRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteRecordPlanDeviceWithOptions(shared_ptr<DeleteRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRecordPlanDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRecordPlanDeviceResponse(callApi(params, req, runtime));
}

DeleteRecordPlanDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteRecordPlanDevice(shared_ptr<DeleteRecordPlanDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordPlanDeviceWithOptions(request, runtime);
}

DeleteRtmpDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteRtmpDeviceWithOptions(shared_ptr<DeleteRtmpDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("DeleteRtmpDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRtmpDeviceResponse(callApi(params, req, runtime));
}

DeleteRtmpDeviceResponse Alibabacloud_Linkvisual20180120::Client::deleteRtmpDevice(shared_ptr<DeleteRtmpDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRtmpDeviceWithOptions(request, runtime);
}

DeleteRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::deleteRtmpKeyWithOptions(shared_ptr<DeleteRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRtmpKey"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRtmpKeyResponse(callApi(params, req, runtime));
}

DeleteRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::deleteRtmpKey(shared_ptr<DeleteRtmpKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRtmpKeyWithOptions(request, runtime);
}

DeleteTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::deleteTimeTemplateWithOptions(shared_ptr<DeleteTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTimeTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTimeTemplateResponse(callApi(params, req, runtime));
}

DeleteTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::deleteTimeTemplate(shared_ptr<DeleteTimeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTimeTemplateWithOptions(request, runtime);
}

DetectUserFaceByUrlResponse Alibabacloud_Linkvisual20180120::Client::detectUserFaceByUrlWithOptions(shared_ptr<DetectUserFaceByUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->facePicUrl)) {
    query->insert(pair<string, string>("FacePicUrl", *request->facePicUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectUserFaceByUrl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectUserFaceByUrlResponse(callApi(params, req, runtime));
}

DetectUserFaceByUrlResponse Alibabacloud_Linkvisual20180120::Client::detectUserFaceByUrl(shared_ptr<DetectUserFaceByUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectUserFaceByUrlWithOptions(request, runtime);
}

GetPictureSearchJobStatusResponse Alibabacloud_Linkvisual20180120::Client::getPictureSearchJobStatusWithOptions(shared_ptr<GetPictureSearchJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPictureSearchJobStatus"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPictureSearchJobStatusResponse(callApi(params, req, runtime));
}

GetPictureSearchJobStatusResponse Alibabacloud_Linkvisual20180120::Client::getPictureSearchJobStatus(shared_ptr<GetPictureSearchJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPictureSearchJobStatusWithOptions(request, runtime);
}

PictureSearchPictureResponse Alibabacloud_Linkvisual20180120::Client::pictureSearchPictureWithOptions(shared_ptr<PictureSearchPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->containPicUrl)) {
    query->insert(pair<string, bool>("ContainPicUrl", *request->containPicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureSearchType)) {
    query->insert(pair<string, long>("PictureSearchType", *request->pictureSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchPicUrl)) {
    query->insert(pair<string, string>("SearchPicUrl", *request->searchPicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    query->insert(pair<string, double>("Threshold", *request->threshold));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PictureSearchPicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PictureSearchPictureResponse(callApi(params, req, runtime));
}

PictureSearchPictureResponse Alibabacloud_Linkvisual20180120::Client::pictureSearchPicture(shared_ptr<PictureSearchPictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pictureSearchPictureWithOptions(request, runtime);
}

QueryCarProcessEventsResponse Alibabacloud_Linkvisual20180120::Client::queryCarProcessEventsWithOptions(shared_ptr<QueryCarProcessEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->actionType)) {
    query->insert(pair<string, long>("ActionType", *request->actionType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->areaIndex)) {
    query->insert(pair<string, long>("AreaIndex", *request->areaIndex));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
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
  if (!Darabonba_Util::Client::isUnset<string>(request->plateNo)) {
    query->insert(pair<string, string>("PlateNo", *request->plateNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subDeviceName)) {
    query->insert(pair<string, string>("SubDeviceName", *request->subDeviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subIotId)) {
    query->insert(pair<string, string>("SubIotId", *request->subIotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subProductKey)) {
    query->insert(pair<string, string>("SubProductKey", *request->subProductKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCarProcessEvents"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCarProcessEventsResponse(callApi(params, req, runtime));
}

QueryCarProcessEventsResponse Alibabacloud_Linkvisual20180120::Client::queryCarProcessEvents(shared_ptr<QueryCarProcessEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCarProcessEventsWithOptions(request, runtime);
}

QueryDeviceEventResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEventWithOptions(shared_ptr<QueryDeviceEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventType)) {
    query->insert(pair<string, long>("EventType", *request->eventType));
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
    {"action", boost::any(string("QueryDeviceEvent"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceEventResponse(callApi(params, req, runtime));
}

QueryDeviceEventResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEvent(shared_ptr<QueryDeviceEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventWithOptions(request, runtime);
}

QueryDeviceEventPictureResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEventPictureWithOptions(shared_ptr<QueryDeviceEventPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
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
    {"action", boost::any(string("QueryDeviceEventPicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceEventPictureResponse(callApi(params, req, runtime));
}

QueryDeviceEventPictureResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEventPicture(shared_ptr<QueryDeviceEventPictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventPictureWithOptions(request, runtime);
}

QueryDeviceEventRecordResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEventRecordWithOptions(shared_ptr<QueryDeviceEventRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
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
    {"action", boost::any(string("QueryDeviceEventRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceEventRecordResponse(callApi(params, req, runtime));
}

QueryDeviceEventRecordResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceEventRecord(shared_ptr<QueryDeviceEventRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceEventRecordWithOptions(request, runtime);
}

QueryDevicePictureByListResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureByListWithOptions(shared_ptr<QueryDevicePictureByListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->pictureIdList)) {
    query->insert(pair<string, vector<string>>("PictureIdList", *request->pictureIdList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureType)) {
    query->insert(pair<string, long>("PictureType", *request->pictureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thumbWidth)) {
    query->insert(pair<string, long>("ThumbWidth", *request->thumbWidth));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePictureByList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePictureByListResponse(callApi(params, req, runtime));
}

QueryDevicePictureByListResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureByList(shared_ptr<QueryDevicePictureByListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePictureByListWithOptions(request, runtime);
}

QueryDevicePictureFileResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureFileWithOptions(shared_ptr<QueryDevicePictureFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->captureId)) {
    query->insert(pair<string, string>("CaptureId", *request->captureId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expireTime)) {
    query->insert(pair<string, long>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureType)) {
    query->insert(pair<string, long>("PictureType", *request->pictureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->thumbWidth)) {
    query->insert(pair<string, long>("ThumbWidth", *request->thumbWidth));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePictureFile"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePictureFileResponse(callApi(params, req, runtime));
}

QueryDevicePictureFileResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureFile(shared_ptr<QueryDevicePictureFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePictureFileWithOptions(request, runtime);
}

QueryDevicePictureLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureLifeCycleWithOptions(shared_ptr<QueryDevicePictureLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDevicePictureLifeCycle"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDevicePictureLifeCycleResponse(callApi(params, req, runtime));
}

QueryDevicePictureLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::queryDevicePictureLifeCycle(shared_ptr<QueryDevicePictureLifeCycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDevicePictureLifeCycleWithOptions(request, runtime);
}

QueryDeviceRecordLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceRecordLifeCycleWithOptions(shared_ptr<QueryDeviceRecordLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceList)) {
    query->insert(pair<string, vector<string>>("DeviceList", *request->deviceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceRecordLifeCycle"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceRecordLifeCycleResponse(callApi(params, req, runtime));
}

QueryDeviceRecordLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceRecordLifeCycle(shared_ptr<QueryDeviceRecordLifeCycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceRecordLifeCycleWithOptions(request, runtime);
}

QueryDeviceVodUrlResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceVodUrlWithOptions(shared_ptr<QueryDeviceVodUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableStun)) {
    query->insert(pair<string, bool>("EnableStun", *request->enableStun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->encryptType)) {
    query->insert(pair<string, long>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->playUnLimited)) {
    query->insert(pair<string, bool>("PlayUnLimited", *request->playUnLimited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheme)) {
    query->insert(pair<string, string>("Scheme", *request->scheme));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seekTime)) {
    query->insert(pair<string, long>("SeekTime", *request->seekTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->shouldEncrypt)) {
    query->insert(pair<string, bool>("ShouldEncrypt", *request->shouldEncrypt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlValidDuration)) {
    query->insert(pair<string, long>("UrlValidDuration", *request->urlValidDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceVodUrl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceVodUrlResponse(callApi(params, req, runtime));
}

QueryDeviceVodUrlResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceVodUrl(shared_ptr<QueryDeviceVodUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceVodUrlWithOptions(request, runtime);
}

QueryDeviceVodUrlByTimeResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceVodUrlByTimeWithOptions(shared_ptr<QueryDeviceVodUrlByTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableStun)) {
    query->insert(pair<string, bool>("EnableStun", *request->enableStun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->encryptType)) {
    query->insert(pair<string, long>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->playUnLimited)) {
    query->insert(pair<string, bool>("PlayUnLimited", *request->playUnLimited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheme)) {
    query->insert(pair<string, string>("Scheme", *request->scheme));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seekTime)) {
    query->insert(pair<string, long>("SeekTime", *request->seekTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->shouldEncrypt)) {
    query->insert(pair<string, bool>("ShouldEncrypt", *request->shouldEncrypt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlValidDuration)) {
    query->insert(pair<string, long>("UrlValidDuration", *request->urlValidDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDeviceVodUrlByTime"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDeviceVodUrlByTimeResponse(callApi(params, req, runtime));
}

QueryDeviceVodUrlByTimeResponse Alibabacloud_Linkvisual20180120::Client::queryDeviceVodUrlByTime(shared_ptr<QueryDeviceVodUrlByTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDeviceVodUrlByTimeWithOptions(request, runtime);
}

QueryEventRecordPlanDetailResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDetailWithOptions(shared_ptr<QueryEventRecordPlanDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEventRecordPlanDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventRecordPlanDetailResponse(callApi(params, req, runtime));
}

QueryEventRecordPlanDetailResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDetail(shared_ptr<QueryEventRecordPlanDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventRecordPlanDetailWithOptions(request, runtime);
}

QueryEventRecordPlanDeviceByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDeviceByDeviceWithOptions(shared_ptr<QueryEventRecordPlanDeviceByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEventRecordPlanDeviceByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventRecordPlanDeviceByDeviceResponse(callApi(params, req, runtime));
}

QueryEventRecordPlanDeviceByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDeviceByDevice(shared_ptr<QueryEventRecordPlanDeviceByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventRecordPlanDeviceByDeviceWithOptions(request, runtime);
}

QueryEventRecordPlanDeviceByPlanResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDeviceByPlanWithOptions(shared_ptr<QueryEventRecordPlanDeviceByPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEventRecordPlanDeviceByPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventRecordPlanDeviceByPlanResponse(callApi(params, req, runtime));
}

QueryEventRecordPlanDeviceByPlanResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlanDeviceByPlan(shared_ptr<QueryEventRecordPlanDeviceByPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventRecordPlanDeviceByPlanWithOptions(request, runtime);
}

QueryEventRecordPlansResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlansWithOptions(shared_ptr<QueryEventRecordPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEventRecordPlans"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventRecordPlansResponse(callApi(params, req, runtime));
}

QueryEventRecordPlansResponse Alibabacloud_Linkvisual20180120::Client::queryEventRecordPlans(shared_ptr<QueryEventRecordPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventRecordPlansWithOptions(request, runtime);
}

QueryFaceAllDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllDeviceGroupWithOptions(shared_ptr<QueryFaceAllDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
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
    {"action", boost::any(string("QueryFaceAllDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceAllDeviceGroupResponse(callApi(params, req, runtime));
}

QueryFaceAllDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllDeviceGroup(shared_ptr<QueryFaceAllDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceAllDeviceGroupWithOptions(request, runtime);
}

QueryFaceAllUserGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserGroupWithOptions(shared_ptr<QueryFaceAllUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
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
    {"action", boost::any(string("QueryFaceAllUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceAllUserGroupResponse(callApi(params, req, runtime));
}

QueryFaceAllUserGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserGroup(shared_ptr<QueryFaceAllUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceAllUserGroupWithOptions(request, runtime);
}

QueryFaceAllUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
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
    {"action", boost::any(string("QueryFaceAllUserGroupAndDeviceGroupRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceAllUserGroupAndDeviceGroupRelationResponse(callApi(params, req, runtime));
}

QueryFaceAllUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserGroupAndDeviceGroupRelation(shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

QueryFaceAllUserIdsByGroupIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserIdsByGroupIdWithOptions(shared_ptr<QueryFaceAllUserIdsByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceAllUserIdsByGroupId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceAllUserIdsByGroupIdResponse(callApi(params, req, runtime));
}

QueryFaceAllUserIdsByGroupIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceAllUserIdsByGroupId(shared_ptr<QueryFaceAllUserIdsByGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceAllUserIdsByGroupIdWithOptions(request, runtime);
}

QueryFaceCustomUserIdByUserIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceCustomUserIdByUserIdWithOptions(shared_ptr<QueryFaceCustomUserIdByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceCustomUserIdByUserId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceCustomUserIdByUserIdResponse(callApi(params, req, runtime));
}

QueryFaceCustomUserIdByUserIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceCustomUserIdByUserId(shared_ptr<QueryFaceCustomUserIdByUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceCustomUserIdByUserIdWithOptions(request, runtime);
}

QueryFaceDeviceGroupsByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryFaceDeviceGroupsByDeviceWithOptions(shared_ptr<QueryFaceDeviceGroupsByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
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
    {"action", boost::any(string("QueryFaceDeviceGroupsByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceDeviceGroupsByDeviceResponse(callApi(params, req, runtime));
}

QueryFaceDeviceGroupsByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryFaceDeviceGroupsByDevice(shared_ptr<QueryFaceDeviceGroupsByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceDeviceGroupsByDeviceWithOptions(request, runtime);
}

QueryFaceUserResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserWithOptions(shared_ptr<QueryFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserResponse(callApi(params, req, runtime));
}

QueryFaceUserResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUser(shared_ptr<QueryFaceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserWithOptions(request, runtime);
}

QueryFaceUserBatchResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserBatchWithOptions(shared_ptr<QueryFaceUserBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->userIdList)) {
    query->insert(pair<string, vector<string>>("UserIdList", *request->userIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUserBatch"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserBatchResponse(callApi(params, req, runtime));
}

QueryFaceUserBatchResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserBatch(shared_ptr<QueryFaceUserBatchRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserBatchWithOptions(request, runtime);
}

QueryFaceUserByNameResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserByNameWithOptions(shared_ptr<QueryFaceUserByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUserByName"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserByNameResponse(callApi(params, req, runtime));
}

QueryFaceUserByNameResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserByName(shared_ptr<QueryFaceUserByNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserByNameWithOptions(request, runtime);
}

QueryFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserGroupWithOptions(shared_ptr<QueryFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserGroupResponse(callApi(params, req, runtime));
}

QueryFaceUserGroupResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserGroup(shared_ptr<QueryFaceUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserGroupWithOptions(request, runtime);
}

QueryFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->controlId)) {
    query->insert(pair<string, string>("ControlId", *request->controlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUserGroupAndDeviceGroupRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserGroupAndDeviceGroupRelationResponse(callApi(params, req, runtime));
}

QueryFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserGroupAndDeviceGroupRelation(shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

QueryFaceUserIdByCustomUserIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserIdByCustomUserIdWithOptions(shared_ptr<QueryFaceUserIdByCustomUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customUserId)) {
    query->insert(pair<string, string>("CustomUserId", *request->customUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryFaceUserIdByCustomUserId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryFaceUserIdByCustomUserIdResponse(callApi(params, req, runtime));
}

QueryFaceUserIdByCustomUserIdResponse Alibabacloud_Linkvisual20180120::Client::queryFaceUserIdByCustomUserId(shared_ptr<QueryFaceUserIdByCustomUserIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryFaceUserIdByCustomUserIdWithOptions(request, runtime);
}

QueryLiveStreamingResponse Alibabacloud_Linkvisual20180120::Client::queryLiveStreamingWithOptions(shared_ptr<QueryLiveStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cacheDuration)) {
    query->insert(pair<string, long>("CacheDuration", *request->cacheDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableStun)) {
    query->insert(pair<string, bool>("EnableStun", *request->enableStun));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->encryptType)) {
    query->insert(pair<string, long>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->forceIFrame)) {
    query->insert(pair<string, bool>("ForceIFrame", *request->forceIFrame));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->playUnLimited)) {
    query->insert(pair<string, bool>("PlayUnLimited", *request->playUnLimited));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheme)) {
    query->insert(pair<string, string>("Scheme", *request->scheme));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->shouldEncrypt)) {
    query->insert(pair<string, bool>("ShouldEncrypt", *request->shouldEncrypt));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlValidDuration)) {
    query->insert(pair<string, long>("UrlValidDuration", *request->urlValidDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLiveStreaming"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLiveStreamingResponse(callApi(params, req, runtime));
}

QueryLiveStreamingResponse Alibabacloud_Linkvisual20180120::Client::queryLiveStreaming(shared_ptr<QueryLiveStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLiveStreamingWithOptions(request, runtime);
}

QueryLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::queryLocalFileUploadJobWithOptions(shared_ptr<QueryLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryLocalFileUploadJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLocalFileUploadJobResponse(callApi(params, req, runtime));
}

QueryLocalFileUploadJobResponse Alibabacloud_Linkvisual20180120::Client::queryLocalFileUploadJob(shared_ptr<QueryLocalFileUploadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLocalFileUploadJobWithOptions(request, runtime);
}

QueryMonthRecordResponse Alibabacloud_Linkvisual20180120::Client::queryMonthRecordWithOptions(shared_ptr<QueryMonthRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->month)) {
    query->insert(pair<string, string>("Month", *request->month));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMonthRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMonthRecordResponse(callApi(params, req, runtime));
}

QueryMonthRecordResponse Alibabacloud_Linkvisual20180120::Client::queryMonthRecord(shared_ptr<QueryMonthRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMonthRecordWithOptions(request, runtime);
}

QueryPictureFilesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureFilesWithOptions(shared_ptr<QueryPictureFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureSource)) {
    query->insert(pair<string, long>("PictureSource", *request->pictureSource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pictureType)) {
    query->insert(pair<string, long>("PictureType", *request->pictureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPictureFiles"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureFilesResponse(callApi(params, req, runtime));
}

QueryPictureFilesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureFiles(shared_ptr<QueryPictureFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureFilesWithOptions(request, runtime);
}

QueryPictureSearchAiboxesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchAiboxesWithOptions(shared_ptr<QueryPictureSearchAiboxesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
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
    {"action", boost::any(string("QueryPictureSearchAiboxes"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureSearchAiboxesResponse(callApi(params, req, runtime));
}

QueryPictureSearchAiboxesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchAiboxes(shared_ptr<QueryPictureSearchAiboxesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureSearchAiboxesWithOptions(request, runtime);
}

QueryPictureSearchAppsResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchAppsWithOptions(shared_ptr<QueryPictureSearchAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPictureSearchApps"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureSearchAppsResponse(callApi(params, req, runtime));
}

QueryPictureSearchAppsResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchApps(shared_ptr<QueryPictureSearchAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureSearchAppsWithOptions(request, runtime);
}

QueryPictureSearchDevicesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchDevicesWithOptions(shared_ptr<QueryPictureSearchDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPictureSearchDevices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureSearchDevicesResponse(callApi(params, req, runtime));
}

QueryPictureSearchDevicesResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchDevices(shared_ptr<QueryPictureSearchDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureSearchDevicesWithOptions(request, runtime);
}

QueryPictureSearchJobResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchJobWithOptions(shared_ptr<QueryPictureSearchJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->jobStatus)) {
    query->insert(pair<string, long>("JobStatus", *request->jobStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPictureSearchJob"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureSearchJobResponse(callApi(params, req, runtime));
}

QueryPictureSearchJobResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchJob(shared_ptr<QueryPictureSearchJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureSearchJobWithOptions(request, runtime);
}

QueryPictureSearchJobResultResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchJobResultWithOptions(shared_ptr<QueryPictureSearchJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryPictureSearchJobResult"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryPictureSearchJobResultResponse(callApi(params, req, runtime));
}

QueryPictureSearchJobResultResponse Alibabacloud_Linkvisual20180120::Client::queryPictureSearchJobResult(shared_ptr<QueryPictureSearchJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryPictureSearchJobResultWithOptions(request, runtime);
}

QueryRecordResponse Alibabacloud_Linkvisual20180120::Client::queryRecordWithOptions(shared_ptr<QueryRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotId)) {
    query->insert(pair<string, string>("IotId", *request->iotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needSnapshot)) {
    query->insert(pair<string, bool>("NeedSnapshot", *request->needSnapshot));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordType)) {
    query->insert(pair<string, long>("RecordType", *request->recordType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordResponse(callApi(params, req, runtime));
}

QueryRecordResponse Alibabacloud_Linkvisual20180120::Client::queryRecord(shared_ptr<QueryRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordWithOptions(request, runtime);
}

QueryRecordByRecordIdResponse Alibabacloud_Linkvisual20180120::Client::queryRecordByRecordIdWithOptions(shared_ptr<QueryRecordByRecordIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->recordId)) {
    query->insert(pair<string, string>("RecordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordByRecordId"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordByRecordIdResponse(callApi(params, req, runtime));
}

QueryRecordByRecordIdResponse Alibabacloud_Linkvisual20180120::Client::queryRecordByRecordId(shared_ptr<QueryRecordByRecordIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordByRecordIdWithOptions(request, runtime);
}

QueryRecordDownloadJobByIdResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadJobByIdWithOptions(shared_ptr<QueryRecordDownloadJobByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryRecordDownloadJobById"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordDownloadJobByIdResponse(callApi(params, req, runtime));
}

QueryRecordDownloadJobByIdResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadJobById(shared_ptr<QueryRecordDownloadJobByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordDownloadJobByIdWithOptions(request, runtime);
}

QueryRecordDownloadJobListResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadJobListWithOptions(shared_ptr<QueryRecordDownloadJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryRecordDownloadJobList"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordDownloadJobListResponse(callApi(params, req, runtime));
}

QueryRecordDownloadJobListResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadJobList(shared_ptr<QueryRecordDownloadJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordDownloadJobListWithOptions(request, runtime);
}

QueryRecordDownloadUrlResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadUrlWithOptions(shared_ptr<QueryRecordDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
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
    {"action", boost::any(string("QueryRecordDownloadUrl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordDownloadUrlResponse(callApi(params, req, runtime));
}

QueryRecordDownloadUrlResponse Alibabacloud_Linkvisual20180120::Client::queryRecordDownloadUrl(shared_ptr<QueryRecordDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordDownloadUrlWithOptions(request, runtime);
}

QueryRecordPlanDetailResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDetailWithOptions(shared_ptr<QueryRecordPlanDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordPlanDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordPlanDetailResponse(callApi(params, req, runtime));
}

QueryRecordPlanDetailResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDetail(shared_ptr<QueryRecordPlanDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordPlanDetailWithOptions(request, runtime);
}

QueryRecordPlanDeviceByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDeviceByDeviceWithOptions(shared_ptr<QueryRecordPlanDeviceByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordPlanDeviceByDevice"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordPlanDeviceByDeviceResponse(callApi(params, req, runtime));
}

QueryRecordPlanDeviceByDeviceResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDeviceByDevice(shared_ptr<QueryRecordPlanDeviceByDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordPlanDeviceByDeviceWithOptions(request, runtime);
}

QueryRecordPlanDeviceByPlanResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDeviceByPlanWithOptions(shared_ptr<QueryRecordPlanDeviceByPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordPlanDeviceByPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordPlanDeviceByPlanResponse(callApi(params, req, runtime));
}

QueryRecordPlanDeviceByPlanResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlanDeviceByPlan(shared_ptr<QueryRecordPlanDeviceByPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordPlanDeviceByPlanWithOptions(request, runtime);
}

QueryRecordPlansResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlansWithOptions(shared_ptr<QueryRecordPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordPlans"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordPlansResponse(callApi(params, req, runtime));
}

QueryRecordPlansResponse Alibabacloud_Linkvisual20180120::Client::queryRecordPlans(shared_ptr<QueryRecordPlansRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordPlansWithOptions(request, runtime);
}

QueryRecordUrlResponse Alibabacloud_Linkvisual20180120::Client::queryRecordUrlWithOptions(shared_ptr<QueryRecordUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->seekTime)) {
    query->insert(pair<string, long>("SeekTime", *request->seekTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlValidDuration)) {
    query->insert(pair<string, long>("UrlValidDuration", *request->urlValidDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordUrl"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordUrlResponse(callApi(params, req, runtime));
}

QueryRecordUrlResponse Alibabacloud_Linkvisual20180120::Client::queryRecordUrl(shared_ptr<QueryRecordUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordUrlWithOptions(request, runtime);
}

QueryRecordUrlByTimeResponse Alibabacloud_Linkvisual20180120::Client::queryRecordUrlByTimeWithOptions(shared_ptr<QueryRecordUrlByTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->urlValidDuration)) {
    query->insert(pair<string, long>("UrlValidDuration", *request->urlValidDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryRecordUrlByTime"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRecordUrlByTimeResponse(callApi(params, req, runtime));
}

QueryRecordUrlByTimeResponse Alibabacloud_Linkvisual20180120::Client::queryRecordUrlByTime(shared_ptr<QueryRecordUrlByTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRecordUrlByTimeWithOptions(request, runtime);
}

QueryRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::queryRtmpKeyWithOptions(shared_ptr<QueryRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryRtmpKey"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryRtmpKeyResponse(callApi(params, req, runtime));
}

QueryRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::queryRtmpKey(shared_ptr<QueryRtmpKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryRtmpKeyWithOptions(request, runtime);
}

QueryTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::queryTimeTemplateWithOptions(shared_ptr<QueryTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTimeTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTimeTemplateResponse(callApi(params, req, runtime));
}

QueryTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::queryTimeTemplate(shared_ptr<QueryTimeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTimeTemplateWithOptions(request, runtime);
}

QueryTimeTemplateDetailResponse Alibabacloud_Linkvisual20180120::Client::queryTimeTemplateDetailWithOptions(shared_ptr<QueryTimeTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTimeTemplateDetail"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTimeTemplateDetailResponse(callApi(params, req, runtime));
}

QueryTimeTemplateDetailResponse Alibabacloud_Linkvisual20180120::Client::queryTimeTemplateDetail(shared_ptr<QueryTimeTemplateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTimeTemplateDetailWithOptions(request, runtime);
}

QueryVisionDeviceInfoResponse Alibabacloud_Linkvisual20180120::Client::queryVisionDeviceInfoWithOptions(shared_ptr<QueryVisionDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("QueryVisionDeviceInfo"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryVisionDeviceInfoResponse(callApi(params, req, runtime));
}

QueryVisionDeviceInfoResponse Alibabacloud_Linkvisual20180120::Client::queryVisionDeviceInfo(shared_ptr<QueryVisionDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVisionDeviceInfoWithOptions(request, runtime);
}

QueryVoiceIntercomResponse Alibabacloud_Linkvisual20180120::Client::queryVoiceIntercomWithOptions(shared_ptr<QueryVoiceIntercomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->scheme)) {
    query->insert(pair<string, string>("Scheme", *request->scheme));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryVoiceIntercom"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryVoiceIntercomResponse(callApi(params, req, runtime));
}

QueryVoiceIntercomResponse Alibabacloud_Linkvisual20180120::Client::queryVoiceIntercom(shared_ptr<QueryVoiceIntercomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryVoiceIntercomWithOptions(request, runtime);
}

RemoveFaceDeviceFromDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::removeFaceDeviceFromDeviceGroupWithOptions(shared_ptr<RemoveFaceDeviceFromDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceGroupId)) {
    query->insert(pair<string, string>("DeviceGroupId", *request->deviceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceName)) {
    query->insert(pair<string, string>("DeviceName", *request->deviceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFaceDeviceFromDeviceGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFaceDeviceFromDeviceGroupResponse(callApi(params, req, runtime));
}

RemoveFaceDeviceFromDeviceGroupResponse Alibabacloud_Linkvisual20180120::Client::removeFaceDeviceFromDeviceGroup(shared_ptr<RemoveFaceDeviceFromDeviceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeFaceDeviceFromDeviceGroupWithOptions(request, runtime);
}

RemoveFaceUserFromUserGroupResponse Alibabacloud_Linkvisual20180120::Client::removeFaceUserFromUserGroupWithOptions(shared_ptr<RemoveFaceUserFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGroupId)) {
    query->insert(pair<string, string>("UserGroupId", *request->userGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveFaceUserFromUserGroup"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveFaceUserFromUserGroupResponse(callApi(params, req, runtime));
}

RemoveFaceUserFromUserGroupResponse Alibabacloud_Linkvisual20180120::Client::removeFaceUserFromUserGroup(shared_ptr<RemoveFaceUserFromUserGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeFaceUserFromUserGroupWithOptions(request, runtime);
}

SetDevicePictureLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::setDevicePictureLifeCycleWithOptions(shared_ptr<SetDevicePictureLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->day)) {
    query->insert(pair<string, long>("Day", *request->day));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDevicePictureLifeCycle"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDevicePictureLifeCycleResponse(callApi(params, req, runtime));
}

SetDevicePictureLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::setDevicePictureLifeCycle(shared_ptr<SetDevicePictureLifeCycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDevicePictureLifeCycleWithOptions(request, runtime);
}

SetDeviceRecordLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::setDeviceRecordLifeCycleWithOptions(shared_ptr<SetDeviceRecordLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->day)) {
    query->insert(pair<string, long>("Day", *request->day));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDeviceRecordLifeCycle"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDeviceRecordLifeCycleResponse(callApi(params, req, runtime));
}

SetDeviceRecordLifeCycleResponse Alibabacloud_Linkvisual20180120::Client::setDeviceRecordLifeCycle(shared_ptr<SetDeviceRecordLifeCycleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDeviceRecordLifeCycleWithOptions(request, runtime);
}

StopLiveStreamingResponse Alibabacloud_Linkvisual20180120::Client::stopLiveStreamingWithOptions(shared_ptr<StopLiveStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLiveStreaming"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLiveStreamingResponse(callApi(params, req, runtime));
}

StopLiveStreamingResponse Alibabacloud_Linkvisual20180120::Client::stopLiveStreaming(shared_ptr<StopLiveStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLiveStreamingWithOptions(request, runtime);
}

StopTriggeredRecordResponse Alibabacloud_Linkvisual20180120::Client::stopTriggeredRecordWithOptions(shared_ptr<StopTriggeredRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->recordId)) {
    query->insert(pair<string, string>("RecordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopTriggeredRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopTriggeredRecordResponse(callApi(params, req, runtime));
}

StopTriggeredRecordResponse Alibabacloud_Linkvisual20180120::Client::stopTriggeredRecord(shared_ptr<StopTriggeredRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopTriggeredRecordWithOptions(request, runtime);
}

TransferDeviceInstanceResponse Alibabacloud_Linkvisual20180120::Client::transferDeviceInstanceWithOptions(shared_ptr<TransferDeviceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceNameList)) {
    query->insert(pair<string, vector<string>>("DeviceNameList", *request->deviceNameList));
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
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferDeviceInstance"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferDeviceInstanceResponse(callApi(params, req, runtime));
}

TransferDeviceInstanceResponse Alibabacloud_Linkvisual20180120::Client::transferDeviceInstance(shared_ptr<TransferDeviceInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferDeviceInstanceWithOptions(request, runtime);
}

TriggerCapturePictureResponse Alibabacloud_Linkvisual20180120::Client::triggerCapturePictureWithOptions(shared_ptr<TriggerCapturePictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"action", boost::any(string("TriggerCapturePicture"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerCapturePictureResponse(callApi(params, req, runtime));
}

TriggerCapturePictureResponse Alibabacloud_Linkvisual20180120::Client::triggerCapturePicture(shared_ptr<TriggerCapturePictureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerCapturePictureWithOptions(request, runtime);
}

TriggerRecordResponse Alibabacloud_Linkvisual20180120::Client::triggerRecordWithOptions(shared_ptr<TriggerRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<long>(request->preRecordDuration)) {
    query->insert(pair<string, long>("PreRecordDuration", *request->preRecordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productKey)) {
    query->insert(pair<string, string>("ProductKey", *request->productKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordDuration)) {
    query->insert(pair<string, long>("RecordDuration", *request->recordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TriggerRecord"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TriggerRecordResponse(callApi(params, req, runtime));
}

TriggerRecordResponse Alibabacloud_Linkvisual20180120::Client::triggerRecord(shared_ptr<TriggerRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return triggerRecordWithOptions(request, runtime);
}

UnbindPictureSearchAppWithDevicesResponse Alibabacloud_Linkvisual20180120::Client::unbindPictureSearchAppWithDevicesWithOptions(shared_ptr<UnbindPictureSearchAppWithDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->deviceIotIds)) {
    query->insert(pair<string, vector<string>>("DeviceIotIds", *request->deviceIotIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UnbindPictureSearchAppWithDevices"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnbindPictureSearchAppWithDevicesResponse(callApi(params, req, runtime));
}

UnbindPictureSearchAppWithDevicesResponse Alibabacloud_Linkvisual20180120::Client::unbindPictureSearchAppWithDevices(shared_ptr<UnbindPictureSearchAppWithDevicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unbindPictureSearchAppWithDevicesWithOptions(request, runtime);
}

UpdateEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::updateEventRecordPlanWithOptions(shared_ptr<UpdateEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypes)) {
    query->insert(pair<string, string>("EventTypes", *request->eventTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->preRecordDuration)) {
    query->insert(pair<string, long>("PreRecordDuration", *request->preRecordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordDuration)) {
    query->insert(pair<string, long>("RecordDuration", *request->recordDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventRecordPlanResponse(callApi(params, req, runtime));
}

UpdateEventRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::updateEventRecordPlan(shared_ptr<UpdateEventRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventRecordPlanWithOptions(request, runtime);
}

UpdateFaceUserResponse Alibabacloud_Linkvisual20180120::Client::updateFaceUserWithOptions(shared_ptr<UpdateFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customUserId)) {
    query->insert(pair<string, string>("CustomUserId", *request->customUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->facePicUrl)) {
    query->insert(pair<string, string>("FacePicUrl", *request->facePicUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFaceUser"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFaceUserResponse(callApi(params, req, runtime));
}

UpdateFaceUserResponse Alibabacloud_Linkvisual20180120::Client::updateFaceUser(shared_ptr<UpdateFaceUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFaceUserWithOptions(request, runtime);
}

UpdateFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::updateFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->controlId)) {
    query->insert(pair<string, string>("ControlId", *request->controlId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isolationId)) {
    query->insert(pair<string, string>("IsolationId", *request->isolationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relation)) {
    query->insert(pair<string, string>("Relation", *request->relation));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFaceUserGroupAndDeviceGroupRelation"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFaceUserGroupAndDeviceGroupRelationResponse(callApi(params, req, runtime));
}

UpdateFaceUserGroupAndDeviceGroupRelationResponse Alibabacloud_Linkvisual20180120::Client::updateFaceUserGroupAndDeviceGroupRelation(shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFaceUserGroupAndDeviceGroupRelationWithOptions(request, runtime);
}

UpdateInstanceInternetProtocolResponse Alibabacloud_Linkvisual20180120::Client::updateInstanceInternetProtocolWithOptions(shared_ptr<UpdateInstanceInternetProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->iotInstanceId)) {
    query->insert(pair<string, string>("IotInstanceId", *request->iotInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipVersion)) {
    query->insert(pair<string, string>("IpVersion", *request->ipVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInstanceInternetProtocol"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInstanceInternetProtocolResponse(callApi(params, req, runtime));
}

UpdateInstanceInternetProtocolResponse Alibabacloud_Linkvisual20180120::Client::updateInstanceInternetProtocol(shared_ptr<UpdateInstanceInternetProtocolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInstanceInternetProtocolWithOptions(request, runtime);
}

UpdatePictureSearchAppResponse Alibabacloud_Linkvisual20180120::Client::updatePictureSearchAppWithOptions(shared_ptr<UpdatePictureSearchAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appInstanceId)) {
    query->insert(pair<string, string>("AppInstanceId", *request->appInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePictureSearchApp"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePictureSearchAppResponse(callApi(params, req, runtime));
}

UpdatePictureSearchAppResponse Alibabacloud_Linkvisual20180120::Client::updatePictureSearchApp(shared_ptr<UpdatePictureSearchAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePictureSearchAppWithOptions(request, runtime);
}

UpdateRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::updateRecordPlanWithOptions(shared_ptr<UpdateRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planId)) {
    query->insert(pair<string, string>("PlanId", *request->planId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRecordPlan"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRecordPlanResponse(callApi(params, req, runtime));
}

UpdateRecordPlanResponse Alibabacloud_Linkvisual20180120::Client::updateRecordPlan(shared_ptr<UpdateRecordPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordPlanWithOptions(request, runtime);
}

UpdateRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::updateRtmpKeyWithOptions(shared_ptr<UpdateRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<string>(request->pullAuthKey)) {
    query->insert(pair<string, string>("PullAuthKey", *request->pullAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pullKeyExpireTime)) {
    query->insert(pair<string, long>("PullKeyExpireTime", *request->pullKeyExpireTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushAuthKey)) {
    query->insert(pair<string, string>("PushAuthKey", *request->pushAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pushKeyExpireTime)) {
    query->insert(pair<string, long>("PushKeyExpireTime", *request->pushKeyExpireTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRtmpKey"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRtmpKeyResponse(callApi(params, req, runtime));
}

UpdateRtmpKeyResponse Alibabacloud_Linkvisual20180120::Client::updateRtmpKey(shared_ptr<UpdateRtmpKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRtmpKeyWithOptions(request, runtime);
}

UpdateTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::updateTimeTemplateWithOptions(shared_ptr<UpdateTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->allDay)) {
    query->insert(pair<string, long>("AllDay", *request->allDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateTimeTemplateRequestTimeSections>>(request->timeSections)) {
    query->insert(pair<string, vector<UpdateTimeTemplateRequestTimeSections>>("TimeSections", *request->timeSections));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTimeTemplate"))},
    {"version", boost::any(string("2018-01-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTimeTemplateResponse(callApi(params, req, runtime));
}

UpdateTimeTemplateResponse Alibabacloud_Linkvisual20180120::Client::updateTimeTemplate(shared_ptr<UpdateTimeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTimeTemplateWithOptions(request, runtime);
}

